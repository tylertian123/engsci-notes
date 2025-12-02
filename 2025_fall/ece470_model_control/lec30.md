# Lecture 30, Nov 21, 2025

## Lyapunov Stability Example and LaSalle Invariance Principle

* Example: dampened mass-spring system with $\dot x_1 = x_2, \dot x_2 = -\frac{k}{m}x_1 - \frac{b}{m}x_2$, where we take $k = m = b = 1$; prove that the equilibrium $\cvec{x_1}{x_2} = 0$ is asymptotically stable
	* For linear systems, we always have a quadratic Lyapunov function
	* Take the Lyapunov function to be $V(x) = x^TPx$ where $P \in \reals^{2 \times 2}$ is symmetric positive definite
		* For this type of linear system, there is a formula for computing the $P$ matrix
	* Choose $P = \frac{1}{2}\mattwo{1}{1/2}{1/2}{1}$, and expanding the Lyapunov function we get $V(x) = \frac{1}{2}(x^2 + x_1x_2 + x_2^2)$
		* We can verify that $P$ is positive definite, which makes $x^TPx$ positive definite at $x = 0$
	* For the derivative, $\dot V(x) = \pdiff{V}{x}f(x) = \pdiff{V}{x}Ax = 2x^TPAx$
	* Expanding this gets us $-\frac{1}{2}(x_1^2 + x_1x_2 + x_2^2) = -V(x)$ which is negative definite since $V$ is positive definite
	* By Lyapunov's theorem, this system is asymptotically stable

\noteThm{$P = P^T$ is positive definite if and only if all leading principal minors are positive, where the $n$th leading principal minor is the determinant of the $n \times n$ sub-matrix formed by taking the first $n$ rows and columns.}

* Can we use our intuitive notion of "energy" from physics for this mass-spring system instead?
	* $V(x) = \frac{1}{2}kx_1^2 + \frac{1}{2}mx_2^2$ would be the total energy, consisting of the spring potential energy and kinetic energy
	* Clearly this is positive definite at 0 due to it containing only squared terms
	* $\dot V(x) = kx_1\dot x_1 + mx_2\dot x_2 = kx_1x_2 + mx_2\left(-\frac{k}{m}x_1 - \frac{b}{m}x_2\right) = -bx_2^2$
	* This is negative for $x_2 \neq 0$, but it does not say anything about $x_1$, so it's not negative definite!

\noteThm{\textit{LaSalle Invariance Principle}: Suppose there exists $V: \reals^n \mapsto \reals$ positive definite at the equilibrium $\bar x$, and $\dot V(x) = \pdiff{V}{x}f(x) \leq 0$, then $\dot V(x(t)) \to 0$ as $t \to \infty$.

Furthermore, if $\dot V(x) = 0,\,\forall t \implies x(t) = \bar x,\,\forall t$, then the equilibrium $\bar x$ is asymptotically stable.}

* The first part says that as we are going down the level sets of $V$, we are going to either hit zero or reach a point where the derivative is flat and get stuck; the second part says that if the only place we can get stuck forever is at the equilibrium, then we will always end up at the equilibrium
* Returning to our mass-spring example, we can use the LaSalle invariance principle to show that the equilibrium is asymptotically stable
	* If $\dot V = 0$ for all $t$, then $-bx_2(t)^2 = 0 \implies x_2(t) = 0 \implies \dot x_2(t) = 0$
	* Recall our equations of motion: $\dot x_1 = x_2, \dot x_2 = -\frac{k}{m}x_1 - \frac{b}{m}x_2$
	* Therefore we have $-\frac{k}{m}x_1(t) = 0$ from the second equation, so it must be that $x_1(t) = 0$
	* We have shown that $\dot V = 0 \implies x = \bar x$, so by the LaSalle invariance principle this equilibrium is indeed asymptotically stable
* As with the example, often when we use a physically meaningful Lyapunov function (e.g. potential + kinetic energy), we end up with $\dot V$ being only negative semidefinite, so we need to use the LaSalle invariance principle to make it work

