# Tutorial 6, Feb 23, 2026

* Write a state-space model for the filtered regressor $w_f(k) = H(z)I[w(k)]$ where $H(z) = \frac{1}{z^2 - z + \frac{1}{4}}, w(k) = \cvec{\sin k}{1}$
	* First convert $H(z)$ to state space
		* $\frac{Y(z)}{U(z)} = \frac{1}{z^2 - z + \frac{1}{4}}$
		* Inverse Z transform: $y(k + 2) - y(k + 1) + \frac{1}{4}y(k) = u(k)$
		* Let $x_1(k) = y(k), x_2(k) = y(k + 1)$
		* $\cvec{x_1(k + 1)}{x_2(k + 1)} = \cvec{x_2(k)}{x_2(k) - \frac{1}{4}x_1(k) + u(k)}$
	* Filter each component of the regressor separately
		* $x_1(k + 1) = x_2(k)$
		* $x_2(k + 1) = x_2(k) - \frac{1}{4}x_1(k) + w_1(k)$
		* $w_{f_1}(k) = x_1(k)$
		* $x_3(k + 1) = x_4(k)$
		* $x_4(k + 1) = x_4(k) - \frac{1}{4}x_3(k) + w_2(k)$
		* $w_{f_2}(k) = x_3(k)$
	* Combined system: $\twopiece{x(k + 1) = \matfour{0}{1}{0}{0}{-\frac{1}{4}}{1}{0}{0}{0}{0}{0}{1}{0}{0}{-\frac{1}{4}}{1}x(k) + \mat{\mrow{0}{0}\mrow{1}{0}\mrow{0}{0}\mrow{0}{1}}\cvec{w_1(k)}{w_2(k)}}{w_f(k) = \mat{\mrow{1}{0}{0}{0}\mrow{0}{0}{1}{0}}x(k)}$
* Determine if the equilibrium of the previous system is stable, AS, or ES using a Lyapunov argument
	* Since we have 2 decoupled systems that are identical, we can simply prove stability for one of the systems
	* $A = \mattwo{0}{1}{-\frac{1}{4}}{1}$
	* Set $Q = I$, solve for $P$ such that $A^TPA - P = -Q$
	* $\mattwo{0}{-\frac{1}{4}}{1}{1}\mattwo{p_1}{p_2}{p_2}{p_3}\mattwo{0}{1}{-\frac{1}{4}}{1} - \mattwo{p_1}{p_2}{p_2}{p_3} = \mattwo{-1}{0}{0}{-1}$
	* After getting a solution, we use the Lyapunov function $V(x) = x^TPx$, with $\Delta V(x(k)) = -x^TQx$ to prove exponential stability
* Consider the discrete-time system $x(k + 1) = \matthree{0}{1}{0}{0}{0}{1}{3}{-1}{1}x(k) + \cvec{0}{0}{1}u(k), x(0) = \cvec{1}{1}{0}$ and suppose the state is not measurable; find a sequence of inputs $u(k)$ such that $x(5) = 0$
	* Since we have $x(5) = 0$, we want to do deadbeat control
	* $(A, B)$ is controllable since we have controllable canonical form
	* Let $K = \rvec{k_1}{k_2}{k_3}$ and find $K$ such that $\sigma(A + BK) = \set{0, 0, 0}$
		* $A + BK = \matthree{0}{1}{0}{0}{0}{1}{3 + k_1}{-1 + k_2}{1 + k_3} \implies \Delta _{A + BK}(s) = s^3 - (k_3 + 1)s^2 - (k_2 - 1)s - (k_1 + 3)$
		* To get the correct spectrum, take $K = \rvec{-3}{1}{-1}$ and the controller $u(k) = Kx(k) = -3x_1(k) + x_2(k) - x_3(k)$
	* $x(k)$ is not measurable, but we know the initial conditions and the system parameters, so we can simulate the system as $x(k + 1) = (A + BK)x(k)$ and get $u(k) = Kx(k)$ for each step

