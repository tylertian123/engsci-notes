# Lecture 27, Mar 31, 2022

## Time-Dependent Elastic Behaviour

* For metals and ceramics the stress-strain behaviour is independent of time (when below the yield strength), i.e. elastic response is instantaneous
* Some polymers have *viscous behaviour*: Under the same stress, strain keeps increasing with time, and this process is irreversible
	* This is referred to as *viscous flow*
	* The increase in strain is not necessarily a straight line, could be e.g. exponential decay
* Example: Silly putty (silicone) deforms when strained slowly, but fractures when strained quickly
	* Silly putty bounces without denting, which indicates elastic behaviour
* If we fix the strain and look at the stress (e.g. guitar string), it will slowly decrease
	* This is referred to as *stress relaxation* since length stays fixed but tension decreases
	* The shape resembles a decaying exponential
* Define the *relaxation modulus* $E_R(t) = \frac{\sigma(t)}{\varepsilon _0}$
* Stress relaxation behaviour depends on temperature; the warmer the temperature, the faster the stress relaxation
* Consider taking a fixed time $t_0$ and looking at the temperature dependence of $E_R$
	* For many polymers, it starts flat, then rapidly decreases, flatten outs again, and then decreases to 0
	* The final decrease is the melting temperature $T_m$
	* The first decrease happens at $T_g$, the *glass transition temperature*
		* Below $T_g$ the polymer is brittle
		* Between $T_g$ and $T_m$, the polymer is in the rubbery region (flexible and maintains shape)
		* Past the melting temperature the polymer exhibits viscous flow
	* The glass transition temperature exists due to crystalline and amorphous regions
		* When temperature above $T_g$ the amorphous regions start breaking up
* Typical $T_g$ values:
	* Polyethylene: $153\si{K}$
		* PE has low $T_g$, which means it's flexible at room temperature
	* Polystyrene: $373\si{K}$
	* PMMA: $378\si{K}$
		* Acrylic has high $T_g$ which is why it's rigid
	* Nylon: $323\si{K}$
* Two classes of polymers:
	* Thermoplastics: Can be melted and molded without damaging the polymer
		* Polymer can enter viscous flow region with all the chains flowing past each other
		* Temperature reduces intermolecular forces
		* Cooling restores intermolecular forces again
		* Example: PE, nylon, polystyrene
	* Thermoset polymers: Cannot be melted without damaging the polymer (can't be remolded)
		* These are hardened via cross-linking (aka *curing*, an irreversible process)
		* Example: Epoxy
		* Network polymers don't melt since the strength comes from primary bonds

