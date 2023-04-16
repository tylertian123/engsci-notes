# Lecture 31, Mar 30, 2022

## Impedance of RL, RC, LC, and RLC circuits

* For an RL circuit: \begin{circuitikz}\draw (0, 0) to[R=$R$, o-] (1.5, 0) to[L=$L$, -o] (3, 0); \end{circuitikz}
	* $\bm Z_{RL} = \bm Z_R + \bm Z_L = R + j\omega L$
	* The real part of the impedance for an RL circuit is the resistance of the resistor; the imaginary part is $\omega L$, frequency times the inductance of the inductor
	* Combining R and L gives both a resistance and a reactance
	* The angle depends on both $R$ and $L$; if $\bm Z_R \gg \bm Z_L$ then $\angle \bm Z_{RL} \to 0$; if $\bm Z_R \ll \bm Z_L$ then $\angle \bm Z_{RL} \to 90\degree$
	* The phase difference is $0 < \theta _v - \theta _i < 90\degree$; greater resistance leads to less phase difference, while greater inductance leads to more phase difference
	* Voltage leads current by some amount between $0\degree$ and $90\degree$
* For an RC circuit: \begin{circuitikz}\draw (0, 0) to[R=$R$, o-] (1.5, 0) to[C=$C$, -o] (3, 0); \end{circuitikz}
	* $\bm Z_{RC} = \bm Z_R + \bm Z_C = R - \frac{j}{\omega C}$
	* This time the angle is between $0\degree$ and $90\degree$ since the imaginary part (reactance) is negative
	* $\bm Z_R \gg \bm Z_C \implies \angle \bm Z_{RC} \to 0$ and $\bm Z_R \ll \bm Z_C \implies \angle \bm Z_{RC} \to -90\degree$
	* Voltage lags current by some amount between $0\degree$ and $90\degree$ (current leads voltage)
* For an LC circuit: \begin{circuitikz}\draw (0, 0) to[L=$L$, o-] (1.5, 0) to[C=$C$, -o] (3, 0); \end{circuitikz}
	* $\bm Z_{LC} = \bm Z_L + \bm Z_C = j\left(\omega L - \frac{1}{\omega C}\right)$
	* The impedance of an LC circuit is entirely imaginary (no resistance)
	* The imaginary part can be positive or negative, depending on the relative values of the inductance and capacitance
		* $\omega L > \frac{1}{\omega C} \implies \Im \bm Z_{LC} > 0$, and voltage leads current by $90\degree$
		* $\omega L < \frac{1}{\omega C} \implies \Im \bm Z_{LC} < 0$, and voltage lags current by $90\degree$
* For an RLC circuit: \begin{circuitikz}\draw (0, 0) to[L=$L$, o-] (1.5, 0) to[C=$C$] (3, 0) to [R=$R$, -o] (4.5, 0); \end{circuitikz}
	* $\bm Z_{RLC} = \bm Z_{R} + \bm Z_{C} + \bm Z_{L} = R + j\left(\omega L - \frac{1}{\omega C}\right)$
	* The real part is positive, the imaginary part can be positive or negative depending on the relative values of inductance and capacitance
	* The angle is between $-90\degree$ and $90\degree$; sign follows the same pattern as for an LC circuit

## Sinusoidal Steady State Analysis

* Since all the laws and techniques (KVL, KCL, etc) still hold in the phasor domain, we can analyze AC circuits in the same way
* Convert the circuit into phasor domain (resistances, inductances, and capacitances to impedances), and use $\bm Z = \frac{\bm V}{\bm I}$ in the same way that $R = \frac{v}{i}$ is used in DC circuits
	* Convert the phasors back to time domain afterwards if desired
* The only difference is that complex phasors are used instead of real numbers
* Example: \begin{circuitikz} \draw (0, 0) to[V=$v(t)$, invert] ++(0, 3) to[C=$C_1 \equal 2\si{mF}$] ++(2.5, 0) to[L=$L \equal 0.2\si{H}$] ++(2.5, 0) to [R=$R_2 \equal 8\si{\ohm}$] ++(0, -3) -- (0, 0); \draw (2.5, 3) to[R=$R_1 \equal 3\si{\ohm}$] ++(0, -1.5) to[C=$C_2 \equal 10\si{mF}$] ++(0, -1.5); \end{circuitikz}
	* $v(t) = 20\cos(50t)V$, find $i(t)$
	* Convert the voltage to a phasor: $\bm V = 20\angle 0\degree$
	* For the $2\si{mF}$ capacitor, $\bm Z_1 = \frac{-j}{\omega C_1} = \frac{-j}{50 \cdot \num{2e-3}} = -j10\si{\ohm}$
	* For the series RC connection in the middle, $\bm Z_2 = R_1 - \frac{j}{\omega C_2} = 3 - \frac{j}{50 \cdot \num{10e-3}} = 3 - j2\si{\ohm}$
	* For the series RL connection, $\bm Z_3 = R_2 + j\omega L = 8 + j50 \cdot 0.2 = 8 + j10\si{\ohm}$
	* In the phasor domain: \begin{circuitikz} \draw (0, 0) to[V=$20\angle 0\degree$, invert] ++(0, 1.5) to[european resistor=$\bm Z_1$] ++(1.5, 0) -- ++(1.5, 0) to[european resistor=$\bm Z_3$] ++(0, -1.5) -- (0, 0); \draw (1.5, 1.5) to[european resistor=$\bm Z_2$] ++(0, -1.5);\end{circuitikz}
	* $\bm Z_{eq} = \bm Z_1 + \frac{\bm Z_2\bm Z_3}{\bm Z_2 + \bm Z_3} = 3.22 - j11.07\si{\ohm} = 11.53\angle -73.5\degree$
	* $\bm I = \frac{\bm V}{\bm Z} = \frac{20\angle 0\degree}{11.53\angle -73.5\degree} = 1.73\angle 73.5\degree \si{A}$
	* Back to the time domain, $i(t) = 1.73\cos(50t + 73.5\degree)$

