# Lecture 5, Jan 19, 2023

## Multi-Electron Systems

* For helium, we have the famed 2-body problem that cannot be solved due to the repulsion between the two electrons
* We can use an approximate solution: independent particle approximation: treat each electron as moving in a time-average potential defined by the other electron to define an effective potential
	* The electron will screen some of the positive charge but there will always be an effective charge of +1 or more
	* Assume a hydrogenic (central force) wavefunction $\psi'$ for the two electrons, which gives us an average electron distribution, from which we can get an effective potential $U'$
		* i.e. assume a potential $U(r) = -Z_{eff}(r)\frac{ke^2}{r}$
		* The effects of other electrons are smeared out to be radially symmetric and expressed through the effective charge $Z_{eff}$
	* Solve for the first electron to define a new $\psi'$, and repeat with the second electron
	* Repeat this until the calculated energy converges
* Variational theorem: the true wavefunction always gives the absolute minimum energy
	* This can be used to determine the effective charge $Z_{eff}$ due to the screening
	* Make $Z$ a parameter, use solution $\psi(\vec r_1, \vec r_2) = e^{-Z_{eff}(r_1 + r_2)}$
	* Determine $E$ in terms of $Z_{eff}$, and set $\diff{E}{Z_{eff}} = 0$ to find the effective charge that results in the minimum energy
* In a multi-electron atom, the energy levels are no longer degenerate and now it depends on the details of the solutions
* e.g. in the 2s orbital we have a little peak below the p orbitals (and the Bohr radius)
	* This makes it so that 2s and 2p are no longer degenerate
	* The 2s is more tightly held and so has a bigger effective charge
	* Energy depends on both $n$ and $l$ (but not $m$ or $m_s$)

## Pauli Exclusion Principle

* No two electrons in a quantum system can occupy the same state
* No two electrons can have the same quantum numbers, so $n, l, m, m_s$ is a unique "quantum address"
* Hund's Rule: the mos stable electronic state within a degenerate set of orbitals is the state with maximum spin multiplicity (i.e. the one with the largest number of unpaired electron spins)

