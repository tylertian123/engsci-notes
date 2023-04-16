# Lectures 1/2, Jan 14/17, 2022

## Electric Variables

* An electric circuit is an interconnection of conductors, nonconductors and semiconductors
* The flow of electricity always involves the movement of charge
* Fundamental electric variables:
	1. Electric current
		* If we take a cross section of a conductor with moving charges, we get charge $q(t)$ as a function of time
		* Define *current* as the rate of change charge with respect to time, $i \equiv \diff{q}{t}$ with units of $\si{C/s} = \si{A}$ (Coulombs per second, or Amperes)
		* Current also has a direction (i.e. the direction of charge flow); the convention is the direction of movement of the *positive* charge (even though negative charges is what's actually moving physically)
		* Direction shown with arrows
	2. Voltage
		* Movement of charge is associated with energy
		* Define *voltage* between two points as the energy required to move 1 Coulomb of charge between two points in a circuit
		* $v \equiv \diff{w}{q}$ where $w$ is energy, $q$, is charge; units of $\si{J/C} = \si{V}$ (Joules per Coulomb, or Volts)
		* Voltage also has a *polarity* (positive or negative); the positive side is where the movement starts, and the negative side is where the movement ends
			* When we say "the voltage between point A and point B", point A is the positive side and point B is the negative side
		* Polarity shown with positive and negative signs
	3. Power
		* Rate of absorbing or delivering energy with respect to time
		* $\diff{w}{t} = \diff{w}{q}\diff{q}{t} \implies P \equiv \diff{w}{t} = vi$ with units of $\si{J/s} = \si{W}$ (Joules per second or Watts)
		* To differentiate whether power is consumed or generated, we need another sign convention
		* Passive sign convention (PSC): for a pair of $v$ and $i$, PSC holds if current enters the positive side of the voltage polarity first
			* If PSC holds, then $P = +vi$; $P > 0 \implies P$ is absorbed; $P < 0 \implies P$ is delivered
			* Otherwise, $P = -vi$; same holds for the meaning of sign of $P$

