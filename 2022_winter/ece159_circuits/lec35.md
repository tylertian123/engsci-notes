# Lecture 35, Apr 6, 2022

## Maximum Average Power

* Like maximum power transfer in DC circuits, we would like to know the impedance we should connect to an arbitrary linear AC circuit to maximize average power consumed by the impedance
* Find the Thevenin equivalent, and form the circuit: \begin{circuitikz} \draw (0, 0) to[V=$\bm V_{th}$, invert] ++(0, 1.5) to[european resistor=$\bm Z_{th}$, -o] ++(1.5, 0) -- ++(1, 0) to[european resistor=$\bm Z_L$] ++(0, -1.5) to[short, -o] ++(-1, 0) -- (0, 0); \end{circuitikz}
	* $\bm V = \bm Z_L\bm I$
* Active power for the impedance is $\alignedeqntwo[t]{P_L}{\Re\left(\frac{\bm V\bm I^*}{2}\right)}{\Re\left(\frac{(R_L + jX_L)\abs{\bm I}^2}{2}\right)}{\frac{1}{2}R_L\abs{\bm I}^2}$
	* In terms of the circuit parameters, $\bm I = \frac{\bm V_{th}}{\bm Z_{th} + \bm Z_{L}} = \frac{\bm V_{th}}{(R_{th} + R_{L}) + j(X_{th} + X_L)}$
	* $\abs{\bm I}^2 = \frac{\abs{\bm V_{th}}^2}{(R_{th} + R_L)^2 + (X_{th} + X_L)^2}$
	* So $P_L(R_L, X_L) = \frac{1}{2}R_L\frac{\abs{\bm V_{th}}^2}{(R_{th} + R_L)^2 + (X_{th} + X_L)^2}$
	* Now we have 2 parameters to optimize, $R_L$ and $X_L$
	* $\pdiff{P_L}{X_L} = R_L\frac{0 - 2(X_{th} + X_L)\abs{\bm V_{th}}^2}{4((R_{th} + R_L)^2 + (X_{th} + X_L)^2)^2} = 0$
		* $\bm V_{th}$ cannot be zero, which means the only possibility is to have $X_{th} = -X_L$
	* $\pdiff{P_L}{R_L} = \frac{\abs{\bm V_{th}}^2((R_{th} + R_L)^2 + (X_{th} + X_L)^2) - 2(R_{th} + R_L)\abs{\bm V_{th}}^2R_L}{4((R_{th} + R_L)^2 + (X_{th} + X_L)^2)^2} = 0$
		* Again $\bm V_{th}$ can't be zero so we can cancel it out
		* $((R_{th} + R_L)^2 + (X_{th} + X_L)^2) - 2(R_{th} + R_L)R_L = 0$
		* Factor out $R_L + R_{th}$: $\alignedimp[t]{(R_{th} + R_L)(R_{th} + R_L - 2R_L) + (X_{th} + X_L) = 0}{R_{th}^2 - R_L^2 + (X_{th} + X_L)^2 = 0}{R_L = \sqrt{R_{th}^2 + (X_{th} + X_L)^2}}$
		* Note we already derived above that $X_L = -X_{th}$, therefore $R_L = R_{th}$
* Without constraints, the impedance that maximizes power transfer is $\bm Z_L = R_{th} - X_{th}$
	* Max power is simply $\frac{1}{2}R_L\frac{\abs{\bm V_{th}}^2}{(R_{th} + R_L)^2 + (X_{th} + X_L)^2} = 8\frac{\abs{\bm V_{th}}^2}{R_{th}}$

