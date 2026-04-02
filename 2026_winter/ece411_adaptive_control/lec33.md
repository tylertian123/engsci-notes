# Lecture 33, Mar 31, 2026

## Review -- Part 1

### Modelling of Discrete Time Systems

* Important concepts: difference equations, transfer functions, state-space models; coordinate transformations $z(k) = Px(k)$
	* Example: Given $y(k + 2) - y(k - 1) = y(k)$ with $y(2) = 2, y(3) = 0, y(-2) = 1$; find a state space representation and the initial conditions of the state
		* Put into standard form: $y(k) = y(k - 3) + y(k - 2)$, therefore we have 3 states
		* $x(k) = \cvec{y(k)}{y(k + 1)}{y(k + 2)}$
		* State space model: $x(k + 1) = \matthreeb{0}{1}{0}{0}{0}{1}{1}{1}{0}x(k)$
		* For initial conditions, we need $y(0), y(1), y(2)$ for $x(0)$, but we are given $y$ at different times, so we must use the difference equation to relate what we're given to what we need and solve for it
			* $y(0) = y(-3) + y(-2)$
			* $y(1) = y(-2) + y(-1) \implies y(1) = 2$
			* $y(2) = y(-1) + y(0) \implies y(-1) = 1$ from $y(0)$
			* $y(3) = y(0) + y(-2) \implies y(0) = -1$ from what we're given
* Time response (computing $A^k$): stability definitions, stability of LTI systems; types of stability (asymptotic, exponential, BIBO, etc)
	* Example: Consider an LTI system $x(k + 1) = Ax(k)$, where $A \in \reals^{2 \times 2}$ is diagonalizable
		* Given $x(0) = \cvec{1}{0}$, we get $x(k) = \cvec{0.5^k}{0.5^k - 1}$. Is $x = 0$ stable, asymptotically stable, or not enough information?
			* Since we see two different frequencies (the $0.5^k$ and the constant $-1$), the system eigenvalues must be at $0.5$ and $1$
			* $x(k) = P\Lambda^k P^{-1}x(0) = P\mattwo{0.5^k}{0}{0}{1}P^{-1}x(0)$
			* Since the system can only have 2 eigenvalues since it's second order, these must be all the eigenvalues; so the system is stable but not asymptotically stable
		* Given $x(0) = \cvec{0}{1}$, we get $x(k) = \cvec{0}{1}$; find $A$
			* Let $x^1(k)$ denote the response from the first experiment and $x^2(k)$ the response from the second
			* $\rvec{x^1(k)}{x^2(k)} = A^k\rvec{x^1(0)}{x^2(0)} \implies \mattwo{0.5^k}{0}{0.5^k - 1}{1} = P\mattwo{0.5^k}{0}{0}{1}P^{-1}\mattwo{1}{0}{0}{1}$
			* Therefore we must find $P$ to get $A$
			* We know $A^kv_1 = \lambda _1^kv_1 \implies \mattwo{0.5^k}{0}{0.5^k - 1}{1}\cvec{v_{11}}{v_{12}} = \cvec{0.5^kv_{11}}{0.5^kv_{12}}$
				* Therefore $v_{11} = 1$ and $v_{12} = 1$
			* We can repeat for $\lambda _2$: $\mattwo{0.5^k}{0}{0.5^k - 1}{1}\cvec{v_{21}}{v_{22}} = \cvec{v_{21}}{v_{22}}$ so $v_2 = \cvec{0}{1}$
			* Therefore $P = \mattwo{1}{0}{1}{1}$ and $A = \mattwo{0.5}{0}{-0.5}{1}$
		* Given $x(0) = \cvec{1}{3}$, compute $x(k)$
			* We can use linearity; by superposition $x(k) = x^1(k) + 3x^2(k) = \cvec{0.5^k}{0.5^k + 2}$
	* Consider the system: $x(k + 1) = \mattwo{1}{0}{0}{0}x(k) + \cvec{0}{1}u(k), y(k) = \rvec{1}{1}x(k)$
		* Prove $x = \cvec{0}{0}$ is a stable equilibrium using the definition
			* Assume $u(k) = 0$, then $x_1(k + 1) = x_1(k), x_2(k + 1) = 0$
			* Therefore $x_1(k) = x_1(0)$ and $x_2(k) = \twocond{x_2(0)}{k = 0}{0}{k > 0}$
			* Now let $\varepsilon > 0$ be arbitrary, and choose $\delta = \varepsilon$, then $\norm{x(0)} < \delta \implies \norm{x(k)} \leq \norm{x(0)} < \delta = \varepsilon$, so by definition the equilibrium is stable
		* Suppose $u(k) = 0, \forall k \geq 0$; find $x(0)$ such that $x(k) \to 0$ as $x \to \infty$
			* As we have found in the last question, we just need $x(0) = \cvec{0}{a}$ where $a$ is arbitrary

