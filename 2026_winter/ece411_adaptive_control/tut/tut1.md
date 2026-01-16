# Tutorial 1, Jan 12, 2026

## Discrete-Time Models

* Consider the system $y(k + 2) - 6y(k + 1) + 8y(k) = u(k)$
	* Find its transfer function $G(z) = \frac{Y(z)}{U(z)}$
		* $\alignedimp[t]{z^2Y(z) - 6zY(z) + 8Y(z) = U(z)}{Y(z)(z^2 - 6z + 8) = U(z)}{\frac{Y(z)}{U(z)} = \frac{1}{z^2 - 6z + 8}}$
	* Find its state-space realization
		* Recall that the number of required states is equal to the largest forward shift in the difference equation, so we need two states
		* Let $x_1(k) = y(k), x_2(k) = y(k + 1) \implies x(k) = \cvec{y(k)}{y(k + 1)}$
		* $x(k + 1) = \cvec{y(k + 1)}{y(k + 2)} = \cvec{x_2(k)}{u(k) - 8x_1(k) + 6x_2(k)} = \mattwo{0}{1}{-8}{6}x(k) + \cvec{0}{1}u(k)$
		* $y(k) = \rvec{1}{0}\cvec{x_1(k)}{x_2(k)}$
		* This system is now in controllable canonical form
* Consider the system $y(k + 2) - 4y(k + 1) + 3y(k) = u(k + 1) + 2u(k)$
	* Find its transfer function
		* $z^2Y(z) - 4zY(z) + 3Y(z) = zU(z) + 2U(z) \implies \frac{Y(z)}{U(z)} = \frac{z + 2}{z^2 - 4z + 3}$
	* Find its state-space realization
		* Since there is a forward shift on the input, we need to break up the system into a state equation and a measurement equation, which is easiest with the transfer function
		* Let $V(z) = \frac{1}{z^2 - 4z + 3}U(z), Y(z) = (z + 2)V(z)$
		* Let $x = \cvec{v(k)}{v(k + 1)}$
		* State equation:
			* Inverse Z-transform: $v(k + 2) - 4v(k + 1) + 3v(k) = u(k)$
			* $x(k + 1) = \cvec{x_2(k)}{u(k) - 3x_1(k) + 4x_2(k)} = \mattwo{0}{1}{-3}{4}x(k) + \cvec{0}{1}u(k)$
		* Measurement equation: $y(k) = v(k + 1) + 2v(k) = x_2(k) + 2x_1(k) = \rvec{2}{1}\cvec{x_1(k)}{x_2(k)}$
* For a system in controllable canonical form, $A = \mat{\mrow{0}{1}{0}{\cdots}{0}\mrow{0}{0}{1}{\cdots}{0}\mrow{\vdots}{\vdots}{\vdots}{\ddots}{\vdots}\mrow{0}{0}{0}{\cdots}{1}\mrow{-a_n}{-a_{n - 1}}{-a_{n - 2}}{\cdots}{-a_1}}$, it has characteristic polynomial $s^n + a_1s^{n - 1} + \cdots + a_{n - 1}s + a_n$
* Matrix powers can be found using the inverse Z-transform: $A^k = \iztf{(zI - A)^{-1}z}$

