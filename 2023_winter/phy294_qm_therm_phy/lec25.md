# Lecture 25 (2-8), Mar 16, 2023

## General Thermal Equilibrium -- Statistical Definition of Temperature and Entropy

* We don't need to be restricted to the Einstein solid
* Consider a system 1 with energy $E_1$, system 2 with energy $E_2$, being brought together an allowed to reach thermal equilibrium ($N, V$ are not exchanged)
* In TD the overall system has energy $E = E_1 + E_2$ with $E_1' = \frac{E}{2} - \Delta$ distributed to the first system, $E_2' = \frac{E}{2} + \Delta$ distributed to the second system
* The probability of having a particular $\Delta$ is $P(\Delta) = \frac{\Omega _1(\frac{E}{2} - \Delta)\Omega _2(\frac{E}{2} + \Delta)}{\sum _{\tilde\Delta = -E/2}^{E/2} \Omega _1(\frac{E}{2} - \tilde\Delta)\Omega _2(\frac{E}{2} + \tilde\Delta)}$
* We wish to find $\max _\Delta P(\Delta)$
	* $\pdiff{}{\Delta}\Omega _1\left(\frac{E}{2} - \Delta\right)\Omega _2\left(\frac{E}{2} + \Delta\right) = 0$
	* $\pdiff{\Omega _1\left(\frac{E}{2} - \Delta\right)}{\left(\frac{E}{2} - \Delta\right)}(-1)\Omega _2\left(\frac{E}{2} + \Delta\right) + \pdiff{\Omega _2\left(\frac{E}{2} + \Delta\right)}{\left(\frac{E}{2} + \Delta\right)}(1)\Omega _1\left(\frac{E}{2} - \Delta\right) = 0$
	* $\frac{1}{\Omega _1\left(\frac{E}{2} - \Delta\right)}\pdiff{\Omega _1\left(\frac{E}{2} - \Delta\right)}{\left(\frac{E}{2} - \Delta\right)} = \frac{1}{\Omega _2\left(\frac{E}{2} + \Delta\right)}\pdiff{\Omega _2\left(\frac{E}{2} + \Delta\right)}{\left(\frac{E}{2} + \Delta\right)}$
	* $\pdiff{}{\left(\frac{E}{2} - \Delta\right)}\ln\Omega _1\left(\frac{E}{2} - \Delta\right) = \pdiff{}{\left(\frac{E}{2} + \Delta\right)}\ln\Omega _2\left(\frac{E}{2} + \Delta\right)$
	* $\pdiff{}{E_1'} k\ln\Omega _1(E_1') = \pdiff{}{E_2'} k\ln\Omega _2(E_2')$
		* The left hand side is a property of system 1, the right hand side is a property of system 2
		* This means as two bodies are brought into contact, it will change until this quantity $\pdiff{}{E} k\ln\Omega(E)$ becomes the same for the two bodies
	* This leads us to define $\pdiff{}{E_1'}k\ln\Omega _1(E_1') = \frac{1}{T_1(E_2', N, V)}, \pdiff{}{E_2'}k\ln\Omega _2(E_2') = \frac{1}{T_2(E_2', N, V)}$
		* Temperature is a function of $E, N, V$
	* We can also define entropy as $k\ln\Omega (E)$; since the macrostate that has the largest multiplicity is the most likely, this means entropy will be maximized

\noteDefn{The \textit{entropy} of a system is defined as $$S(E, N, V) = k\ln\Omega(E, N, V)$$ \tcblower The \textit{temperature} of a system is defined as $$\frac{1}{T(E, N, V)} = \left(\pdiff{S}{E}\right)_{N, V}$$}

* Since each macrostate must have $\Omega \geq 1$, we have $S \geq 0$
	* Consider the case of the electronic paramagnet, the state $N_\uparrow = N$ or $N_\uparrow = 0$ only have one microstate, so $\Omega = 1, S = 0$
		* This a very ordered system
	* If $N_\uparrow \sim \frac{N}{2}$ we have a lot of microstates, so we have $S \gg 1$; this is a disordered system
	* This is why entropy is sometimes referred to as the "degree of disorder"
		* In this case, "disorder" is how many microstates a macrostate can exist in
	* We can also consider entropy as the inverse of how much information you have: in the $N_\uparrow = N$ state we know exactly which microstate the system is in, but in the $N_\uparrow \sim \frac{N}{2}$ state there are many microstates that the system could be in, so we have very little information about the exact microstate
* Also notice $T \geq 0$ because $\pdiff{S}{E} \geq 0$ for most "normal" systems (note this is not true for the electronic paramagnet)
	* If you heat the system, energy is introduced so there are more ways to distribute the energy, therefore entropy should also increase

