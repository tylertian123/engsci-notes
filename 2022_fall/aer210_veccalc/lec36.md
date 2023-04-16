# Lecture 36, Dec 2, 2022

## Open Channel Flows

* Flows of liquid with free surface exposed to atmospheric pressure pressure
	* This free surface introduces an extra degree of freedom
	* This allows aves to form
* Waves move at a speed of $c_0$, which is not the same as the velocity of the individual fluid particles
* We want a control volume that moves with the wavefront
	* Assuming a wave height much less than the liquid height, $\delta y \ll y$, then $c_0 = \sqrt{gy}$
	* The wave speed depends on the liquid depth; this is why tsunamis form, since waver level is very deep in the ocean
* For open channel flows, we define the Froude number $\FrN = \frac{V}{\sqrt{gy}}$, the ratio of the fluid speed divided by the wave speed; the Froude number governs the character of the flow in open channels
	* $\FrN < 1$ is subcritical flow
		* The waves drift due to the velocity, but the wave still moves both down and upstream since the wave is able to travel faster than the fluid
	* $\FrN = 1$ is critical flow
		* The wave velocity matches the fluid velocity, so the wavefront stays in place
	* $\FrN > 1$ is supercritical flow
		* The waves only move downstream since the fluid pushes it down faster than it can go upstream
* Open channel flows are similar to compressible flows, in which the Mach number is used
	* In supercritical flow the wavefront is analogous to the shockwave in supersonic flow

## Compressible Flows

* Incompressibility is always only an approximation
	* The constant density assumption greatly simplifies problems
	* This is valid in a slow moving fluid
* In compressible flows we need fluid dynamics and thermodynamics
* A weak pressure wave is defined as a sound wave
	* The pressure wave is travelling at the speed of sound, but not the fluid particles
* Like in the open channel flow we again look at a control volume moving with the wavefront and assume 1D travel
	* Using continuity and momentum we get $c^2 = \left(\pdiff{p}{\rho}\right)_s$
		* Note this is at constant entropy, because the disturbance is very small and we're not adding heat
* For an ideal gas, $\frac{P_2}{P_1} = \left(\frac{\rho _2}{\rho _1}\right)^\gamma = \left(\frac{T_2}{T_1}\right)^{\frac{\gamma}{\gamma - 1}}$
	* $\frac{p}{\rho ^\gamma}$ is constant
	* $c = \sqrt{\gamma RT}$ for an ideal gas
* More generally for any fluid we can use the bulk modulus and get $c = \sqrt{\frac{E_v}{\rho}}$
* In a truly incompressible medium, $E_v \to \infty$ which means $c \to \infty$
* The Mach number is defined as $M = \frac{V}{c}$
	* Note this is a variable from point to point
	* We generally use $M_\infty$, the free stream Mach number
* We can categorize the flow based on Mach number:
	* $M_\infty \leq 0.3$ means the flow is incompressible
	* $M_\infty > 0.3$ means the flow is incompressible
	* $0.8 \leq M_\infty \leq 1$ gives transonic flow
	* $M_\infty \geq 5$ gives hypersonic flow

## Simplified Compressible Flows

* We will assume steady, 1D, isentropic (adiabatic and inviscid), and compressible flow
* $\rho VA$ is constant, so we have $\frac{\dd\rho}{\rho} + \frac{\dd A}{A} + \frac{\dV}{V} = 0$ as an alternative form of the continuity equation
* Pressure work can be derived as $p_1A_1V_1 - p_2A_2V_2$
* Using RTT on energy balance, we get the compressible Bernoulli equation: $\frac{p}{\rho} + e + \frac{V^2}{2} + gz = \text{const}$ where $e$ is the total internal energy per unit mass
	* In terms of enthalpy $h + \frac{V^2}{2} + gz = \text{const}$
* For high-speed flows, potential energy of the fluid is negligible; if we imagine that we can adiabatically slow the fluid to zero, then we get $h + \frac{v^2}{2} = h_0$, the *stagnation enthalpy* or *total enthalpy*
	* Kinetic energy converts to enthalpy
	* All the kinetic energy goes to an increase in internal energy (temperature) and pressure energy
* We can find properties of the fluid at stagnation:
	* $c_p(T - T_0) + \frac{V^2}{2} = 0 \implies T_0 = T + \frac{V^2}{2c_p}$
	* $T$ is the static temperature, the regular temperature we know
	* $\frac{V^2}{2c_p}$ is the dynamic temperature, the temperature rise in the stagnation process
	* $T_0$ is the stagnation or total temperature, the temperature we get when we bring the fluid to a stop adiabatically
	* For a very high speed flow we have $T_0 > T$ and kinetic energy is important, but for low speed flows we have $T_0 \approx T$ since kinetic energy is negligible
* We can get properties such as the stagnation temperature in terms of the mach number (formula in notes)
	* At very high velocities, the stagnation temperature can be significantly higher than the free stream temperature
	* Shockwaves will dissipate some of this temperature
* The rule of thumb is we must take compressibility into account when the density changes are greater than $5\%$
	* If we use the formula of $\frac{\rho _0}{\rho}$ from $M$, we get a mach number of about $0.3$ as the critical threshold

## Variation of Fluid Velocity With Flow Area

* Using the continuity equation and conservation of energy we can derive $\frac{\dA}{A} = -\frac{\dV}{V}(1 - M^2)$
	* In subsonic flow, we get $\diff{A}{V} < 0$ -- velocity decreases with increasing area
		* We know this from the incompressible Bernoulli equation
	* In supersonic flow, $\diff{A}{V} > 0$ -- velocity increases with increasing area
		* Density rapidly decreases so the air fills the entire channel
	* In sonic flow, $\diff{A}{V} = 0$ which means $\dA = 0$
		* If we have area as a function of $x$, then we have $\diff{A}{x} = 0$, which means the point at which we have sonic flow must be either a point of maximum or minimum area
		* Since $\diff{A}{V} < 0$ for subsonic flow, the only way we can get this is to have a converging-diverging duct; then we get $M = 1$ at the minimum point of the duct (the throat)
		* After the throat, the flow can accelerate to supersonic (this depends on the duct design and the pressure after the duct)

