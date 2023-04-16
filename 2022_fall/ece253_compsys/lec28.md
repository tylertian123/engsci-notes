# Lecture 28, Nov 21, 2022

## Subroutine and Stack Example

```c
int FINDSUM(int N) {
	int sum = 0;
	while (N != 0) {
		sum = sum + N;
		N = N - 1;
	}
	return sum;
}

int main() {
	FINDSUM(5);
}
```

```nasm
.data
N: .word 5
.text
.global _start

_start:
	la s4, N
	lw a0, 0(s4)
	jal FINDSUM
	ebreak

FINDSUM:
	addi t0, zero, 0
WHILE:
	beqz a0, ENDLOOP
	add t0, t0, a0
	addi a0, a0, -1
	j WHILE
ENDLOOP:
	add a0, zero, t0
	jr ra
```

* Recursive version:

```c
int FINDSUM(int N) {
	if (N == 0)
		return 0;
	else
		return N + FINDSUM(N - 1);
}
```

```nasm
FINDSUM:
	bnez a0, PUSH
	jr ra
PUSH:
	addi sp, sp, -8
	sw a0, 4(sp)
	sw ra, 0(sp)

	addi a0, a0, -1
	jal FINDSUM

	lw t0, 4(sp)
	add a0, a0, t0

	lw ra, 0(sp)
	addi sp, sp, 8
	jr ra
```

