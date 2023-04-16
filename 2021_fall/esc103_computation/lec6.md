# Lecture 6, Sep 29, 2021

## Solving Linear Equations

* Solving systems of linear equations is a central problem of linear algebra
* Row picture: Visualize every row as a line or plane in space, and find the intersection of every row
* Column picture: Express the system as a single vector equation, and find the correct linear combination of vectors that satisfy the equation:
	* e.g. $\twopiece{x - 2y = 1}{3x + 2y = 11} \implies x\cvec{1}{3} + y\cvec{-2}{2} = \cvec{1}{11}$
* Matrix form: $A\vec{x} = \vec{b}$
	* The matrix vector product on the left hand side is defined to be the vector given by $A\vec{x} = \matthreeb{\vert}{\vert}{\vert}{\vec{a_1}}{\vec{a_2}}{\cdots}{\vert}{\vert}{\vert}\cvec{x_1}{x_2}{\vdots} = x_1\vec{a_1} + x_2\vec{a_2} + \cdots$
	* This leads to the dot product rule of calculating a matrix-vector product: Each entry in the resulting vector is the dot product of one row of $A$ and $\vec{x}$

## What is a Matrix?

* A rectangular array of numbers: $A = \mattwothree{4}{8}{3}{2}{1}{9}$, a $2 \times 3$ matrix
* Matrix size is $\text{rows} \times \text{columns}$
* More general notation: $A = \mattwothree{a_{11}}{a_{12}}{a_{13}}{a_{21}}{a_{22}}{a_{23}}$

## Matrix Operations

* Matrix addition: Just add all the corresponding entries
	* Requirement: Two matrices have the same size
	* Commutative, associative
* Scalar multiplication: Multiply every entry by the scalar
* Matrix multiplication:
	* The entry at row $i$, column $j$ is the dot product of row $i$ of $A$ with column $j$ of $B$
	* $A\matthreeb{\vert}{\vert}{\vert}{\vec{b_1}}{\vec{b_2}}{\cdots}{\vert}{\vert}{\vert} = \matthreeb{\vert}{\vert}{\vert}{A\vec{b_1}}{A\vec{b_2}}{\cdots}{\vert}{\vert}{\vert}$
	* Requirement: The first matrix has the same number of columns as rows of the second matrix: $m \times n$ can multiply $n \times k$ to produce a $m \times k$ matrix
	* **Not commutative**, but associative
	* The notation for multiplying matrices is just $AB$, without any symbol in between
* Properties:
	1. $A + B = B + A$ addition is commutative
	2. $c(A + B) = cA + cB$ scalar multiplication is distributive
	3. $(A + B) + C = A + (B + C)$ addition is associative
	4. $C(A + B) = CA + CB$ (note $C$ is a matrix) matrix multiplication is distributive
	5. $A(BC) = (AB)C$ matrix multiplication is associative
	6. All exponent laws apply to matrices (e.g. $A^pA^q = A^{p + q}$)

