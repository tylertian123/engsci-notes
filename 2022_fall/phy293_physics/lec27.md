# Lecture 27 (2-11), Nov 21, 2022

## Quantum Tunneling

* In classical mechanics, when a particle reaches a potential barrier greater than its energy, it will stop and turn back
* In the quantum case, because the wavefunction doesn't decay instantaneously, the particle have a finite probability to pass through a potential barrier
* This is known as *quantum tunneling*
* Conversely, in quantum mechanics even when the particle has enough energy to overcome a barrier, there is a finite probability that the particle is reflected instead

## Potential Step

* Consider potential $V(x) = \twocond{0}{x < 0}{V_0}{x \geq 0}$
* Strategy: break up the potential into two regions, separately solve TISE, then match boundary conditions
	* In this case we have continuity of $\psi(x)$ as well as $\psi'(x)$
	* A discontinuity in $V(x)$ leads to a discontinuity of $\diffn{2}{\psi}{x}$, but if $V(x)$ is finite, then $\diff{\psi}{x}$ will still be continuous
		* This is why we need to consider $\psi'$ in this case, but not in the case of the infinite square well, because here $V(x)$ is finite but it's not in the infinite square well
* In the first region $x < 0 \implies \diffn{2}{\psi}{x} + \frac{2mE}{\hbar^2}\psi = 0 \implies \diffn{2}{\psi}{x} + k^2\psi = 0 \implies \psi _I(x) = Ae^{ikx} + Be^{-ikx}$
* In the second region $x > 0 \implies \diffn{2}{\psi}{x} + \frac{2m}{\hbar^2}\left(E - V_0\right)\psi = 0$
	* Define $\alpha^2 = \frac{2m}{\hbar^2}(V_0 - E)\psi \implies \diffn{2}{\psi}{x} - \alpha^2\psi = 0$
		* Note this is because we're considering when $E < V_0$
	* This gives $\psi _{II}(x) = Ce^{\alpha x} + De^{-\alpha x}$
* We know $C = 0$ otherwise $\psi _{II}$ is not square integrable
* Matching initial conditions:
	* $\psi _I(0) = \psi _{II}(0) \implies A + B = D$
	* $\psi _I'(0) = \psi _{II}'(0) \implies Aik - Bik = -\alpha D$
* For now we're interested in the ratios $\frac{B}{A}$ and $\frac{D}{A}$
	* $1 + \frac{B}{A} = \frac{D}{A}$
	* $1 - \frac{B}{A} = -\frac{\alpha}{ik}\frac{D}{A}$
	* $2 = \left(1 - \frac{\alpha}{ik}\right)\frac{D}{A}$
	* $\left(1 + \frac{\alpha}{ik}\right) + \frac{B}{A}\left(1 - \frac{\alpha}{ik}\right) = 0$
	* $\frac{B}{A} = \frac{1 - \frac{i\alpha}{k}}{1 + \frac{i\alpha}{k}}$
	* $\frac{D}{A} = \frac{2}{1 + \frac{i\alpha}{k}}$
	* Note $\frac{\alpha}{k} = \sqrt{\frac{V_0 - E}{E}}$, so we can determine these by the ratio of the energies
* Note physically $A$ is the wave coming in, $B$ is the reflected wave, and $D$ is the transmitted wave in the classically forbidden region
* Define the reflection coefficient $R = \frac{\abs{B}^2}{\abs{A}^2} = \abs*{\frac{B}{A}}^2 = \frac{1 + i\frac{\alpha}{k}}{1 - i\frac{\alpha}{k}}\frac{1 - i\frac{\alpha}{k}}{1 + i\frac{\alpha}{k}} = 1$
	* This means we have total reflection; even though when the reflection happens there's a finite probability of the particle in the forbidden region, eventually everything is reflected in the end

