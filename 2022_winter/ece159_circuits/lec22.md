# Lecture 22, Mar 9, 2022

## Capacitors

* A capacitor consists of 2 conducting plates separated by an insulator; when connected to a voltage, charges accumulate on the plates, creating an electric field and storing energy: \begin{circuitikz}\draw (0, 0) to[V=$V(t)$, invert] (0, 1.5) -- (1.5, 1.5) to[pC=$c$, v=$v$] (1.5, 0) -- (0, 0);\end{circuitikz}
	* The accumulated charge is proportional to the voltage: $q(t) = cv(t)$
	* $c$ is the *capacitance*, and is determined by the physical characteristics of the capacitor (similar to resistance for a resistor)
	* Capacitance has units of Coulombs per volt or farads: $\si{C/V} = \si{F}$
		* In practice one farad is a very large capacitance; most capacitors are in the order of microfarads or smaller
* Translating this into current: $i = \diff{q}{t} = \diff{}{t}cv(t) \implies i(t) = c\diff{v}{t}$
	* Current passing through a capacitor is proportional to the rate of change of voltage
	* This relation holds if PSC holds; otherwise $i = -c\diff{v}{t}$
* In the other direction: $\int _{t_1}^{t_2} c\diff{v}{t}\,\dt = \int _{t_1}^{t_2} i(t)\,\dt \implies v(t_2) - v(t_1) = \frac{1}{c}\int _{t_1}^{t_2} i(t)\,\dt$
	* $v(t) = v(0) + \frac{1}{c}\int _0^t i(\tau)\,\dtau$
	* To find the voltage of a capacitor at time $t$, integrate the current
	* We need both the current function and a known value of $v(t)$, unlike with current from voltage where we only need the voltage function
* Properties of capacitors: \begin{circuitikz}\draw (0, 0) to[pC=$c$, v=$v$, i=$i$, o-o] (1.5, 0);\end{circuitikz}
	1. If the voltage is constant (i.e. DC), then current is always 0, since $\diff{v}{t}$ is 0
		* A capacitor can be modelled as an open circuit in a DC circuit
	2. The voltage of a capacitor cannot change abruptly; a discontinuity in voltage creates an infinite $\diff{v}{t}$ and infinite current
* Find energy of a capacitor: $\alignedeqntwo[t]{W(t_2) - W(t_1)}{\int _{t_1}^{t_2} P(t)\,\dt}{\int _{t_1}^{t_2} v(t)i(t)\,\dt}{\int _{t_1}^{t_2} cv(t)\diff{v}{t}\,\dt}{c\int _{t_1}^{t_2} v \,\dv}{\frac{1}{2}c(v^2(t_2) - v^2(t_1))}$
	* Assuming capacitor is unchanged at $t = 0$ (i.e. $v(0) = 0$), $W(t) = \frac{1}{2}cv^2(t)$
	* An ideal capacitor does not dissipate energy; it only stores and delivers energy
* Although an ideal capacitor stops all DC current, a physical capacitor has some leakage current
* A real capacitor can be modelled as an ideal capacitor in parallel with a *leakage resistance* of $R_L$, typically in the hundreds of megaohms

