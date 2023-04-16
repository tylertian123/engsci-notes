# Lecture 23 (2-6), Mar 10, 2023

## Fundamental Postulate of Statistical Mechanics

* In an isolated gas of many particles ($N \sim 10^{23}$) there are many ways we can distribute a fixed amount of energy $E$ amount the particles
	* Each of these ways the energy is distributed is a *microstate*; there are many such microstates
	* The total energy is a *macrostate*
* Collisions lead to a change in the way energy is distributed, leading to randomness
* The fundamental postulate of statistical mechanic says that all accessible microstate is equally likely
	* Accessible microstates are ones that have the right amount of total energy that matches a given macrostate
	* We give up the mechanistic description -- it's impractical to know the trajectory of each particle
	* Instead we replace it with the probabilistic distribution
		* As $N$ gets large, probabilities become certainties as probability distribution peaks become sharper
* The *multiplicity function* is the number of microstates accessible to a given macrostate
	* Once you have the multiplicity function of a system, you can deduce everything about the system

## Electronic Paramagnet

* A material that has a macroscopic magnetic moment
* We'll model the microscopic magnetic moments as spins
	* The 2 degrees of freedom are the spins
	* $s_i = \Set{+1, -1}$ for $i = 1, \cdots, N$
* We ignore spin-spin interaction, spin-atom interaction
	* Without these simplifications this would be extremely hard to solve
	* However without spin-spin interaction this system does not reach equilibrium
* In this $N$-spin system we have $2^N$ possible microstates
	* Microstates are discrete and finite -- this is not always the case
* Motivation: If we put a magnet in a magnetic field, it has energy $U = -\mu \cdot \vec B$, which is minimized when the 2 vectors are aligned
	* Therefore $U_i = -\mu _0Bs_i$ so $U = -\mu _0B \sum _{i = 1}^N s_i = -\mu _0BS$ where $S$ is the total spin, the sum of the individual spins
* $S$ is the macrostate, which can be observed macroscopically
	* $S$ is an integer in the range $[-N, N]$, in increments of 2 (since flipping a spin changes the total spin by 2)
	* This gives us a total of $N + 1$ possible macrostates
		* Instead of talking about $S$, we just need to specify $N_\uparrow$ since $N_\downarrow = N - N_\uparrow$
		* $S = 2N_\uparrow - N$
		* There are $N + 1$ possible values of $N_\uparrow$ so there are $N + 1$ macrostates
	* $U$, $S$, $N_\uparrow$ can all be used equivalently to specify a macrostate
* For this system, the multiplicity function is easy to calculate
	* $\Omega(N_\uparrow, N) = \binom{N}{N_\uparrow} = \frac{N!}{(N - N_\uparrow)!N_\uparrow!}$

