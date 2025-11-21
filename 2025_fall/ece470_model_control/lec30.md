# Lecture 30, Nov 21, 2025

## Lyapunov Stability Example

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

\noteThm{\textit{LaSalle Invariance Principle}: Suppose there exists $V: \reals^n \mapsto \reals$ positive definite at the equilibrium $\bar x$, and $\dot V(x) = \pdiff{V}{x}f(x) \leq 0$, then $\dot V(x(t)) \to 0$ as $t \to 0$.

Furthermore, if the only solution to $\dot V(x) = 0, \forall t$ is $x(t) = \bar x$ for all time, then the equilibrium $\bar x$ is asymptotically stable.}

* Applied to our example, $\dot V(x) = 0 \implies x_2 = 0$, and if we plug that into the equation, we see that this forces $x_1 = 0$

