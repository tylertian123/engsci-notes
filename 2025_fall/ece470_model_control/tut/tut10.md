# Tutorial 10, Dec 1, 2025

* Consider a mass on a pendulum with equation of motion: $ml^2\ddot\theta + mgl\sin\theta = \tau$
	* Design a PD controller with gravity compensation to stabilize the system to $(\theta, \dot\theta) \to (\pi, 0)$, i.e. pendulum pointing upwards and not moving
		* We can see that the gravity term is $G(\theta) = mgl\sin\theta$ and the inertia term is $D(q) = ml^2$
		* From lecture, the controller is $\tau = mgl\sin\theta + k_p(\pi - \theta) + k_d(0 - \dot\theta)$ for $k_p > 0, k_d > 0$
	* Show that the equilibrium is asymptotically stable
		* Closed loop system is $ml^2\ddot\theta = k_p(\pi - \theta) - k_d\dot\theta$
		* Use the Lyapunov function $V(\theta, \dot\theta) = \frac{1}{2}ml^2\dot\theta^2 + \frac{1}{2}k_p(\pi - \theta)^2$
			* Note we need to show that this is positive definite
		* $\dot V = ml^2\dot\theta\ddot\theta - k_p(\pi - \dot\theta)\dot\theta = -k_d\dot\theta^2$ (substitute $ml^2\ddot\theta$)
		* This is only positive semidefinite, so we need to use LaSalle
		* $\dot V \equiv 0, \forall t \implies \dot\theta \equiv 0 \implies \ddot\theta \equiv 0 \implies k_p(\pi - \theta) = 0 \implies \theta = \pi$
* Consider a point mass on a plane, $q = \cvec{q_1}{q_2}$ with mass $M$; the equations of motion are $M\ddot q = u  \cvec{u_1}{u_2}$; we want to track the signal $q^r(t) = (t + \sin t, t)$
	* Design a feedback linearization controller
		* Here $M(q) = M, C(q, \dot q) = 0, B(q) = 0, G(q) = 0$
		* The system is already linear
		* Choose $u = M\left(\ddot q^r + \mattwo{k_p^1}{0}{0}{k_p^2}\tilde q + \mattwo{k_d^1}{0}{0}{k_d^2}\dot{\tilde q}\right) = M\cvec{-\sin t + k_p^1(t + \sin t - q_1) + k_d^1(1 + \cos t - \dot q_1)}{k_p^2(t - q_2) + k_d^1(1 - \dot q_2)}$
	* Design a passivity based controller
		* $u = M\left(\cvec{-\sin t}{0} + \mattwo{\lambda _1}{0}{0}{\lambda _2}\cvec{\dot q_1^r - \dot q_1}{\dot q_2^r - \dot q_2}\right) + \mattwo{k_1}{0}{0}{k_2}\left(\cvec{\dot q_1^r - \dot q_1}{\dot q_2^r - \dot q_2} + \mattwo{\lambda _1}{0}{0}{\lambda _2}\cvec{q_1^r - q_1}{q_2^r - q_2}\right)$
	* Compare the two controllers
		* If we choose $k_p^2 = \frac{k_2}{M}\lambda _2, k_d^2 = \lambda _2 + \frac{k_2}{M}, k_p^1 = \cvec{k}{M}\lambda _1, k_d^1 = \frac{k_1}{M} + \lambda _1$, then we can see that the two controllers are actually the same
		* This is because we have a linear system

