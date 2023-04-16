# Lecture 22, Dec 8, 2021

## Computing $LU$ Decompositions

* There is a simpler procedure for doing $LU$ decompositions:
	1. Reduce matrix $A$ to upper-triangular $U$ by elimination; keep track of the multipliers used to introduce the leading $1$s and zeroes below
	2. Along the main diagonal of $L$, put the reciprocal of the multiplier that introduced the leading $1$ in $U$ in that position
	3. Below the main diagonal of $L$, put the negative of the multiplier used to introduce the $0$ in $U$ in that position

## Review: The 4 Central Problems of Linear Algebra

1. Solving linear systems $A\vec{x} = \vec{b}$ where $m = n$
	* Arises from mathematical models of static engineering systems
2. Least squares $A\vec{x} = \vec{b}$ where $m \neq n$
	* Arises when fitting mathematical models to real data with noise
3. Eigenvalues $A\vec{x} = \lambda\vec{x}$ for $m = n$
	* Arises when analyzing and designing dynamic systems (systems of differential equations, control systems)
4. The singular value decomposition $A\vec{v} = \sigma\vec{u}$ for $m \neq n$ (analogue of eigenvalues for nonsquare matrices)
	* Arises with data and image compression problems

