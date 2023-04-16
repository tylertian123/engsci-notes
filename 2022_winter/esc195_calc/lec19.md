# Lecture 19, Mar 1, 2022

## Multiplication and Division of Power Series

* Example: $\frac{e^x}{1 - x}$
	* We can find its Taylor expansion by multiplying two series together: $\left(1 + x + \frac{x^2}{2!} + \cdots\right)\left(1 + x + x^2 + \cdots\right)$
* Generally the radius of convergence of a product or ratio is the smaller of the two radii
* Example: $\tan x = \frac{\sin x}{\cos x}$
	* $\frac{x - \frac{x^3}{3!} + \frac{x^5}{5!} + \cdots}{1 - \frac{x^2}{2} + \frac{x^4}{4!} + \cdots}$
	* Note here the radius of convergence is $\abs{x} < \frac{\pi}{2}$

## Applications of Taylor Polynomials

* Error bounds can be found for Taylor approximations:
	1. If it's an alternating series, then like all alternating series the error bound is just the next term
	2. Otherwise, the error bound can be computed using Taylor's theorem $R_n = \int _a^x \frac{(t - a)^n}{n!}f^{(n + 1)}(t)\,\dt < M\frac{(x - a)^{n + 1}}{(n + 1)!}$
* Example: Using the Taylor expansion of $\sqrt{x}$ about $a = 1$, evaluate $\sqrt{1.25}$
	* Derivatives:
		* $f(x) = x^\frac{1}{2} \implies f(1) = 1$
		* $f'(x) = \frac{1}{2}x^{-\frac{1}{2}} \implies f'(1) = \frac{1}{2}$
		* $f''(x) = -\frac{1}{4}x^{-\frac{3}{2}} \implies f''(1) = -\frac{1}{4}$
		* $f'''(x) = \frac{3}{8}x^{-\frac{5}{2}} \implies f'''(1) = \frac{3}{8}$
		* $f''''(x) = -\frac{15}{16}x^{-\frac{7}{2}} \implies f''''(1) = \frac{-15}{16}$
	* $\sqrt{x} \approx T_3(x) = 1 + \frac{1}{2}(x - 1) - \frac{1}{4}\frac{(x - 1)^2}{2!} + \frac{3}{8}\frac{(x - 1)^3}{3!}$
		* Since this is an alternating series: $\abs{R_3(x)} < \abs{a_4} = \frac{15}{16}\frac{(x - 1)^4}{4!}$
	* $\sqrt{1.25} \approx 1.11816 \pm 0.00015$
* Example: Maximum error for the Maclaurin series of $\cos x$ for $\abs{x} < \frac{\pi}{4}$ for $n = 3$
	* $\cos x \approx T_3(x) = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!}$
	* Another alternating series, so the uncertainty is $\abs{R_3(x)} < \frac{x^8}{8!} < \frac{\left(\frac{\pi}{4}\right)^8}{8!} = \num{3.6e-6}$
	* Alternatively, using the Taylor remainder formula $\abs{R_3(x)} < 1\abs*{\frac{x^8}{8!}}$
* Example: Find $\ln(1.4)$ to within $0.001$ with $\ln(1 - x)$
	* $\ln(1 - x) = -x - \frac{x^2}{2} - \frac{x^3}{3} - \cdots$
	* When $x$ is negative this is an alternating series so we can use the next term as an error bound
	* $\abs{R_5(x)} = \abs*{\frac{x^6}{6}} = \frac{0.4^6}{6} = 0.0007$ so we need to take 5 terms

