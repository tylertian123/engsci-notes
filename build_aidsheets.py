import sys
import yaml
import argparse
import subprocess
from pathlib import Path

def main(subdir: Path):
    meta_file = Path("meta.yaml")
    with open(meta_file, "r") as f:
        metadata = yaml.safe_load(f)

    defaults = metadata.pop(".global_default")["aidsheet"]
    for aidsheet_dir in subdir.rglob("aidsheet"):
        if not aidsheet_dir.is_dir():
            continue
        course = aidsheet_dir.parent.name
        sem = aidsheet_dir.parent.parent.name
        cfg = metadata.get(sem, {}).get(course)
        if cfg is None:
            cfg = defaults
            print(f"Course {course} ({sem}) [{aidsheet_dir}]")
        else:
            cfg = cfg["aidsheet"]
            print(f"Course {course} ({sem}) [{aidsheet_dir}]")

        req_build = cfg.get("build", defaults["build"])
        out_files = cfg.get("files", defaults["files"]) # type: list[str]
        if req_build:
            build_cmds = cfg.get("build_cmd", defaults["build_cmd"])
            for cmd in build_cmds:
                print(f"- Executing command: {cmd}")
                try:
                    subprocess.run(cmd, shell=True, check=True, cwd=aidsheet_dir)
                except subprocess.CalledProcessError as e:
                    print(f"- Build error: {e}")
                    sys.exit(1)
        else:
            print(f"- No build required")

        for file in out_files:
            p = aidsheet_dir / file
            if not p.exists() and p.is_file():
                print(f"- Expected output file {p} not found!")
                sys.exit(1)
            print(f"- Found output file {p}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Build/check aidsheets")
    parser.add_argument("subdir", nargs="?", type=str, default=".", help="Subdirectory to check")
    args = parser.parse_args()
    main(Path(args.subdir))
