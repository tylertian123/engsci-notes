# Lecture 30, Mar 28, 2022

## The Chain Rule

* Theorem: Multivariable chain rule: $\diff{}{t} f(\vec r(t)) = \nabla f(\vec r(t)) \cdot \vec r'(t) = \pdiff{f}{x}\diff{x}{t} + \pdiff{f}{y}\diff{y}{t} + \pdiff{f}{z}\diff{z}{t}$
	* Recall that $\vec r' = \vec T\diff{x}{t}$ so $\nabla f(\vec r) \cdot \vec r' = \nabla f \cdot \vec T\diff{s}{t}$
		* $\nabla f\vec T$ is the directional derivative in the direction of $\vec T$
		* Multiplying the rate of change in a direction by the speed gives the overall rate of change
* Example: Rectangular volume $V = lhd$, let $\diff{l}{t} = 3\si{m/s}, \diff{h}{t} = -2\si{m/s}, \diff{d}{t} = 5\si{m/s}$, what is $\diff{V}{t}$ at $l = 2\si{m}, h = 3\si{m}, d = 4\si{m}$?
	* Let $\vec q(t) = (l, h, d)$
	* $\diff{V}{t} = \nabla V(\vec q(t)) \cdot \vec q'(t) = (hd, ld, hl) \cdot (3, -2, 5) = 3hd - 2ld + 5lh = 50\si{m^3}{s}$
	* A "position vector" can be something other than just spacial directions
* We can extend this further and make $x(t, s), y(t, s)$ also functions of multiple variables; then $\pdiff{f}{t} = \pdiff{f}{x}\pdiff{x}{t} + \pdiff{f}{y}\pdiff{y}{t}$ etc (note now we have all partial derivatives)

## Revisiting Implicit Differentiation

* How do we get $\diff{y}{x}$ from an implicit relation $u(x, y) = 0$?
	* Let $x = t, y = y(t)$
* $u = u(t, y(t)) \implies \diff{u}{t} = \pdiff{u}{x}\diff{x}{t} + \pdiff{u}{y}\diff{y}{t}$
	* Since $u(t, y(t)) = 0$ we have $\diff{u}{t} = 0$
	* $x = t \implies \diff{x}{t} = 1$
	* $\diff{y}{t} = \diff{y}{x}$
	* $0 = \pdiff{u}{x} + \pdiff{u}{y}\diff{y}{x} \implies \diff{y}{x} = -\frac{\pdiff{u}{x}}{\pdiff{u}{y}}$
* Example: $x^4 + 4x^3y + y^4 = 1$
	* Let $u = x^4 + 4x^3y + y^4 - 1 = 0$
	* $\pdiff{u}{x} = 4x^3 + 12x^2y$
	* $\pdiff{u}{y} = 4x^3 + 4y^3$
	* $\diff{y}{x} = \frac{x^2(x + 3y)}{x^3 + y^3}$
* Same result can be obtained by doing implicit differentiation normally, but this method can be easier

## Level Curves in 2D

* The gradient is always normal to the level curve (i.e. perpendicular to the tangent of the normal curve)
	* $f(x, y) = c$ is the level curve; let $\vec r(t) = x(t)\ihat + y(t)\jhat$ describe this curve, then $\vec t = \vec r'(t)$
	* $f(\vec r(t)) = c$ must hold for this to be the level curve
	* $\diff{}{t}f(\vec r(t)) = \nabla f(\vec r) \cdot \vec r' = \diff{}{t} c = 0$
	* Therefore $\nabla f \perp \vec r'$ or $\nabla f \perp \vec t$
* This works for any curve in the form $f(x, y) = c$
* Using this we can obtain the expression for $\vec t = \left(\pdiff{f}{y}, -\pdiff{f}{x}\right)$
	* $\nabla f \cdot \vec t = \pdiff{f}{x}\pdiff{f}{y} -\pdiff{f}{y}\pdiff{f}{x} = 0$
* To get the equation of the tangent line: $(x - x_0, y - y_0) \cdot \nabla f = 0 \implies (x - x_0)\pdiff{f}{x} + (y - y_0)\pdiff{f}{y} = 0$
* Similarly for the normal line: $(x - x_0, y - y_0) \cdot \vec t = 0 \implies (x - x_0)\pdiff{f}{y} - (y - y_0)\pdiff{f}{x} = 0$
* Example: $x^2 + y^2 = 9$
	* $\pdiff{f}{x} = 2x, \pdiff{f}{y} = 2y \implies (x - x_0)2x_0 + (y - y_0)2y_0 = 0$
	* Choose e.g. the point $\left(\frac{3}{\sqrt 2}, \frac{3}{\sqrt 2}\right)$
	* Tangent is $\left(x - \frac{3}{\sqrt 2}\right)2\frac{3}{\sqrt 2} + \left(y - \frac{3}{\sqrt 2}\right)2\frac{3}{\sqrt 2} = 0 \implies y = \frac{6}{\sqrt 2} - x$

