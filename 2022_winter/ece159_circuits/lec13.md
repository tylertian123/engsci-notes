# Lecture 13, Feb 9, 2022

## Nodal Analysis With Voltage Sources

* When there is a dependent source, express the parameter that the source depends on in terms of nodal voltages
* When there is an ungrounded voltage source, instead of writing KCL for the two nodes separately, write KCL for the "supernode" that combines the two nodes connected by the source
	* This reduces the number of equations by 1, but we can get this equation back by relating the voltages of the two nodes using the voltage source; inside the supernode one node is kept at a higher voltage than the other by the source
	* This extra equation is called the *supplementary equation* for the supernode
* Example circuit 1:\
  \begin{circuitikz}\draw (0, 0) to (0, -1.5) to[american voltage source=$4\si{V}$] (0, -3) to (3, -3) to[american controlled current source, l_=$2v_x$] (3, -1.5) to (3, 0) to[R=$2\si{\ohm}$, v=$v_x$] (0, 0); \draw (3, -1.5) to[R=$1\si{\ohm}$] (1.5, -1.5) to[american current source, l_=$7\si{A}$] (0, -1.5); \draw (1.5, -1.5) to[R=$3\si{\ohm}$] (1.5, -3); \draw (1.5, -3) node[eground]{}; \draw (0, -1.5) node[label=left:$v_A$]{}; \draw (1.5, -1.5) node[label=above:$v_B$]{}; \draw (3, -1.5) node[label=right:$v_C$]{}; \end{circuitikz}
  * $v_A = 4\si{V}$
  * In this case, $v_x = v_C - v_A$
  * At node B: $7 + \frac{v_B}{3} + \frac{v_B - v_C}{1} = 0$
  * At node C: $\frac{v_C - v_A}{2} + \frac{v_C - v_B}{1} - 2(v_C - v_A) = 0$
* Example circuit 2:\
  \begin{circuitikz}\draw (0, 0) to (1.5, 0) to[american controlled voltage source, l^=$4I_0$, invert] (3, 0) to [american controlled current source, l^=$2v_0$, invert] (4.5, 0) to[R=$2\si{\ohm}$] (6, 0) to[american voltage source=$10\si{V}$] (6, -1.5) to (0, -1.5) to[american current source, l_=$1\si{A}$] (0, 0); \draw (1.5, 0) to[R=$4\si{\ohm}$] (1.5, -1.5); \draw (3, 0) to[R=$1\si\ohm$] (3, -1.5); \draw (4.5, 0) to[R=$4\si{\ohm}$, i>=$I_0$] (4.5, -1.5); \draw (1.5, 0) to (1.5, 1.5) to[R=$1\si\ohm$, v=$v_0$] (4.5, 1.5) to (4.5, 0); \draw (3, -1.5) node[eground]{}; \draw (1.5, 0.35) node[label=left:$v_1$]{}; \draw (3, 0) node[label=above:$v_2$]{}; \draw (4.25, 0) node[label=$v_3$]{}; \draw (6, 0) node[label=above:$v_4$]{}; \end{circuitikz}
  * $v_4 = 10\si{V}$
  * $I_0 = \frac{v_3}{4}, v_0 = v_1 - v_3$
  * Combine nodes 1 and 2 into a supernode: $-1 + \frac{v_1}{4} + \frac{v_1 - v_3}{1} + \frac{v_2}{1} - 2(v_1 - v_3) = 0$
  * At node 3: $2(v_1 - v_3) + \frac{v_3 - v_1}{1} + \frac{v_3}{4} + \frac{v_3 - v_4}{2} = 0$
  * 2 equations, 3 unknowns ($v_1, v_2, v_3$); the last equation comes from the voltage source between nodes 1 and 2, producing $v_2 - v_1 = 4\frac{v_3}{4}$

