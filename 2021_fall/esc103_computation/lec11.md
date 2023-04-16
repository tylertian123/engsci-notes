# Lecture 11, Oct 20, 2021

## Solving Systems of Equations

* Example: Solving $ax_1 + bx_2 + cx_3 = d$
	* Declare $x_1$ to be the leading variable and $x_2$, $x_3$ as the free variables
	* Solve for $x_1$ in terms of $x_2$ and $x_3$: $x_1 = \alpha x_2 + \beta x_3 + \gamma$
	* Use the additional equations $x_2 = x_2$ and $x_3 = x_3$ to write the solution in vector form
	* $\cvec{x_1}{x_2}{x_3} = \cvec{\gamma}{0}{0} + x_2\cvec{\alpha}{1}{0} + x_3\cvec{\beta}{0}{1}$
	* Since $x_2$ and $x_3$ are free variables that can be freely assigned, they are arbitrary scalars, which means any solution can be found with $\cvec{\gamma}{0}{0} + c\cvec{\alpha}{1}{0} + d\cvec{\beta}{0}{1}$ for some arbitrary scalars $c$ and $d$
	* This is basically converting a scalar equation of the plane into a vector equation of the plane
	* In general, express the leading variables in terms of the free variables (number of leading variables equals number of equations), and then you can write the vector solution form
* Solving a system of equations corresponds to solving $A\vec{x} = \vec{b}$
* In the row picture, the solution represents the intersection of $m$ hyperplanes of $n - 1$ dimensions in $\mathbb{R}^n$
* In the column picture, the solution represents all linear combinations of the columns of the matrix that gives $\vec{b}$

