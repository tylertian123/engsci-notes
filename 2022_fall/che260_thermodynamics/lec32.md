# Lecture 32, Nov 29, 2022

## Forced Convection

* Consider a plate with a boundary layer forming, with laminar, transitional, and turbulent zones, with height $\delta _v(x)$
	* The boundary layer becomes turbulent as shear stress goes down due to the velocity gradient decreasing as the boundary layer gets thicker
* Recall $\tau = C_F\frac{\rho v_{\infty}^2}{2}$
	* $C_F$, the friction coefficient, has a local value depending on where on the shape you are
	* In practice friction goes down in the laminar regime, goes up in the transition, and then goes down again the turbulent regime
		* This is again due to the growth of the boundary layer
	* For laminar flow $C_{F,x} = \frac{0.664}{\ReN_x^\frac{1}{2}}$
		* We can average this over the length of the plate: $C_F = \frac{1}{L}\int _0^L \frac{0.664}{\ReN_x^\frac{1}{2}}\,\dx = \frac{1.328}{\ReN_L^\frac{1}{2}}$
	* For turbulent flow ($\ReN_x > \num{5e5}$): $C_{F,x} = \frac{0.0592}{\ReN_x^\frac{1}{2}}$
		* This gives an average $C_F = \frac{0.074}{\ReN_L^\frac{1}{5}}$
* Now consider the thermal boundary layer
	* $h = -\frac{k}{T_s - T_\infty}\eval{\diff{T}{y}}{y = 0}$
	* $\diff{T}{y} \sim \frac{T_s - T_\infty}{\delta _T}$
	* As the thermal boundary layer thickness goes up, the convective heat transfer goes down
	* This gives a local Nousselt number $\NuN_x = \frac{h_xx}{k}$
		* For laminar flow: $\NuN_x = 0.332\ReN^\frac{1}{2}\PrN^\frac{1}{3}$ for $\PrN \geq 0.6$
			* This gives an average of $\NuN = 0.664\ReN_L^\frac{1}{2}\PrN^\frac{1}{3}$
		* For turbulent flow: $\NuN_x = 0.0296\ReN_x^\frac{4}{5}\PrN^\frac{1}{3}$ for $0.6 \leq \PrN \leq 60, \num{5e5} \leq \ReN_x \leq \num{1e7}$
			* This gives an average $\NuN = 0.037\ReN_L^\frac{4}{5}\PrN^\frac{1}{3}$
* The film temperature is defined as the average of the surface and free temperatures $T_F = \frac{T_s + T_\infty}{2}$
	* This is to find the average fluid properties

## Flows Over Cylinders and Spheres

* Behind a cylinder/sphere there is a turbulent wake, making the boundary layer behave erratically (flow separation, technically not turbulence)
	* Turbulence can still occur, if $\ReN = \frac{vD}{\nu} > \num{2e5}$
* For a cylinder $\NuN = C\ReN^m\PrN^n$ just like for a plate
* The Churchill and Bernstein correlation is more accurate and applies over a broader range
	* $\NuN = 0.3 + \frac{0.62\ReN^\frac{1}{2}\PrN^\frac{1}{3}}{\left(1 + \left(\frac{0.4}{\PrN}\right)^\frac{2}{3}\right)^\frac{1}{4}}\left(1 + \left(\frac{\ReN}{28200}\right)^\frac{5}{8}\right)^\frac{4}{5}$, applicable over $\ReN\PrN > 0.2$
* Flow over a sphere is similar: $\NuN = 2 + \left(0.4\ReN^\frac{1}{2} + 0.06\ReN^\frac{2}{3}\right)\PrN^{0.4}\left(\frac{\mu _\infty}{\mu _s}\right)^\frac{1}{4}$, valid for $3.5 \leq \ReN \leq 80000, 0.7 \leq \PrN \leq 380$
	* Note all properties are evaluated at $T_\infty$, not $T_p$ like the others (except $\mu _s$)

\noteSummary{For laminar flow over a flat plate (average): $$\NuN = 0.664\ReN_L^\frac{1}{2}\PrN^\frac{1}{3}, \PrN \geq 0.6$$ For turbulent flow over a flat plate (average): $$\NuN = 0.037\ReN_L^\frac{4}{5}\PrN^\frac{1}{3}, 0.6 \leq \PrN \leq 60, \num{5e5} \leq \ReN \leq \num{1e7}$$ where $\ReN$ is the Reynolds number evaluated for the entire plate; material properties and $\PrN$ can be determined through the film temperature $$T_F = \frac{T_s + T_\infty}{2}$$}

