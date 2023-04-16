# Lecture 10, Feb 1, 2023

## Relating the Electric Field and Electric Potential

* Because $\del \times \vec E = 0$ for electrostatic fields (Faraday's Law), it is the gradient of a scalar field
	* This also means that moving in a closed loop does not do any work
* We let $\vec E = -\del \vec V$ where $\vec V$ is the electric scalar potential
	* The negative sign is to make sure the electric field points away from positive charges
* Note $\vec E$ only cares about the spatial rate of change of $V$, not its actual value, so it doesn't matter if the potential is absolute or relative

## Gradient

* The gradient is the direction and magnitude of the maximum spacial rate of change
* The gradient in different coordinate systems is given by:
	* $\pdiff{V}{x}\hat a_x + \pdiff{V}{y}\hat a_y + \pdiff{V}{z}\hat a_z$
	* $\pdiff{V}{r}\hat a_r + \frac{1}{r}\pdiff{V}{\phi}\hat a_\phi + \pdiff{V}{z}\hat a_z$
	* $\pdiff{V}{R}\hat a_R + \frac{1}{R}\pdiff{V}{\theta}\hat a_\theta + \frac{1}{R\sin\theta}\pdiff{V}{\phi}\hat a_\phi$
* The factors of $\frac{1}{r}$ etc can be thought of as making sure the gradient has the right units

