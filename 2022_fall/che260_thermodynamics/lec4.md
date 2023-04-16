# Lecture 4, Sep 15, 2022

## The First Law of Thermodynamics

* For a control mass, energy transfer due to a temperature difference is defined as heat $Q$, and all other forms of energy transfer are defined as work $W$
	* $Q + W = \Delta E$

\noteImportant{Energy transfer to a system is positive; energy transfer from a system is negative}

* As a rate equation: $\dot Q + \dot W = \diff{E}{t}$
* Modes of work:
	* Boundary work: force acts on the boundary of the system, e.g. expansion and compression of a gas
		* Assuming a quasi-equilibrium process and no friction, then $W = -PV$
		* $\delta W = -P\,\dV$
* Constant volume processes do no work
* For an isothermal process $W = -mRT\ln\left(\frac{V_2}{V_1}\right)$
	* If the gas is expanding, $V_2 > V_1$ and the work is negative, so it does work on the surroundings

## Polytropic Processes

* Assume $PV^n = c$, where $n, c$ are constants
* $n = 1$ is an isothermal process (since $PV = mRT$ is constant, so $T$ is constant)
* $n = 0$ is an isobaric process (since then $PV^0 = P = c$)
* $W_{12} = \int _{V_1}^{V_2} \frac{c}{V^n}\,\dV = -c\inteval{\frac{V^{1 - n}}{1 - n}}{V_1}{V_2} = c\left(\frac{V_2^{1 - n} - V_1^{1 - n}}{1 - n}\right)$
* $W_{12} = \frac{P_2V_2 - P_1V_1}{n - 1}$ assuming $n \neq 1$

