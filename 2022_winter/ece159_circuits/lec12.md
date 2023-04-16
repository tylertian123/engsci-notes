# Lecture 12, Feb 7, 2022

## Nodal Analysis

* Nodal analysis is an algorithmic method for circuit analysis; it finds the node voltages at every node in the circuit
	* Define *node voltage* as the voltage between a node and a reference point (common ground), with positive polarity at the node and negative polarity at the reference point
	* The reference (ground) node is typically denoted with a ground symbol: $\begin{circuitikz}\draw (0, 0) node[ground]{}; \end{circuitikz}$ or $\begin{circuitikz}\draw (0, 0) node[eground]{}; \end{circuitikz}$
* Apply KCL for every node in terms of the node voltages
	* Voltage between two nodes is the difference of their nodal voltages
	* $v_{AB} = v_A - v_B$ and $v_{BA} = v_B - v_A$
* Procedure:
	1. Find all the nodes in the circuit and label them, choose one as ground
		* Choice of ground node is arbitrary but sometimes it can simplify the math
		* Choose the node that's connected to the highest number of voltage sources; prefer independent sources over dependent sources
	2. Assume current directions/signs (negative for current entering node, positive for current leaving)
	3. Write KCL for all the ungrounded notes
		* Current sources: we have voltage directly, resistors: use Ohm's law
		* If we have a voltage source between the ground node and another node, we can get the voltage of that node directly
		* Usually we always write the current that leaves a node via a resistor since it gives a positive sign
	4. Solve the system for the nodal voltages and use the nodal voltages to find anything else needed
* Example circuit 1:\
  \begin{circuitikz}\draw (0, 0) to[american current source, l_=$1\si{A}$] (0, 2) to[R=$6\si{\ohm}$] (4.5, 2) to[american current source, l^=$3\si{A}$] (4.5, 0) to (0, 0); \draw (1.5, 2) to[R=$4\si{\ohm}$] (1.5, 0); \draw (3, 2) to[R=$2\si{\ohm}$] (3, 0); \draw (2.25, 0) node[eground]{}; \draw (0, 2) node[label=above:$v_1$]{}; \draw (4.5, 2) node[label=above:$v_2$]{}; \end{circuitikz}
	* KCL at node 1: $-1 + \frac{v_1 - 0}{4} + \frac{v_1 - v_2}{6} = 0$
	* KCL at node 2: $3 + \frac{v_2 - 0}{2} + \frac{v_2 - v_1}{6} = 0$
	* Solution: $v_1 = \frac{2}{3}\si{V}, v_2 = -\frac{13}{2}\si{V}$
* Example circuit 2:\
  \begin{circuitikz}\draw (0, 0) to[american voltage source=$10\si{V}$, invert] (0, 1.5) to[R=$1\si\ohm$] (1.5, 1.5) to[R=$8\si\ohm$] (3, 1.5) to[R=$5\si\ohm$] (4.5, 1.5) to[american voltage source=$20\si{V}$] (4.5, 0) to (0, 0); \draw (1.5, 1.5) to[R=$4\si\ohm$] (1.5, 0); \draw (3, 1.5) to[R=$2\si\ohm$] (3, 0); \draw (2.25, 0) node[eground]{}; \draw (0, 1.5) node[label=above:$v_1$]{}; \draw (1.5, 1.5) node[label=above:$v_2$]{}; \draw (3, 1.5) node[label=above:$v_3$]{}; \draw (4.5, 1.5) node[label=above:$v_4$]{}; \end{circuitikz}
	* We get $v_1 = 10\si{V}, v_2 = 20\si{V}$ immediately
	* Node 2: $\frac{v_2 - v_1}{1} + \frac{v_2 - 0}{4} + \frac{v_2 - v_3}{8} = 0$
	* Node 3: $\frac{v_3 - v_2}{8} + \frac{v_3 - 0}{2} + \frac{v_3 - v_4}{5} = 0$
	* Solution: $v_2 = 7.82\si{V}, v_3 = 6.03\si{V}$

