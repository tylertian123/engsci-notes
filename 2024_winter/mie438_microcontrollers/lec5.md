

## Branching

* A branch instruction is an instruction that modifies the program counter, changing the flow of code execution
* We will make a distinction between *branch* and *jump*:
	* *Branch* has a limited range of movement, usually relative to the current program counter
	* *Jump* can access the full range of memory and set the program counter anywhere
* A *direct branch* is the simplest variant that directly loads a value into the PC
	* e.g. `BRA 0xF5`
	* Typically a simplified or a low-cost version of a full jump since it addresses a smaller range of memory
	* Some platforms use it to jump to interrupt code
	* Essentially a `goto`
* A *relative branch* increments or decrements the PC by some value, relative to the current PC
	* e.g. `BRR 0x05`
	* The offset can be negative to jump back to earlier code


