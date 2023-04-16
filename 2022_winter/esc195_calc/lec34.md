# Lecture 34, Apr 5, 2022

## Lagrange Multipliers

* In general the goal is to maximize or minimize $f(x, y)$ subject to a constraint of $g(x, y) = k$
	* Geometrically, picture the level curves of $f(x, y)$ along with the curve $g(x, y) = k$
	* A solution must lie on both $g(x, y) = k$ and one of the level curves of $f(x, y)$; the goal is to find the largest $c$ such that $f(x, y) = c$ intersects $g(x, y) = k$
	* This happens when the two curves just touch each other at a single point, i.e. they're tangent to each other
		* Note if they crossed, there would always be a way to choose a larger or smaller $c$ such that they touch at a single point
* Since the curves are tangent, they share the same tangent and thus $\nabla g \parallel \nabla f$ or $\nabla f = \lambda\nabla g$; $\lambda$ is the *Lagrange multiplier*
* In the 2D case, we need to solve $\threepiece{g(x_0, y_0) = k}{f_x(x_0, y_0) = \lambda g_x(x_0, y_0)}{f_y(x_0, y_0) = \lambda g_y(x_0, y_0)}$
	* Together we have 3 equations and 3 unknowns $x_0, y_0, \lambda$, so we can solve the system
	* Often we don't care about finding $\lambda$, only $x_0, y_0$
* In 3D, the surfaces are tangent and share the same tangent plane so again the gradients are parallel
	* In general $\twopiece{g(\vec x_0) = k}{\nabla f(\vec x_0) = \lambda \nabla g(\vec x_0)}$
* Example: $f(x, y) = x^2 - y^2$ on the circle $x^2 + y^2 = 1$
	* $\nabla f = (2x, -2y), \nabla g = (2x, 2y)$
	* $\threepiece{x_0^2 + y_0^2 = 1}{2x_0 = \lambda 2x_0}{-2y_0 = \lambda 2y_0}$
	* From the second equation, either $x_0 = 0$ or $\lambda = 1$; from the third equation either $y_0 = 0$ or $\lambda = -1$
	* Cases:
		1. $\lambda = 1, y_0 = 0 \implies x_0 = \pm 1$
		2. $\lambda = -1, x_0 = 0 \implies y_0 = \pm 1$
* Note Lagrange's method doesn't tell us whether we have a max or min, but it does give us all the max/min
* Example: Maximize $f(x, y, z) = xyz$ subject to $x^3 + y^3 + z^3 = 1, x, y, z \geq 0$
	* $\fourpiece{x^3 + y^3 + z^3 = 1}{yz = \lambda 3x^2}{xz = \lambda 3y^2}{zy = \lambda 3z^2} \implies \threepiece{xyz = \lambda 3x^2}{xyz = \lambda 3y^2}{xyz = \lambda 3z^2}$
	* $\lambda x^3 = \lambda y^3 = \lambda z^3$
	* Eliminate $\lambda = 0$ possibility because if $\lambda = 0$, $x = y = z = 0$ which would be a minimum
	* $x^3 = y^3 = z^3 \implies x = y = z$
	* Plugging this back into our constraint we get $x = y = z = \sqrt[3]{\frac{1}{3}} \implies f(x, y, z) = \frac{1}{3}$
* Problems of this type are easy to set up, but solving the system of equations is complicated

## Two Constraints Problem

* Maximize or minimize $f(x, y, z)$ subject to $g(x, y, z) = k$ and $h(x, y, z) = c$
	* Geometrically we're trying to maximize or minimize $f$ on the intersection between $g$ and $h$
	* The 3D surfaces $g(x, y, z) = k$ and $h(x, y, z) = c$ intersect at a curve
* Note that since the gradient is normal to a level surface, $\vec T$ for the intersection curve is normal to both $\nabla h$ and $\nabla g$
	* Therefore $\vec T = \nabla h \times \nabla g$
* By the same logic as before, $\vec T$ must be in the tangent plane of $f$ at the max/min, so $\nabla f$ is perpendicular to $\vec T$
	* Since $\nabla f \perp \vec T$, it must be in the plane defined by $\nabla g$ and $\nabla h$ since that plane is also perpendicular to $\vec T$
	* $\nabla f(\vec x_0) = \lambda\nabla g(\vec x_0) + \mu\nabla h(\vec x_0)$ is our new equation
