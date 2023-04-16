# Lecture 8, Jan 28, 2022

## Moments and Centres of Mass

* To find the centroid, make use of two principles:
	1. Symmetry: $(\bar{x}, \bar{y})$ must be on any axis of symmetry
		* In simple cases where we have multiple axes of symmetry we can just use the intersection of the axes to find the centroid
	2. Additivity: The centroid of a bigger piece is a weighted average of centroids of smaller pieces (where the weights are the areas of the smaller pieces)
		* $\bar{x} = \frac{\bar{x}_1A_1 + \bar{x}_2A_2 + \cdots}{A_1 + A_2 + \cdots}$ similarly for $\bar y$
* To extend this to a more complicated region we break any region into fine rectangles and take the limit to get an integral
	* Each piece has area $A_i = f(x_i^*)\Delta x_i$
	* $\bar{x}_i = x_i^*$
	* $\bar{y}_i = \frac{1}{2}f(x_i^*)$
	* Take the limit and $\bar{x} = \frac{\int _a^b xf(x)\,\dx}{\int _a^b f(x)\,\dx}$, $\bar{y} = \frac{\frac{1}{2}\int _a^b f(x)^2\,\dx}{\int _a^b f(x)\,\dx}$
* If we have a region bounded by two curves, use the additivity rule and subtract the smaller function
	* $\bar{x}A + \bar{x}_gA_g = \bar{x}_fA_f \implies \bar{x}A = \bar{x}_fA_f - \bar{x}_gA_g$
* Example: Region between $f(x) = 6, g(x) = 3$ between $x \in [2, 5]$
	* $\bar{x}A = \int _2^5 x(6 - 3)\,\dx = 3\inteval{\frac{1}{2}x^2}{2}{5} = \frac{63}{2} \implies \bar{x} = \frac{7}{2}$
	* $\bar{y}A = \int _2^5 \frac{1}{2}(36 - 9)\,\dx = \frac{81}{2} \implies \bar{y} = \frac{9}{2}$
* Pappus' Theorem on Volumes: For a solid of revolution $V = 2\pi\bar{R}A$ where $A$ is the area of the region being rotated and $\bar{R}$ is distance from the axis of rotation to the centroid of the region
	* Example: Elliptical torus with cross section as an ellipse with area $A = \pi ab$, radius is the major radius $R$ so $V = 2\pi^2Rab$
	* This theorem is equivalent to doing the integrals
	* Consider a washer method about $x$: $V_x = \int _a^b \pi\left((f(x))^2 - (g(x))^2\right)\,\dx = 2\pi \int _a^b \frac{1}{2}\left((f(x))^2 - (g(x))^2\right)\,\dx = 2\pi\bar{y}A$
	* Consider the shell method about $y$: $V_y = \int _a^b 2\pi x(f(x) - g(x))\,\dx = 2\pi\int _a^b x(f(x) - g(x))\,\dx = 2\pi\bar{x}A$

## Parametric Curves

* We can describe curves by $\twopiece{x = x(t)}{y = y(t)}$ where we introduced the parameter $t$ and made it the new independent variable
* Example: Projectile motion in physics
* Example: Line between two points: $\twopiece{x(t) = x_0 + t(x_1 - x_0)}{y(t) = y_0 + t(y_1 - y_0)}$
* Parametric representations inherently contain more information; e.g. parameterizing projectile motion introduces information about time/velocity while $y(x)$ by itself only contains information about trajectory shape
* Intersection of two curves happens when $y_1(x) = y_2(x)$; collision happens when $x_1(t) = x_2(t)$ and $y_1(t) = y_2(t)$
	* To solve for collision, it can be helpful to solve for intersections first
* Example: $\twopiece{x_1(t) = 2t + 6}{y_1(t) = 5 - 4t}, \twopiece{x_2(t) = 3 - 5\cos(\pi t)}{y_2(t) = 1 + 5\sin(\pi t)}, t \geq 0$
	* Intersection:
		* Curve 1: $t = \frac{x - 6}{2} \implies y_1(x) = 17 - 2x, x \geq 6$
		* Curve 2: $(x - 3)^2 + (y - 1)^2 = 25$
		* Solving for intersections yields $(6, 5)$ and $(8, 1)$
	* Collision:
		* $(6, 5)$ happens on curve 1 at $t = 0$; curve 2 is at $(-2, 1)$ at this point, so there is no collision
		* $(8, 1)$ happens on curve 1 at $t = 1$; curve 2 is at $(8, 1)$ at this point, so there is a collision

