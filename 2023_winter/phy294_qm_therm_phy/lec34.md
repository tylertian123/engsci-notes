# Lecture 34 (2-17), Apr 6, 2023

## Properties of the $T, V, N$ System

* Such systems are a lot easier to study, since keeping $T$ constant is easier and $Z$ is a lot easier to find than $\Omega$
* Recall: for a $T, V, N$ system in contact with a thermal reservoir, the probability of the system being in any microstate is given by $\frac{1}{Z}e^{-\beta E}$, where $E$ is the energy of the microstate and $\beta = \frac{1}{kT}$
* $Z(T, V, N) = \sum e^{-\beta E}$ is called the *partition function* and plays a role analogous to the multiplicity function
* $\dd F(T, V, N) = -S\,\dT - p\,\dV + \mu\,\dd N = \pdiff{F}{T}\,\dd T + \pdiff{F}{V}\,\dV + \pdiff{F}{N}\,\dd N$ is the thermodynamic identity for $F$
	* From this we get a new set of Maxwell's equations
	* Note: derivation not shown
* The probability that the system has some energy is then $P(E) = \frac{1}{Z}e^{-\beta E}\Omega(E) = \frac{1}{Z}e^{-\beta E}e^{\frac{S}{k}} = \frac{1}{Z}e^{-\beta(E - TS)}$
	* $P$ is maximized when $E - TS = F$ is minimized, so we call $F$ the free energy -- the system wants to minimize $F$
	* $F$ is the thermodynamic potential similar to energy except it's minimized
* At low $T$, $F \approx E$, so at low temperature the minimum of $F$ is the minimum of $E$ -- the system goes to its ground state
* At high $T$, $F \approx -TS$, so the minimum of $F$ is the maximum of $S$ -- the system goes to maximum entropy
* Such systems are ordered at low temperature (ground state) and unordered at high temperature (high entropy)
	* When the system heats up, the order and disorder fight
	* Phase transitions happen when one wins over the other

## Partition Function of the Einstein Solid

* Recall the energy of a microstate is $-\hbar\omega (q_1 + \cdots + q_N)$
* $\alignedeqntwo[t]{Z}{\sum _{q_1 = 0}^\infty \cdots \sum _{q_N = 0}^\infty e^{-\frac{\hbar\omega}{kT}(q_1 + \cdots + q_N)}}{\sum _{q_1 = 0}^\infty e^{-\frac{\hbar\omega}{kT}q_1}\cdots \sum _{q_N = 0}^\infty e^{-\frac{\hbar\omega}{kT}q_N}}{\prod _{i = 1}^N Z_i}{Z_1^N}$
	* $Z_1$ is the partition function for a single harmonic oscillator
	* This is a general result -- for systems where the energy is the sum of energies of smaller parts, the partition function factors into a product of the partition functions of the smaller parts
	* This is a useful property that the multiplicity function does not
* $\alignedeqntwo[t]{Z_1}{\sum _{q = 0}^\infty e^{-\frac{\hbar\omega q}{kT}}}{\sum _{q = 0}^\infty \left(e^{-\frac{\hbar\omega}{kT}}\right)^q}{\frac{1}{1 - e^{-\hbar\omega}{kT}}}{\frac{1}{1 - e^{-\beta\hbar\omega}}}$
	* This gives $Z = \left(\frac{1}{1 - e^{-\beta\hbar\omega}}\right)^N$
* Let's calculate the average energy of the system as a function of temperature
* $\alignedeqntwo[t]{\bar E}{\sum P(\text{microstate})E(\text{microstate})}{\frac{1}{Z}\sum E(\text{microstate})e^{-\beta E(\text{microstate})}}{\frac{1}{Z}\sum -\pdiff{}{\beta}e^{-\beta E(\text{microstate})}}{-\frac{1}{Z}\pdiff{}{\beta}\sum e^{-\beta E(\text{microstate})}}{-\frac{1}{Z}\pdiff{}{\beta}Z}{-\pdiff{}{\beta}\ln Z}$
* Substitute: $\alignedeqntwo[t]{\bar E}{-\pdiff{}{\beta}\ln\left(\frac{1}{1 - e^{-\beta\hbar\omega}}\right)^N}{N\pdiff{}{\beta}\ln\left(1 - e^{-\omega\hbar\omega}\right)}{\frac{N\hbar\omega e^{-\beta\hbar\omega}}{1 - e^{-\beta\hbar\omega}}}$
* $\frac{\bar E}{N} = \frac{\hbar\omega}{e^\frac{\hbar\omega}{kT} - 1}$
	* Unlike our previous approximations this works at all temperatures
	* At low temperature, $\frac{\hbar\omega}{kT} \gg 1$ so $\frac{\bar E}{N} \approx \hbar\omega e^{-\frac{\hbar\omega}{kT}}$ (midterm solution)
	* At high temperature $e^\frac{\hbar\omega}{kT} \approx 1 + \frac{\hbar\omega}{kT}$ so $\frac{\bar E}{N} \approx kT$ which is equipartition!
* Note we have: $Z_1 = \sum _{q = 0}^\infty e^{-\frac{\hbar\omega}{kT}q} = 1 + e^{-\frac{\hbar\omega}{kT}} + e^{-2\frac{\hbar\omega}{kT}} + e^{-3\frac{\hbar\omega}{kT}} + \cdots$
	* Terms with $q\hbar\omega \gg kT$ will have pretty much no contribution to $Z_1$, so these states with higher energy do not contribute
	* $Z$ is called the partition function because roughly it describes the partition between states with high energy and states with low energy

