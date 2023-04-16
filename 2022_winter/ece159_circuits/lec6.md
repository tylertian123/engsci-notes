# Lecture 6, Jan 28, 2022

## Circuit Analysis Laws

* Kirchhoff's Current Law (KCL): The algebraic sum of the currents entering a node is zero (or the current exiting)
	* \begin{circuitikz} \draw (0, 0) to[short, -*, i=$i_1$] (1.5, 0) to[short, *-, i=$i_3$] (3.0, 0); \draw (1.5, 1.5) to[short, -*, i=$i_2$] (1.5, 0); \end{circuitikz}
	* If we assume current entering node is positive, then $i_1$ and $i_2$ are positive, $i_3$ is negative, therefore $i_1 + i_2 - i_3 = 0 \implies i_3 = i_1 + i_2$
	* We can also assume current leaving the node is positive, so $-i_1 - i_2 + i_3 = 0$ which gets us the same relation
	* Alternatively can be stated as "sum of current entering the node equals sum of current leaving the node"
* Kirchhoff's Voltage Law (KVL): The algebraic sum of the voltages in a loop are zero
	* The dual of the KCL
	* Note the sign changes depending on which direction you're going

