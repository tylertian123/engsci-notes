# Lecture 25, Mar 12, 2026

## Q-Learning -- Policy Improvement

* We have now solved policy evaluation, but we still need to figure out how to do policy improvement in a tractable way
* Because the Q-function is known, we can now perform the argmin by differentiating the Q-function with respect to $u$ and setting it to zero; i.e. we solve for $\pdiff{}{u}Q^{\mu^j}(x, u) = 0$ offline
* Example: policy improvement for LQR, where $\mu(x) = -Kx$
	* $\alignedeqntwo[t]{Q^\mu(x, u)}{r(x, u) + \gamma V^\mu(f(x, u))}{x^TQx + u^TRu + \gamma(Ax + Bu)^TP^\mu(Ax + Bu)}{\rvec{x^T}{u^T}\mattwo{S_{xx}}{S_{xu}}{S_{ux}}{S_{uu}}\cvec{x}{u}}{x^TS_{xx}x + x^TS_{ux}^Tu + x^TS_{xu}u + u^TS_{uu}u}$
	* $\pdiff{Q^\mu}{u} = x^TS_{ux}^T + x^TS_{xu} + 2u^TS_{uu}$
	* Setting to zero, we get $\mu(x) = -\frac{1}{2}S_{uu}^{-1}(S_{ux} + S_{xu}^T)x$
	* Notice that $-\frac{1}{2}S_{uu}^{-1}(S_{ux} + S_{xu}^T)$ is the new gain $K^{j + 1}$
* Overall our Q-learning algorithm is:
	1. Initialization: select any admissible $\mu^0 \in \mathcal M$
	2. Policy evaluation:
		* Prediction error: $e_1(k) = (\hat\psi^{j + 1})^T(k)v(k) - r(x(k), u(k))$
		* Gradient law: $\hat\psi^{j + 1}(k + 1) = \hat\psi^{j + 1}(k) - \gamma _1(k)e_1(k)v(k)$ where $\gamma _1(k) = \frac{\bar\gamma}{1 + \norm{v(k)}^2}, \bar\gamma \in (0, 2)$
		* New regressor: $v(k) = w(x(k), u(k)) - \gamma w(x(k + 1), \mu^j(x(k + 1)))$
			* $w(x, u)$ is our parametrization for Q-function approximation, so $Q^\mu(x, u) = \psi^Tw(x, u)$
			* Importantly here we don't use $u(k + 1)$!
		* Note that the plant updates as $x(k + 1) = f(x(k), u(k))$
	3. Policy improvement: Solve $\pdiff{Q^\mu(x, u)}{u} = \pdiff{}{u}\left(\hat\psi^{j + 1}w(x, u)\right) = 0$ (for $u$ as a function of $x$) to get $\mu^{j + 1}$
* Note that policy evaluation only converges if we have a persistently exciting $v(k)$, which we do by changing $u(k)$
	* We do this by introducing a probing noise to $u(k)$, instead of just doing $u(k) = \mu(x(k))$ (this is the "exploration")

