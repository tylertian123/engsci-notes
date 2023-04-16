# Lecture 3, Jan 19, 2022

## Power Conservation

* For any circuit, $\sum P_k = 0$ (power conservation law)
	* Note the signs are very important here

## Circuit Elements -- Independent Sources

1. Independent voltage sources: voltage sources that provide a fixed voltage no matter what current is flowing through it
	* The voltage could be fixed or a time-variant function, e.g. $v_s(t) = 5\cos(100t + 2)\si{V}$
	* Generic notation: \begin{circuitikz}\draw (0, 0) to[american voltage source, o-o] (1.5, 0); \end{circuitikz}
	* Fixed voltages: \begin{circuitikz}\draw (0, 0) to[battery1, o-o] (1.5, 0);\end{circuitikz}
	* Sinusoidal voltage source: \begin{circuitikz}\draw (0, 0) to[sinusoidal voltage source, o-o] (1.5, 0);\end{circuitikz}
	* These are just *models*; they don't actually exist because in reality current always impact the voltage a little bit
	* Which way the current flows depends on the circuit, so whether the voltage source produces or consumes power depends on the circuits
2. Independent current sources: current sources that provide a fixed current no matter the voltage across it
	* Current could be fixed or time-variant
	* Generic notation: \begin{circuitikz} \draw (0, 0) to[american current source, o-o] (1.5, 0); \end{circuitikz}
	* Polarity depends on the rest of the circuit and so does whether it generates or consumes power

