# Lecture 30 (2-13), Mar 27, 2023

## Clausius' Definition of Entropy

* Consider keeping $N$ and $V$ fixed, then for infinitesimal changes $\Delta U$, $\frac{\Delta S}{\Delta U} = \frac{1}{T} \implies \Delta S = \frac{\Delta U}{T}$
* Since we keep volume fixed, $\Delta U = \delta Q$ therefore $S = \frac{\delta Q}{T}$ -- this is the Clausius definition of entropy (the original thermodynamic definition of entropy)
	* In the Clausius definition only changes in $S$ are defined
* Clausius also postulated that $\Delta S \geq 0$ in a closed system, which is formulated as the second law
* $S = \frac{\delta Q}{T}$ and $\Delta S \geq 0$ implies a unidirectional flow of heat; heat always flows from a hotter object to a colder object, so that the loss in entropy of the hotter object is less than the gain in entropy of the colder object
* Since $c_v = \frac{\Delta U}{\Delta T}$ we have $\Delta S = \frac{\Delta U}{T} = c_v\frac{\Delta T}{T}$
	* Integrating, we have $S(T_2) - S(T_1) = \int _{T_1}^{T_2} \frac{c_v(T)}{T}\,\dT$
	* This allows us to measure changes in entropy

## Other Properties of Entropy

* For an ideal gas, $c_v = \frac{3}{2}Nk$ which is independent of $T$
	* $S(T_2) - S(T_1) = \int _{T_1}^{T_2} \frac{\frac{3}{2}Nk}{T}\,\dT = \frac{3}{2}Nk\ln\frac{T_2}{T_1}$
	* As $T_2 \to 0$, we have $S(T_2) - S(T_1) \to -\infty$; but $S$ is log of multiplicity, so it should be finite and positive
	* This is another way that we can show the classical ideal gas model fails
* In order to make sure $S$ stays finite as $T_2 \to 0$, we must place constraints on $c_v$
	* A sufficient condition is to have $c_v \sim T^\alpha, \alpha > 0$ so that when we integrate we get $\frac{1}{\alpha}T^\alpha$, which is finite as $T \to 0$ if $\alpha > 0$
	* This is known as Nernst's theorem

## Metals as Ideal Quantum Gases (Fermi Gases)

* In a metal electrons are delocalized and freely float around, but they are very dense and have large de Broglie wavelengths due to their tiny mass, so they exhibit quantum behaviour at room temperature
* For such a system $c_v \sim aT + bT^3$
	* The first term comes from the contribution of electrons; the second term comes from contribution of phonons (quantum waves)
* For "strange metals", $c_v \sim T^\frac{p}{q}$

