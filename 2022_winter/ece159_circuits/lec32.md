# Lecture 32, Apr 1, 2022

## Nodal and Mesh Analysis for AC Circuits

* \begin{circuitikz}\draw (0, 0) to[V=$v(t)$, invert] ++(0, 1.5) to[R=$10\si{\ohm}$] ++(1.5, 0) to[L=$0.1\si{H}$] ++(1.5, 0) -- ++(1.5, 0) to[L=$0.5\si{H}$] ++(0, -1.5) -- (0, 0); \draw (1.5, 1.5) to[C=$0.1\si{F}$, i=$i_x$] ++(0, -1.5); \draw (3, 0) to[controlled current source, l_=$2i_x$] ++(0, 1.5);\end{circuitikz}
	* $v(t) = 20\cos(4t) \implies \bm V = 20\angle 0\degree$
	* Impedances:
		* $\bm Z_R = 10\si{\ohm}$
		* $\bm Z_C = -\frac{j}{\omega C} = -\frac{j}{4 \cdot 0.1\si{F}} = -j2.5\si{\ohm}$
		* $\bm Z_{L1} = j\omega L_1 = j4 \cdot 0.1 = j0.4\si\ohm$
		* $\bm Z_{L2} = j\omega L_2 = j2\si\ohm$
	* In the phasor domain: \begin{circuitikz}\draw (0, 0) to[V=$20\angle 0\degree$, invert] ++(0, 2.5) to[european resistor=$10\si{\ohm}$] ++(1.5, 0) to[european resistor=$j0.4\si{\ohm}$] ++(2.5, 0) -- ++(1.5, 0) to[european resistor=$j2\si{\ohm}$] ++(0, -2.5) -- (0, 0); \draw (1.5, 2.5) to[european resistor=$-j2.5\si{\ohm}$, i=$\bm I_x$, v=$\bm V_1$] ++(0, -2.5); \draw (4, 0) to[controlled current source, l_=$2\bm I_x$, v^=$\bm V_2$] ++(0, 2.5); \draw (0, 0) node[ground]{}; \end{circuitikz}
	* $\bm I_x = \frac{\bm V_1}{\bm Z_C}$
	* $\frac{\bm V_1 - 20}{\bm Z_R} + \frac{\bm V_1}{\bm Z_C} + \frac{\bm V_1 - \bm V_2}{\bm Z_{L1}} = 0$
	* $\frac{\bm V_2 - \bm V_1}{\bm Z_{L_1}} + \frac{\bm V_2}{\bm Z_{L2}} - 2\frac{\bm V_1}{\bm Z_C}$
	* Solve the system as normal, then use nodal voltages to find phasor for $\bm I_x = \frac{\bm V_1}{\bm Z_C}$, and convert to time domain

