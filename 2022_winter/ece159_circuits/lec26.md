# Lecture 26, Mar 18, 2022

## Source-Free RL Circuits

* Consider a source-free RL circuit: \begin{circuitikz}\draw (0, 0) to[L=$L$, v<=$v_L(t)$] (0, 1.5) to[closing switch, l_=$t \equal 0$, i<=$i_L(t)$] (2.5, 1.5) to[R=$R$, v=$v_R$] (2.5, 0) -- (0, 0); \end{circuitikz}
	* Initial condition: $i_L(0) = I_0$
	* Since the current of an inductor cannot change abruptly, we find the current
	* KVL: $v_L - v_R = 0 \implies L\diff{i_L}{t} + iR = 0$
	* Solving the differential equation: $\int \frac{1}{i_L}\,\dd i_L = -\int \frac{1}{\frac{L}{R}}\,\dt \implies \ln(i_L(t)) + K = -\frac{t}{\frac{L}{R}}$
	* Solution is $i_L(t) = Ae^{-\frac{t}{L/R}}$
	* Using the initial condition gives $A = I_0$, giving $i_L(t) = I_0e^{-\frac{t}{L/R}} = I_0e^{-\frac{t}{\tau}}$ where $\tau = \frac{L}{R}$ is the time constant for an RL circuit
		* Larger time constant means slower decay
		* Similar to $\tau$ for a capacitor, the time constant can be found by the intersection of the tangent line at $t = 0$ with the time axis	
	* Voltage: $v_L = L\diff{i_L}{t} = -RI_0e^{-\frac{t}{\tau}}$

