# Lecture 21, Feb 27, 2026

## Linear Quadratic Optimal Control

* Consider a linear system $x(k + 1) = Ax(k) + Bu(k)$ and a quadratic cost $J(x_0) = \frac{1}{2}\sum _{k = 0}^\infty x^T(k)Qx(k) + u^T(k)Ru(k)$ where $Q$ is positive semidefinite, $R$ is positive definite
	* Note that here we don't need a forgetting factor; we can show that the positive definiteness of $R$ gives us convergence
* Consider the cost starting at $k$, $J(x(k)) = \frac{1}{2}\sum _{i = k}^\infty x^T(i)Qx(i) + u^T(i)Ru(i)$
* Derive the Bellman equation: $\alignedeqntwo[t]{V^\mu(x(k))}{\frac{1}{2}\sum _{i = k}^\infty x^T(i)Qx(i) + \mu^T(i)R\mu(i)}{\frac{1}{2}\left(x^T(k)Qx(k) + \mu^T(k)R\mu(k)\right) + \frac{1}{2}\sum _{i = k + 1}^\infty x^T(i)Qx(i) + \mu^T(i)R\mu(i)}{\frac{1}{2}\left(x^T(k)Qx(k) + \mu^T(k)R\mu(k)\right) + V^\mu(x(k + 1))}$
	* Note $\mu(k)$ is a shorthand for $\mu(x(k))$
* We use a linear feedback $\mu(k) = -Kx(k)$, which we can show results in a quadratic optimal cost $V^\mu(x(k)) = \frac{1}{2}x^T(k)Px(k)$ where $P$ is positive definite
	* This implies $\alignedeqntwo[t]{x^T(k)Px(k)}{x^T(k)Qx(k) + \mu^T(k)R\mu(k) + x^T(k + 1)Px(k + 1)}{x^T(k)Qx(k) + \mu^T(k)R\mu(k) + (Ax(k) + B\mu(k))^TP(Ax(k) + B\mu(k))}{x^T(k)Qx(k) + x^T(k)K^TRKx(k) + x^T(k)(A - BK)^TP(A - BK)x(k)}$
	* Since this holds for all $x$, we have $(A - BK)^TP(A - BK) - P + Q + K^TRK = 0$
	* However, this has both $K$ and $P$ as unknowns, so we still need more
* Consider the cost with respect to some $u(k)$, $x^T(k)Px(k) = x^T(k)Qx(k) + u^T(k)Ru(k) + (Ax(k) + Bu(k))^TP(Ax(k) + Bu(k))$; since this is optimal, we can differentiate it with respect to $u$ and set it to zero
	* Doing this we get $Ru(k) + B^TP(Ax(k) + Bu(k)) = 0$
		* Note $\pdiff{}{u} y^TPy = 2y^TP\pdiff{y}{u} = 2(Ax + Bu)^TPB$ and $\pdiff{}{u} u^TRu = 2u^TR$
	* Therefore $Ru(k) + B^TPAx(k) + B^TPBu(k) = 0 \implies -RKx(k) + B^TPAx(k) - B^TPBKx(k) = 0$, and since this must hold for all $x$, $-RK + B^TPA - B^TPBK = 0 \implies K = (R + B^TPB)^{-1}B^TPA$
		* $R + B^TPB$ is always invertible due to positive definiteness of $R$ and positive semidefiniteness of $B^TPB$
* Substituting $K$, we get the *Riccati equation* $A^TPA - P + Q - A^TPB(R + B^TPB)^{-1}B^TPA = 0$
	* Notice that this can be iterated: $P^{j + 1} = A^TP^jA + Q - A^TP^jB(R + B^TPB)^{-1}B^TP^jA$, giving us a numerical method to solve for $P$ (value iteration)
* Similar to the continuous time case, we need 3 conditions for a unique positive definite solution to the Riccati equation (Wonham, 1968):
	* $(A, B)$ is stabilizable: this ensures there exists a controller driving all states to zero, and thus a finite cost
	* $R$ is positive definite: this ensures controls stay bounded
	* $(Q, A)$ is detectable: this is required to have a unique solution
* One can further show that the linear controller is the best controller possible, including all nonlinear and time-varying controls

