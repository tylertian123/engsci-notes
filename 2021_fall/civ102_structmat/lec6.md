# Lecture 6, Sep 21, 2021

## Stress-Strain Curves

![Stress-strain curve of mild steel](imgs/mild_steel_stress_strain.png)
(Note: Mild steel is also sometimes known as low-carbon or low-alloy steel; the lower carbon content makes it more ductile and easier to work with, but less strong)

* Materials may exhibit linear elasticity for lower loads, but as they approach failure the stress-strain relationship is nonlinear
* Some key *material properties* are used to describe the stress-strain curve:
	1. Strength: How much stress a material can carry before it fails
		1. Yield strength/stress $\sigma _y$ or $f_y$: The stress at which the material starts yielding (permanently deforming); when yielding occurs, strain will increase even without increasing stress; this is the *yield plateau* (flat part of graph)
			* The yield strain is typically about $0.002$, and the yield plateau ends at about $0.05$
		2. Ultimate strength/stress $\sigma _u$ or $f_u$: The stress at which the material fails completely (the peak on the stress-strain curve)
	2. Ductility: How much a material can be deformed before it breaks; the largest strain a material can carry before it fractures (ductile vs brittle)
	3. Young's Modulus (material stiffness): Slope of the linear elastic region of the curve (see previous lecture)
		* Materials with higher value of $E$ are *stiff*, lower values of $E$ are *flexible*
* Plastic deformations are not recoverable; elastic deformations are
* Phases of the curve:
	1. The linear elastic region where $\sigma = E\varepsilon$ (small strains only)
	2. Yield plateau: Plastic behaviour; strain can change without stress changing (once the yield strength is reached)
	3. The rest of the graph, where the curve is nonlinear; some strengthening due to strain hardening and then softening as necking begins
* If the stress is unloaded when you're on the yield plateau, the stress-strain curve of unloading is linear with the same slope as the original linear elastic region, but it won't pass through the origin
	* Essentially when unloaded the linear elastic region is shifted to the right by the same amount you moved along the yield plateau
* Strain hardening: When a material gets stronger and stiffer when strained beyond its yield point
* Necking: Local tensile strains cause the cross-sectional area to become much smaller; usually precedes failure
	* During this phase, the engineering stress goes down, but the true stress keeps going up because the cross-sectional area decreases
* Steel is very handy because it has a large yield plateau, so there is a lot of warning before it fails
* At the atomic level:
	* During the linear elastic region the atoms get pulled apart and they can spring back together
	* During the yield plateau, the atoms slip past each other
	* Past the yield plateau, the atoms get stuck so stress hardening happens

## Strain Energy

* The energy stored in a material as it is deformed: $W = \int F\,\dd\Delta l$
* During the linear elastic phase the strain energy is $\frac{1}{2}k(\Delta l)^2$
* The *strain energy density* $U = \int \sigma\,\dd\varepsilon$ is the energy stored in the material per unit volume
	* $U = \frac{W}{V} = \int \frac{F}{V}\,\dd\Delta l = \int \frac{F}{AL_0}\,\dd\Delta l = \int \frac{F}{A}\,\dd\frac{\Delta l}{L_0} = \int \sigma\,\dd\varepsilon$
	* Also known as *specific strain energy*
	* Units of $\si{MJ/m^3}$ since $\si{MPa} = \si{MN/m^2} = \si{MN \cdot m/m^3} = \si{MJ/m^3}$
	* $W = U \cdot V_0$ where $V_0$ is the original volume before deformation
	* In the linear elastic region: $W = \int \sigma\,\dd\varepsilon \cdot V_0 = \int E\varepsilon\,\dd\varepsilon \cdot V_0 = \frac{1}{2}E\varepsilon^2 V_0 = \frac{1}{2}\sigma\varepsilon V_0$
	* Strain energy density is a material property independent of the member
* Additional material properties:
	4. Resilience: Max amount of energy the material can absorb before yielding; the area under the curve in the linear elastic region
	5. Toughness: Max amount of energy the material can absorb before failing; the area under the entire stress-strain curve

## Thermal Expansion

* Thermal strains $\varepsilon_{th}$ are related to temperature changes by $\varepsilon_{th} = \alpha\Delta T$, where $\alpha$ is the *coefficient of thermal expansion*, a material constant
	* Thermal strains only cause stresses if the material is not allowed to expand/contract
	* Stresses caused by thermal strain can be calculated by Young's modulus if the length of the material is fixed

