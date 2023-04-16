# Lecture 9, Feb 2, 2022

## Simplifying Series and Parallel Resistors

* Two components are connected *in series* if they're connected back-to-back, and at the point of connection there is no other current path: \begin{circuitikz}\draw (0, 0) to[R=$R_1$, o-*] (1.5, 0) to[R=$R_2$, *-o] (3, 0); \end{circuitikz}
* To find equivalent resistance in a series circuit, compare: \begin{circuitikz}\draw (0, 3) to (1.5, 3) to[R=$R_1$, v=$v_1$, -*] (1.5, 1.5) to[R=$R_2$, v=$v_2$, *-] (1.5, 0) to (0, 0); \draw (0, 3) to[open, v=$v_{tot}$, o-o] (0, 0); \end{circuitikz} \begin{circuitikz}\draw (0, 3) to (1.5, 3) to[R=$R_{eq}$, v=$v_{eq}$] (1.5, 0) to (0, 0); \draw (0, 3) to[open, v=$v_{tot}$, o-o] (0, 0); \end{circuitikz} 
	* KVL gives: $-v_{tot} + v_1 + v_2 = 0$
	* Applying Ohm's law: $v_1 = R_1i_{tot}$ and $v_2 = R_2i_{tot}$
	* Substituting the voltages back in: $-v_{tot} + R_1i_{tot} + R_2i_{tot} = 0 \implies v_{tot} = (R_1 + R_2)i_{tot}$
	* Compare this to Ohm's law for the second circuit, we see that the equivalent resistance is $R_1 + R_2$
	* This generalizes to any number of resistors to give $R_{eq} = R_1 + R_2 + \cdots + R_n$
	* In the extreme cases, if one resistor is an open circuit $R = \infty$, the entire circuit can be considered as an open connection; if one resistor is a short circuit, then it wouldn't have any effect
* Two components are connected *in parallel* if they share two common nodes: \begin{circuitikz}\draw (0, 0) to (1.5, 0) to[R=$R_1$] (1.5, -1.5) to (0, -1.5); \draw (1.5, 0) to (3.0, 0) to[R=$R_2$] (3.0, -1.5) to (1.5, -1.5); \end{circuitikz}
* To find equivalent resistance in a parallel circuit, compare:
  \begin{circuitikz}\draw (0, 0) to (1.5, 0) to[R=$R_1$, i>_=$i_1$] (1.5, -1.5) to (0, -1.5); \draw (1.5, 0) to (3.0, 0) to[R=$R_2$, i>_=$i_2$] (3.0, -1.5) to (1.5, -1.5); \draw (0, 0) to[open, o-o, v=$v_{tot}$] (0, -1.5); \end{circuitikz} \begin{circuitikz}\draw (0, 0) to (1.5, 0) to[R=$R_{eq}$, i>_=$i_{tot}$] (1.5, -1.5) to (0, -1.5); \draw (0, 0) to[open, o-o, v=$v_{tot}$] (0, -1.5); \end{circuitikz}
	* KCL gives: $i_{tot} = i_1 + i_2$
	* KVL gives: $v_{tot} = R_ii_1 = R_2i_2 \implies i_1 = \frac{v_{tot}}{R_1}, i_2 = \frac{v_{tot}}{R_2}$
	* $i_{tot} = \frac{v_{tot}}{R_1} + \frac{v_{tot}}{R_2}$
	* Compare this to circuit 2 we get $\frac{1}{R_{eq}} = \frac{1}{R_1} + \frac{1}{R_2} \implies R_{eq} = \frac{1}{\frac{1}{R_1} + \frac{1}{R_2}} = \frac{R_1R_2}{R_1 + R_2}$
		* Alternatively, the equivalent conductance of two resistors in parallel is the sum of the conductances
	* The conductance relation generalizes to any number of resistors; however $\frac{R_1R_2}{R_1 + R_2}$ becomes $\frac{R_1R_2R_3}{R_1R_2 + R_2R_3 + R_1R_3}$ for 3 resistors, $\frac{R_1R_2R_3R_4}{R_1R_2R_3 + R_1R_2R_4 + R_1R_3R_4 + R_2R_3R_4}$ and so on
	* In the extreme cases, if one resistor is a short circuit, then the entire circuit can be considered a short circuit; if one resistor is an open connection, then it does not have an impact (since $\frac{1}{R} \to 0$)

