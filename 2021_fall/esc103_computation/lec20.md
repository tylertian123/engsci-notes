# Lecture 20, Nov 29, 2021

## Boundary Value Problems

* A boundary value problem involves a system described by a differential equation, but unlike an IVP, the known values are no longer at $0$
* In a BVP the independent variable is typically not time but some kind of spacial variable (hence boundaries)
* Example: Beam deflection problem; in this case the known points are the supports which have a deflection of 0
* To solve BVPs numerically, begin by partitioning the interval into $n$ evenly spaced subintervals, and set the step size as $\Delta x = \frac{b - a}{n}$
* Approximate derivatives using finite differences (secant line slopes)
	* The forward difference $\Delta _F f(x) = \frac{f(x + \Delta x) - f(x)}{\Delta x}$
	* The backward difference $\Delta _B f(x) = \frac{f(x) - f(x - \Delta x)}{\Delta x}$
	* The central difference $\Delta _C = \frac{f(x + \Delta x) - f(x - \Delta x)}{2\Delta x}$
	* We can use different combinations of these finite differences to estimate higher order derivatives
* $\alignedeqntwo[t]{f''(x)}{\Delta _B[\Delta _F f(x)]}{\frac{\Delta _F f(x) - \Delta _F f(x - \Delta x)}{\Delta x}}{\frac{1}{\Delta x}\left[\frac{f(x + \Delta x) - f(x)}{\Delta x} - \frac{f(x) - f(x - \Delta x)}{\Delta x}\right]}{\frac{f(x + \Delta x) - 2f(x) + f(x - \Delta x)}{(\Delta x)^2}}$
* Example: Given $y'' + 2y' + y = 0$ and $y(0) = 0$, $y(1) = 1$, find $y$ that satisfies this for $x \in [0, 1]$
	* Approximate $y'(x) \approx \Delta _C y(x)$ and $y''(x) \approx \Delta _B\Delta _F y(x)$
	* Substitute this back into the equation: $\frac{f(x + \Delta x) - 2f(x) + f(x - \Delta x)}{(\Delta x)^2} + 2\frac{y(x + \Delta x) - y(x - \Delta x)}{2\Delta x} + y(x) = 0$
	* Simplify: $\left(\frac{1}{(\Delta x)^2} + \frac{2}{2\Delta x}\right)y(x + \Delta x) + \left(\frac{-2}{(\Delta x)^2} + 1\right) + \left(\frac{1}{(\Delta x)^2} - \frac{2}{2\Delta x}\right)y(x - \Delta x) = 0$
	* This is now a difference equation, with no more derivatives but instead values of $y$ at discrete points
	* Divide the interval $[0, 1]$ into $n = 5 \implies \Delta x = 0.2$ subintervals
	* Now we evaluate the difference equation at each of the interior grid points (open interval $(0, 1)$), which will get us an algebraic equation:
		* $\begin{cases}30y(0.4) - 49y(0.2) + 20y(0) = 0 \\ 30y(0.6) - 49y(0.4) + 20y(0.2) = 0 \\ 30y(0.8) - 49y(0.6) + 20y(0.4) = 0 \\ 30y(1) - 49y(0.8) + 20y(0.6) = 0 \end{cases}$
			* Note how the coefficients aren't changing since they only depend on step size
	* Now we can sub in $y(1)$ and $y(0)$ into the equations above
	* The system of $y$ values can now be formulated in the form of $A\vec{x} = \vec{b}$, which allows it to be solved

