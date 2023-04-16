# Lecture 24, Mar 14, 2022

## Source-Free RC Circuits

* In a first-order transient circuit, the relationship between current and voltage can be described by a first-order differential equation
	* These are either RC or RL circuits (resistors and capacitors/inductors)
	* They can have sources or no sources
* Consider a source-free RC circuit: \begin{circuitikz}\draw (0, 0) to[pC=$C$, v<=$v_c(t)$] (0, 1.5) to[closing switch, l_=$t \equal 0$, i<=$i_c(t)$] (2.5, 1.5) to[R=$R$] (2.5, 0) -- (0, 0); \end{circuitikz}
	* Suppose before time 0 the capacitor is energized to $v_c(0^-) = V_0$, and then at time 0, the switch is closed and the energizing circuit is removed
	* KVL gives: $v_c(t) + Ri_c(t) = 0 \implies v_c(t) + RC\diff{v_c}{t} = 0 \implies v_c = -RC\diff{v_c}{t}$
	* This is a separable equation: $\int \frac{1}{v_c}\,\dd v_c = \int -\frac{1}{RC}\,\dt \implies \ln(v_c) + K = -\frac{t}{RC}$
	* Rearranging: $v_c(t) = Ae^{-\frac{t}{RC}}$
	* Solving for initial conditions with $v_c(0) = V_0$, we obtain $v_c(t) = V_0e^{-\frac{t}{RC}}$
		* Note we can do this because a capacitor's voltage cannot change abruptly, so $v_c(0^+) = v_c(0^-) = V_0$
		* We could not have started with current because we don't know the current at $0^+$
	* The current is then $i_c(t) = C\diff{v_c}{t} = -\frac{V_0C}{RC}e^{-\frac{t}{RC}} = -\frac{V_0}{R}e^{-\frac{t}{RC}}$ or $\frac{V_0}{R}e^{-\frac{t}{RC}}$ not following PSC
		* Note there is a discontinuity at time 0 as the current starts at 0 and jumps to $\frac{V_0}{R}$, and then decays to 0
* In a source-free RC circuit the voltage across the capacitor follows an exponential decay to 0
	* Large $RC$ causes slower decay; small $RC$ causes faster decay
	* Let $\tau = RC$ be the *time constant* of the RC circuit; $\tau$ characterizes how fast the voltage decays
	* $\tau$ can be found by finding the tangent at $t = 0$, and finding where the tangent intersects the horizontal axis
		* $\diff{v_c}{t}(0) = -\frac{V_0}{RC}$ so tangent is $y = V_0 - \frac{V_0t}{RC}$; therefore when $t = \tau = RC$ the tangent intersects the time axis
	* $\tau$ has the same unit as time (seconds), so that the argument of the exponential is unitless

