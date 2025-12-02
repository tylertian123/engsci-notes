# Tutorial 9, Nov 24, 2025

## Lyapunov Theorem

* Example: harmonic oscillator $\ddot y + \alpha^2y = 0 \implies \dot x = \mattwo{0}{1}{-\alpha^2}{0}x$
	* Eigenvalues are $\pm i\alpha$, so we end up with purely oscillatory solutions that do not decay or grow
	* We can show that this equilibrium is stable; given any $\varepsilon$, we can simply choose $\delta = \varepsilon$, and since the solution amplitude does not grow, we have $\norm{x} \leq \varepsilon$ for all time
* For linear systems of the form $\dot x = Ax$, we can use a Lyapunov function of the form $V = x^TPx$ where $P$ is symmetric positive definite
	* $\dot V = \dot x^TPx + x^TP\dot x = x^TA^TPx + x^TPAx = x^T(A^TP + PA)x$
	* If we can make $P$ such that $A^TP + PA$ is negative definite, then we can show asymptotic stability (or negative semidefinite for stability)
		* Note that $A^TP + PA$ is already symmetric
	* Theorem: if we have all eigenvalues in the open left half plane, we can show that we can find a symmetric positive definite $P$ such that $A^TP + PA = -\varepsilon I$, for some $\varepsilon > 0$
		* This means that such a system is asymptotically stable in the Lyapunov sense, which matches what we know for linear systems

