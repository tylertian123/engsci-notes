# Lecture 27, Mar 21, 2022

## Step Response of an RL Circuit

* Consider an RL circuit with an voltage source that turns on at $t = 0$, with the inductor initially charged with a current of $I_0$: \begin{circuitikz} \draw (0, 0) to[V=$V_s$, invert] (0, 1.5) to[R=$R$, i=$i_L$] (2.5, 1.5) to[L=$L$, invert] (2.5, 0) -- (0, 0);\end{circuitikz}
	* KVL: $\alignedimp[t]{-V_s + Ri_L(t) + L\diff{i_L}{t} = 0}{i_L(t) - \frac{V_s}{R} = -\frac{L}{R}\diff{i_L}{t}}{\int \frac{1}{i_L(t) - \frac{V_s}{R}}\,\dd i_L = \int -\frac{1}{L/R}\,\dt}{\ln\left(i_L(t) - \frac{V_s}{R}\right) + K = -\frac{t}{L/R}}{i_L(t) = \frac{V_s}{R} + Ae^{-\frac{t}{L/R}}}$
	* Using the initial condition of $i_L(0) = I_0 \implies A = I_0 - \frac{V_s}{R}$
	* $i_L(t) = \frac{V_s}{R} + \left(I_0 - \frac{V_s}{R}\right)e^{-\frac{t}{L/R}} = \frac{V_s}{R} + \left(I_0 - \frac{V_s}{R}\right)e^{-\frac{t}{\tau}}$
	* $v_L(t) = L\diff{i_L}{t} = \left(V_s - RI_0\right)e^{-\frac{t}{L/R}}$
* The current starts at $I_0$ and exponentially decays towards $\frac{V_s}{R}$, the final value for current (at which point the inductor is a short circuit)
	* At $t = 0$ this is accompanied by a jump in the voltage
* The time constant $\tau$ is given by $\frac{L}{R}$
* As with the RC case, $i_L(t) = i_L(\infty) + (i_L(0) - i_L(\infty))e^{-\frac{t}{\tau}}$
	* $i_L(\infty) = \frac{V_s}{R}$ because the inductor becomes a short circuit
	* $i_L(0) = I_0$

