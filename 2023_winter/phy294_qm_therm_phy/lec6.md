# Lecture 6, Jan 20, 2023

## Fermions and Bosons

* All electrons are identical, so you can't distinguish between them
	* Therefore a mathematically suitable wavefunction must reflect this
	* This is the reason for the Pauli exclusion principle
* Since probabilities are described by $\abs{\Psi}^2$, physically we cannot distinguish between $\Psi$ and $-\Psi$; i.e. if two wavefunctions represent the same quantum state, they must be related through a constant or phase only
	* Since we can't distinguish between two particles, this means that their combined wavefunction must be symmetric or antisymmetric under particle exchange
	* i.e. $\Psi(A, B) = \Psi(B, A)$ or $\Psi(B, A) = -\Psi(A, B)$
	* Particles for which $\Psi(A, B) = \Psi(B, A)$ are called *bosons* (e.g. photons); particles for which $\Psi(B, A) = -\Psi(A, B)$ are called *fermions* (e.g. electrons)
* Electrons are fermions which is why they obey the Pauli exclusion principle: no two electrons can occupy the same quantum state
	* Suppose that electrons $A$ and $B$ do occupy the same quantum state, then $\Psi(A, B) = \Psi(B, A)$
	* However since electrons are fermions we also have $\Psi(B, A) = -\Psi(A, B)$
	* Combining the two we get that $\Psi(A, B) = \Psi(B, A) = 0$, i.e. the probability of two electrons in the same quantum state is zero
* Suitable functions for the PEP must satisfy:
	* Be indistinguishable to electron exchange
	* Normalizable wavefunction
	* Have to include spin
	* Wavefunction must be antisymmetric to electron exchange

