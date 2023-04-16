# Lecture 26, Nov 17, 2021

## Logarithmic Differentiation

* If we want to differentiate a lengthy product $g(x) = g_1(x)g_2(x) \cdots g_n(x)$, we can take the log of both sides to get $\ln\abs{g(x)} = \ln\abs{g_1(x)} + \ln\abs{g_2(x)} + \cdots + \ln\abs{g_n(x)}$, then differentiate $\frac{g'(x)}{g(x)} = \frac{g_1'(x)}{g_1(x)} + \frac{g_2'(x)}{g_2(x)} + \cdots + \frac{g_n'(x)}{g_n(x)}$, and multiply by $g(x)$ to get $g'(x) = g(x)\sum _{i = 1}^n\frac{g_i'(x)}{g_i(x)}$ (known as *logarithmic differentiation*)
* Example: $\diff{}{x}\frac{x^4(x - 1)}{(x + 2)(x^2 + 1)} = \frac{x^4(x - 1)}{(x + 2)(x^2 + 1)}\left[\frac{4x^3}{x^4} + \frac{1}{x - 1} - \frac{1}{x + 2} - \frac{2x}{x^2 + 1}\right]$
	* Notice that if a term is in the denominator it is subtracted instead, since the logarithm of that term is negative

## The Natural Exponential

* Using the natural logarithm, we can extend the domain of the exponential to irrational numbers
* From the IVT we know that for some irrational $z$, $\ln x$ will take on that value at some point
* Definition: Let $z$ be an irrational; then $e^z$ is the unique number such that $\ln e^z = z$
* Definition: The exponential function $\exp x = e^x$, defined as the number such that $\ln e^x = x$
* Properties of the exponential:
	1. $\ln$ is the inverse of the exponential: $\ln e^x = x$ for $x \in \mathbb{R}$ as per our definition of the exponential and irrational powers
	2. $e^x > 0$, which comes from the fact that $\ln e^x$ is only defined for positive $e^x$
	3. $e^0 = 1$ from $\ln 1 = 0$
	4. $\lim _{x \to -\infty} e^x = 0$
	5. $e^{\ln x} = x$
	6. $e^{a + b} = e^a \cdot e^b$
		* From $\ln(e^a \cdot e^b) = \ln e^a + \ln e^b = a + b = \ln e^{a + b}$
	7. In a similar manner $e^{-b} = \frac{1}{e^b}$ and $e^{a - b} = \frac{e^a}{e^b}$, both of which come from the logarithm
	8. $\diff{}{x} e^x = e^x$
		* $\ln e^x = x \implies \diff{}{x}\ln e^x = \frac{1}{e^x}\diff{}{x}e^x = \diff{}{x}x = 1 \implies \diff{}{x}e^x = e^x$
	9. $\diff{}{x}e^{kx} = ke^{kx}$ from the chain rule
	10. $\int e^x\,\dx = e^x + C$
	12. $\int e^{g(x)}g'(x)\,\dx = e^{g(x)} + C$

