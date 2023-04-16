# Lecture 4, Jan 17, 2022

## Time-Independent Schrödinger's Equation

* Assume $\Psi(x, t) = \phi(t)\psi(x)$, giving $i\hbar\frac{1}{\phi}\diff{\phi}{t} = -\frac{\hbar^2}{2m\psi}\diffn{2}{\psi}{x} + V$
	* Since the two sides depend on different variables we argue that both need to be equal to a constant $A$
	* Therefore $i\frac{A}{\hbar}\phi = \diff{\phi}{t}$ and $A = -\frac{\hbar^2}{2m\psi}\diffn{2}{\psi}{x} + V$
* The first equation has a general solution of $\phi = Ce^{-i\frac{A}{\hbar}t}$ where $C$ is a constant
	* We conclude that $A$ must have units of energy, so we let $A = E$
	* The oscillation frequency is going to depend on the energy; more energy means the wavefunction oscillates faster in time
* Substituting $A = E$ into the second equation and multiplying by $\psi$ we get $-\frac{\hbar^2}{2m}\diffn{2}{\psi}{x} + V\psi = E\psi$, which is known as the time-independent Schrödinger equation

