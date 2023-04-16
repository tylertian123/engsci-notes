# Lecture 10, Feb 2, 2022

## Voltage Division

* Consider 2 resistors in series: \begin{circuitikz}\draw (0, 3) to[short, i=$i_{tot}$] (1.5, 3) to[R=$R_1$, v=$v_1$, -*] (1.5, 1.5) to[R=$R_2$, v=$v_2$, *-] (1.5, 0) to (0, 0); \draw (0, 3) to[open, v=$v_{tot}$, o-o] (0, 0); \end{circuitikz} \begin{circuitikz}\draw (0, 3) to[short, i=$i_{tot}$] (1.5, 3) to[R=$R_1 + R_2$] (1.5, 0) to (0, 0); \draw (0, 3) to[open, v=$v_{tot}$, o-o] (0, 0); \end{circuitikz} 
	* We want to know how the voltage $v_{tot}$ is divided between the two resistors
	* KVL gives: $v_{tot} = v_1 + v_2$
	* Ohm's law gives $i_{tot} = \frac{v_1}{R_1} = \frac{v_{tot}}{R_1 + R_2} \implies v_1 = \frac{R_1}{R_1 + R_2}v_{tot}$
* Voltage drop across a resistor in a series circuit is $\frac{R}{R_{tot}}$ times the total voltage drop (note the polarities have to match)
	* If the polarity of the resistor matches the polarity of $v_{tot}$ then the relation works; if it's opposite then we get the voltage negative instead

