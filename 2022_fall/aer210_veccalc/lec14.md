# Lecture 14, Oct 7, 2022

## Computing Line Integrals

* To compute a line integral over a curve we need to parametrize $C$: $x = x(t), y = y(t)$ or $\vec r(t) = x(t)\ihat + y(t)\jhat$
* Assumptions:
	1. $f(x, y)$ is continuous over $C$
	2. $C$ is smooth (cannot contain kinks, etc)
		* $\vec r'(t)$ is continuous
			* Disallows sharp direction changes
		* $\vec r'(t) \neq \vec 0$ except possibly at the endpoints of $C$
			* If this happens, the position vector stops, and then can go in any direction, so this can make a kink
* Similar to arc length, $\ds = \norm{\vec r'(t)}\,\dt = \sqrt{\left(\diff{x}{t}\right)^2 + \left(\diff{y}{t}\right)^2}\,\dt$

\noteImportant{To compute the line integral of $f(x, y)$ along curve $C$: $$\int _C f(x, y)\,\ds = \int _a^b f(x(t), y(t))\sqrt{\left(\diff{x}{t}\right)^2 + \left(\diff{y}{t}\right)^2}\,\dt$$ where $C$ is parametrized as $$\twopiece{x = x(t)}{y = y(t)} \implies \vec r(t) = x(t)\ihat + y(t)\jhat, t \in [a, b]$$ with the assumptions that $\vec r'(t)$ is continuous and $\vec r'(t)$ is nonzero except at the endpoints of $C$}

* In the 3D and more general case $\int _C f(x, y, z)\,\ds = \int _a^b f(\vec r(t))\norm{\vec r'(t)}\,\dt$
* If $C$ is not smooth but piecewise smooth (consisting of finite number of smooth segments), we can break the integral into pieces
	* If $C = C_1 \cup C_2$ then $\int _C f(x, y)\,\ds = \int _{C_1} f(x, y)\,\ds + \int _{C_2} f(x, y)\,\ds$
* Note: $\int _C f(x, y)\,\ds = \int _{-C} f(x, y)\,\ds$, i.e. the direction of the curve doesn't matter for line integration, sine $\ds > 0$ always
	* This is unlike the 1D case

