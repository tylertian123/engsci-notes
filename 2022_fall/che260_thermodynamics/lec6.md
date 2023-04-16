# Lecture 6, Sep 20, 2022

## Control Volumes/Open Systems

* For these systems we need to take into account the mass flowing in/out of a system and the energy the mass carries
* *Steady flow processes* are devices like pumps, compressors, turbines, etc

### Mass Balance

* Consider a generic control volume with an inlet and an outlet
	* Fluid coming in with velocity $\bm v$, with cross section $A$, entering with length $\dx$, mass $\delta m$
		* Note $\delta m$ is used since mass is crossing the boundary, so it's not a property anymore
		* Length of fluid element inside control volume in time $\dt$ is $\dx = \bm v\,\dt$
		* Volume of fluid element is $A\,\dx = A\bm v\,\dt$
		* Mass of fluid element is $\delta m = \rho A\bm v\,\dt$
	* Mass flow rate $\dot m = \frac{\delta m}{\dd t} = \rho A\bm v$
* Consider a turbine with the fluid expanding as it goes through
	* Pressure goes down as fluid passes through
	* $\dot m = \rho A\bm v = \text{const}$
	* Therefore $A$ must be increased to keep $\bm v$ approximately constant, so the flow is smooth
		* Cross section area must be increased to maintain flow rate as gas loses pressure
	* $\dot m = \rho A\bm v = \frac{A\bm v}{v}$
		* Density $\rho = \frac{m}{V}$, which is simply $\frac{1}{v}$ where $v$ is the specific volume
		* For an ideal gas $Pv = RT \implies \frac{1}{v} = \frac{P}{RT}$ so $\dot m = \frac{PA\bm v}{RT}$
	* At steady state $\dot m_{in} = \dot m_{out}$
* First law for a control volume:
	* Assume $\dot m$ coming in, with $\bm v_1, h_1$, height $z_1$, outlet has $\bm v_2, h_2, z_2$
	* The system is heated with $\dot Q$, and heat is transferred in with $\dot W$
		* The work in this case is usually *shaft work* (more on this later)
	* Energy can be transferred with the flow in different ways:
		* Kinetic energy: $ke = \frac{1}{2}\bm v^2$
		* Potential energy: $pe = gz$
		* Internal energy: $u$
		* Flow work: $Pv$
		* The last two is combined into enthalpy $h = u + Pv$
	* Flow energy per unit mass is $h + ke + Pe = h + \frac{\bm v^2}{2} + gz$
	* Energy balance at steady state requires $\dot E_{in} = \dot E_{out} \implies \dot Q + \dot W + \dot m\left(h_1 + \frac{\bm v_1^2}{2} + gz_1\right) = \dot m\left(h_2 + \frac{\bm v_2^2}{2} + gz_2\right)$
	* $\dot Q + \dot W = \dot m\left((h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2} + g(z_2 - z_1)\right)$
		* Define $q = \frac{\dot Q}{\dot m}, w = \frac{\dot W}{\dot m}$
		* $q + w = (h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2} + g(z_2 - z_1)$

\noteDefn{The first law for a control volume: $$\dot Q + \dot W = \dot m\left((h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2} + g(z_2 - z_1)\right)$$ or mass normalized: $$\dot q + \dot w = (h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2} + g(z_2 - z_1)$$}

## Steady Flow Devices

* A turbine thermodynamically is $h_1$ going in, $h_2$ coming out, $\dot W_{shaft}$ extracted
* A compressor thermodynamically is just a turbine running backwards
* Consider a turbine with $\dot Q = 0$, i.e. heat loss is negligible, and changes in KE and PE are negligible:
	* $\dot Q + \dot W = \dot m\left((h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2} + g(z_2 - z_1)\right) \iff \dot W = \dot m(h_2 - h_1)$
	* For a turbine, $T$ and $P$ at the inlet are high, so $h_1 > h_2$, and $\dot W < 0$ (i.e. work is done on the surroundings)
	* Reverse this for a compressor ($h_2 > h_1$), and work is done by the surroundings to the system
* For a turbine/compressor, the work is in the difference of enthalpies
* Example: A gas turbine is supplied $10\si{kg/s}$ of air at $800\si{\degree C}, 600\si{kPa}$, which leaves at $300\si{\degree C}, 100\si{kPa}$; what is the power output?
	* Assume ideal gas, then $\Delta h = c_p\Delta T$
	* $\dot W = \dot mc_p(T_2 - T_1)$
	* $T_{avg} \approx 800\si{K}$, look up $c_p$
	* $\dot w = 10\si{kg/s} \cdot 1.099\si{kJ/kg\degree C} \cdot (300 - 800) = -5495\si{kW}$
* For a pump, the goal is usually to change the PE
	* Consider a height change $\Delta z$ between the inlet and outlet
	* $P_1$ coming in, $P_2$ coming out, $\dot W$ driving the pump
	* Assume change in KE is negligible, $\dot Q$ negligible
		* For an incompressible fluid, density is constant, so as long as the inlet and outlet pipe diameters are the same, KE is the same
	* $\dot W = \dot m\left((h_2 - h_1) + g(z_2 - z_1)\right)$
	* For an incompressible fluid, then $h_2 - h_1 = c(T_2 - T_1) + v(P_2 - P_1)$ (we can change enthalpy by change in temperature or pressure)
	* Assume no change in temperature so $h_2 - h_1 = v(P_2 - P_1) \implies \dot W = \dot m(v(P_2 - P_1) + g(z_2 - z_1))$ (i.e. frictional losses are negligible)
		* The work put in is taken out as either a change in pressure or a change in PE
		* If the difference in height between the inlet/outlet is small, then the pressure change is large
* Nozzles and diffusers change the KE (nozzles increase KE by having the inlet larger than the outlet, diffusers decrease KE by having a nozzle backwards)
	* Assume PE change is 0, no heat or work going in
	* $0 = \dot m\left((h_2 - h_1) + \frac{\bm v_2^2 - \bm v_1^2}{2}\right)$
	* Assume $\bm v_2 \gg \bm v_1$, so we can neglect $\bm v_1^2$
	* $\bm v_2 = \sqrt{2(h_1 - h_2)}$
	* Enthalpy is converted into KE by increasing velocity
		* Pressure decreases

