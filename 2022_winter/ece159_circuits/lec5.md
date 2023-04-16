# Lecture 5, Jan 26, 2022

## Resistors Continued

* Extreme cases of Ohm's law
	1. $R = 0 \implies \forall i, v = 0$; this is called a short circuit
		* A path with zero resistance is called an ideal conductor
		* $\begin{circuitikz} \draw (0, 0) to[R=0\si{\ohm}, o-o, i=\(i\), v=\(v\)] (1.5, 0); \end{circuitikz} \equiv \begin{circuitikz} \draw (0, 0) to[short, o-o, i=\(i\)] (1.5, 0); \end{circuitikz}$
		* All parts of a circuit connected by ideal conductors can be considered the same node in a circuit
	2. $R \to \infty \implies \forall v, i = 0$
		* This is called an open circuit
		* $\begin{circuitikz} \draw (0, 0) to[R=\(\infty\si{\ohm}\), o-o, i=\(i\), v=\(v\)] (1.5, 0); \end{circuitikz} \equiv \begin{circuitikz} \draw (0, 0) to[open, o-o] (1.5, 0); \end{circuitikz}$

## Structure of a Circuit

* Node: A junction of two or more circuit elements
* Path: Start from one node, and if no other node is passed through more than once except the first one which may be passed twice, this is a path
* Loop: A path that begins and ends at the same node that consists of at least 3 nodes

