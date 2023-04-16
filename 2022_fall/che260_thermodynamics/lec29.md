# Lecture 29, Nov 22, 2022

## Semi-Infinite Solids

* Consider an object with surface temperature $T_s$ and internal temperature $T_s$
	* The skin layer is the outer layer of the solid where the temperature is a gradient; heat transfer is meaningfully occurring
	* The core is the part that's relatively untouched by heat transfer so it has a roughly constant temperature
	* The actual temperature distribution would be an exponential, and the skin layer is the region where the exponential is changing fast, whereas the core is the asymptote
	* The dividing point is relatively subjective
* How does the skin depth $\delta$ vary with time?
* Apply a semi-quantitative scaling analysis, with the goal of finding functional relationships
	* Starting with the conduction equation: $\pdiffn{2}{T}{x} = \frac{1}{\alpha}\pdiff{T}{t}$
	* $\pdiffn{2}{T}{x} \sim \frac{\eval{\pdiff{T}{x}}{x = \delta} - \eval{\pdiff{T}{x}}{x = 0}}{\delta}$
	* $\eval{\pdiff{T}{x}}{x = \delta} = 0$ since at that point the heat transfer is done, so temperature is not changing much
	* $\eval{\pdiff{T}{x}}{x = 0} \approx \frac{T_i - T_s}{\delta}$ is the slope roughly at the surface
	* $\pdiffn{2}{T}{x} \sim \frac{0 - \frac{T_i - T_s}{\delta}}{\delta} = \frac{T_s - T_i}{\delta^2}$
	* $\pdiff{T}{t} \sim \frac{T_s - T_i}{\Delta t} = \frac{T_s - T_i}{t}$
	* Substituting: $\frac{T_s - T_i}{\delta^2} \approx \frac{1}{\alpha}\frac{T_s - T_i}{t} \implies \delta(t) \sim \sqrt{\alpha t}$
* $\delta$ scales with $\sqrt{\alpha t}$
	* This is not an exact equivalence, but now we know roughly how deep the heat transfer gets as time goes on
* Consider a sphere with radius $r_0$, then heat transfer reaches the centre when $\delta = r_0$; so we can devise a characteristic time $t_c = \frac{r_0^2}{\alpha}$ for the heat transfer to reach the centre
	* If $t \ll t_c$ then we can treat the body as *semi-infinite*, i.e. infinite in one direction
* With a semi-infinite assumption we have an exact solution to the transient heat conduction problem
	* $\pdiffn{2}{T}{x} = \frac{1}{\alpha}\pdiff{T}{t}$ with boundary conditions $T(0, t) = T_s, T(\infty, t) = T_i, T(x, 0) = T_i$
	* Using the scaling analysis to relate $t$ and $x$
		* $\delta(t) \sim \sqrt{\alpha t}$
		* Define the similarity variable $\eta = \frac{x}{2\delta} = \frac{x}{2\sqrt{\alpha t}}$
		* $\pdiff{T}{t} = \diff{T}{\eta}\pdiff{\eta}{t} = \diff{T}{\eta}\left(\frac{-x}{4t\sqrt{\alpha t}}\right)$
		* $\pdiff{T}{x} = \diff{T}{\eta}\pdiff{\eta}{x} = \diff{T}{\eta}\left(\frac{1}{2\sqrt{\alpha t}}\right)$
		* $\pdiffn{2}{T}{x} = \diff{}{\eta}\left(\diff{T}{\eta}\right)\left(\pdiff{\eta}{x}\right)^2 = \diffn{2}{T}{x}\left(\frac{1}{4\alpha t}\right)$
		* $\frac{1}{4\alpha t}\diffn{2}{T}{\eta} = \frac{1}{\alpha}\left(-\frac{x}{4t\sqrt{\alpha t}}\right)\diff{T}{\eta}$
		* $\diffn{2}{T}{\eta} = -\frac{x}{\sqrt{\alpha t}}\diff{T}{\eta} = -2\eta\diff{T}{\eta}$
	* New boundary conditions: $T(0) = T_s, T(\infty) = T_i$
	* Let $w = \diff{T}{\eta} \implies \diff{w}{\eta} = -2\eta w$
	* Solve: $\ln w = -\eta^2 + C \implies w = c_0e^{-\eta^2} = \diff{T}{\eta}$
	* $T = c_0\int _0^\eta e^{-u^2}\,\du + c_1$
	* Boundary conditions: $T(0) = c_1 = T_s, T(\infty) = c_0\frac{\sqrt{\pi}}{2} + T_s \implies c_0 = \frac{2(T_i - T_s)}{\sqrt{\pi}}$
	* $\frac{T - T_s}{T_i - T_s} = \frac{2}{\sqrt{\pi}}\int _0^\eta e^{-u^2}\,\du = \erf(\eta)$
	* $1 - \frac{T - T_s}{T_i - T_s} = 1 - \erf(\eta) = \erfc(\eta)$
		* $\erfc$ is the complementary error function
	* $\frac{T - T_i}{T_s - T_i} = \erfc(\eta)$
* For heat flux: $\dot q_s = -h\eval{\diff{T}{x}}{x = 0} = -h\eval{\diff{T}{\eta}\pdiff{\eta}{x}}{\eta = 0}$
	* Differentiating the temperature profile we get $\frac{1}{T_i - T_s}\diff{T}{\eta} = \frac{2}{\sqrt{\pi}}e^{-\eta^2} \implies \diff{T}{\eta} = \frac{2(T_i - T_s)}{\sqrt{\pi}}e^{-\eta^2}$
	* $\pdiff{\eta}{x} = \frac{1}{2\sqrt{\alpha t}}$
	* Plugging these in $\dot q = -k(T_i - T_s) \cdot \frac{2}{\sqrt{\pi}} \cdot \frac{1}{2\sqrt{\alpha t}}$
	* Simplify to get a heat flux at the base of $\dot q = \frac{k(T_s - T_i)}{\sqrt{\pi\alpha t}}$
* Contact of two semi-infinite bodies: joining together two semi-infinite materials $A$ and $B$, applying the same analysis as before
	* We have $T_{s,A} = T_{s,B} = T_s$ and $\dot q_{s,A} = \dot q_{s,B}$
	* $-\frac{k(T_s - T_{A,i})}{\sqrt{\pi\alpha _At}} = \frac{k_B(T_s - T_{B,i}}{\sqrt{\pi\alpha _Bt}}$
	* $\frac{T_{A,i} - T_s}{T_s - T_{B,i}} = \frac{\sqrt{(k\rho c)_B}}{\sqrt{(k\rho c)_A}} = \frac{\gamma _B}{\gamma _A}$
		* $\gamma$s are known as the *effusivities*
	* $T_s = \frac{\gamma _AT_{A,i} + \gamma_BT_{B,i}}{\gamma _A + \gamma B}$
		* Notice this is constant

\noteSummary{When the time scale is such that the skin depth $\delta = \sqrt{\alpha t} \ll L$ where $L$ is the characteristic length, we can treat a solid as semi-infinite, in which case $$\frac{T - T_i}{T_s - T_i} = \erfc(\eta) = 1 - \erf(\eta) = 1 - \frac{2}{\sqrt\pi}\int _0^\eta e^{-u^2}\,\du$$ where $\eta = \frac{x}{2\sqrt{\alpha t}}$ is the similarity variable; this results in a heat transfer at the base of $$\dot q = \frac{k(T_s - T_i)}{\sqrt{\pi\alpha t}}$$ This usually applies in cases of very low $\text{Bi}$, i.e. $R_{cond} \gg R_{conv}$}

