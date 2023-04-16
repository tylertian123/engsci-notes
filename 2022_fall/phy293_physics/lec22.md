# Lecture 22 (2-6), Nov 1, 2022

## Tonomura Experiment

* Electron double-slit experiment shows interference fringes characteristic of waves
* Electrons are sent one at a time, somehow still show a wavelike distribution -- how do the electrons already know where to go?
* Therefore matter does behave like a wave -- but what equation governs this wave?

## Wave Equation for a Matter Wave

* For both light and matter waves $E = h\nu = \hbar\omega$ and $p = \frac{h}{\lambda} = \hbar k$
* However their dispersion relations are different:
	* For photons $E = pc \implies c = \frac{E}{p} = \frac{\omega}{k}$, so $\omega$ and $k$ are linear in relationship
	* For matter $E = \frac{p^2}{2m} + V \implies \omega \propto k^2$, so $\omega$ is quadratic in $k$
* The classical wave equation, $\pdiffn{2}{y}{x} = \frac{1}{c^2}\pdiffn{2}{y}{x}$, would not work for matter waves
	* Take $y = A\sin(kx - \omega t) \implies \pdiffn{2}{y}{x} = k^2y, \pdiffn{2}{y}{t} = \omega^2y$
	* This can only be satisfied if the relationship between $\omega$ and $k$ is linear
	* Matter waves cannot satisfy this due to their different dispersion relation
		* For a matter wave, we have to differentiate $\omega$ only once, but that means we have to match a sine and a cosine
		* This suggests we use a complex exponential: $\Psi(x, t) = Ae^{i(kx - \omega t)}$
			* $\pdiffn{2}{\Psi}{x} = (ik)^2Ae^{i(kx - \omega t)} = -k^2\Psi = -\left(\frac{p}{\hbar}\right)^2\Psi$
			* $\pdiff{\omega}{x} = (-i\omega)Ae^{i(kx - \omega t)} = -i\omega\Psi = -i\frac{E}{\hbar}\Psi$
			* We can relate the two: $\pdiffn{2}{\Psi}{x} = -\frac{p^2}{\hbar^2}\Psi = -\frac{2m(E + V)}{\hbar^2}\Psi = -\frac{2mE}{\hbar^2}\Psi + \frac{2mV}{\hbar^2} = -\frac{2m}{\hbar}\left(i\hbar\pdiff{\Psi}{t}\right) + \frac{2m}{\hbar^2}V\Psi$
* This leads us to the (time-dependent) Schrödinger equation: $-\frac{\hbar^2}{2m}\pdiffn{2}{\Psi}{x} + V\Psi = i\hbar\pdiff{\Psi}{t}$
	* We can alternatively express this as $-\frac{\hbar^2}{2m}\pdiffn{2}{\Psi}{x} + V\Psi = E\Psi$, which is the time-independent Schrödinger equation

## Properties of the Matter Wavefunction

1. $\abs{\Psi(x, t)}^2 = P(x, t)$, the probability distribution/density
	* The probability of finding a particle in the interval $[x, x + \dx]$ is $\abs{\Psi(x)}^2\,\dx = P(x)\,\dx$
2. The wavefunction is square-integrable
	* Since we're interpreting $\abs{\Psi(x, t)}^2$ as the probability density, then it must be true that $\int _{-\infty}^\infty \abs{\Psi}^2\,\dx = 1$ (normalization condition)
	* We satisfy this by scaling $\Psi$ by a number, but this requires that the integral is finite and nonzero
3. Two waves can be superimposed and their sum will still satisfy the wavefunction
4. $\Psi$ must be continuous

