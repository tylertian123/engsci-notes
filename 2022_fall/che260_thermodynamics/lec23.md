# Lecture 23, Nov 1, 2022

## Thermal Resistances in Parallel

* Need to assume each side has the same uniform temperature across all different materials, and heat transfer is only 1D (no heat transfer between the different thermal resistances)
* The total heat flux is $\dot Q = \sum _i \Dot Q_i = \sum _i \frac{T_1 - T_2}{R_i} = (T_1 - T_2)\left(\sum _i \frac{1}{R_i}\right)$
* This gives us $\frac{1}{R_{tot}} = \sum _i \frac{1}{R_i}$, completely analogous to electrical resistors

## Thermal Resistance Networks

* We can combine complex heat transfer conditions into resistance networks
* Simplify using series and parallel resistance rules like in circuits
* Main assumptions:
	* 1D heat flow
	* Isothermal normal to heat flow

## Thermal Contact Resistance

* So far we've assumed that at the boundary the temperatures are identical, but this assumes materials are completely flush against each other
* Real surfaces are rough (nano scale topology)
	* Roughness is measured in nanometers
* Due to the roughness the two surfaces are not in perfect contact, so at the boundary there is a slight temperature difference
	* Instead of having $T_1 \rightarrow T_2 \rightarrow T_3$ we actually have $T_1 \rightarrow T_2 \rightarrow T_2' \rightarrow T_3$
	* Define $\Delta T = T_2 - T_2'$
* Since the air between the layer is a poor conductor in reality most of the heat flow goes through the parts of the surface that are actually in contact
	* The effective heat transfer area is only the area in contact
	* To minimize thermal contact resistances, we can fill in the gaps with a conductive material, e.g. silicon oil, glycerol
		* This is how thermal paste works
* Define the *thermal contact resistance* $R_c = \frac{\Delta T}{\dot q}$ with units of $\si{m^2K/W}$
	* Notice this is defined per unit of heat flux, not per unit of heat transfer
	* Same unit as $\frac{1}{h}$ but not $\frac{1}{hA}$ like the other resistances
* Define $h_c = \frac{1}{R_c} = \frac{\dot q}{\Delta T}$ as the *thermal contact conductance*
	* $\dot q = h_c\Delta T, \dot Q = h_cA\Delta T$

