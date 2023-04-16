# Lecture 30, Nov 28, 2022

## Convolutions

\noteDefn{The convolution of two functions $f(t)$ and $g(t)$ is $$(f * g)(t) = \int _0^t f(t - \tau)g(\tau)\,\dd\tau$$ The discrete version for two sequences $f[n]$ and $g[n]$ is $$(f * g)[n] = \sum _{m = -\infty}^\infty f[m]g[n - m]$$}

* Taking one function, flipping it around, shifting it by some amount, and seeing how much the two functions correlate
* Properties:
	* Commutativity: $f * g = g * f$
	* Distributivity: $f * (g_1 + g_2) = f * g_1 + f * g_2$
	* Associativity: $(f * g) * h = f * (g * h)$
	* Zero: $f * 0 = 0 * f = 0$
* Convolution in time domain is multiplication in $s$ domain: $\laplace{f * g} = \laplace{f}\laplace{g}$ (Convolution Theorem)
	* This also holds for the Fourier transform
	* Now if we have to take the inverse Laplace transform of some product, we can just use a convolution!

## Input-Output Problem

* Consider the ODE $ay'' + by' + cy = g(t), y(0) = y_0, y'(0) = y_1$
	* Laplace transform: $(as^2 + bs + c)Y(s) - (as + b)y_0 - ay_1 = G(s)$
	* $Y(s) = \frac{(as + b)y_0 + ay_1 + G(s)}{as^2 + bs + c}$
	* Let $H(s) = \frac{1}{as^2 + bs + c}$ be the *transfer function* of this system
	* $Y(s) = H(s)((as + b)y_0 + ay_1) + H(s)G(s)$
* We get the solution $y(t) = \ilaplace{H(s)((as + b)y_0 + ay_1))} + \int _0^t h(t - \tau)g(\tau)\,\dtau$
	* The first part of this, $\ilaplace{H(s)((as + b)y_0 + ay_1))}$, is the *free response*
		* This is the response of the system to the initial conditions $y(0)$ and $y'(0)$ only, disregarding the forcing function
		* This can be thought of as the solution to the homogeneous system
	* The second part, $\int _0^t h(t - \tau)g(\tau)\,\dtau$, is the *forced response*
		* This is the response of the system to $g(t)$ only, without any initial conditions (i.e. $y(0) = y'(0) = 0$)
		* This can be thought of as a particular solution to the non-homogeneous system
	* Combining the two we get the total response $y(t)$
* Note the forced response is $H(s)G(s)$; if we take $g(t) = \delta(t)$, then $H(s)G(s) = H(s)\laplace{\delta(t)} = H(s)$
	* The transfer function $H(s)$ is simply the impulse response of $ay'' + by' + cy = \delta(t), y(0) = 0, y'(0) = 0$
	* Knowing the impulse response of the system allows us to easily determine the forced response

