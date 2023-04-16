# Lecture 17, Feb 18, 2022

## Superposition Principle

* Linear circuit: A circuit that consists of independent sources, linear dependent sources, and linear elements
	* Examples of linear elements include resistors, capacitors and inductors
* Superposition principle: The response of a linear circuit to multiple independent sources is equal to the algebraic sum of the responses caused by each independent source acting alone
	* This allows us to look at only one independent source at a time to simplify the problem
* Example circuit: Find the voltage $v_x$:
  \begin{circuitikz}
  	\draw (0, 0) to[american voltage source=$6\si{V}$, invert] (0, 1.5) to[R=$8\si{\ohm}$] (1.5, 1.5) to (3, 1.5) to[american current source, l^=$3\si{A}$, invert] (3, 0) to (0, 0);
	\draw (1.5, 1.5) to[R=$4\si{\ohm}$, v=$v_x$] (1.5, 0);
  \end{circuitikz}
  * Phase 1: Deactivate the voltage source
  	* To deactivate a voltage source, we short it out so the voltage is zero:
	  \begin{circuitikz}
		\draw (0, 0) to[short] (0, 1.5) to[R=$8\si{\ohm}$] (1.5, 1.5) to (3, 1.5) to[american current source, l^=$3\si{A}$, invert] (3, 0) to (0, 0);
		\draw (1.5, 1.5) to[R=$4\si{\ohm}$, v=$v_x$] (1.5, 0);
	  \end{circuitikz}
	* Now the resistors are in parallel; use current division: $i_{x_1} = 3\frac{8}{4 + 8} = 2\si{A}$, so $v_{x_1} = 4i_{x_1} = 8\si{V}$
  * Phase 2: Deactivate the current source
  	* To deactivate a current source, we open the circuit so the current is zero:
	  \begin{circuitikz}
		\draw (0, 0) to[american voltage source=$6\si{V}$, invert] (0, 1.5) to[R=$8\si{\ohm}$] (1.5, 1.5) to (3, 1.5) to[open, o-o] (3, 0) to (0, 0);
		\draw (1.5, 1.5) to[R=$4\si{\ohm}$, v=$v_x$] (1.5, 0);
	  \end{circuitikz}
	* Now the resistors are in series; use voltage division: $v_{x_2} = 6\frac{4}{4 + 8} = 2\si{V}$
  * The voltage across $v_x$ with the two sources combined is $v_x = v_{x_1} + v_{x_2} = 10\si{V}$

