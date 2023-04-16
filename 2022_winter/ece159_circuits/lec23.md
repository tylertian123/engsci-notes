# Lecture 23, Mar 11, 2022

## Series and Parallel Connections of Capacitors

* Suppose we have $n$ capacitors $c_1, \cdots, c_n$ connected in parallel
	* Each capacitor has a current $i_k = c_k\diff{v_k}{t}$ but the capacitors all have the same voltage, so $i_k = c_k\diff{v}{t}$
	* To find the equivalent capacitance, we need to find the total current
	* $i_{tot} = \sum _{k = 1}^n i_k = \diff{v}{t}\sum _{k = 1}^n c_k \implies c_{eq} = \sum _{k = 1}^n c_k$
* The equivalent capacitance for capacitors in parallel is the sum of all the capacitances
* Suppose we have $n$ capacitors $c_1, \cdots, c_n$ connected in series
	* All capacitors have the same current and each has a voltage $v_k$
	* KVL gives $v_{tot} = \sum _{k = 1}^n v_k \implies \diff{v_{tot}}{t} = \sum _{k = 1}^n \diff{v_k}{t} = \sum _{k = 1}^n \frac{1}{c_k}i = i\sum _{k = 1}^n \frac{1}{c_k} \implies \frac{1}{c_{eq}} = \sum _{k = 1}^n \frac{1}{c_k}$
* The equivalent capacitance for capacitors in series is the reciprocal of the sum of the reciprocals of the capacitances
	* For $c_1$ and $c_2$ in series, $c_{eq} = \frac{c_1c_2}{c_1 + c_2}$
* The behaviour in series vs parallel for capacitors is opposite that of resistors

## Inductors

* An inductor consists of a coil of conducting wire with a core of any material
* Like a capacitor, an inductor stores energy, this time in a magnetic field generated as current passes through it
	* Since the energy density for a magnetic field is much larger than that of an electric field, the energy that can be stored in an inductor is much larger than a capacitor
* Inductor symbol: \begin{circuitikz} \draw (0, 0) to[L=$L$, v=$v$, i=$i$, o-o] (1.5, 0); \end{circuitikz}
* For an inductor, voltage is related to current by $v = L\diff{i}{t}$; an inductor is the dual of a capacitor
	* $L$ is the *inductance* and has units of henry $H$
		* The larger the value of $L$, the more energy can be stored in the inductor
		* $L$ depends on the kind of core used in the inductor
	* This relation only holds if PSC holds
* To get current from voltage we can integrate: $i(t_2) = i(t_1) + \frac{1}{L}\int _{t_1}^{t_2} v\,\dt$ or $i(t) = i(0) + \frac{1}{L}\int _0^t v(\tau)\,\dtau$
* Properties of inductors:
	1. If the current is constant, then the voltage is always $0$
		* In a DC circuit (in steady state) the inductor can be modelled by a short
	2. The current of an inductor cannot change abruptly since that would create an infinite voltage
* Energy of a capacitor: $\alignedeqntwo[t]{W(t_2) - W(t_1)}{\int _{t_1}^{t_2} P(t)\,\dt}{\int _{t_1}^{t_2} v(t)i(t)\,\dt}{\int _{t_1}^{t_2} Li(t)\diff{i}{t}\,\dt}{L\int _{t_1}^{t_2} i\,\dd i}{\frac{1}{2}L(i^2(t_2) - i^2(t_1))}$
	* Assuming no magnetic field at $t = 0$, $W(t) = \frac{1}{2}Li^2(t)$
	* Like an ideal capacitor, an ideal inductor does not dissipate energy and only stores it
* The equivalent inductance of inductors in series is the sum of the inductances; in parallel it's the reciprocal of the sum of the reciprocals (like resistors)

