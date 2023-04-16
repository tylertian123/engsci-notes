# Lecture 30, Nov 24, 2022

## Forced Convection

* Force convection is convection in which the fluid is imparted by external means, as opposed to natural convection which relies on natural fluid motion caused by density changes from temperature
* Up until now we've been using $\dot Q = hA(T_i - T_\infty)$ with $h$ already given
	* $h$ could be measured experimentally in a complex system
	* Can we determine $h$ based on system properties?
* Relevant properties:
	* Viscosity $\mu$
	* Density $\rho$
	* Thermal conductivity $k$
	* Heat capacity $c_p$
	* Fluid velocity $v_\infty$ (for a free stream, outside the boundary layer)
	* Shape and size:
		* Characteristic length (length of a plate, diameter of cylinder/sphere)
	* Type of flow (laminar vs turbulent)
* We need to consider the boundary layer, where the fluid slows down near the plate due to the no-slip condition at the boundary
	* We consider this as the region where $v < 0.99v_{\infty}$
* At the interface between fluid and solid, heat transfer occurs only by conduction
	* $\dot q = \eval{-k\pdiff{T}{y}}{y = 0}$
	* $\dot q = h(T_s - T_\infty)$ by Newton's law of cooling
	* Therefore $h(T_s - T_\infty) = \eval{-k\pdiff{T}{y}}{y = 0} \implies h = \frac{-k\eval{\pdiff{T}{y}}{y = 0}}{T_s - T_\infty}$
	* Now the problem becomes solving for $\pdiff{T}{y}$, but typically we don't know this
* Consider the boundary layer and assume $T_s > T_\infty$
	* We have both a velocity and a thermal boundary layer; we basically want the slope of this thermal boundary layer
	* Overall $h$ changes with position as local $\pdiff{T}{y}$ at the surface changes, as the boundary layer develops (boundary layer gets thicker as the fluid flows further down the surface)
	* Define a local heat transfer coefficient $x$ where $x$ is along the surface, then the overall $h$ is $\bar h = \frac{1}{L}\int _0^L h(x)\,\dx$

## Boundary Layer Flow

* Typically the boundary layer begins with laminar flow, then becomes turbulent as you go down the surface, with a transitional region in the middle
* The fluid exerts a stress on the plate, $\tau = \mu\eval{\pdiff{v}{y}}{y = 0}$
* We need to define a "friction coefficient" for the fluid
	* By conservation of energy $\Delta (p\dot v) + \Delta \left(\frac{\dot mv^2}{2}\right) = 0$
	* $p - p_\infty + \frac{\rho v^2}{2} - \frac{\rho v_\infty^2}{2} = 0 \implies p - p_\infty = \frac{\rho v_\infty^2}{2}$
		* This $p - p_\infty$ is the force per unit area felt by the body
		* $\frac{\rho v_\infty^2}{2}$ is the inertial force
	* $\frac{F}{A} = \tau = c_F\frac{\rho v_\infty^2}{2}$ where $c_F$ is the friction coefficient for the fluid, defined for different shapes, generally about 1
		* For a sphere it's about 0.47, for a plate about 1.17, for a convex hull 2.3, for an airfoil 0.04

## Diffusivities

* In molecular diffusion (mass transfer) we have Fick's law $J_A = -D_{AB}\diff{C_A}{x}$
	* $D_{AB}$ is the mutual diffusion constant for $A$ into solid $B$ with units of $\si{m^2/s}$
	* $C_A$ is the concentration of $A$
* In heat transfer we have Fourier's law $\dot q = -k\diff{T}{x} \implies \dot q = \frac{k}{\rho c_p}\diff{}{x}(\rho c_p T) = -\alpha \diff{}{x}(\rho c_pT)$
	* $\alpha$ is the thermal diffusivity
	* $\rho c_pT$ can be thought of as a "concentration of thermal energy", the amount of thermal energy per unit volume with units of $\si{J/m^3}$
* In a fluid $\mu$ is the dynamic viscosity; define $\frac{\mu}{\rho} = \nu$ to be the kinematic viscosity (aka momentum diffusivity)
	* Shear stress is in general $\tau = \mu\diff{v}{y} = \frac{\mu}{\rho}\diff{}{y}(\rho v) = \nu\diff{}{y}(\rho v)$
	* This is the diffusion equation again
	* $\tau$ can be thought of as a "momentum flux"
	* $\rho v$ is the "concentration of momentum", momentum per unit volume

