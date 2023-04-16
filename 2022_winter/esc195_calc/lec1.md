# Lecture 1, Prerecorded

## Hyperbolic Trig Functions

* Hyperbolic sine: $\sinh x = \frac{e^x - e^{-x}}{2}$, hyperbolic cosine: $\cosh x = \frac{e^x + e^{-x}}{2}$
	* $\diff{}{x}\sinh x = \cosh x$ and $\diff{}{x}\cosh x = \sinh x$
	* Note there is no longer a negative sign!
* $\sinh$ is an odd function and has a point of inflection at the origin; for large positive it behaves like $\frac{1}{2}e^x$, large negative $-\frac{1}{2}e^{-x}$
	* Basically two exponentials stitched together
	* Note it does cross the origin ($\sinh 0 = 0$)
* $\cosh$ is an even function and always concave up; for large positive $\frac{1}{2}e^x$, large negative $\frac{1}{2}e^{-x}$
	* Does not cross the origin; $\cosh 0 = 1$
* Pythagorean identity analogue: $\cosh^2 x - \sinh^2 x = 1$
	* This means we can define the functions using a hyperbola
	* Notice a circle is $x^2 + y^2 = 1$ where points are $(\cos t, \sin t)$ and the area of the circular section is $\frac{1}{2}t$
	* Likewise a hyperbola is $x^2 - y^2 = 1$ where points are $(\cosh t, \sinh t)$ and the area of the hyperbolic sector is also $\frac{1}{2}t$
* Best known application is the shape of a catenary $y = a\cosh\left(\frac{x}{a}\right) + C$
* Define $\tanh = \frac{\sinh x}{\cosh x} = \frac{e^x - e^{-x}}{e^x + e^{-x}}$
	* Other hyperbolic functions follow
	* Hyperbolic derivatives are extremely similar to regular trig derivatives; e.g. $\diff{}{x}\tanh x = \sech^2 x$
* Hyperbolic trig functions are *not* periodic
* We can find inverses: $\alignedimp[t]{x = \sinh y = \frac{e^y - e^{-y}}{2}}{2x = e^y - e^{-y}}{0 = e^y - e^{-y} - 2x}{0 = e^{2y} - 2xe^y - 1}{e^y = \frac{2x \pm \sqrt{4x^2 + 4}}{2}}{e^y = x + \sqrt{x^2 + 1}}{y = \ln\left(x + \sqrt{x^2 + 1}\right)}{\sinh^{-1}x = \ln\left(x + \sqrt{x^2 + 1}\right)}$
* $\diff{}{x}\sinh^{-1}x = \frac{1}{\sqrt{x^2 + 1}} \implies \int \frac{1}{\sqrt{1 + x^2}}\,\dx = \sinh^{-1}x + C = \ln\left(x + \sqrt{x^2 + 1}\right) + C$
* Important identities and differences:
	* $\sinh$ is odd, $\cosh$ is even
	* Pythagorean identity now uses minus; so does $1 - \tanh^2 x = \sech^2 x$
	* $\cosh(x + y)$ is two terms added instead of difference of two terms
	* $\diff{}{x}\cosh x = \sinh x$, without the minus sign
	* $\diff{}{x}\sech x = -\sech x\tanh x$ (as opposed to the normal $\diff{}{x}\sec x = \sec x\tan x$
	* Inverses: $\sinh^{-1} x = \ln\left(x + \sqrt{x^2 + 1}\right), \cosh^{-1} x = \ln\left(x + \sqrt{x^2 - 1}\right), \tanh^{-1} x = \frac{1}{2}\ln\left(\frac{1 + x}{1 - x}\right)$
	* Derivatives of inverses:
		* $\diff{}{x}\sinh^{-1} x = \frac{1}{\sqrt{x^2 + 1}}$
		* $\diff{}{x}\cosh^{-1} x = \frac{1}{\sqrt{x^2 - 1}}$
		* $\diff{}{x}\tanh^{-1} x = \frac{1}{1 - x^2}$
		* $\diff{}{x}\csch^{-1} x = -\frac{1}{\abs{x}\sqrt{x^2 + 1}}$
		* $\diff{}{x}\sech^{-1} x = -\frac{1}{x\sqrt{1 - x^2}}$
		* $\diff{}{x}\coth^{-1} x = \frac{1}{1 - x^2}$
		* Note the derivatives of $\tanh^{-1}$ and $\coth^{-1}$ have identical expressions, but the domain of each is different; $\tanh^{-1} x$ is defined for $\abs{x} > 1$ and $\coth^{-1} x$ for $\abs{x} > 1$

