# Lecture 20, Mar 4, 2022

## Maximum Power Transfer

* \begin{circuitikz}\draw (0, 0) to[american voltage source=$v_s$, invert] (0, 1.5) to[R=$R_s$] (1.5, 1.5) to[short, i=$i_L$, o-] (3, 1.5) to[R=$R_L$] (3, 0) to[short, -o] (1.5, 0) -- (0, 0); \end{circuitikz}
* Consider a voltage source connected to a resistor in series and then connected to a load; how do we extract maximum power from this voltage source? What $R_L$ maximizes power?
	* $P_L = R_Li_L^2$
	* $i_L = \frac{v_s}{R_s + R_L} \implies P_L = \frac{R_Lv_s^2}{(R_s + R_L)^2}$
	* To maximize $P_L$ we differentiate it
	* $\diff{P_L}{R_L} = \frac{v_s^2(R_L + R_s)^2 - 2(R_L + R_s)R_Lv_s^2}{(R_L + R_s)^4} = \frac{v_s^2((R_L + R_s) - 2R_L)}{(R_L + R_s)^3} = 0$
	* The only way for the derivative to equal zero is if $R_L + R_s = 2R_L \implies R_L = R_s$
	* Plugging in $R_L = R_s \implies P_{L_{max}} = \frac{v_s^2}{4R_s^2} = \frac{v_s^2}{4R_L}$
* For a voltage source and resistor, max power transfer is achieved when the load resistance equals the resistance attached to the voltage source, with max power being $\frac{v_s^2}{4R_s}$
	* For any complicated circuit we can find its Thevenin equivalent and turn it into a voltage source with resistor in series

