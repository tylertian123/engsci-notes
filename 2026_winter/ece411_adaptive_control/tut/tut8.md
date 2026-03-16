# Tutorial 8, Mar 9, 2026

* Consider $x(k + 1) = Ax + Bu$, and suppose there exists $K$ such that $A + BK$ is Schur stable; we want to stabilize a nonzero equilibrium, $\bar x$, and suppose there exists $\bar u$ such that $\bar x = A\bar x + B\bar u$
	* Let $z(k) = x(k) - \bar x$
	* The error dynamics are $\alignedeqntwo[t]{z(k + 1)}{x(k + 1) - \bar x}{Ax(k) + Bu(k) - A\bar x - B\bar u}{A(x(k) - \bar x) + B(u(k) - \bar u)}{Az(k) + B(u(k) - \bar u)}$
	* We need to choose $u$ such that $A$ is stabilized and $\bar u$ is cancelled, so this suggests we choose $u(k) = Kz(k) + \bar u = K(x(k) - \bar x) + \bar u$
	* Now $z(k + 1) = Az(k) + B(Kz(k) + \bar u - \bar u) = (A + BK)z(k)$
	* Since $A + BK$ is Schur stable, $x(k) \to \bar x$
* Consider $y(k + 1) = ay(k) + bu(k)$ where $a$ and $b$ are unknown, $b \neq 0$ with sign known, $y(k)$ is measured, and we want to track $y_m(k + 1) = a_my_m(k) + b_mr(k)$ where $\abs{a_m} < 1, b_m \neq 0$ and $r(k)$ is a bounded reference input
	* Assume $a, b$ are known, find $(\theta _1, \theta _2)$ so that the control law $u(k) = \theta _1y(k) + \theta _2r(k)$ achieves a perfect model matching, i.e. $y(k) = y_m(k)$ for all $k \geq 0$
		* $\alignedeqntwo[t]{y(k + 1)}{ay(k) + bu(k)}{ay(k) + b(\theta _1y(k) + \theta _2r(k)}{(a + b\theta _1)y(k) + b\theta _2r(k)}$
		* We want this to equal $y_m(k + 1) = a_my_m(k) + b_mr(k)$
		* Therefore we need $a_m = a + b\theta _1, b_m = b\theta _2$, which are the matching conditions
	* Now assume $a, b$ are unknown, and let $e(k) = y(k) - y_m(k)$; derive an error model in terms of $\tilde\theta(k) = \hat\theta(k) - \theta$
		* $\alignedeqntwo[t]{e(k + 1)}{y(k + 1) - y_m(k + 1)}{ay(k) + bu(k) - a_my(k) - b_mr(k)}{(a_m - b\theta _1)y(k) + b(\hat\theta _1y(k) + \hat\theta _2r(k)) - a_my(k) - b_mr(k) \Ttag{Matching conditions}}{a_m(y(k) - y_m(k)) + b(\hat\theta _1y(k) + \hat\theta _2r(k)) - b\theta _1y(k) - b_mr(k)}{a_me(k) + b(\hat\theta _1 - \theta _1)y(k) + b(\hat\theta _2 - \theta _2)r(k)}{a_me(k) + b\tilde\theta^T(k)w(k)\Ttag{} w(k) = \cvec{y(k)}{r(k)}}$
	* Propose an adaptive controller to make $e(k) \to 0$
		* Let $H(z) = \frac{1}{z - a_m}$
		* $e(k) = bH(z)\left[\tilde\theta^Tw(k)\right]$
			* We isolated $b$ since it's unknown
		* Define the augmented error and regressor as usual to get $e_a(k) = b\tilde\theta^Tw_a(k)$
		* $\hat\theta(k + 1) = \hat\theta(k) - \gamma(k)be_a(k)w_a(k)$, but we don't have $b$
		* However, we can combine $b\bar\gamma$ into a single constant: $\hat\theta(k + 1) = \hat\theta(k) - \gamma'(k)\sign(b)e_a(k)w_a(k)$ where $\gamma'(k) = \frac{\bar\gamma b}{1 + \norm{w_a(k)}}$, and just choose $\bar\gamma b \in (0, 2)$
	* The sign of $b$ must be known sine otherwise we cannot make sure the gradient law is stable
* Consider the system $x(k + 1) = Ax(k), y(k) = Cx(k)$ where $x(k) \in \reals^2$
	* Is it possible for this system to produce an output $y(k) = k^2$?
		* We can view states as degrees of freedom, allowing us to build more complex functions with higher order systems
		* If $x(k) \in \reals$ we can only produce constant functions; with $x(k) \in \reals^2$ we can produce ramp functions and so on
		* To find the system we write $y(k)$ in terms of previous $y(k)$, e.g. for $y(k) = k$
			* $y(k + 1) = k + 1 = y(k) + 1$
			* $y(k + 2) = y(k + 1) + 1 = y(k + 1) + (y(k + 1) - y(k)) = 2y(k + 1) - y(k)$
			* Using this difference equation we can find a state space realization
		* Now we try to do it for $y(k) = k^2$:
			* $y(k + 1) = k^2 + 2k + 1 = y(k) + 2k + 1$
			* $\alignedeqntwo[t]{y(k + 2)}{k^2 + 4k + 4}{y(k) + 2(2k + 1) + 2}{y(k) + 2(y(k + 1) - y(k)) + 2}{-y(k) + 2y(k + 1) + 2}$
			* $\alignedeqntwo[t]{y(k + 3)}{k^2 + 6k + 9}{y(k) + 3(2k + 1) + 6}{y(k) + 3(y(k + 1) - y(k)) + 3(y(k + 2) + y(k) - 2y(k + 1))}$

