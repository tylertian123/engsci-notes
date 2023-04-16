# Lecture 25, Nov 14, 2022

## Insulation

* The $R$-value of insulation indicates thermal resistance
	* Note this $R$ value normalized is per unit area (temperature difference per heat flux)
	* $R = \frac{\Delta T}{\dot q} = \frac{L}{k}$, note area is not in here
	* Typically in imperial units in BTU per (hour foot degree Fahrenheit)
* Insulation is typically made of materials containing small air pockets, to reduce conduction and also convection

## Critical Radius of Insulation

* Consider a pipe with insulation starting at $r_1$ and ending at $r_2$
* The insulation increases the wall thickness; typically increases conductive resistance $R_{cond} = \frac{L}{kA}$
* However convective heat resistance is *decreased* due to the increase in area, so insulation can increase heat transfer!
* $\dot Q = \frac{T_{\infty,1} - T_{\infty,2}}{\frac{\ln\frac{r_1}{r_2}}{2\pi Lk} + \frac{1}{2\pi r_2Lh}}$
	* There is a critical radius of insulation where $\dot Q$ is the maximum
	* The critical point is $r_{crit} = \frac{k}{h}$; below this point, insulation increases the heat transfer; above this point insulation decreases it

## Heat Flow Through Finned Surfaces

* Assumption: 1D conduction (i.e. temperature is uniform in the $y$ and $z$ directions)
* Fin with cross-sectional area $A_c$, length $L$, transferring heat into fluid with $T_\infty$
* Consider an infinitesimal slice of the fin; $\dot Q_x$ would not be constant due to heat loss through the sides of the fin
	* Energy balance: $\dot Q_{cond, x} = \dot Q_{cond, x + \Delta x} + \dot Q_{conv}$
	* Let $P$ be the perimeter of the fin, so the surface area is $P\Delta x$, so $\dot Q_{conv} = hP\Delta x(T(x) - T_{\infty})$
	* $\dot Q_{cond, x + \Delta x} - \dot Q_{cond, x} + hP\Delta x(T(x) - T_\infty) = 0$
	* Take $\lim _{\Delta x \to 0}$ and we get $\diff{Q_{cond}}{x} + hP(T(x) - T_\infty) = 0$
	* We know $\dot Q_{cond} = -kA_c\diff{T}{x}$ so $\diff{}{x}\left(-kA_c\diff{T}{x}\right) + hP(T(x) - T_\infty) = 0$
	* We usually assume $A_c, P, k$ are constant, so $\pdiffn{2}{T}{x} - \frac{hP}{kA_c}(T(x) - T_\infty) = 0$
* Let $\theta = T - T_\infty$ and $a^2 = \frac{hP}{kA_c}$
	* Note $\diff{\theta}{x} = \diff{T}{x}$
	* $\diffn{2}{\theta}{x} - a^2\theta = 0$
	* $\theta(x) = c_1e^{ax} + c_2e^{-ax}$
* Using boundary conditions: $T(0) = T_b$
	* If we assume a fin that's infinitely long, $T(L) = T_\infty \implies \theta(0) = \theta _b, \theta(L) = 0$
		* $\theta(L) = c_1e^{ax} = 0 \implies c_1 = 0$
		* $\theta(0) = c_2 = \theta _b$
		* $\theta(x) = \theta _be^{-ax}$ or $\frac{\theta(x)}{\theta _b} = e^{-ax}$ or $\frac{T(x) - T_\infty}{T_b - T_\infty} = \exp\left(-x\sqrt{\frac{hP}{kA_c}}\right)$
		* $\eval{\diff{T}{x}}{x=0} = \eval{\diff{Q}{x}}{x=0} = -\theta _ba$
		* For an infinitely long fin $\dot Q = \sqrt{hPkA_c}(T_b - T_\infty)$

\noteSummary{For an infinitely long fin, the temperature profile varies as: $$\frac{\theta(x)}{\theta _b} = \frac{T(x) - T_\infty}{T_b - T_\infty} = e^{-ax}$$ where $$a = \sqrt{\frac{hP}{kA_c}}$$ where $P$ is the perimeter of the fin, $A_c$ is the cross-sectional area of the fin, and the total heat transfer \textit{through the fin} is $$\dot Q = \sqrt{hPkA_c}(T_b - T_\infty)$$}

