# Lecture 31, Nov 24, 2025

## PD Control With Gravity Compensation

* Again starting with the augmented model, $M(q)\ddot q + C(q, \dot q)\dot q + B(q)\dot q + G(q) = u$ 
* Previously, in feedback linearization, we assumed full knowledge of the model; but often this is not realistic, so what if we don't know the full dynamics?
	* In PD control with gravity compensation, we only assume knowledge of $G(q)$, which is much easier to obtain
	* On the other hand, this method only works for a constant reference
* Suppose the reference $q^r(t) \equiv q^r$, i.e. it is constant for all time; choose a controller $u = K_p\tilde q + K_d\dot{\tilde q} + G(q)$, where $\tilde q = q^r - q$ is the tracking error
	* $K_p, K_d$ are symmetric positive definite gain matrices, which are often (but don't have to be) diagonal
* We want to study the closed-loop equilibrium $(\tilde q, \dot{\tilde q}) = (0, 0) \in \reals^{2n}$ and show that it is asymptotically stable using Lyapunov and LaSalle
* We will make use of the following facts:
	* $M(q)$ is symmetric positive definite, so it is invertible for all $q$
	* We can show that $\dot M(q, \dot q) - 2C(q, \dot q)$ is skew symmetric
	* $B(q)$ is symmetric positive semi-definite
* The closed-loop system is $M(q)\ddot q + C(q, \dot q)\dot q + B(q)\dot q = K_p\tilde q + K_d\dot{\tilde q}$, with gravity terms cancelled
* Take the Lyapunov function $V(q, \dot q) = \frac{1}{2}\dot q^TM(q)\dot q + \frac{1}{2}(q - q^r)^TK_p(q - q^r)$
	* Note that we do not need to include $\dot{\tilde q}$ explicitly since it equals $-\dot q$ as $q^r$ is a constant; we can also say that the Lyapunov function is a function of $\tilde q, \dot{\tilde q}$
	* Notice that the first term is the kinetic energy (augmented with motor mass terms)
	* The second term can be thought of as a "virtual potential energy" which pulls the state towards the desired state (recall gravity was cancelled so there is no other source of potential energy)
	* This is clearly positive definite at the equilibrium $(q, \dot q) = (q^r, 0)$
* $\alignedeqntwo[t]{\dot V}{\frac{1}{2}\ddot q^TM(q)\dot q + \frac{1}{2}\dot q^T\dot M(q, \dot q)\dot q + \frac{1}{2}\dot q^TM(q)\ddot q + \frac{1}{2}\dot q^TK_p(q - q^r) + \frac{1}{2}(q - q^r)^TK_p\dot q}{\dot q^TM(q)\ddot q + (q - q^r)^TK_p\dot q + \frac{1}{2}\dot q^TM(q, \dot q)\dot q}{\dot q^T\left(-C(q, \dot q)\dot q - B(q) + K_p\tilde q + K_d\dot{\tilde q}\right) - \tilde q^TK_p\dot q + \frac{1}{2}\dot q^T\dot M(q, \dot q)\dot q}{\dot q^T\left(-C(q, \dot q)\dot q - B(q)\dot q + K_d\dot{\tilde q}\right) + \frac{1}{2}\dot q^T\dot M(q, \dot q)\dot q}{\frac{1}{2}\dot q^T(\dot M(q, \dot q) - 2C(q, \dot q))\dot q - \dot q^TB(q)\dot q + \dot q^TK_d\dot{\tilde q}}{-\dot q^TB(q)\dot q + \dot q^TK_d\dot{\tilde q}}{-\dot q^TB(q)\dot q - \dot q^TK_d\dot q}{-\dot q^T(B(q) + K_d)\dot q}$
	* Note that since $\dot V$ is a scalar, all terms are equal to their transpose
	* Because $\dot M - 2C$ is skew-symmetric, $\dot q^T(\dot M - 2C)\dot q = \dot q^T(\dot M - 2C)^T\dot q = -\dot q^T(\dot M - 2C)\dot q$ which means the whole term is zero
	* Now because $B(q)$ is positive semidefinite, for any positive definite $K_d$ we have a $\dot V$ negative definite in $\dot q$ (but not $q$!)
* We need to apply LaSalle and show that $\dot V(t) = 0, \forall t$ forces $q(t) = 0$
	* $\dot V = 0 \implies \dot q(t) = 0 \implies \ddot q(t) = 0$
	* Substituting into the equation of motion for the closed-loop system, $K_p\tilde q + K_d\dot{\tilde q} = 0$
	* Since $K_p$ is invertible and $\dot{\tilde q} = -\dot q$, this means $\tilde q = 0$ and so $q = q^r$ is the only solution
	* By the LaSalle invariance principle, we conclude that this closed-loop system is asymptotically stable

