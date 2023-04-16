# Lecture 4, Jan 24, 2022

## Circuit Elements -- Dependent Sources

* Linear dependent sources:
	1. Voltage-dependent voltage source (controlled voltage source): voltage provided by the source is $kv_x$ where $v_x$ is the voltage somewhere in the circuit to which this source is connected
		* The voltage doesn't dependent on the current that passes through; it depends on the voltage somewhere else in the circuit completely
		* Notation ($v_x$ marked in the circuit): \begin{circuitikz} \draw (0, 0) to[american controlled voltage source, o-o, l_=$kv_x$] (1.5, 0); \end{circuitikz}
		* $k$ is dimensionless (voltage to voltage)
	2. Current-dependent voltage source: voltage provided is $ki_x$, like the voltage-dependent voltage source but for current
		* Notation ($i_x$ marked in the circuit): \begin{circuitikz} \draw (0, 0) to[american controlled voltage source, o-o, l_=$ki_x$] (1.5, 0); \end{circuitikz}
		* $k$ has dimensions of voltage over current, $\si{V/A}$
	3. Voltage-dependent current source: current output is $kv_x$
		* Notation ($v_x$ marked in the circuit): \begin{circuitikz} \draw (0, 0) to[american controlled current source, o-o, l_=$kv_x$] (1.5, 0); \end{circuitikz}
		* $k$ has dimensions of current over voltage, $\si{A/V}$
	4. Current-dependent current source: current output is $ki_x$
		* Notation ($i_x$ marked in the circuit): \begin{circuitikz} \draw (0, 0) to[american controlled current source, o-o, l_=$ki_x$] (1.5, 0); \end{circuitikz}
		* $k$ is dimensionless (current to current)
* Just like independent sources, perfectly linear dependent sources don't exist in the real world, but under certain conditions we can use them to model real things

## Other Circuit Elements

* Resistors: ratio of voltage over current is always a constant, $\frac{v}{i} = R$
	* Notation: \begin{circuitikz} \draw (0, 0) to[R=$R$, o-o, i=$i$, v=$v$] (1.5, 0); \end{circuitikz}
	* The relation $\frac{v}{i} = R$ is only true when PSC holds (when it doesn't, we need a minus sign)
	* $R$ has units of $\si{A/V} = \si{\ohm}$ (Ohm)
	* Alternatively, $G = \frac{1}{R}$ is the *conductance* (as opposed to $R$ being the *resistance*), which has units of $\si{\ohm^{-1}} = \si{\mho}$ (mho) or Siemens $\si{Si}$
	* Assuming $R$ is positive, power going through will always be positive, i.e. the resistor always consumes power

