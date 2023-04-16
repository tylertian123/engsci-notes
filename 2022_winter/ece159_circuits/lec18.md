# Lecture 18, Feb 28, 2022

## Thevenin Equivalent Circuit

* Equivalent circuits allow us to simplify parts of circuits so we still get the same behaviour elsewhere
* Thevenin's Theorem: A linear circuit can be replaced by a series connection of a voltage source (Thevenin voltage) and a resistor (Thevenin resistance) (Thevenin equivalent circuit), to give the same current and voltage outside the circuit
	* This generalizes equivalent resistances and source transformation to an equivalent circuit of any linear element
* The Thevenin voltage is the same as the open circuit voltage between the terminals
	* i.e. remove the load (rest of the circuit) and open the circuit, find the voltage this way and that is the Thevenin voltage
	* The open circuit voltage can be found using any circuit analysis technique (e.g. nodal/mesh analysis)
	* The polarity of the voltage source must match that of the open circuit voltage found
* The Thevenin resistance can be found through 3 different methods:
	1. If the circuit does not include a dependent source (i.e. only resistors and independent sources): deactivate all the *independent* sources (short voltage sources, open current sources); the equivalent resistance is the Thevenin resistance
	2. If the circuit includes at least 1 independent source: find the open circuit voltage $V_{oc}$ and short circuit current $i_{sc}$; then $R_{Th} = \frac{V_{oc}}{i_{sc}}$ ($V_{oc}$ and $i_{sc}$ must have directions conforming to PSC)
		* This method is essentially based on source transformation; we find the Thevenin and Norton voltage/current and use source transformation to relate the two by the Thevenin/Norton resistance
	3. Otherwise (applies to any linear circuit):
		1. Deactivate all *independent* sources
		2. Add a test current source of $i_T$ between terminals
		3. Find the voltage across the current source $v_T$, *not* conforming to PSC
		4. $R_{Th} = \frac{v_T}{i_T}$
* Alternatively, don't deactivate any sources, connect a current source of $I_T$ and find voltage $V_T$ across it; then $V_T = MI_T + N$, and $N = V_{Th}, M = R_{Th}$
	* This allows you to find both the Thevenin voltage and resistance by solving just one circuit, but you have to work with $I_T$ as an unknown

