# Tutorial 9, Mar 16, 2026

* Consider the infinite horizon optimal control problem: $\min _{u \in\mathcal U} \set{\gamma^k r(x(k), u(k))}$ such that $x(k + 1) = ax(k) + bu(k), a, b \in \reals$ and unknown
	* Consider an arbitrary policy $\mu$ and suppose $Q^\mu(x, u) = \psi_\mu^Tw(x, u)$ where $w(x, u) = \cvec{x^2}{xu}{ux}{u^2}$; express the Bellman equation for $Q^\mu$ as a function of $\psi_\mu^Tw$
		* $\psi_\mu^Tw(x(k), u(k)) = r(x(k), u(k)) + \gamma Q^\mu(ax(k) + bu(k), \mu(ax(k) + bu(k)))$
	* Show that for any $u(k)$, $w(k) = w(x(k), u(k))$ is not PE
		* To show that the regressor is not PE, we just need to show that there exists $y$ such that $y^Tw(k)w^T(k)y = 0$ for all $k$, since then the sum will also be zero
		* $w^T(k)y = \rvec{x^2}{xu}{ux}{u^2}\cvec{y_1}{y_2}{y_3}{y_4}$
		* Take $y = \cvec{0}{1}{-1}{0}$, so $w^T(k)y = 0$ and therefore $y^Tw(k)w^T(k)y = 0$
		* Therefore $\frac{1}{N}\sum w(k)w^T(k)$ is not positive definite, so the regressor is not PE
	* Now we want to learn the Q-function
		* Let the TD error $e(k) = r(x, u) + \gamma Q^\mu(f(x, u), \mu(f(x, u))) - Q^\mu(x, u) = 0$
		* Express the stage cost as a product of an unknown parameter and a regressor
			* $\alignedeqntwo[t]{r(x, u)}{-(\gamma Q^\mu(f(x, u), \mu(f(x, u))) - Q^\mu(x, u))}{-(\gamma\psi _\mu^Tw(x(k + 1), u(k + 1)) - \psi _\mu^Tw(x(k), u(k))}{-\psi _\mu^T\left(\gamma w(x(k + 1), u(k + 1)) - w(x(k), u(k))\right)}{-\psi _\mu^Tv(k)}$
		* Suppose we have an estimate $\hat\psi _\mu$ of $\psi _\mu$ and let $\hat Q^\mu(x, u) = \hat\psi _\mu^Tw(k)$; find the TD error $e(k)$ in terms of $\tilde\psi = \hat\psi _\mu - \psi _\mu$. What is the error model?
			* $\alignedeqntwo[t]{e(k)}{\gamma\hat Q^\mu(x(k + 1), u(k + 1)) - \hat Q^\mu(x(k), u(k)) + r(k)}{\hat\psi _\mu^Tv(k) - \psi _\mu^Tv(k)}{\tilde\psi _\mu^Tv(k)}$
			* This is a static error model
	* Show that for any $u$, $v(k) = \gamma w(k + 1) - w(k)$ is not PE
		* This goes the exact same as proving $w(k)$ is not PE, with the same $y$
	* Suppose $\hat\psi _{ss} = \lim _{k \to \infty} \hat\psi _\mu$ satisfies $Q^\mu(x, u) = \hat\psi _{ss}w(x, u)$; express $S_\mu$ in terms of $\hat\psi _{ss}$ such that $Q^\mu(x, u) = \cvec{x}{u}^TS_\mu\cvec{x}{u}$
		* $\hat Q^\mu = \hat\psi _{ss}^Tw(k) = \hat\psi _1x^2 + (\hat\psi _2 + \hat\psi _3)ux + \hat\psi _4u^2$
		* $\rvec{x}{u}\mattwo{s_1}{s_2}{s_3}{s_4}\cvec{x}{u} = s_1x^2 + 2s_2ux + s_3u^2$
		* Therefore $S_\mu = \mattwo{\hat\psi _1}{\frac{1}{2}(\hat\psi _2 + \hat\psi _3)}{\frac{1}{2}(\hat\psi _2 + \hat\psi _3)}{\hat\psi _4}$

