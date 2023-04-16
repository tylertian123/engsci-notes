# Lecture 6, Jan 24, 2022

## Hydrogen Atom

* In our infinite well there is only 1 degree of freedom so we only have $E_n$; in higher dimensions, more degrees of freedom create more quantum numbers, so we have $E_{n,m}$, etc
* In 3D the TISE becomes $-\frac{\hbar^2}{2m}\left(\pdiffn{2}{}{x} + \pdiffn{2}{}{y} + \pdiffn{2}{}{z}\right)\psi(x, y, z) + V(x, y, z)\psi(x, y, z) = -\frac{\hbar^2}{2m}\nabla^2\psi + V = E\psi$
	* $\nabla^2$ is the Laplacian
	* $-\frac{\hbar^2}{2m}\nabla^2 + V$ is the total energy operator or *Hamiltonian* $\hat{H}$
* In a hydrogen atom electrons have Coulomb potential $V(r) = -\frac{e^2}{4\pi\varepsilon _0r}$
* Use spherical coordinates $(r, \theta, \phi)$ ($\theta$ is angle from $z$ axis, $\phi$ is rotation in the $x$-$y$ plane)
	* We also need to transform the Laplacian $\nabla^2 = \pdiffn{2}{}{r} + \frac{2}{r}\pdiff{}{r} + \frac{1}{r^2}\left(\pdiffn{2}{}{\theta} + \cot\theta\pdiff{}{\theta} + \csc^2\theta\pdiffn{2}{}{\phi}\right)$
* Again use separation of variables; assume wavefunction is a product of $\phi(\bm r) = \phi(r, \theta, \phi) = R(r)Y(\theta, \phi)$
	* This allows us to take advantage of radial symmetry for the hydrogen atom since Coulomb potential only depends on $r$
	* This gives us two equations; do this a second time, $Y(\theta, \phi) = \Theta(\theta)\Phi(\phi)$
	* Azimuthal equation: $\frac{1}{\Phi}\diffn{2}{\Phi}{\phi} + B = 0$
		* This is easy to solve with trial solution $Ke^{im\phi}$ where $B = -m^2$
	* Solving for the energy eigenvalues gives the Bohr model
* Takeaway: the wavefunction is defined by 3 quantum numbers $n, l, m$ for the 3 spacial degrees of freedom, and one $m_s$ quantum number for the spin of the electron
	* $n$ -- Principal quantum number: Gives the Bohr model solution, for a spherical model it is the solution
		* $n = 1, 2, 3, \cdots$
		* Designation: $K, L, M, N$ shells corresponding to $n = 1, 2, 3, \cdots$
		* Distance from the nucleus
	* $l$ -- (Subsidiary) Orbital angular momentum quantum number
		* $l = 0, 1, 2, \cdots, n - 1$
		* $s \to 0, p \to 1, d \to 2, f \to 3$
		* Distribution/shape of electron density
	* $m_l$ -- Magnetic quantum number
		* $m_l = -l, -l + 1, \cdots, 0, \cdots, l - 1, l$
		* This and $l$ describe orientation
	* $m_s$ -- Spin quantum number (quantized either up or down)
		* $m_s = \pm\frac{1}{2}$ for each $m_t$

