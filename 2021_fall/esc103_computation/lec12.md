# Lecture 12, Oct 25, 2021

## Reduced Normal Form/Reduced Row Echelon Form

* The leading variable (one per equation) only appearing in one row makes the system easy to solve because the leading variables can be expressed in terms of free variables
* Define the *augmented matrix* $[A | \vec{b}]$ as a shorthand for the system $A\vec{x} = \vec{b}$
* The form of the augmented matrix that makes it easy to solve is called the *reduced normal form* (RNF)
	* Matrices in RNF has the following properties:
		1. The first nonzero entry in each row is $1$
		2. The other entries in the columns containing the leading $1$s (above and below) are 0
		3. The leading $1$s move to the right as we move down the rows
		4. Any and all zero rows are at the bottom
* If the system is in RNF, we can proceed directly to solve it, but if it is not, we can use Gaussian elimination to bring it to RNF $[R | \vec{d}]$, an *equivalent* linear system that has the same solution as the original system $[A | \vec{b}]$

## Gaussian Elimination

* By swapping rows, multiplying rows by nonzero scalars, and adding multiples of one row to another, we change the system of equations but don't change the solution
* If we do this algorithmically we can bring the matrix to RNF and make it easy to solve
* For the purposes of just solving the system, we usually don't have to go all the way; stop when the bottom left corner is all zeroes and do the rest using back substitution
* The allowed operations swapping rows, multiplying by nonzero scalars, and adding multiples of one row to another are called *elementary row operations*

