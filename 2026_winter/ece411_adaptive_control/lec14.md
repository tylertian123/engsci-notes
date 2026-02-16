# Lecture 14, Feb 5, 2026

## Theoretical Justification of the Static Error Model

* Consider the static error model: $\twopiece{\hat\psi(k + 1) = \hat\psi(k) - \gamma(k)e(k)w(k)}{e(k) = (\hat\psi(k) - \psi)^Tw(k) = \tilde\psi^T(k)w(k)}$
	* $\alignedeqntwo[t]{\tilde\psi(k + 1)}{\hat\psi(k + 1) - \psi}{\hat\psi(k) - \gamma(k)e(k)w(k) - \psi}{\tilde\psi(k) - \gamma(k)e(k)w(k)}{\tilde\psi(k) - \gamma(k)(\tilde\psi^T(k)w(k))w(k)}{\tilde\psi(k) - \gamma(k)w(k)w^T(k)\tilde\psi(k)}{(I - \gamma(k)w(k)w^T(k))\tilde\psi(k)}{A_{cl}(k)\tilde\psi(k)}$
	* We now have a linear time-varying system
* We can show that the above is stable for $\bar\gamma \in (0, 2)$, and $\hat\psi \in l_\infty, e \in l_\infty$
	* Consider the Lyapunov function $V = \norm{\tilde\psi(k)}^2 = \tilde\psi^T(k)\tilde\psi(k)$
	* $\alignedeqntwo[t]{\Delta V}{V(k + 1) - V(k)}{\tilde\psi^T(k)(I - \gamma(k)w(k)w^T(k))^T(I - \gamma(k)w(k)w^T(k))\tilde\psi(k) - \tilde\psi^T(k)\tilde\psi(k)}{\tilde\psi^T(k)\left(-2\gamma(k)w(k)w^T(k) + \gamma^2(k)\norm{w(k)}^2w(k)w^T(k)\right)\tilde\psi(k)}{-\gamma(k)\left(2 - \gamma(k)\norm{w(k)}^2\right)\tilde\psi^T(k)w(k)w^T(k)\tilde\psi(k)}{-\gamma(k)\left(2 - \gamma(k)\norm{w(k)}^2\right)e^2(k)}{-\gamma(k)\left(2 - \frac{\bar\gamma\norm{w(k)}^2}{1 + \norm{w(k)}^2}\right)e^2(k)}$
	* Since $\frac{\norm{w(k)}^2}{1 + \norm{w(k)}^2} < 1$, $\Delta V \leq -\gamma(k)(2 - \bar\gamma)e^2(k)$
		* Therefore we need $\gamma \in (0, 2)$ for $\Delta V$ to be strictly negative
	* Since $w(k) \in l_\infty$, there exists $c_0 > 0$ such that $\gamma(k)(2 - \bar\gamma) \geq c_0, \forall k \geq 0$, and therefore $\Delta V \leq -c_0\norm{e(k)}^2 < 0$
	* By Lyapunov, $\tilde\psi = 0$ is stable, so $\tilde\psi \in l_\infty$, which means $\hat\psi \in l_\infty$ and $e \in l_\infty$
* Furthermore, we can show that $e \in l_2$, and as a consequence $e(k) \to 0$ as $k \to 0$
	* Since $\Delta V < 0$ and $V \geq 0$, by the monotone convergence theorem $V(\tilde\psi(k)) = V(k)$ has a limit; let $\lim _{k \to \infty} V(k) = V_\infty$
	* $\alignedimp{\Delta V \leq -c_0e^2(k) < 0}{c_0e^2(k) \leq v(k) - v(k + 1)}{c_0\sum _{k = 0}^\infty e^2(k) \leq \sum _{k = 0}^\infty (V(k) - V(k + 1))}{c_0\sum _{k = 0}^\infty e^2(k) \leq V(0) - V_\infty}$
	* Since $V_\infty$ exists, $e(k) \in l_2$, and consequently $e(k) \to 0$ as $k \to 0$ (since otherwise the sum would diverge)

