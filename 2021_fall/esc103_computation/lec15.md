# Lecture 15, Nov 3, 2021

## Inverses by Gaussian Elimination

* To find the inverse using Gaussian elimination, we introduce elementary matrices for GE operations:
	* Swapping rows: $\mattwo{0}{1}{1}{0}\mattwo{a}{b}{c}{d} = \mattwo{c}{d}{a}{b}$
	* Multiplying a row by a scalar: $\mattwo{e}{0}{0}{1}\mattwo{a}{b}{c}{d} = \mattwo{ea}{eb}{c}{d}$
	* Add or subtract multiples of other rows: $\mattwo{1}{e}{0}{1}\mattwo{a}{b}{c}{d} = \mattwo{a + ec}{b + ed}{c}{d}$
* Notice that the elementary matrices we obtained for these operations can also be obtained by applying the same operation to the identity!
	* Swapping rows, multiplying rows, or adding or subtracting multiples of rows in the identity gets us the elementary matrix we need
	* Suppose the elementary matrix is $E$ and applies the operation we need; then because $EI = E$ and we know what $E$ does to a matrix, we can calculate $EI$ to get $E$
* Elementary matrices are one operation from the identity, so we can return back to the identity by applying its inverse (elementary matrices are invertible)
* Now apply GE to $[A|I]$, which corresponds to solving $AX = I$
	* As we do this we'll get $E_nE_{n - 1} \cdots E_2E_1A$
	* Since applying GE to an invertible matrix produces $I$, we have $E_nE_{n - 1} \cdots E_2E_1A = I$, therefore $E_nE_{n - 1} \cdots E_2E_1 = A^{-1}$
	* Since we're also applying the same operations to the right side, the right side becomes $E_nE_{n - 1} \cdots E_2E_1I = E_nE_{n - 1} \cdots E_2E_1$, which is what we want
	* Therefore we can apply GE to $[A|I]$, and whatever becomes of $I$ when $A$ is reduced to $I$ is $A^{-1}$
* Then $A = (E_nE_{n - 1} \cdots E_2E_1)^{-1}$ since $(A^{-1})^{-1} = A$; thus $A = E_1^{-1}E_2^{-1} \cdots E_{n - 1}^{-1}E_n^{-1}$
	* This leads to a property that any invertible matrix $A$ can be written as a product of elementary matrices