* The problem is now reduced to a set of 5 equations
* Example: $f(x, y, z) = xy + 2z$ on a circle of intersection between the plane $x + y + z = 0$ and the sphere $x^2 + y^2 + z^2 = 24$
	* $\nabla f = (y, x, 2), \nabla g = (1, 1, 1), \nabla h = (2x, 2y, 2z)$
	* $\begin{cases}x + y + z = 0 \\ x^2 + y^2 + z^2 = 24 \\ y = \lambda + \mu \cdot 2x \\ x = \lambda + \mu \cdot 2y \\ 2 = \lambda + \mu \cdot 2z\end{cases}$
	* $(x - y) = 2\mu(y - x) \implies (x - y)(1 + 2\mu) = 0 \implies y = x$ or $\mu = -\frac{1}{2}$
	* Cases:
		1. $x = y \implies 2x + z = 0 \implies z = -2x \implies x^2 + x^2 + (-2x)^2 = 24 \implies 6x^2 = 24 \implies x = \pm 2, y = \pm 2, z = \mp 4$
			* This produces the points $f(2, 2, -4) = -4$ and $f(-2, -2, 4) = 12$
		2. $\mu = -\frac{1}{2} \implies \twopiece{x = \lambda - y}{2 = \lambda - z} \implies x + y = 2 + z \implies 2 + z + z = 0 \implies z = -1, x + y = 1 \implies \twopiece{x^2 + y^2 = 24 - z^2 = 23}{(x + y)^2 = x^2 + y^2 + 2xy = 1^2 = 1} \implies xy = -11 \implies y = 1 - x \implies x(1 - x) = -11 \implies x^2 - x - 11 = 0 \implies x = \frac{1 \pm 3\sqrt 5}{2}, y = \frac{1 - 3\sqrt 5}{2}$
			* This produces the points $f\left(\frac{1 + 3\sqrt 5}{2}, \frac{1 - 3\sqrt 5}{2}, 1\right) = -13$ and $f\left(\frac{1 - 3\sqrt 5}{2}, \frac{1 + 3\sqrt 5}{2}, 1\right) = -13$

## Reconstructing a Function from its Gradient

* If we have $\nabla f$, how do we obtain $f$?
* Method 1: Integrate one of the partial derivatives, creating a "constant of integration" that's a function of the other variables; take the partial derivative with respect to the other variables, and compare against the gradient to solve for the constants of integration
* Example: $\nabla f = (1 + y^2 + xy^2)\ihat + (x^2y + y + 2xy + 1)\jhat$
	* $\pdiff{f}{x} = 1 + y^2 + xy^2 \implies f = x + xy^2 + \frac{1}{2}x^2y^2 + \phi(y)$
		* Note the constant of integration here is a "constant" with respect to $x$ only, meaning it could be any function of $y$
	* Now differentiate: $\pdiff{f}{y} = 2xy + x^2y + \phi'(y) = x^2y + y + 2xy + 1 \implies \phi'(y) = y + 1 \implies \phi(y) = \frac{1}{2}y^2 + y + C$
	* Therefore $f(x, y) = x + xy^2 + \frac{1}{2}x^2y + \frac{1}{2}y^2 + y + C$
* Method 2: Integrate all partial derivatives, and match the terms to get the final expression
* Example: $\nabla f = (\cos x - y\sin x)\ihat + (\cos x + z^2)\jhat + (2yz)\khat$
	* $f_x = \cos x - y\sin x \implies f = \sin x + y\cos x + \phi _1(y, z)$
	* $f_y = \cos x + z^2 \implies f = y\cos x + yz^2 + \phi _2(x, z)$
	* $f_z = 2yz \implies f = yz^2 + \phi _3(x, y)$
	* Since all 3 of these have to be true, we can conclude that $f(x, y, z) = \sin x + y\cos x + yz^2 + C$
* Not all $P(x, y)\ihat + Q(x, y)\jhat$ are gradients!
	* Example: $\nabla f(x, y) = y\ihat - x\jhat$
		* $f_x = y \implies f_{xy} = 1$
		* $f_y = -x \implies f_{yx} = -1$
		* $\ppdiff{f}{y}{x} \neq \ppdiff{f}{x}{y}$
		* Since mixed partials do not agree, but all derivatives are continuous, this contradicts Clairaut's theorem so $f$ could not exist
* Theorem: Let $P$ and $Q$ be functions of two variables, each continuous and differentiable, then $P(x, y)\ihat + Q(x, y)\jhat$ is a gradient iff $\pdiff{P}{y}(x, y) = \pdiff{Q}{x}(x, y)$
	* In 3 dimensions, we need to apply this 3 times (comparing $\ppdiff{f}{x}{y} = \ppdiff{f}{y}{x}$ and $\ppdiff{f}{y}{z} = \ppdiff{f}{z}{y}$ and $\ppdiff{f}{x}{z} = \ppdiff{f}{z}{x}$), but there's no need for the third order partials

