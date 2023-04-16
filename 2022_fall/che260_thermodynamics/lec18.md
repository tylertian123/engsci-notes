# Lecture 18, Oct 20, 2022

## Heat Transfer

* Thermodynamics typically only deals with equilibrium/quasi-equilibrium processes; in reality we care about kinetics (i.e. we need to worry about time), so the rate of heat transfer matters
* In heat transfer we deal with a lot of rates
* Various applications:
	* Insulating buildings, HVAC systems
	* Electronics cooling
	* Manufacturing/industry

## Mechanisms of Heat Transfer

1. Conduction
	* Transfer of heat through a stationary medium, e.g. heat transfer through a metal, heat transfer through a window with an air gap
	* Driven by a temperature difference between two points in a stationary medium
2. Convection
	* Transfer of heat between a solid and surface and adjacent fluid that flows, e.g. moving air across a hot plate to cool it
	* Actually a combination of fluid mechanics and heat conduction
3. Radiation
	* Energy emitted by matter, e.g. the sun
	* Unlike the other forms, radiation can pass through a vacuum

## Heat Flux

* Defined as the heat transfer rate per unit area
* Flux is defined as $\frac{\dot Q}{A}$, with units of heat transfer rate per unit area ($\si{W/cm^2}$)
* How do we reduce heat flux?
	* Reduce $\dot Q$ (less heat generation) -- oftentimes not possible
	* Increase $A$ (more area to dissipate heat)
* Size is important -- due to the square-cube law, the specific surface area $\frac{A}{V}$ goes down as an object gets larger
	* If heat generation is proportional to volume, now we have less area to transfer heat per unit of heat generation
	* Larger systems are generally harder to cool if heat generation is proportional to volume
* Heat sinks are designed to maximally increase surface area
* We can also increase the amount of airflow (increasing the effects of convection)
* Some fluids are more effective at convection, e.g. water cooling

