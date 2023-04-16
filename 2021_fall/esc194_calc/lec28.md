# Lecture 28, Nov 22, 2021

## Inverse Trigonometric Functions

* Since trig functions are not one-to-one, we cannot find general inverses, but they are invertible if we restrict their domains
* $\sin^{-1} x$ or $\arcsin x$ has domain $x \in [-1, 1]$ and range $\left[-\frac{\pi}{2}, \frac{\pi}{2}\right]$
	* $\sin^{-1}(\sin x) = x$ for $x \in [-1, 1]$
	* $\sin(\sin^{-1} x) = x$ for $x \in \left[-\frac{\pi}{2}, \frac{\pi}{2}\right]$
	* Note the inverse sine is an odd function
* To find the derivative: $\diff{}{x}\sin(\sin^{-1} x) = \diff{}{x}x \implies \diff{}{x}\sin^{-1} x = \frac{1}{\cos(\sin^{-1} x)} = \frac{1}{\sqrt{1 - x^2}}$
	* Note $\cos(\sin^{-1}x) = \sqrt{1 - x^2}$ is a relationship that can be demonstrated geometrically
	* Consider a triangle with hypotenuse 1 and angle $\theta = \sin^{-1} x$, then $\sin \theta = x$ which is the opposite side, and $\cos \theta$ is the adjacent side; so by the Pythagorean theorem, $\cos(\sin^{-1} x) = \cos \theta = \sqrt{1 - x^2}$
* Reversing this we get $\int \frac{1}{\sqrt{a^2 - x^2}}\,\dx = \sin^{-1}\left(\frac{x}{a}\right) + C$ (using u substitution with $au = x$
* Inverse tangent $\tan^{-1} x = \arctan x$ has domain $x \in (-\infty, \infty)$ and range $\left(-\frac{\pi}{2}, \frac{\pi}{2}\right)$
	* $\tan(\tan^{-1} x) = x$ for all $x$ but $\tan^{-1}(\tan x) = x$ only for $x \in \left(-\frac{\pi}{2}, \frac{\pi}{2}\right)$
	* Note the period of $\tan$ is $\pi$, not $2\pi$
* The derivative $\diff{}{x}\tan^{-1} x = \frac{1}{\sec^2(\tan^{-1} x)} = \frac{1}{1 + x^2}$
	* $\sec^2(\tan^{-1} x) = 1 + x^2$ can be derived from a similar geometric process for $\sin$, with the adjacent side 1 and opposite side $x$
* $\int \frac{1}{a^2 + x^2}\,\dx = \frac{1}{a}\tan^{-1}\left(\frac{x}{a}\right) + C$
* The inverse secant $\diff{}{x}\sec^{-1} x = \frac{1}{\abs{x}\sqrt{x^2 - 1}}$, so $\int \frac{1}{x\sqrt{x^2 - a^2}}\,\dx = \frac{1}{a}\sec^{-1}\left(\frac{\abs{x}}{a}\right) + C$

## Modelling with Differential Equations

* Often it's much easier to model something against its rate of change; e.g. the rate of change of heat (heat loss) is proportional to the difference in temperature
* Define a *differential equation* with an equation which contains an unknown function with one or more of its derivatives
	* Example: $\diff{y}{x} = ky$ or $F = ma = m\diffn{2}{x}{t}$ or $\nabla \times \vec{E} = -\dot{\vec{B}}$
* Differential equations can be classified as ordinary (1 independent variable) or partial (multiple independent variables), linear (only scalar multiples of derivatives) or nonlinear, and its order is the order of the highest derivative

