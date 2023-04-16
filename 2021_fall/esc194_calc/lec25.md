# Lecture 25, Nov 15, 2021

## Properties of $\ln x$

* Further properties of $\ln x$:
	1. Defined on $(0, \infty)$, and $\diff{}{x} \ln x = \frac{1}{x}$
	2. $\ln x$ is continuous since it is differentiable
	3. For all $x > 1$, $\ln x > 0$, since the integral area is always positive
	4. For $0 < x < 1$, $\ln x < 0$ as follows from the previous point
	5. $\ln(a + b) = \ln a + \ln b$
		* This can be proven using a different way
		* $\diff{}{x}\ln x = \frac{1}{x}$, and $\diff{}{x}\ln(ax) = \frac{1}{ax} \cdot a = \frac{1}{x}$
		* Since $\ln x$ and $\ln(ax)$ have same derivative, they differ by a constant, so
		* Therefore $\ln(ax) = \ln(x) + C$, and if we let $x = 1 \implies \ln a = 0 + C = C$, therefore $\ln(ax) = \ln(x) + \ln(a)$
	6. $\ln\left(x^{\frac{p}{q}}\right) = \frac{p}{q}\ln x$
		* We can show this in the same way as the one above
		* $\diff{}{x}\ln\left(x^{\frac{p}{q}}\right) = \frac{1}{x^{\frac{p}{q}}} \cdot \frac{p}{q}x^{\frac{p}{q} - 1} = \frac{p}{q}\frac{1}{x} = \diff{}{x}\frac{p}{q}\ln x$
		* Therefore $\ln\left(x^{\frac{p}{q}}\right) = \frac{p}{q}\ln x + C$, and now if we let $x = 1$, then $0 = C$
	7. The range of $\ln x$ is $(-\infty, \infty)$ (i.e. it is unbounded)
		* Proof that $\ln$ is unbounded as $x \to \infty$: Show that for $M > 0$ imposed, there exists a $x_0$ such that $x > x_0 \implies \ln x > M$
			* Begin with $\ln 2 = \int _1^2 \frac{1}{t}\,\dt$, and since the integrand is always positive, $\ln 2 > 0$
			* Therefore, we can always find some positive $n$ such that $n\ln 2 > M$ no matter how big $M$ is, so choose $x_0 = 2^n$
			* When $x > x_0 = 2^n$, we have $\ln x > n\ln 2 > M$, therefore $x$ is unbounded above
		* A similar argument follows for when $x \to 0$, therefore $x = 0$ is a vertical asymptote
	8. $\ln e = 1$
		* Since the $\ln x$ is unbounded and starts at 0 when $x = 1$, it must take on the value of 1 sometime, so we call this value $e$
	9. Convention $\ln x = \log _e(x)$
	10. $\diff{}{x}\ln x = \frac{1}{x} > 0$ so it is increasing, $\diffn{2}{}{x}\ln x = -\frac{1}{2x} < 0$ so it is concave down

## Graphing Logarithms

* Chain rule with logarithms: $\diff{}{x}\ln u = \frac{1}{u}\diff{u}{x}$
* When graphing a logarithm note the argument can only be positive, and when it approaches zero, the value of the logarithm approaches negative infinity
* x intercepts when the argument is 1

## Using Logarithms to Integrate and Differentiate

* $\int \frac{1}{x}\,\dx = \ln\abs{x} + C$, absolute value because the domain of $\frac{1}{x}$ includes the negative numbers
* More generally, $\int \frac{g'(x)}{g(x)}\,\dx = \ln\abs{g(x)} + C$ for $g(x) \neq 0$ (by substitution)
* Example: $\alignedeqntwo[t]{\int \tan x\,\dx}{\int \frac{\sin x}{\cos x}\,\dx}{-\int \frac{1}{u}\,\du}{-\ln\abs{u}}{-\ln\abs{\cos x} + C}{\ln\abs{\sec x} + C}$
* Example: $\alignedeqntwo[t]{\int \cot x\,\dx}{\int \frac{\cos x}{\sin x}\,\dx}{\int \frac{1}{u}\,\du}{\ln\abs{u} + C}{\ln\abs{\sin x} + C}$
* Example: $\alignedeqntwo[t]{\int \sec x\,\dx}{\int \sec x \cdot \frac{\sec x + \tan x}{\sec x + \tan x}\,\dx}{\int \frac{\sec^2 x + \sec x\tan x}{\sec x + \tan x}}{\int \frac{1}{u}\,\du}{\ln\abs{u} + C}{\ln\abs{\sec x + \tan x} + C}$

