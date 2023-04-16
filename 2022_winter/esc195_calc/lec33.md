# Lecture 33, Apr 4, 2022

## Absolute Extrema

* As with single variable optimization, the absolute min/max can occur at a local min/max or on the boundary (which are curves in the multivariable case)
* Theorem: If $f$ is continuous on a bounded, closed set, then $f$ takes on both an absolute minimum and an absolute maximum on that set (extreme value in multiple variables)
* First find critical points inside the region where the gradient is zero or DNE, and then find critical points along the boundary, and then the end points
	* By parameterizing the boundary curve, we can find its derivative and find when that equals zero
	* Either use the chain rule or substitute back into the original function
* Example: $f(x, y) = (x - 4)^2 + y^2$ on $\Set{(x, y): 0 \leq x \leq 2, x^3 \leq y \leq 4x}$
	* Critical points: $\nabla f = (2(x - 4), 2y) = \vec 0 \implies x = 4, y = 0$
		* The critical point is not in the set we're looking at, which means both absolute max and min are on the boundary
	* Boundary 1: $y = x^3, 0 \leq x \leq 2$
		* Parameterize the boundary $\twopiece{x = t}{y = t^3}, 0 \leq t \leq 2 \implies \vec r_1(t) = t\ihat + t^3\jhat$
		* Now we have a single variable function
		* $\diff{}{t}f_1(\vec r_1(t)) = \nabla f_1 \cdot \vec r_1'(t) = (2(t - 4), 2t^3) \cdot (1, 3t^2) = 2t - 8 + 6t^5$
		* Let $f_1'(t) = 0 \implies t(1 + 3t^4) = 4 \implies t = 1$ or the point $(1, 1)$, which is in our set
		* $f(1, 1) = 10$
		* $f_1''(t) = 2 + 30t^4 = 32 > 0$ so this is a minimum
	* Boundary 2: $y = 4x, 0 \leq x \leq 2$
		* Parameterize the boundary $\twopiece{x = t}{y = 4t}$
		* $f_2(t) = (t - 4)^2 + (4t)^2 = 17t - 8t + 16 \implies f_2'(t) = 34t - 8 = 0 \implies t = \frac{4}{17}$
		* Critical point is at $\left(\frac{4}{17}, \frac{16}{17}\right)$
	* Test for whether these are minimums or maximums with a second derivative test
	* Check endpoints $f(0, 0) = 16, f(2, 8) = 68$
* Example: $f(x, y) = xy^2 - x$ on $\Set{(x, y) | x^2 + y^2 \leq 3}$
	* $\nabla f = (y^2 - 1)\ihat + 2xy\jhat = \vec 0 \implies \twopiece{y^2 - 1 = 0}{2xy = 0} \implies \twopiece{y = \pm 1}{x = 0}$
	* Using second derivative test, both are saddle points
	* Check boundary $y^2 = 3 - x^2 \implies f_1(x) = x(3 - x^2) - x = 2x - x^3 \implies f_1'(x) = 2 - 3x^2 \implies x = \pm \sqrt{\frac{3}{2}}, y = \pm\sqrt{\frac{7}{3}}$
	* There are 4 critical points on the boundary; using the second derivative test we can determine which one is max or min
	* Even though the circle has no end points, when we expressed it as $y^2 = 3 - x^2$ we introduced constraints of $-\sqrt{3} \leq x \leq \sqrt{3}$, so we must treat those as end points of the boundary
	* Another approach is to parameterize the boundary curve as $\vec r(t) = \sqrt 3\cos t \ihat + \sqrt 3\sin t \jhat, 0 \leq t \leq 2\pi$, and then taking the derivative of $f(\vec r(t))$, which removes the need for end points

