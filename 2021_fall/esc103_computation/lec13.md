# Lecture 13, Oct 27, 2021

## Gaussian Elimination

* Three outcomes are possible with Gaussian elimination:
	1. Unique solution: When every variable in the RNF is a leading variable
	2. Infinitely many solutions: When there is at least 1 free variable
	3. No solutions: When you get a row of all 0s but the last entry is nonzero
* Cases 1 and 2 are *consistent* systems (at least 1 solution); 3 is an *inconsistent* system

## Rank -- The True Size of a Matrix

* Suppose $A\vec{x} = \vec{b}$ and $A$ is $m \times n$, define $\rank(A)$ to be the number of leading 1s in the RNF, or equivalently the number of linearly independent rows or columns (row rank equals column rank)
* The RNF is unique even though the Gaussian elimination steps can be done in any order
* The system only has a unique solution when $\rank(A) = m = n$; when $r < m$ or $r < n$ there are no solutions or infinite solutions

