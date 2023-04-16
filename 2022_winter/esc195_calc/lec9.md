# Lecture 9, Jan 31, 2022

## Calculus with Parametric Curves

### Tangents

* Since these curves can be more complex than functions there are more cases for tangents:
	1. Ordinary tangent
	2. No tangent (sharp point)
	3. Multiple tangents (due to the curve intersecting itself)
* To find the tangent we can again take the limit of a secant line
	* $m = \frac{y(t_0 + h) - y(t_0)}{x(t_0 + h) - x(t_0)} = \frac{\frac{y(t_0 + h) - y(t_0)}{h}}{\frac{x(t_0 + h) - x(t_0)}{h}}$
	* Take the limit $h \to 0$ this just becomes $m = \frac{y'(t_0)}{x'(t_0)}$
		* Note we're differentiating with respect to $t$
	* The tangent line equation is $y'(t_0)(x - x_0) - x'(t_0)(y - y_0) = 0$
		* $\frac{y - y_0}{x - x_0} = \frac{y'(t_0)}{x'(t_0)} \implies y'(t_0)(x - x_0) = x'(t_0)(y - y_0) \implies y'(t_0)(x - x_0) - x'(t_0)(y - y_0) = 0$
* $x'(t_0) = 0$ gives a vertical tangent, $y'(t_0) = 0$ gives a horizontal tangent
	* If both are zero then we get no information
* Tangents can be used for curve sketching
	* Find derivatives of $x(t)$ and $y(t)$ and find locations of vertical and horizontal tangents
	* Also calculate slope at locations such as the origin and other points of interest

### Areas

* Formula for area under parametric curve between $x(t_1)$ and $x(t_2)$ is just $A = \int _{t_1}^{t_2} y(t)x'(t)\,\dt$ (essentially a substitution)
* To calculate the area inside a closed curve, direction starts mattering; define the positive traversal direction such that the enclosed area is always on the left (i.e. counterclockwise)
* Going from $t_1$ to $t_5$ in the positive direction, the enclosed area is $A = -\int _{t_1}^{t_5} y(t)x'(t)\,\dt$, or $A = \int {t_1}^{t_5} x(t)y'(t)\,\dt$
	* Note the need for the negative sign when integrating with $x$ but not $y$
	* Note the values of $x$ and $y$ at $t_1$ and $t_5$ are equal but $t_1 \neq t_5$
* Example: Ellipse $\twopiece{x = a\cos\theta}{y = b\sin\theta}$
	* Curve repeats $\theta \in [0, 2\pi]$
	* $x' = -a\sin\theta \implies A = -\int _0^{2\pi} -ab\sin^2\theta\,\dtheta = ab\int _0^{2\pi} \sin^2\theta\,\dtheta = \pi ab$
	* We could also have done it with $y'$ and get the same result

### Arc Length

* Arc length is now given by $\sum \sqrt{\Delta x^2 + \Delta y^2}$; in the limit we get $s = \int _a^b \sqrt{(x'(t))^2 + (y'(t))^2}\,\dt$
	* Note if we let $x = t$, $y = f(t) = f(x)$ we get back the arc length formula for functions
* Example: $\twopiece{x = \theta\cos\theta}{y = \theta\sin\theta}, \theta \in [0, 2\pi]$
	* $\alignedeqntwo[t]{s}{\int _0^{2\pi} \sqrt{(\cos\theta - \theta\sin\theta)^2 + (\sin\theta + \theta\cos\theta)^2}\,\dtheta}{\int _0^{2\pi} \sqrt{1 + \theta^2}\,\dtheta}{\inteval{\frac{1}{2}\theta\sqrt{1 + \theta^2} + \frac{1}{2}\ln\abs*{\theta + \sqrt{1 + \theta^2}}}{0}{2\pi}}{\pi\sqrt{1 + 4\pi^2} + \frac{1}{2}\ln\left(2\pi + \sqrt{1 + 4\pi^2}\right)}$

### Surface Area

* Formula remains the same: $A = \int _a^b 2\pi y\,\ds$
	* Recall in parametric form $\ds = \sqrt{(x'(t))^2 + (y'(t))^2}\,\dt$

