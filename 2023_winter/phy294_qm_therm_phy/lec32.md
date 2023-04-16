# Lecture 32 (2-15), Mar 31, 2023

## Thermodynamic Equilibrium and Maxwell's Relations

* To actually maximize the entropy $S(U, V, N)$ we need both $\pdiff{S}{U} = \pdiff{S}{V} = \pdiff{S}{N} = 0$ and for the Hessian matrix of second derivatives to have negative eigenvalues
* Suppose we have some system with $S = S(U, V, N)$ which is some function; we know $\dS = \pdiff{S}{U}\,\dd U + \pdiff{S}{V}\,\dV + \pdiff{S}{N}\,\dd N$
	* This means $\dS = \frac{1}{T}\,\dd U + \frac{p}{T}\,\dV - \frac{\mu}{T}\,\dd N$
	* In this form, the equation is known as the *thermodynamic identity for the entropy*
	* This equation gives the change in entropy for some change in energy, volume, or number of particles
* We can invert $S(U, V, N)$ to get $U(S, V, N)$, the energy in terms of entropy, volume, and number of particles
* Solving for $\dd U$, we have $\dd U = T\,\dS - p\,\dV + \mu\dd N$; this is the *thermodynamic identify for the energy*
	* We can match this to what we get from $U(S, V, N)$
	* This gives us 2 new definitions: $p = \pdiff{U}{V}, \mu = \pdiff{U}{N}$
* These definitions are collectively known as *Maxwell's relations*: $\frac{1}{T} = \pdiff{S}{U}, \frac{p}{T} = \pdiff{S}{V}, \frac{\mu}{T} = -\pdiff{S}{N}, T = \frac{1}{\pdiff{S}{U}} p = \pdiff{U}{V}, \mu = \pdiff{U}{N}$
* To be a maximum, the Hessian must have all negative eigenvalues
* We define thermodynamic equilibrium to be stable when all these conditions hold:
	* $c_V > 0$
	* $\pdiff{P}{V} < 0$
		* Suppose $\pdiff{P}{V} > 0$ in some system, then $P$ increases with pressure or $v$
		* In this case pushing on the substance causes is pressure to be even lower, so this is unstable since the system will just keep on increasing or decreasing in volume
		* This arises when we model particles that interact with each other
	* $\pdiff{\mu}{N} > 0$

