# Lecture 29, Apr 7, 2022

## Time Independent Schrodinger Equation and Hydrogen Orbits

* $-\frac{\hbar^2}{2m}\pdiffn{2}{\psi}{x} = (E - V)\psi$
* If $E > V$ then this means $\pdiffn{2}{\psi}{x}$ and $\psi$ have different signs; this means the wavefunction curves towards zero (if $\psi > 0$ then it curves down, if $\psi < 0$ then it curves up)
	* This means we have oscillatory solutions
	* For the simple case where $V = 0$ (free electron), $\psi = \sin(kx)$ or $\cos(kx)$ where $E = \frac{\hbar^2k^2}{2m}$
* If $E < V$, $\pdiffn{2}{\psi}{x}$ and $\psi$ have the same sign; the wavefunction curves away from zero
	* This means we have exponential solutions
	* There can be 2 cases, either the solution blows up to infinity, or it decays towards zero
* In the infinite square well, in the well the solution oscillates, and outside the well the solution is always zero
* For the finite square well, in the well the solution still oscillates ($E > V$), but outside the well the solution decays towards zero ($E < V$)
	* There are a finite number of bound states (quantized states), because at some point $E > V$ everywhere
* For the quantum harmonic oscillator ($V = bx^2$):
	* For the $n = 1$ solution it resembles the finite square well
	* Since the potential gets wider as energy increase, increasing $n$ makes the wavefunction wider
	* The place where $E = V$ is the *classical turning point*
	* In this case energy levels are evenly spaced (proportional to $n$ instead of $n^2$)
* For the hydrogen atom energy is proportional to $\frac{1}{n^2}$; these 3 cases above are the only cases where there is a simple expression for $E$ based on $n$
* The $2s$ state has a larger radius than the $1s$ state because the classical turning point is further away

## Band Theory

* When two finite potential wells are brought near each other (like when two atoms approach each other during bonding), their wavefunctions overlap
	* The $n = 2$ state for hydrogen is bigger so there is more overlap
* Overlapping wavefunctions create bands; with $n$ atoms there will be $n$ bands
* The spacing between bands doesn't arbitrarily increase, so with a very large number of atoms, there is effectively a continuous range of energy levels
* Only valence electron wavefunctions overlap and form bands

## Band Structure

* Metals have a partially filled band
	* States above a certain level are unfilled, below that level are filled
	* $E_F$ is the Fermi level, below which all energy states are filled
	* Note there's a potential barrier at the edge of a metal so the electrons don't leak out (the work function $\Phi$)
	* Since there are states immediately above the Fermi level, electrons can easily move in an electric field, so they can conduct electricity easily
* A semiconductor has 2 bands: the valence and conduction bands
	* The valence band is fully occupied at $T = 0$; the conduction band is unoccupied at $T = 0$
	* The band gap sits between the valence and conduction bands
		* The colour of light emitted by LEDs is the photon energy of its band gap
	* Electrons can only move if they have enough energy to cross the band gap and go into the conduction band
	* With enough energy, electrons leave the valence band and move into the conduction band, leaving behind a hole
		* The hole acts like a positive charge and can be a charge carrier
	* $E_F$ for a semiconductor is usually somewhere in the band gap
* An insulator is similar to a semiconductor but the band gap is very large, making it very hard to cross
* A material appears as optically transparent if it does not absorb photons in the visible light range
	* If the band gap is large enough that photons in the visible range cannot excite electrons across the gap, then photons will not be absorbed and the material is transparent
	* For metals and other materials where the band gap is small, photons will be absorbed by electrons which jump to the conduction band, so the material is opaque

