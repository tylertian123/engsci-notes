# Lecture 26 (2-10), Nov 17, 2022

## Free Particle

* Consider a free particle, i.e. $V(x) = 0$ everywhere
* $-\frac{\hbar^2}{2m}\diffn{2}{}{x}\psi = E\psi$
* Let $k^2 = \frac{2mE}{\hbar^2}$ and $\omega = \frac{E}{\hbar} = \frac{\hbar k^2}{2m}$
	* With these $\diffn{2}{\psi}{x} + k^2\psi = 0$
	* Therefore $\psi = Ae^{ikx} + Be^{-ikx}$
* With this we can write the full solution as $\Psi(x, t) = \psi(x)e^{-\frac{E}{\hbar}t} = Ae^{i(kx - \omega t)} + Be^{-i(kx + \omega t)}$
	* This is a superposition of two travelling waves, one in to the left and one to the right
	* We can just take the first part and let $\Psi(x, t) = Ae^{i(kx - \omega t)}$
* Normalize: $\int \abs{\psi}^2\,\dx = \int A^2\,\dx = \infty$, but this is not normalizable!
* $e^{i(kx - \omega t)}$ is a plane wave and it cannot be a wavefunction
* However, even though a single plane wave is not normalizable, if we superimpose many of them, the resulting *wave packet* becomes normalizable
* We can write $\Psi(x, t) = \frac{1}{\sqrt{2\pi}}\int _{-\infty}^\infty \phi(k)e^{i(kx - \omega t)}\,\dk$
	* $\phi(k)$ is the analogue of $c_n$ and $k$ is the analogue of $n$, except that $k$ is not quantized
* For time $t = 0$: (works for any other finite value of $t$)
	* $\phi(k)$ is the Fourier transform of $\Psi(x, 0)$
	* $\Psi(x, 0) = \frac{1}{\sqrt{2\pi}}\int _{-\infty}^\infty \phi(k)e^{ikx}\,\dx$
	* $\phi(k) = \frac{1}{\sqrt{2\pi}}\int _{-\infty}^\infty \Psi(x, 0)e^{-ikx}\,\dx$

## Heisenberg Uncertainty Principle

* Notice that as $\phi(k)$ becomes more concentrated in $k$, $\psi(x)$ becomes more spread out in $x$
* For a wavepacket, $\Delta x$ and $\Delta k$ are inversely proportional: $\Delta x\Delta k \sim 1$
* Since $p = \hbar k$, we have $\Delta x\Delta p \sim \hbar$
* Often written as $\Delta x\Delta p \geq \frac{\hbar}{2}$
	* The exact relation is unimportant, but this is the fundamental limit
* We can also have time-energy uncertainty principle $\Delta t\Delta E \geq \frac{\hbar}{2}$
	* However this is different since $t$ is not exactly an observable
	* Note if $\Delta E = 0$ we are in a stationary state, which has an infinite lifetime

