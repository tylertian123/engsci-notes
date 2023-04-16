# Lecture 24, Nov 5, 2021

## Inverse Functions

* Definition: $f(x)$ is one-to-one if $f(x_1) = f(x_2) \implies x_1 = x_2$; alternatively, $x_1 \neq x_2 \implies f(x_1) \neq f(x_2)$
* To check for one-to-one we can use a horizontal line test like the vertical line test for functions
* Definition: Let $f(x)$ be a one-to-one function with domain $A$ and range $B$, then its *inverse function* $f^{-1}(x)$ has domain $B$ and range $A$ and is defined by $f^{-1}(y) = x \iff f(x) = y$, alternatively $f^{-1}(f(x)) = x$
	* Only one-to-one functions possess inverses
* Example: If $f(x) = x^3$, then $y = f^{-1}(x) \implies f(y) = x \implies y^3 = x \implies y = x^{\frac{1}{3}} \implies f^{-1}(x) = \sqrt[3]{x}$
* Functions and their inverses are reflections of each other across $y = x$
* Theorem: If $f$ is either increasing or decreasing then it is one-to-one and hence has an inverse
	* Proof: Suppose $f(x)$ is decreasing, then $x_1 < x_2 \implies f(x_1) > f(x_2)$ and $x_1 > x_2 \implies f(x_1) < f(x_2)$, therefore $x_1 \neq x_2 \implies f(x_1) \neq f(x_2)$; same goes for increasing functions
	* Example: $f(x) = 2x - 1$ has $f'(x) = 2 > 0$ therefore $2x - 1$ is one-to-one
	* Note there are functions where the derivative could be equal to zero at *finite* locations but are still increasing or decreasing; e.g. $f(x) = x^3$
* Theorem: If $f$ is continuous, then its inverse is also continuous
* Let $g(x) = f^{-1}(x)$; then $g'(x) = \frac{1}{f'(g(x))}$, or in Leibniz notation, $\diff{y}{x} = \frac{1}{\diff{x}{y}}$
* Example: $f(x) = \frac{1}{x}$ on $(0, \infty)$
	* $f'(x) = -\frac{1}{x^2} < 0$ so the function is decreasing and one-on-one
	* $f^{-1}(x) = \frac{1}{x}$; this function is its own inverse
* The inverse of a composite function $(f \circ g)^{-1} = g^{-1} \circ f^{-1}$

## Natural Logarithms

* Definition: A logarithmic function is a non-constant differentiable function $f$, defined for $x > 0$, such that for all $a > 0$ and $b > 0$, $f(ab) = f(a) + f(b)$
	* This is all that's required to define logarithms and exponentials!
* We get some properties immediately:
	1. $f(1) = 0$
		* $f(1) = f(1 \cdot 1) = f(1) + f(1) \implies f(1) = 2f(1) \implies f(1) = 0$
	2. $f\left(\frac{1}{x}\right) = -f(x)$
		* $0 = f(1) = f\left(x \cdot \frac{1}{x}\right) = f(x) + f\left(\frac{1}{x}\right) \implies f\left(\frac{1}{x}\right) = -f(x)$
	3. $f\left(\frac{x}{y}\right) = f(x) - f(y)$
		* $f\left(\frac{x}{y}\right) = f\left(x \cdot \frac{1}{y}\right) = f(x) - f(y)$
	4. $f'(x) = \frac{1}{x}f'(1)$
		* $\alignedeqntwo[t]{f'(x)}{\lim _{h \to 0} \frac{f(x + h) - f(x)}{h}}{\lim _{h \to 0} \frac{1}{h}f\left(\frac{x + h}{x}\right)}{\lim _{h \to 0} \frac{f\left(1 + \frac{h}{x}\right) - f(1)}{h}}{\lim _{h \to 0} \frac{f\left(1 + \frac{h}{x}\right)}{h}}{\frac{1}{x} \lim _{h \to 0} \frac{f\left(1 + \frac{h}{x}\right) - f(1)}{x \cdot \frac{h}{x}}}{\frac{1}{x} \lim _{k \to 0} \frac{f(1 + k) - f(1)}{k}}{\frac{1}{x}f'(1)}$
* Since the derivative of the logarithm is scaled by $f'(1)$, it's natural to choose $f'(1) = 1$ (note that if we chose 0, then the derivative would be always 0 and thus the function would be constant, violating our constraint), therefore $f'(x) = \frac{1}{x}$; now we can use the FTC to define $f(x) = \int _1^x \frac{1}{t}\,\dt$, starting at 1 because $f(1)$ needs to be zero
* Definition: The natural logarithm, $\ln x = \int _1^x \frac{1}{t}\,\dt$ for $x > 0$

