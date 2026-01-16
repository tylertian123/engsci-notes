# Lecture 34, Dec 1, 2025

## Passivity-Based Control With Adaptation

* Now we will attempt to use passivity-based control while learning the system dynamics, resulting in the *Slotine-Li controller*
* Let $r = \dot{\tilde q} + \Lambda\tilde q, v = \dot q^r - \Lambda\tilde q, a = \ddot q^r - \Lambda\dot{\tilde q} = \dot v$, where $\tilde q = q - q^r$ (note the definition of $\tilde q$ is reversed compared to last lecture!)
	* Notice that $\dot q = r + v, \ddot q = \dot r + a$
* Substituting the above: $\alignedimp[t]{M(q)(\dot r + a) + C(q, \dot q)(r + v) + B(q)\dot q + G(q) = u}{M(q)\dot r + C(q, \dot q)r = u - (M(q)a + C(q, \dot q)v + B(q)\dot q + G(q))}$
	* The left hand side is the same as what we had for the original passivity-based control, but now we have an extra term on the right
* Recall the linear parametrization: $M(q)a + C(q, \dot q)v + B(q)\dot q + G(q) = Y(q, \dot q, a, v)\Theta$, where $Y$ is the known regressor matrix, and $\Theta$ is the minimal set of parameters for the system
	* Note this is slightly different than the $Y(q, \dot q, \ddot q)$ that we saw before, because here we have $a$ and $v$ after the first 2 terms, and we are basically parametrizing our estimate of the state instead of the true state
	* Practically to get $Y(q, \dot q, a, v)$ from $Y(q, \dot q, \ddot q)$, we replace $\ddot q$ with $a$, and replace one of the instances of $\dot q$ (the one multiplying $C(q, \dot q)$) by $v$, and leave the rest the same
	* The model becomes $M(q)\dot r + C(q, \dot q)r = u - Y(q, \dot q, a, v)\Theta$
* Choose a controller $u = u_s + u_a = -Kr + Y(q, \dot q, a, v)\hat\Theta$ consisting of a stabilizing and an adaptive term, where $\hat\Theta$ is our estimate of the system parameters
	* This results in the closed-loop system $M(q)\dot r + (C(q, \dot q) + K)r = Y(q, \dot q, a, v)\tilde\Theta$ where $\tilde\Theta = \hat\Theta - \Theta$ is the parameter estimation error
* We will apply Lyapunov analysis to see what adaptive control policy gives us an asymptotically stable system, using $V = \frac{1}{2}r^TM(q)r + \tilde q^T\Lambda K\tilde q + \frac{1}{2}\tilde\Theta^T\Gamma^{-1}\tilde\Theta$ where $\Gamma, \Lambda, K$ are symmetric positive definite matrices
	* This is trivially positive definite at the equilibrium $(r, \tilde q, \tilde\Theta) = (0, 0, 0)$
	* $\alignedeqntwo[t]{\dot V}{r^TM(q)\dot r + \frac{1}{2}r^T\dot M(q, \dot q)r + 2\tilde q^T\Lambda K\dot{\tilde q} + \tilde\Theta^T\Gamma^{-1}\dot{\tilde\Theta}}{r^T(-C(q, \dot q)r - Kr) + \frac{1}{2}r^T\dot M(q, \dot q)r + 2\tilde q^T\Lambda K\dot{\tilde q} + r^TY(q, \dot q, a, v)\tilde\Theta + \tilde\Theta^T\Gamma^{-1}\dot{\tilde\Theta}}{-r^TKr + 2\tilde q^T\Lambda K\dot{\tilde q} + \tilde\Theta^TY^T(q, \dot q, a, v)r + \tilde\Theta^T\Gamma^{-1}\dot{\tilde\Theta}}{-r^TKr + 2\tilde q^T\Lambda K\dot{\tilde q} + \tilde\Theta^T\left(Y^T(q, \dot q, a, v)r + \Gamma^{-1}\dot{\tilde\Theta}\right)}$
	* This suggests that we should choose $\dot{\tilde\Theta} = \dot{\hat\Theta} = -\Gamma Y^Tr$, then we can make the last term disappear
		* This is the classic gradient law for parameter adaptation
		* $\Gamma$ is the learning rate, which decides how fast our parameter estimates converges
	* If we do this, then $\alignedeqntwo[t]{\dot V}{-r^TKr + 2\tilde q^T\Lambda K\dot{\tilde q}}{\cdots\text{(see notes from lecture 32)}}{-\rvec{\tilde q^T}{\dot{\tilde q}^T}\mattwo{\Lambda K\Lambda}{0}{0}{K}\cvec{\tilde q}{\dot{\tilde q}}}$
* Right now, we have $\dot V \leq 0$ so we know the equilibrium is stable, however since our state also includes $\tilde\Theta$ this is not fully asymptotically stable
	* By LaSalle, we know that $\dot V \to 0$, which means that $(\tilde q, \dot{\tilde q}) \to (0, 0)$, i.e. we can track the reference
	* However, the parameter estimates themselves do not necessarily converge
* We need a *persistence of excitation* condition on $Y$ to get $\tilde\Theta \to 0$
	* Intuitively this means that we need to make the robot do "exciting" behaviours, i.e. behaviours which expose all the parameters of the robot, in order to have the parameters converge
	* Otherwise we can track the reference, but we might not have enough information to fully learn the robot model; e.g. we can command the robot to track a reference signal that only moves a single joint, which means we can't learn about the rest of the system
	* This is a graduate level topic

## Review -- 2024 Final Q4

* A pendulum has equation of motion $mr^2\ddot\theta + k\dot\theta + mgr\sin\theta = 0$, which has potential energy $U(\theta) = \frac{g}{r}(1 - \cos\theta)$; either prove that the equilibrium $(\theta^*, \dot\theta^*) = (0, 0)$ (i.e. the hanging down position) is asymptotically stable, or stable but not asymptotically stable
	* Let the state $x = \cvec{\theta}{\dot\theta}$, then $\dot x = \cvec{x_2}{-\frac{k}{mr^2}x_2 - \frac{g}{r}\sin x_1}$
	* Since this is a mechanical system, we can try using the total energy: $V(x) = \frac{1}{2}x_2^2 + \frac{g}{r}(1 - \cos\theta)$
		* The first term is a potential energy; nevermind that we don't have $m$, it doesn't matter
	* We can check that around $(0, 0)$ this is positive definite if we restrict the angle to $(-\pi, \pi)$
	* $\alignedeqntwo[t]{\dot V}{x_2\dot x_2 + \frac{g}{r}\sin(x_1)\dot x_1}{x_2\left(-\frac{k}{mr^2}x_2 - \frac{g}{r}\sin x_1\right) + \frac{g}{r}\sin(x_1)x_2}{-\frac{k}{mr^2}x_2^2}$
	* This is negative semidefinite; by Lyapunov's theorem, this equilibrium is at least stable, but we need LaSalle to conclude that it is asymptotically stable
	* LaSalle invariance principle: $\dot V \equiv 0, \forall t \implies x_2 = \dot\theta = 0 \implies \ddot\theta = 0 \implies mgr\sin\theta = 0 \implies \theta = 0$ if we restrict the angle
	* Therefore the equilibrium $(x_1, x_2) = (0, 0)$ is asymptotically stable

