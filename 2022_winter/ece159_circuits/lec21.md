# Lecture 21, Mar 7, 2022

## Operational Amplifiers (Op-Amps)

* Op amps have 3 terminals that are relevant for this course: the positive (non-inverting) terminal, the negative (inverting) terminal, and then output terminal
	* Inverting input has voltage $v_1$ and current $i_2$, non-inverting input has voltage $v_2$ and current $i_2$; output has voltage $v_{out}$ and current $i_{out}$ (voltages measured wrt ground)
	* The symbol is \begin{circuitikz}\draw (0, 0) node[op amp, scale=0.5]{};\end{circuitikz}
* If there is a path between the inverting input and output (either a short or any resistance), then the op amp as a *negative feedback connection*
	* Under a negative feedback connection, $v_1 = v_2$, i.e. it forces 2 voltages to be the same (under ideal conditions), and $i_1 = i_2 = 0$ (infinite input impedance)
* In this course we only discuss ideal op amps
* Example circuit: \begin{circuitikz}\draw (0, 0) to[V=$V_{in}$, invert] (0, 1.5) to[R=$R_{in}$] (1.5, 1.5) node[op amp, anchor=-, scale=1](OA){} -- ++(0, 0.75) coordinate(Rleft) to[R=$R_{out}$] (Rleft -| OA.out) -- (OA.out); \draw (OA.out) -- ++(1.5, 0) coordinate (OAright) to[open, v=$V_{out}$, o-o] (OAright |- 0, 0) coordinate (Vout-); \draw (0, 0) to (Vout-); \draw (OA.+) to (OA.- |- 0, 0) node[ground]{}; \end{circuitikz}
  	* The path from the output to the inverting input forces $v_2 = v_1$, therefore the current through $R_{in}$ is $\frac{V_{in}}{R_{in}}$
	* No current goes into the op amp so current through $R_f$ is also $I_{in}$
	* Since $v_2 = 0$ the current through $R_f$ is also $-\frac{V_{out}}{R_f}$
	* Equating these currents: $\frac{V_{in}}{R_{in}} = I_{in} = \frac{V_{out}}{R_f} \implies \frac{V_{out}}{V_{in}} = -\frac{R_f}{R_{in}}$
	* This circuit is called an *inverting amplifier* since it switches the polarity, and amplifies it by a gain of $-\frac{R_f}{R_{in}}$
* If the input voltage now goes into the noninverting input, the output voltage is no longer inverted, so this is now a *noninverting amplifier*: \begin{circuitikz}\draw (0, 0) -- (0, 2.5) to[R=$R_{in}$] (1.5, 2.5) node[op amp, anchor=-, scale=1](OA){} -- ++(0, 0.75) coordinate(Rleft) to[R=$R_{out}$] (Rleft -| OA.out) -- (OA.out); \draw (OA.out) -- ++(1.5, 0) coordinate (OAright) to[open, v=$V_{out}$, o-o] (OAright |- 0, 0) coordinate (Vout-); \draw (0, 0) to (Vout-); \draw (OA.+) to[V=$V_{in}$] (OA.- |- 0, 0) node[ground]{}; \end{circuitikz}
* In general, to solve an op amp circuit when there is a connection from output to inverting input, first try to find either $v_1$ or $v_2$, and then use the relationship $v_1 = v_2$ to find the voltage at the other terminal, and then solve the rest of the circuit

