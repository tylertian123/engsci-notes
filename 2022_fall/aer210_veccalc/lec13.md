# Lecture 13, Oct 6, 2022

## Line Integrals

* With a normal single integral we integrate over a coordinate axis (e.g. $x$ axis); a line integral integrates over an arbitrary curve
* Defined just like a regular integral: $\int _C f(x, y)\,\ds = \lim _{\norm{P} \to 0} \sum _{i = 1}^n f(x_i^*, y_i^*)\Delta s_i$, where:
	* Divide the curve $C$ into segments $\Delta s_i$
	* $(x_i^*, y_i^*)$ is a point in the segment $\Delta s_i$
	* The norm of the partitioning $\norm{P} = \max(\Delta s_i)$, i.e. the longest segment
* Geometrically, this is equivalent to the area of the surface between $f(x, y)$ and the $x$-$y$ plane, along the path $C$ (the "curtain" on curve $C$)
	* Note if we took $f(x, y) = 1$ we just get $\int _C\,\ds$ which is the arc length of $C$

