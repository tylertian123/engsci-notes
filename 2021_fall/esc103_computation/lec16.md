# Lecture 16, Nov 15, 2021

## Least Squares Projections

* When $A\vec{x} = \vec{b}$ has no solution, the most common cause is because there are too many equations and not enough variables to satisfy all of them at once (tall and thin matrix)
* In such cases we're often still interested in trying to find the best solution possible (try to find $A\vec{x} \approx \vec{b}$)
* An important application is in the context of curve fitting -- trying to find the right parameters in an equation so the equation matches the model as closely as possible
	* e.g. we collected 3 data points, and now we want to fit $y = mx + b$ to it, but this has no exact solution since the 3 points may not lie on the same line

## The Transpose

* The transpose of a matrix $A^T$ is obtained by making all rows columns
* Properties of the transpose:
	1. $(A^T)^T = A$
	2. $(cA)^T = cA^T$
	3. $(AB)^T = B^TA^T$
	4. If $A$ is invertible, then $A^T$ is also invertible and $(A^T)^{-1} = (A^{-1})^T$
		* Proof: $A^T(A^{-1})^T = (A^{-1}A)^T = I^T = I$, and $(A^{-1})^TA^T = (AA^{-1})^T = I^T = I$

## Solving the General Least Squares Problem

* Looking at this problem in the column picture, we have $A\vec{x} = x_1\vec{a}_n + x_2\vec{a}_n + \cdots + x_n\vec{a}_n$
* Thinking in the column picture, we're trying to find the $x_i$ such that the linear combination of the columns add up to $\vec{b}$
* All the linear combinations of the columns of $A$ form a subspace, but the vector $\vec{b}$ could lie outside the space, which is why there is no solution
* To find the least squares solution, we need to project $\vec{b}$ into this subspace defined by the columns of $A$


