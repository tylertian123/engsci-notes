# Lecture 1, Sep 8, 2022

## Fundamental Concepts

* Energy: the capacity to do work
* Work: a transfer of energy
* Energy is a *fundamental concept*
* Fundamental concepts include:
	* Mass
	* Volume
	* Time
	* Energy
	* Entropy
* Fundamental concepts cannot be measured directly
	* e.g. you can't directly measure mass, instead you have to measure weight (force)
* A system has energy if it can lift a mass
* Heat $Q$ is also a form of energy

## The Heat Engine

* A heat engine converts heat into work
* From heat engines came the science of thermodynamics
* A heat engine takes heat $Q_H$ from a high temperature source $T_H$, and produces work $W$
	* Heat engines necessarily have to dump heat $Q_C$ into a heat sink at temperature $T_C$
* To maximize efficiency, we need to maximize $w$ and minimize $Q_H$
	* The First Law of Thermodynamics says that in a heat engine, $Q_H = Q_C + W$, i.e. energy in equals energy out

\noteDefn{The First Law of Thermodynamics: Energy is conserved}

\noteDefn{The thermal efficiency of a heat engine: $\eta _{th} = \frac{W}{Q_H}$}

## Entropy

* Early steam engines had $\eta = 4\%$, engines today only have $\eta = 30\%$
	* What is the maximum efficiency we can achieve?
* The cooling wastes energy, so is it really necessary?
	* Carnot: it's not possible to eliminate the heat sink, so efficiency can never truly be $100\%$
* To make sense of this, Clausius proposed the new property *entropy* $S$
* Entropy is similar to energy
* When you add heat to a system, the energy change is $\Delta E = Q$; the entropy change is $\Delta S = \frac{Q}{T}$

\noteDefn{Entropy $\Delta S = \frac{Q}{T}$, the heat added to a system divided by its temperature}

* Consider an object $A$ with temperature $T + \Delta T$, and object $B$ with temperature $T$
	* When they're brought into contact they will exchange heat, so $\Delta E_A = -Q, \Delta E_B = Q$
	* The entropy change is $\Delta S_A = -\frac{Q}{T + \Delta T}, \Delta S_B = \frac{Q}{T}$
	* $\abs{\Delta S_A} < \abs{\Delta S_B}$, so the total $\Delta S = \Delta S_A + \Delta S_B > 0$
	* Entropy has been generated, but energy is conserved
* In order to destroy entropy, we'd need the heat to go from the colder object to the hotter object
* Entropy can only be created, never destroyed

\noteDefn{The Second Law of Thermodynamics: The entropy of an isolated system always increases: $\Delta S > 0$}

* The second law determines what processes happen spontaneously
* To understand what entropy really means, we need to get down to the molecular level
	* $S$ is related to the distribution of energies, whereas $E$ is the sum of energies

