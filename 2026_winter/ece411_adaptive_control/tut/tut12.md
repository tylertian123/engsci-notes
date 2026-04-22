# Tutorial 12, Mar 30, 2026

* Consider the system: $\begin{aligned}[t] x(k + 1) &= \mattwo{0}{1}{-1}{0}x(k) + \cvec{1}{1}u(k) \\ y(k) &= \rvec{1}{0}x(k) \end{aligned}$
	* Design a regulator to make $y(k)$ track $r(k) = \bar r \cdot 1(k)$ (i.e. a step input)
		* First, we build an exosystem for the disturbance and reference
			* Since there is no disturbance and a constant reference, we simply have $S = 1$ and $w(0) = \bar r$
			* $e(k) = Cx(k) + Dw(k) = y(k) - r(k) = y(k) - w(k)$ and therefore $D = -1$
		* Design the feedback gain
			* $A + BK = \mattwo{k_1}{k_2 + 1}{k_1 - 1}{k_2}$
			* $\det(zI - (A + BK)) = z^2 + (-k_1 - k_2)z + 1 + k_2 - k_1$
			* We choose $\Delta _d(z) = z^2 + \frac{1}{4}$ (arbitrary as long as $\abs{\lambda} < 1$)
			* This gives us $K = \rvec{\frac{3}{8}}{-\frac{3}{8}}$
		* Solve the regulator equations
			* $\cvec{\pi _1}{\pi _2}S = \mattwo{0}{1}{-1}{0}\cvec{\pi _1}{\pi _2} + \cvec{1}{1}\Gamma$
			* $\rvec{1}{0}\cvec{\pi _1}{\pi _2} - 1 = 0$
			* We get $\Pi = \cvec{1}{0}, \Gamma = 1$
		* The state feedback solution is $u(k) = w(k) + \rvec{\frac{3}{8}}{-\frac{3}{8}}\left(x(k) - \cvec{1}{0}w(k)\right)$
		* Since $x(k)$ and $w(k)$ are not directly measurable we design the observers
			* We want $\bar A - L\bar C$ to be Schur stable, where $\bar A = \mattwo{A}{E}{0}{S}, \bar C = \rvec{C}{D}$
			* $\bar A - L\bar C = \matthree{-l_1}{1}{l_1}{-1 - l_2}{0}{l_2}{-l_3}{0}{1 + l_3}$
			* $\det(zI - (\bar A - L\bar C)) = z^2 + (l_1 - 1 - l_3)z^2 + (1 + l_2 - l_1)z - 1 - l_2 - l_3$
			* Choose to have $\Delta _d(z) = z^3 \implies L = \cvec{1/2}{-1/2}{1/2}$
				* Note this is a deadbeat observer
			* $\hat x(k + 1) = \mattwo{0}{1}{-1}{0}\hat x(k) + \cvec{1}{1}u(k) + \cvec{1/2}{-1/2}(e(k) - \hat e(k))$
			* $\hat w(k + 1) = \hat w(k) - \frac{1}{2}(e(k) - \hat e(k))$
			* $\hat e(k) = \rvec{1}{0}\hat x(k) - \hat w(k)$

