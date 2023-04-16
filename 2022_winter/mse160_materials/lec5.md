# Lecture 5, Jan 20, 2022

## Particle in a Box (Infinite Square Well)

* Particle of mass $m$ in a 1-dimensional box box length $L$
* In side the box potential is 0, outside the box potential is infinite
* Inside the box the TISE reduces to $-\frac{\hbar^2}{2m}\diffn{2}{\psi}{x} = E\psi$ since there is zero potential
* Solution of the form $\psi = A\sin(kx) + B\cos(kx) \implies \diffn{2}{\psi}{x} = -k^2\psi$, and $E = \frac{\hbar^2k^2}{2m}$ (the energy of a state depends on $k$)
* However since the potential is infinite outside the well we impose boundary conditions $\abs{\psi}^2 = 0 \implies \psi = 0$ for $x \leq 0$ or $x \geq L$, and the normalization condition
	* At $x = 0$, the sine term is zero, so we conclude the cosine term should always be zero (i.e. $\psi = A\sin(kx)$ for all $x$)
	* At $x = L$, $\psi = 0$ means $A\sin(kL) = 0 \implies \sin(kL) = 0$ so $kL = n\pi$ (note $n \neq 0$ because that would make the wavefunction always zero), so now energies are quantized!
		* i.e. $k = \frac{n\pi}{L}$ where $n = 1, 2, 3, \cdots$
* $E_n = \frac{\hbar^2k^2}{2m} = \frac{\hbar^2n^2\pi^2}{2mL^2} = \frac{h^2}{8mL^2}n^2$ (note we switched from $\hbar$ to $h$)
* We also need to normalize, so $\psi _n(x) = \sqrt{\frac{2}{L}}\sin\left(\frac{n\pi x}{L}\right)$
	* $1 = \int _0^L A^2\sin^2\left(\frac{n\pi x}{L}\right)\,\dx \implies A = \sqrt{\frac{2}{L}}$
* These wavefunctions are standing waves; $n$ is the quantum number; $\psi _n$ has $n - 1$ nodes
* Note the ground state doesn't have zero energy (zero point energy ZPE)
* Kinetic energy is proportional to the curvature of the wavefunction; more kinetic energy leads to higher curvature and faster oscillating wavefunctions
* A smaller box increases $E$ and makes the wavefunction oscillate faster

