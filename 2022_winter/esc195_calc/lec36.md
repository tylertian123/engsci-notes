# Lecture 36, Apr 11, 2022

## Differentiability of an Integral w.r.t. Its Parameter

* Consider $F(x) = \int _c^d f(x, y)\,\dy$; what happens when we try to take its derivative?
* Theorem: If $f(x, y)$ has a continuous derivative with respect to $x$ in the closed rectangle $x \in [a, b], y \in [c, d]$, then for $x \in [a, b]$, $\diff{F}{x} = \diff{}{x}\int _c^d f(x, y)\,\dy = \int _c^d \pdiff{f}{x}\,\dy$
	* Proof: Given $x, x + h \in [a, b]$, then:
		* $\alignedeqntwo[t]{\frac{F(x + h) - F(x)}{h}}{\frac{1}{h}\int _c^d f(x + h, y)\,\dy - \frac{1}{h}\int _c^d f(x, y)\,\dy}{\frac{1}{h}\int _c^d f(x + h, y) - f(x, y)\,\dy}$
		* $\alignedeqntwo[t]{\diff{F}{x}}{\lim _{h \to 0} \frac{F(x + h) - F(x)}{h}}{\lim _{h \to 0} \int _c^d \frac{f(x + h, y) - f(x, y)}{h}\,\dy}{\int _c^d \lim _{h \to 0} \frac{f(x + h, y) - f(x, y)}{h}\,\dy}{\int _c^d \pdiff{f}{x}\,\dy}$
		* We can bring the limit inside the integral, because the integral is a sum and limit laws allow us to distribute the limit over sums
* Example: $F(x) = \int _2^4 e^{xy}\,\dy$
	* Doing the integral first: $F(x) = \inteval{\frac{e^{xy}}{x}}{2}{4} = \frac{e^{4x} - e^{2x}}{x}$
		* $\diff{F}{x} = e^{4x}\left(\frac{4x - 1}{x^2}\right) - e^{2x}\left(\frac{2x - 1}{x^2}\right)$
	* Using the theorem: $\diff{F}{x} = \int _2^4 \pdiff{}{x}e^{xy}\,\dx = \int _2^4 ye^{xy}\,\dy$
		* Using integration by parts: $\inteval{\frac{y}{x}e^{xy}}{2}{4} - \int _2^4 \frac{e^{xy}}{x}\,\dy = \inteval{\left(\frac{y}{x} - \frac{1}{x^2}\right)e^{xy}}{2}{4} = e^{4x}\left(\frac{4x - 1}{x^2}\right) - e^{2x}\left(\frac{2x - 1}{x^2}\right)$
* Consider $A(t) = \int _{x_1(t)}^{x_2(t)} f(x)\,\dx$ and note $\diff{A}{t} = f(x_2(t))\diff{x_2}{t} - f(x_1(t))\diff{x_1}{t}$ by the chain rule and FTC
* Theorem: Leibniz's Rule: Given a region $R$ in the $xy$ plane in which $\phi _1(x), \phi _2(x)$ and $f(x, y)$ are continuously differentiable, if $F(x) = \int _{\phi _1(x)}^{\phi _2(x)} f(x, y)\,\dy$, then $\diff{F}{x} = \int _{\phi _1(x)}^{\phi _2(x)} \pdiff{f}{x}\,\dy + f(x, \phi _2(x))\diff{\phi _2}{x} - f(x, \phi _1(x))\diff{\phi _1}{x}$
* Example: $F(x) = \int _0^{x^2} \sin(xy)\,\dy$
	* $f(x, y) = \sin(xy), \phi _1(x) = 0, \phi _2(x) = x^2$
	* $\pdiff{f}{x} = y\cos(xy), \diff{\phi _1}{x} = 0, \diff{\phi _2}{x} = 2x$
	* $\diff{F}{x} = \int _0^{x^2} y\cos(xy)\,\dy + 2x\sin(x \cdot x^2) + 0\sin(0) = \int _0^{x^2} y\cos(xy)\,\dy + 2x\sin(x^3)$
* This can be used as an integration technique (Feynman integration)
* Example: $F(x) = \int _0^1 \frac{y^x - 1}{\ln y}\,\dy$ for $x > -1$
	* $\alignedeqntwo[t]{\diff{F}{x}}{\int _0^1 \pdiff{}{x}\left(\frac{y^x - 1}{\ln y}\right)\,\dy}{\int _0^1 \frac{y^x\ln y}{\ln y}\,\dy}{\int _0^1 y^x\,\dy}{\inteval{\frac{y^{x + 1}}{x + 1}}{0}{1}}{\frac{1}{x + 1}}$
	* $F(x) = \int \frac{1}{x + 1}\,\dx = \ln\abs{x + 1} + C$
	* From the original expression $F(0) = \int _0^1 \frac{y^0 - 1}{\ln y}\,\dy = 0 \implies C = 0 \implies F(x) = \ln(x + 1)$

