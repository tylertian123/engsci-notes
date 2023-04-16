# Lecture 17, Feb 18, 2022

## Representing Functions as Power Series

* Example: $\frac{x}{x - 3}$
	* $\frac{x}{x - 3} = -x \cdot \frac{1}{3 - x} = -\frac{x}{3} \cdot \frac{1}{1 - \frac{x}{3}} = -\frac{x}{3}\left(1 + \frac{x}{3} + \left(\frac{x}{3}\right)^2 + \cdots\right) = -\sum _{n = 0}^\infty \left(\frac{x}{3}\right)^{n + 1}$
	* Converges for $\abs{x} < 3$
* Theorem: Term-by-Term Differentiation and Integration: For $\sum C_n(x - a)^n$ with radius of convergence $R = R_0 > 0$ then $f(x) = \sum _{n = 0}^\infty C_n(x - a)^n$ is continuous and differentiable on $(a - R_0, a + R_0)$, and:
	* $f'(x) = \sum _{n = 1}^\infty nC_n(x - a)^{n - 1}$
		* Note the sum now starts from $n = 1$, because there is a constant term that disappears
		* Alternatively, $\diff{}{x}\left(\sum _{n = 0}^\infty C_n(x - a)^n\right) = \sum _{n = 0}^\infty \diff{}{x}\left(C_n(x - a)^n\right)$
	* $\int f(x)\,\dx = C + \sum _{n = 0}^\infty \frac{C_n}{n + 1}(x - a)^{n + 1}$
		* Alternatively, $\int\left(\sum _{n = 0}^\infty C_n(x - a)^n\right)\,\dx = \sum _{n = 0}^\infty \int\left(C_n(x - a)^n\right)\,\dx$
	* Both derived series have the same radius of convergence, but the behaviour at end points may change
* This allows us to calculate some otherwise difficult integrals, e.g. $\int _0^{0.1} \frac{1}{1 + x^4}\,\dx$
* Example: $\frac{1}{(1 + x)^2}$
	* Note $\diff{}{x}\left(-\frac{1}{1 + x}\right) = \frac{1}{(1 + x)^2}$
	* $\frac{1}{(1 + x)^2} = \diff{}{x} \left(-\frac{1}{1 + x}\right) = \diff{}{x}\left(-\sum _{n = 0}^\infty (-x)^n\right) = \sum _{n = 1}^\infty (-1)^{n + 1}nx^{n - 1} = \sum _{n = 1}^\infty (-1)^n(n + 1)x^n$
* Example: $\ln(1 - x)$
	* $\ln(1 - x) = -\int \frac{1}{1 - x}\,\dx = -\int \sum _{n = 0}^\infty x^n\,\dx = C - \sum _{n = 0}^\infty \frac{x^{n + 1}}{n + 1} = -\sum _{n = 0}^\infty \frac{x^n}{n}$
	* Solve for the constant of integration: Set $x = 0$, $\ln(1 - 0) = 0 = C$
* Example: $\tan^{-1} x$
	* $\diff{}{x} \tan^{-1} x = \frac{1}{1 + x^2}$
	* $\tan^{-1} x = \int \frac{1}{1 + x^2}\,\dx = \sum _{n = 0}^\infty \int (-1)^nx^{2n}\,\dx = C + \sum _{n = 0}^\infty (-1)^n\frac{x^{2n + 1}}{2n + 1} = C + x - \frac{x^3}{3} + \frac{x^5}{5} - \cdots$
	* Calculate constant of integration by $x = 0$: $C = \tan^{-1} 0 = 0$
	* $\tan^{-1} x = \sum _{n = 0}^\infty (-1)^n\frac{x^{2n + 1}}{2n + 1}$
	* Radius of convergence $R = 1$ follows from the original geometric series; we can test the boundaries to see it also converges for $x = \pm 1$
	* This leads to $\tan^{-1} = \frac{\pi}{4} = 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \cdots$ (Leibniz formula for $\pi$)

## Taylor and Maclaurin Series

* Let $f(x) = C_0 + C_1(x - a) + C_2(x - a)^2 + \cdots$ for $\abs{x - a} < R$
	* Notice that $f(a) = C_0$
	* $f'(x) = C_1 + 2C_2(x - a) + 3C_3(x - a)^2 + \cdots \implies f'(a) = C_1$
	* $f''(x) = 2C_2 + 6C_3(x - a) + 12C_4(x - a)^2 + \cdots \implies f''(a) = 2C_2$
	* Following this pattern we note that $f^{(n)}(a) = n!C_n$
* Theorem: If $f(x)$ has a power series representation about $a$ of $f(x) = \sum _{n = 0}^\infty C_n(x - a)^n$ for $\abs{x - a} < R$ then the coefficients are given by $C_n = \frac{f^{(n)}(a)}{n!}$
	* $f(x) = \sum _{n = 0}^\infty \frac{1}{n!}f^{(n)}(a)(x - a)^n = f(a) + f'(a)(x - a) + \frac{1}{2!}f''(a)(x - a)^2 + \frac{1}{3!}f'''(a)(x - a)^3 + \cdots$
	* This is known as the *Taylor series* of $f$ about $a$
	* In the special case where $a = 0 \implies f(x) = f(0) + f'(0)x + \frac{1}{2!}f''(0)x^2 + \cdots$ this is called a Maclaurin series
* Definition: A function is *analytic* at $a$ if it can be represented as a power series about $a$
	* The function essentially needs to be infinitely differentiable at $a$
* Example: $f(x) = e^x$ about $0$
	* All derivatives at $0$ are equal to $1$
	* $e^x = \sum _{n = 0}^\infty \frac{x^n}{n!}$
	* To determine our ratio of convergence use the ratio test: $\abs*{\frac{a_{n + 1}}{a_n}} = \abs*{\frac{x^{n + 1}}{(n + 1)!} \cdot \frac{n!}{x^n}} = \frac{x}{n + 1} \underset{n \to \infty}{\to} 0$ so the series converges for all $x$

