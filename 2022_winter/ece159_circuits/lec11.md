# Lecture 11, Feb 4, 2022

## Current Division

* Similar rule can be found for current in a parallel circuit:
  \begin{circuitikz}\draw (0, 0) to[short, i>^=$i_{tot}$] (1.5, 0) to[R=$R_1$, i>_=$i_1$] (1.5, -1.5) to (0, -1.5); \draw (1.5, 0) to (3.0, 0) to[R=$R_2$, i>_=$i_2$] (3.0, -1.5) to (1.5, -1.5); \draw (0, 0) to[open, o-o, v=$v_{tot}$] (0, -1.5); \end{circuitikz} \begin{circuitikz}\draw (0, 0) to (1.5, 0) to[R=$R_{eq}\equal\frac{R_1R_2}{R_1 + R_2}$, i>_=$i_{tot}$] (1.5, -1.5) to (0, -1.5); \draw (0, 0) to[open, o-o, v=$v_{tot}$] (0, -1.5); \end{circuitikz}
	* $v_{tot} = R_1i_1 = \frac{R_1R_2}{R_1 + R_2}i_{tot} \implies i_1  = \frac{R_2}{R_1 + R_2}i_{tot}$
* The current division principle is the dual of the voltage division principle; note the current division ratio uses the resistances of the **other** branches ($\frac{R_2}{R_1 + R_2}$ for current, $\frac{R_1}{R_1 + R_2}$ for voltage)
* As with voltage division, the signs only work if the direction of $i_1$ matches the direction of $i_{tot}$; if the directions don't match, we need an additional negative sign
* We can write this in terms of the conductance as $i_1 = \frac{G_1}{G_1 + G_2}i_{tot}$, similar to the voltage law
* For multiple resistors in series, we can either use the conductances, or collapse the other resistors down to a single resistor; for 3 resistors it becomes $i_1 = \frac{R_2R_3}{R_1R_2 + R_2R_3 + R_1R_3}i_{tot}$ and so on
* Can also be written as $i_1 = \frac{\frac{1}{R_1}}{\frac{1}{R_1} + \frac{1}{R_2} + \frac{1}{R_3}}i_{tot}$

