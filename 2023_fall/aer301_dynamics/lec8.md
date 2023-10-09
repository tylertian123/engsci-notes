# Lecture 8, Oct 3, 2023

## Rotational Version of Newton's Laws

* Recall the momentum is $\uvec p = m\uvec r^\dota$
* $\uvec h_O = \uvec r \times \uvec p$ is the *angular momentum*, or moment of momentum
* $\uvec h_O^\dota = \uvec r^\dota \times \uvec p + \uvec r \times \uvec p^\dota = m\uvec r^\dota \times \uvec r^\dota + \uvec r \times \uvec f = \uvec r \times \uvec f = \uvec\tau _O$ is the *torque*, or moment of force
	* Note that when we talk about moments such as angular momentum or torque, we need some reference point $O$
	* Here $O$ is assumed to be inertially fixed; if it moves, then $\uvec\tau _O = \uvec h_O^\dota + \uvec v_O \times \uvec p$ where $\uvec v_O$ is the moment with respect to inertial space
* $\uvec f = \uvec p^\dota = \uvec p^\dotb + \uvec\omega \times \uvec p$
	* We can think of this as the *translational equation of motion*
* $\uvec\tau _O = \uvec h_O^\dota = \uvec h_O^\dotb + \uvec\omega \times \uvec h_O$
	* We can think of this as the *rotational equation of motion*
	* But this is not a law because it is derivable from the other laws and assumptions
* Impulse is defined as $\uvec\imath = \int _{t_a}^{t_b} \uvec f\,\dt = \uvec p_b - \uvec p_a$
* Rotational impulse is $\uvec\jmath _O = \int _{t_a}^{t_b}\uvec\tau _O\,\dt = \uvec h_{O,b} - \uvec h_{O,a}$

## Work and Energy

* $\alignedeqntwo[t]{W}{\int _A^B \uvec f \cdot \dd\uvec r}{\int _A^B m\uvec r^\ddota \cdot \dd\uvec r}{m\int \frac{1}{2}\dd v^2}{\frac{1}{2}mv_B^2 - \frac{1}{2}mv_A^2}{T_B - T_A}$
	* $T_A, T_B$ are the *kinetic energy*; this is known as the principle of work and kinetic energy
	* Note $v^2 = \uvec r^\dota \cdot \uvec r^\dota$ so $\diff{v^2}{t} = \diff{\uvec r^\dota \cdot \uvec r^\dota}{t} = 2\uvec r^\ddota \cdot \uvec r^\dota = 2\uvec r^\ddota \cdot \diff{\uvec r}{t}$
	* Therefore $\dd v^2 = 2\uvec r^\ddota \cdot \dd\uvec r$
* A force $\uvec f$ is *conservative* iff $\int _{P_a} \uvec f \cdot \dd\uvec r = \int _{P_b} \uvec f \cdot \dd\uvec r$ for any two paths $P_a$, $P_b$ that have the same start and end points
	* Equivalently, $\udel \times \uvec f = \uvec 0$ (no curl) or $\uvec f = -\udel V$ or $\oint \uvec f \cdot \dd\uvec r = 0$
	* If $\uvec f = -\udel V$, then $\uvec f \cdot \dd\uvec r = -\udel V \cdot \dd\uvec r = -\pdiff{V}{x_1}\dx_1 - \pdiff{V}{x_2}\dx_2 - \pdiff{V}{x_3}\dx_3 = \dV$
	* $\int _A^B \uvec f \cdot \dd\uvec r = -\int \dV = V_A - V_B$, regardless of the path taken from $A$ to $B$
* If we combine the above with the principle of work and kinetic energy, we see $V_A - V_B = T_B - T_A \implies T_A + V_A = T_B + V_B$
	* This is the *conservation of (total) energy* -- under a conservative force field $\uvec f$, the sum of kinetic and potential energies, $T + V$, is conserved
		* $V$ is the *potential energy*
		* $T + V = E$ is the *total (mechanical) energy*

