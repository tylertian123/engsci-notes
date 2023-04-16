# Lecture 31, Nov 28, 2022

## Nusselt Number

* In a turbulent flow we typically have greater heat transfer and shear stress
* The transition point from laminar to turbulent depends on the Reynolds number, the ratio of inertia to viscosity in the fluid
	* For us the characteristic length used is the $x$ position along the plate
* For every geometry, there is a critical Reynolds number at which the transition happens
	* For a flat plate this is about $\num{5e5}$
* We have 2 boundary layers, the velocity boundary layer and the temperature boundary layer; the size of one may be smaller or larger than the other, depending on fluid properties
	* Fluids with high kinematic viscosity (momentum diffusivity, e.g. oils) have thick velocity boundary layers
	* Fluids with high thermal diffusivity ($\alpha = \frac{k}{\rho c}$) have thick thermal boundary layers
* The ratio of the boundary layers is described by the ratio of diffusivities $\frac{\nu}{\alpha}$
* Define the Prandtl number $\PrN = \frac{\nu}{\alpha} = \frac{\frac{\mu}{\rho}}{\frac{k}{\rho c}} = \frac{\mu c}{k}$
	* For $\PrN \ll 1$ (e.g. liquid metals), the thermal boundary layer is larger than the velocity boundary layer
	* For $\PrN \gg 1$ (e.g. oils), the velocity boundary layer is larger than the thermal boundary layer
	* For $\PrN \approx 1$ (e.g. gases), the boundary layers are comparable in size
* We can non-dimensionalize $h$
	* Convective heat transfer scales with $D^2$
	* If the fluid is not moving, we just have conduction, which scales with $kD$
	* How much is heat transfer enhanced by the fluid motion?
	* Taking the ratio of these we get $\frac{hD}{k}$
* Define the Nousselt number $\NuN = \frac{hL_c}{k}$ where $L_c$ is a characteristic length, and $k$ is thermal conductivity of the fluid
	* Looks similar to the Biot number, but the thermal conductivity here is of the fluid
* $\NuN = f(\ReN, \PrN)$ and geometry, and this relationship can be determined experimentally
	* Typically $\NuN = C_0\ReN^m\PrN^n$, with $C_0, m, n$ determined for different geometries

\noteSummary{Typically the convective heat transfer coefficient can be found by $$\NuN = C_0\ReN^m\PrN^n$$ where $\NuN = \frac{hL_c}{k}$, $\ReN = \frac{\rho vL_c}{\mu} = \frac{\nu L_c}{\mu}$ and $\PrN = \frac{\nu}{\alpha} = \frac{\mu c}{k}$ with $C_0, m, n$ determined for different geometries}

