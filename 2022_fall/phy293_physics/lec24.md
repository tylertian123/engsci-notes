# Lecture 24 (2-8), Nov 14, 2022

## Infinite Square Well (1D)

* Bound state, localized in $\Delta x$
* $V(x) = \twocond{0}{0 \leq x \leq a}{\infty}{\text{otherwise}}$
	* The particle cannot be outside $(0, a)$ since the potential is infinite there
* Outside the well, $\psi = 0$ is the only thing that can satisfy the SE
* Inside the well: $\hat H\psi = E\psi \implies -\frac{\hbar^2}{2m}\diffn{2}{}{x}\psi = E\psi$
	* $\diffn{2}{\psi}{x} + \frac{2mE}{\hbar^2}\psi = 0$
		* When $E < 0$: Let $\alpha^2 = -\frac{2mE}{\hbar^2} \implies \diffn{2}{\psi}{x} - \alpha^2\psi = 0 \implies \psi(x) = Ae^{\alpha x} + Be^{-\alpha x}$
		* When $E > 0$: Let $k^2 = \frac{2mE}{\hbar^2} \implies \diffn{2}{\psi}{x} + k^2\psi = 0 \implies \psi(x) = A\sin(kx) + B\cos(kx)$
* Enforce continuity conditions: $\psi(x) = 0$ for $x < 0$ or $x > a$
	* $\psi(0) = 0 \implies B = 0$
	* $\psi(a) = 0 \implies A\sin(ka) = 0 \implies ka = n\pi \implies k = \frac{n\pi}{a}$
		* Assume $A$ is nonzero because that leads to a non-normalizable solution
	* This gives $E_n = \frac{\hbar^2k_n^2}{2m} = \frac{\hbar^2\pi^2n^2}{2ma^2}$
	* Note we're not considering continuity of the derivative here because our potential is infinite
* Normalization condition: $\int _{-\infty}^\infty \abs{\psi}^2\,\dx = 1 \implies A = \sqrt\frac{2}{a}$
* $\psi _n(x) = A\sin(k_n x) = A\sin\left(\frac{n\pi}{a}x\right) = \sqrt{\frac{2}{a}}\sin\left(\frac{n\pi x}{a}\right)$
* There are an infinite number of allowed solutions; $n = 1$ is the lowest energy state (ground state)
	* Notice it's not at zero energy! This lowest energy level is the *zero-point energy*
* The full solution is $\Psi_n(x, t) = \sqrt\frac{2}{a}\sin\left(\frac{n\pi x}{a}\right)e^{-\frac{i\hbar\pi^2n^2}{2ma^2}t}$
	* The most general solution is a sum of all of these: $\Psi(x, t) = \sum _{n = 1}^\infty C_n\Psi _n(x, t)$
	* In general $\Psi(x, t)$ is not a stationary state

## Uncertainty Principle

* Physically, why can't we have $n = 0$?
* Physically $E = 0 \implies p = 0 \implies \Delta p = 0$, so there is no uncertainty in momentum; this would mean $\Delta x\Delta p = 0$, violating the uncertainty principle
* What about $n = 1$?
	* $\Delta x$ is at most $a$ since the particle is never outside the box
	* $\Delta p$ can be estimated as $2\sqrt{2mE} = 2\frac{\pi\hbar}{a}$
		* $p = \sqrt{2mE}$ is incorrect; energy is a vector and momentum is a scalar
			* In 1D this means we have $p = \pm \sqrt{2mE}$
	* $\Delta x\Delta p = 2\pi\hbar$

