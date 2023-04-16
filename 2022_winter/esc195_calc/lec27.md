# Lecture 27, Mar 21, 2022

## Multivariable Functions

* The domain of a multivariable function is an entire region
* One way to visualize a multivariable function is to use a *level map* or *contour plot* (i.e. sections)
	* Cut through the surface with a plane parallel to the $xy$ plane, i.e. set $f(x, y) = c$
	* This gives us a curve and we can plot several of these contours for different $c$ on the same plot
	* This is referred to as a *collection of level curves*
* Example: $f(x, y) = xy$
	* Set $f = c \implies xy = c \implies y = \frac{c}{x}$
	* The level curves are a collection of $\frac{c}{x}$; for positive $c$ the curve is in the first and third quadrant, for negative $c$ the curve is in the second and fourth quadrant
	* The curve looks like a saddle increasing along positive $xy$ and decreasing along negative $xy$
* For a function of 3 variables, we can extend this idea to make *level surfaces*, so we can get and idea of what the function looks like without a fourth dimension

## Limits of Multivariable Functions

* Notation: $f(x, y, z) = f(\vec x)$
* There are an infinite number of ways to approach a point in multiple dimensions
* Definition: $\lim _{\vec x \to \vec x_0} f(\vec x) = L \iff \forall \varepsilon > 0, \exists \delta > 0 \ni 0 < \norm*{\vec x - \vec x_0} < \delta \implies \abs*{f(\vec x) - L} < \varepsilon$
	* $\delta$ defines a circle, sphere, etc around the point $\vec x_0$
	* In the single variable case we only had left and right hand limits; with multiple variables there are an infinite number of ways
* Example: $\lim _{x \to \vec 0} \frac{x^2y + y^2}{x + y^2}$
	* Try approaching the origin from the positive $y$ axis:
		* $x = 0 \implies f(0, y) = \frac{y^2}{y^2} = 1 \implies \lim _{y \to 0^+} f(0, y) = 1$
	* Approaching from the $x$ axis:
		* $y = 0 \implies f(x, 0) = \frac{0}{x} = 0 \implies \lim _{x \to 0^+} f(x, 0) = 0$
	* This limit does not exist because we get different values for it when we approach from different directions
* Example: $\lim _{\vec x \to \vec 0} \frac{x^2y^4}{x^4 + y^8}$
	* Consider the path $y = mx$:
		* $f(x, mx) = \frac{m^4x^6}{x^4 + m^8x^8} = \frac{m^4x^2}{1 + m^8x^4} \implies \lim _{x \to 0} f(x, mx) = 0$
	* Consider a parabolic path $x = y^2$:
		* $f(y^2, y) = \frac{y^4y^4}{y^8 + y^8} = \frac{y^8}{2y^8} = \frac{1}{2} \implies \lim _{y \to 0} f(y^2, y) = \frac{1}{2}$
	* Again the limit does not exist
* To prove that the limit actually does exist we need an epsilon delta proof
* Example: $\lim _{\vec x \to \vec 0} \frac{2xy^2}{x^2 + y^2}$
	* Impose $\varepsilon > 0$, require $\abs{f - L} = \abs*{\frac{2xy^2}{x^2 + y^2} - 0} = \frac{2y^2\abs{x}}{x^2 + y^2} < \varepsilon$, when $0 < \norm*{\vec x - \vec x_0} = \sqrt{x^2 + y^2} < \delta$
	* $\alignedimp[t]{y^2 \leq x^2 + y^2}{\frac{y^2}{y^2} \geq \frac{y^2}{x^2 + y^2}}{\frac{2y^2\abs{x}}{x^2 + y^2} \leq \frac{2y^2\abs{x}}{y^2} = 2\abs{x}}{2\abs{x} = 2\sqrt{x^2} \leq 2\sqrt{x^2 + y^2} < 2\delta}$
		* Therefore choose $\delta = \frac{\varepsilon}{2} \implies \abs*{\frac{2y^2x}{x^2 + y^2}} < \varepsilon$
	* Therefore $\lim _{\vec x \to \vec 0} \frac{2xy^2}{x^2 + y^2} = 0$

