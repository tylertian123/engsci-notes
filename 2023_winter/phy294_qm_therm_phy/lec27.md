# Lecture 27 (2-10), Mar 20, 2023

## Thermodynamic Potential

* The postulate directly implies that for a closed system that reaches thermodynamic equilibrium, it is most likely to find itself in a state of maximum $S$
* This can be seen as an alternative way to state the second law, that $S$ is always increasing
* For an isolated system (constant $E$), we say that the entropy is the "thermodynamic potential"
	* Just like how a classical system tries to minimize its potential (e.g. a falling object), the system will try to maximize its entropy
	* Just like $\vec F = -\del U$ is the driving force for a classical system, $\frac{1}{T} = \pdiff{S}{E}$ is the driving force for reaching thermal equilibrium
		* In equilibrium forces are in balance, just like how in thermal equilibrium the temperature must be in balance
* Since $\pdiff{S}{V}$ is the pressure and $\pdiff{S}{N}$ is the chemical potential, the partial derivatives of $S$ determine the "force towards equilibrium"

## General Properties of Entropy

* For now, only consider $E$
* For the Einstein solid, under $\frac{q}{N} \gg 1 \implies \frac{kT}{\hbar\omega \gg 1}$ we had $S(E) = kN\ln\frac{Ee}{N\hbar\omega}$
	* For this system and all "normal" systems, the slope of $S(E)$ to $E$ is always positive (and so $T > 0$)
	* Additionally, this graph flattens out with increasing $E$; therefore $\pdiffn{2}{S}{E}$, and so with increasing $E$, $\pdiff{S}{E} = \frac{1}{T}$ goes down or $T$ goes up
		* This means that the heat capacity is positive
	* Such systems are *thermodynamically stable*
		* For systems held together by gravity (e.g. stars), this pattern is broken and the system actually cools down with more energy
* Recall that for the paramagnet $\Omega(N_\uparrow, N) = \frac{N!}{N_\uparrow!(N - N_\uparrow)!}$
	* This is not a "normal" system since it has a maximum energy
	* The plot of $\Omega$ against $N_\uparrow$ has a maximum at about $N_\uparrow = \frac{N}{2}$
	* To convert this to energy, we have to flip the graph (since $N_\uparrow = N$ has minimum energy)
	* The entropy curve is concave down with a maximum
		* In the first half of the curve between $U_{min}$ and $0$ the temperature is positive and increasing with $E$
		* In the second half of the curve, the temperature is negative
			* This is a metastable region that can only exist for a short amount of time
		* At the maximum, the temperature becomes infinite
	* When the total spin is maximum, we have minimum energy; as we heat up the magnet, the total spin decreases with temperature
		* The total spin at high temperature is $S \sim \frac{\mu _0B}{kT}$ (Curie's law)

