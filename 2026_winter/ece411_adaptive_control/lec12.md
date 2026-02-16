# Lecture 12, Jan 30, 2026

## Model Reference Adaptive Control

* In the model reference adaptive control (MRAC) problem, we have a system $x(k + 1) = Ax(k) + Bu(k)$ and a reference model $x_r(k + 1) = A_rx_r(k) + B_rr(k)$, and our goal is to have $x(k)$ track $x_r(k)$
	* Assume $A, A_r$ and $B$ are known, but $B_r$ is not, and we have state measurements for $x(k), x_r(k)$
	* $r(k) \in \reals$ is an exogenous input, which can represent a tracking signal or a disturbance
		* Assume $r(k) = \psi^Tw(k)$ where $w(k)$ is a known regressor and $\psi$ is an unknown parameter vector
			* e.g. maybe we know the potential frequencies that can make up the disturbance but not their magnitudes
	* We also require that $A_r$ is Schur stable
* We work with a controller $u(k) = Kx(k) + \hat\psi^T(k)w(k)$ for some $K \in \reals^{1 \times n}$, where the first term stabilizes the transient behaviour, while the second term gives the desired steady-state behaviour
	* This results in the closed loop system $x(k + 1) = (A + BK)x(k) + B\hat\psi^T(k)w(k)$
* Let the tracking error $\tilde x(k) = x(k) - x_r(k)$; what are its dynamics?
	* $\alignedeqntwo[t]{\tilde x(k + 1)}{x(k + 1) - x_r(k + 1)}{(A + BK)x(k) + B\hat\psi^T(k)w(k) - A_rx_r(k) - B_r\psi^Tw(k)}{(A + BK)(\tilde x(k) + x_r(k)) - A_rx_r(k) + (B\hat\psi^T(k) - B_r\psi^T)w(k)}{(A + BK)\tilde x(k) + (A + BK - A_r)x_r(k) + (B\hat\psi^T(k) - B_r\psi^T)w(k)}$
	* To have $\tilde x(k) \to 0$, we need to impose the *matching conditions*: $A_r = A + BK$ and $B_r = bB$ for some $b \in \reals$

## Adaptive Control -- Dynamic Error Model

* The general *dynamic error model* is $x_e(k + 1) = Ax_e(k) + B\tilde\psi^T(k)w(k)$, $e(k) = B^TPx_e(k)$, where $x_e(k)$ is a measurable error state, $(A, B)$ is known, $A$ is Schur stable, $w(k)$ is a known regressor, $\tilde\psi(k) = \hat\psi(k) - \psi$, and $P$ is a symmetric positive definite matrix which solves the Lyapunov equation $A^TPA - P = -I$
	* Note that $A$ being Schur stable guarantees that a solution exists for $A^TPA - P = -I$, as we have derived with Lyapunov analysis of LTI systems
	* The MRAC problem reduces to this
	* The use of $e(k)$ comes from Lyapunov theory, which we will see later; the idea is that we need a scalar error measure for stability analysis
		* This process of working backwards from a Lyapunov argument is known as *Lyapunov-based design*
* Consider the transfer function for the system, using $e(k)$ as the output and $\tilde\psi^Tw(k)$ as the input, we get $H(z) = B^TP(zI - A)^{-1}B$
	* Using the transfer function, we can write $e(k) = H(z)\left[\tilde\psi^T(k)w(k)\right]$
		* Note that the notation here is a shorthand which mixes time and Z-domain, with $[\ ]$ denoting a domain change
	* Notice the similarity between this and our static error model, $e(k) = \tilde\psi^T(k)w(k)$, which suggests we can redefine our regressor to incorporate $H(z)$ to turn the error model into a static one, where we can apply the gradient law
	* $\alignedeqntwo[t]{e(k)}{H(z)\left[\tilde\psi^T(k)w(k)\right]}{H(z)\left[\hat\psi^T(k)w(k) - \psi^Tw(k)\right]}{H(z)\left[\hat\psi^T(k)w(k)\right] - H(z)\left[\psi^Tw(k)\right]}{H(z)\left[\hat\psi^T(k)w(k)\right] - \psi^TH(z)I\left[w(k)\right]}{\hat y(k) - \psi^TH(z)I\left[w(k)\right]}$
		* In the step where we split the $[\ ]$ we rely on the fact that both subsystems are stable, so we can split it up and get the same steady-state response
		* In the next step, we rely on the *swapping lemma*: since $\psi^Tw(k)$ is taking a linear combination and $H(z)$ is linear, we can do the filtering first and then take the linear combination
			* Note that the swapping lemma can only be applied since $\psi^T$ is a constant, which is why we cannot pull out a $\hat\psi(k)$ from the first term
			* Note $H(z)I\left[w(k)\right] = \diagthree{H(z)}{\ddots}{H(z)}\cvec{w_1(k)}{\vdots}{w_q(k)} = \cvec{H(z)\left[w_1(k)\right]}{\vdots}{H(z)\left[w_q(k)\right]}$
			* Practically, for each $H(z)\left[w_1(k)\right]$ we have to build a state-space model to generate this signal (recall that $H(z)$ is the transfer function of the system we had at the beginning, so we have to duplicate this system $q$ times, one for each component of $w(k)$)
	* We also define $\hat e(k) = \hat y(k) - \hat\psi^T(k)H(z)I\left[w(k)\right]$ which we can measure
* We now have the *augmented error* $\alignedeqntwo[t]{e_a(k)}{e(k) - \hat e(k)}{-\psi^TH(z)I\left[w(k)\right] + \hat\psi^T(k)H(z)I\left[w(k)\right]}{\tilde\psi^T(k)H(z)I\left[w(k)\right]}{\tilde\psi^T(k)w_a(k)}$
	* $w_a$ is the *augmented regressor*
	* The error model is now static, so we can use the same gradient law: $\hat\psi(k + 1) = \hat\psi(k) - \gamma(k)e_a(k)w_a(k)$, with $\gamma(k) = \frac{\bar\gamma}{1 + \norm{w_a(k)}^2}, \bar\gamma \in (0, 2)$
	* Note we've only shown that $\hat e(k) \to e(k)$, and more work is needed to show that $e(k) \to 0$

