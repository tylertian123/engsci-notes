# Lecture 14, Feb 11, 2022

## Mesh Analysis

* When there are a lot of components connected in series, there are a lot of nodes so nodal analysis is not as efficient computationally
* Nodal analysis is preferred when there are lots of parallel connections since there are fewer nodes; mesh analysis is preferred when there are lots of series connections since there are fewer meshes
* Definition: A mesh is a type of loop that does not have any other loop inside it
* In mesh analysis the objective is finding all the mesh currents; with the mesh currents we can find all voltages and currents
	* We do this by writing KVL for all the meshes in terms of mesh currents
* Steps for mesh analysis:
	1. Identify all meshes in the circuit
	2. Associate a circulating current with each mesh (the mesh current)
		* These currents are hypothetical currents that can have any direction (commonly clockwise, stick to one direction to reduce mistakes)
		* These are not branch currents (which are the real currents through the branches)
		* Branch currents can be expressed in terms of mesh currents by adding all the mesh currents that pass through the branch with the right sign
	3. Write KVL for all the meshes in terms of the mesh voltages
	4. Solve for all mesh currents and use the mesh currents to solve for voltages and currents as needed
* Example circuit:
  \begin{circuitikz}
	\draw (0, 0) to[american voltage source=$7\si{V}$, invert] (0, 1.5) to[R=$2\si\ohm$, i=$i_x$] (2, 1.5) to[R=$6\si{\ohm}$, i<=$i_y$] (4, 1.5) to[american voltage source=$10\si{V}$] (4, 0) to (0, 0);
	\draw (2, 1.5) to[R=$4\si{\ohm}$, i=$i_z$] (2, 0);
	\draw [latex-] (1, 0.4) arc (-90:180:0.35); \draw (1, 0.4) node[label=$i_1$]{};
	\draw [latex-] (3.1, 0.4) arc (-90:180:0.35); \draw (3.1, 0.4) node[label=$i_2$]{};
  \end{circuitikz}

	* Two meshes (the 2 inner loops)
	* $i_x = i_1, i_y = -i_2, i_z = i_1 - i_2$
	* For mesh 1: $-7 + 2i_i + 4(i_1 - i_2) = 0$
	* For mesh 2: $4(i_2 - i_1) + 6i_2 + 10 = 0$
	* Now we can solve for $i_1$ and $i_2$

