# Lecture 25, Mar 16, 2022

## Step Response of an RC Circuit

* What happen if we add an independent source to the RC circuit?
* \begin{circuitikz} \draw (0, 0) to[V=$V_s$, invert] (0, 1.5) to[R=$R$, i=$i_c$] (2.5, 1.5) to[pC=$C$, v=$v_C$, invert] (2.5, 0) -- (0, 0);\end{circuitikz}
	* KVL gives: $-V_s + Ri_C + v_C = 0$
	* $i_C = C\diff{v_C}{t} \implies -V_s + RC\diff{v_C}{t} + v_C(t) = 0 \implies \diff{v_C}{t} = \frac{-(v_c(t) - V_s)}{RC}$
	* This is again separable: $\alignedimp[t]{\int \frac{1}{v_C(t) - V_s}\,\d v_C = -\int \frac{1}{RC}\,\dt}{\ln(v_C(t) - V_s) = -\frac{t}{RC} + K}{v_C(t) - V_s = Ae^{-\frac{t}{RC}}}{v_C(t) = Ae^{-\frac{t}{RC}} + V_s}$
	* Using the initial condition that $v_C(0^+) = V_0 \implies V_0 = A + V_s \implies A = V_0 - V_s$
	* Finally, $v_C(t) = V_s + (V_0 - V_s)e^{-\frac{t}{RC}}$
* As $t \to \infty$ we have $v_C(t) \to V_s$
	* At $t = 0$ there is a sharp corner as the voltage starts either increasing or decreasing and exponentially decaying to $V_s$
* To find the current: $i_C(t) = C\diff{v_C}{t} = \frac{V_s - V_0}{R}e^{-\frac{t}{RC}}$
	* At $t = 0$ there is a discontinuity in the current as it jumps to $\frac{V_s - V_0}{R}$; as $t \to \infty, i_C \to 0$
* In general $v_C(t) = v_C(\infty) + (v_C(0) - v_C(\infty))e^{-\frac{t}{RC}}$
* This can also be applied to any general linear circuit connected to the capacitor by finding its Thevenin equivalent
* The result can be broken down into two parts: a contribution from the initial voltage, and a part from the source: $v_C(t) = V_s(1 - e^{-\frac{t}{RC}}) + V_0e^{-\frac{t}{RC}}$
	* The second part is exactly the behaviour of the source-free circuit
	* The first part is called the *forced response*, and the second part is the *natural response*

