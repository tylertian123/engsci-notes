# Lecture 31, Mar 29, 2022

## Functions of 3 Variables: Level Surfaces

* Level surface: $f(x, y, z) = c$
* By extension from the 2D case, the gradient is perpendicular to the level surface (tangent plane to the surface)
	* This can be shown in the same way as in the 2D case
	* Let $\vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat$ be any curve on the surface
	* $f(x(t), y(t), z(t)) = f(\vec r(t)) = c \implies \diff{}{t} f(\vec r(t)) = 0 \implies \nabla f(\vec r(t)) \cdot \vec r'(t) = 0$
* Equation for the tangent plane is given by $(\vec x - \vec x_0) \cdot \nabla f(\vec x_0) = (x - x_0)\pdiff{f}{x} + (y - y_0)\pdiff{f}{y} + (z - z_0)\pdiff{f}{z} = 0$
* Normal line equation is given by $\vec r(q) = \vec x_0 + q\nabla f(\vec x_0)$
* Example: $xy^2 + 2z^2 = 12$, find normal line at $(1, 2, 2)$
	* $\threepiece{\pdiff{f}{x} = y^2 = 4}{\pdiff{f}{y} = 2xy = 4}{\pdiff{f}{z} = 4z = 8} \implies \threepiece{x = 1 + 4q}{y = 2 + 4q}{z = 2 + 8q}$
* Example: offset sphere $f = x^2 + y^2 + z^2 - 8x - 8y - 6z + 24 = 0$ and ellipsoid $g = x^2 + 3y^2 + 2z^2 = 9$, show that the sphere is tangent to the ellipsoid at $(2, 1, 1)$
	* Show that gradient vectors are parallel
	* $\nabla f = (2x - 8)\ihat + (2y - 8)\jhat + (2z - 6)\khat \implies \nabla f(2, 1, 1) = (-4, -6, -4)$
	* $\nabla g = 2x\ihat + 6y\jhat + 4z\khat \implies \nabla g(2, 1, 1) = (4, 6, 4) = -\nabla f(2, 1, 1)$
	* Note we also need to show that the point is on both surfaces

