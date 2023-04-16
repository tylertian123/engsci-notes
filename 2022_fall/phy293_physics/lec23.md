# Lecture 23 (2-7), Nov 3, 2022

## Interpretation of the Wave Function

* If we measure the particle to be at $x$ at time $t$, where was the particle just before the measurement?
	* Was it there all the time? Is this unknown? Is this even a valid question?
* Copenhagen interpretation (Max Born)
	* The position is indeterminate until the measurement -- it's not known
	* At the point of the measurement the wavefunction *collapses* to position $x$
	* The wavefunction before the measurement is a superposition of all the possible wavefunctions describing the particle at every possible point
	* This is opposed to the classical interpretation, which would say the particle would be at $x$ even before the measurement
		* This would indicate the existence of hidden variables and the incompleteness of quantum mechanics
		* This was shown to be not true by Bell's inequality

## Operators

* If we have $P(x, t) = \abs{\Psi(x, t)}^2$ we can calculate $\braket{x} = \int x\abs{\Psi(x, t)}^2\,\dx = \int \Psi^*x\Psi\,\dx$
* In quantum mechanics observable quantities (e.g. position, momentum) are represented by *operators*
	* e.g. $\hat x$ is the position operator
* The expectation value of operator $\hat O$ is $\Psi^*\hat O\Psi\,\dx$
	* This is the value actually measured in an experiment
* The momentum operator $\hat p$, how do we define it?
	* Consider the time derivative of position $\diff{}{t}$
	* $\diff{}{t}\braket{\hat x} = -\pdiff{i\hbar}{m}\int \Psi^*\pdiff{\Psi}{x}\,\dx = \frac{1}{m}\int \Psi^*\left(-i\hbar\pdiff{}{x}\right)\Psi\,\dx$
	* This gives us the momentum operator $\hat p = i\hbar\pdiff{}{x}$
* Ehrenfest's Theorem: expectation values follow classical mechanics

## Separation of Variables

* If we assume $\Psi(x, t) = \psi(x)\phi(t)$ we can plug this into the SE
	* This gives us $i\hbar\frac{1}{\phi}\diff{\phi}{t} = -\frac{\hbar^2}{2m}\frac{1}{\psi}\diffn{2}{\psi}{x} + V(x)$
	* The left hand side is a function of only time and the right hand side is a function of only position, so they must be constants
	* Let both equal $E$
* For the left hand side we get $i\hbar\frac{1}{\phi}\diff{\phi}{t} = E \implies \phi = e^{-\frac{iE}{\hbar}t}$
* For the right hand side we get $-\frac{\hbar^2}{2m}\diffn{2}{\psi}{x} + V\psi = E\psi$, which is the time-independent Schrödinger equation
	* Notice $-\frac{\hbar^2}{2m}\diffn{2}{}{x}$ is equal to $\frac{\hat p^2}{2m}$
	* Define this as $\hat T = \frac{\hat p^2}{2m}$, the kinetic energy operator
	* Define the potential energy operator $\hat V = V(x)$
	* Define the Hamiltonian as $\hat T + \hat V$
		* The Hamiltonian is the total energy and gives us energy conservation
		* $\braket{\hat H} = \int \psi^*\hat H\psi\,\dx = \int \psi^*E\psi\,\dx = E\int \abs{\psi}^2\,\dx = E$
	* This gives us $\hat H\psi = E\psi$
* Notice the TISE is an eigenvalue equation
	* For a given $V(x)$ and boundary conditions, there is a set of $\psi$s that satisfy the equation with corresponding energy eigenvalue $E$
	* The boundary conditions lead to quantization in these solutions, which means that $E$, the total energy, is quantized
* Note $\abs{\Psi(x, t)}^2 = \abs{\psi(x)}^2$, which is why these states are called *stationary states*

\noteSummary{The Hamiltonian is defined as $$\hat H = -\frac{\hbar^2}{2m}\diffn{2}{}{x} + V(x) = \frac{\hat p^2}{2m} + \hat V$$ and the Time-Independent Schrödinger Equation can be formulated as $$\hat H\psi(x) = E\psi(x)$$ The full time-dependent solution is then $$\Psi(x, t) = \phi(t)\psi(x) = e^{-i\frac{E}{\hbar}t}\psi(x)$$}

