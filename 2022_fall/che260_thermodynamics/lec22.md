# Lecture 22, Oct 31, 2022

## Thermal Resistance

* Recall in steady-state 1D heat flow we derived $\diffn{2}{T}{x} = 0 \implies T(x) = \frac{T_2 - T_1}{L}x + T_1$
	* $\dot q = -k\diff{T}{x} = -\frac{k}{L}(T_2 - T_1)$
	* Other boundary conditions:
		1. Known $\dot q_1, T_2$
		2. Known $T_1$, convection boundary condition
* Knowing the temperature profile, we can determine the performance (e.g. heat flux/flow) and other temperature-related properties
* Consider a chip on a circuit board, with a measured power consumption (known $\dot Q$ and $\dot q$); we also know the thickness of the circuit board, so we have the heat transfer through the circuit board
	* In a real system this is often much more complicated, e.g. the circuit board can have multiple layers and vias, different materials, and a copper heat sink
* The *thermal resistance* approach is a convenient way to analyze complex systems
	* Directly analogous to electrical circuits
	* In a circuit we have flow = driving force divided by resistance
	* In heat transfer $\dot Q = \frac{T_1 - T_2}{R}$

\noteDefn{The thermal resistance $R$ is defined such that $\dot Q = \frac{T_1 - T_2}{R}$}

* For conduction $\dot Q = \frac{kA}{L}(T_1 - T_2) \implies R = \frac{L}{kA}$, with units of $\si{K/W}$
* For convection $\dot Q = hA(T_1 - T_2) \implies R = \frac{1}{hA}$
* For radiation we have to take a shortcut: $\dot Q = \varepsilon\sigma A(T_s^4 - T_{surr}^4)$ is nonlinear, so we force it into $h_{rad}A(T_s - T_{surr})$
	* $h_{rad} = \frac{\varepsilon\sigma A(T_s^4 - T_{surr}^4)}{A(T_s - T_{surr})} = \varepsilon\sigma(T_s^2 + T_{surr}^2)(T_s + T_{surr})$
	* This a directly a function of $T_s$ and $T_{surr}$; since $T_s$ is often unknown, we often take a guess and do a question, and then come back later to refine our guess if necessary

\noteSummary{Thermal resistances for the different heat transfer mechanisms in steady state:
\begin{itemize}
	\item Conduction: $$R = \frac{L}{kA}$$
	\item Convection: $$R = \frac{1}{hA}$$
	\item Radiation: $$R = \frac{1}{h_{rad}A}$$ where $$h_{rad} = \varepsilon\sigma(T_s^2 + T_{surr}^2)(T_s + T_{surr})$$
\end{itemize}}

* If we have multiple layers of materials in series, we can consider it just like we would consider series resistances in a circuit
	* The equivalent heat resistance of multiple layers in series is just the sum of the heat resistances
	* We can combine all the $\frac{L}{k}, \frac{1}{h}$ and $\frac{1}{h_{rad}}$ into $\frac{1}{U}$ where $U$ is the overall heat transfer coefficient, so $UA = \frac{1}{R_{tot}}$

