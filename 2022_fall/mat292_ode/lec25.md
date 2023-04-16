# Lecture 25, Nov 4, 2022

## Properties of the Laplace Transform

1. Exponential in $t$ is a shift in $s$: $\laplace{f(t)} = F(s), s > a \implies \laplace{e^{ct}f(t)} = F(s - c), s > a + c$
	* e.g. $\laplace{e^{-2t}\sin(4t)} = \frac{4}{(s + 2)^2 + 16}, s > 2$
2. Derivative in $t$ is a multiplication by s: $\laplace{f'(s)} = s\laplace{f(t)} - f(0)$
	* Derived by integration by parts
	* $\alignedeqntwo[t]{\int _0^\infty e^{-st}f'(t)\,\dt}{\inteval{e^{-st}f(t)}{0}{\infty} + s\int _0^\infty e^{-st}f(t)\,\dt}{s\laplace{f(t)} - f(0)}$
	* We need to assume that the function does not blow up
3. Corollary: $\laplace{f^{(n)}(t)} = s^n\laplace{f(t)} - s^{n - 1}f(0) - s^{n - 2}f'(0) - \cdots - sf^{(n - 2)}(0) - f^{(n - 1)}(0)$
	* e.g. $\diffn{4}{y}{t} - y = 0$ with initial conditions $y(0) = 0, \eval{\diff{y}{t}}{t = 0} = 0, \eval{\diffn{2}{y}{t}}{t = 0} = 0, \eval{\diffn{3}{y}{t}}{t = 0} = 1$
		* Take the Laplace transform of both sides
		* $s^4\laplace{y(t)} - s^3f(0) - s^2f'(0) - sf''(0) - f'''(0) - \laplace{y} = 0$
		* $s^4\laplace{y(t)} - \laplace{y} = 1 \implies \laplace{y(t)} = \frac{1}{s^4 - 1}$
	* Starting with an ODE in $t$, we get a polynomial in $s$
4. Multiplication by $t^n$ is an $n$-th derivative in $s$: $\laplace{t^nf(t)} = (-1)^nF^{(n)}(s)$

