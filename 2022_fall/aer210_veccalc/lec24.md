# Lecture 24, Oct 28, 2022

## Pressure Variations in a Fluid at Rest

* $\vec a = 0 \implies \del p = -\rho g\vec k \implies \left(\pdiff{p}{x}\ihat + \pdiff{p}{y}\jhat + \pdiff{p}{z}\khat\right) = -\rho g\vec k$
	* This means $\threepiece{\pdiff{p}{x} = 0}{\pdiff{p}{y} = 0}{\pdiff{p}{z} = -\rho g}$
* This means in a fluid at rest $p = p(z)$
	* Pressure is constant along the $x$ and $y$ directions
	* Note the minus sign; as $z$ decreases the pressure goes up
* We can now integrate this: $\Delta p = \int _{z_1}^{z_2} \rho g\,\dz = g\int _{z_1}^{z_2}\rho \,\dz$
	* Case 1: incompressible fluid, $\rho$ constant
		* $\Delta p = -\rho g(z_2 - z_1)$
		* We can write this as $p_2 = p_1 - \rho gh$ or $p_1 = p_2 + \rho gh$ where $h = z_2 - z_1$
			* Note if we're moving down in the fluid, $h < 0$
		* In this case pressure varies linearly with $z$
	* Case 2: compressible fluid, $\rho = \rho(z)$
		* Define the *specific weight* $\gamma$ as the weight per unit volume
		* $\gamma = \frac{W}{V} = \frac{mg}{V} = \frac{\rho V g}{V} = \rho g$
		* Therefore the change in pressure is found by integrating the specific weight
		* Note $\rho _{\text{gas}} \ll \rho _{\text{liquid}}$ so by extension, $\abs*{\pdiff{p}{z}_{\text{gas}}} \ll \abs*{\pdiff{p}{z}_{\text{liquid}}}$
			* Pressure changes are much smaller in a gas
		* For small distances (e.g. within a tube or a building) in a gas, we can assume pressure to be constant

\noteSummary{For a fluid with no shear force: $$-\del p + \rho\vec g = \rho\vec a$$
If gravity is $\vec g = -g\khat$: $$-\del p - \rho g\vec k = \rho\vec a$$
If the fluid is at rest: $$\Delta p = \int _{z_1}^{z_2} \rho g\,\dz = g\int _{z_1}^{z_2}\rho \,\dz$$
If the fluid is also incompressible: $$p_2 = p_1 - \rho gh$$}

* Example: find the pressure elevation relationship for a perfect ideal gas
	* $p = \rho RT$
	* $\pdiff{p}{z} = -\rho g \implies \pdiff{p}{z} = -\frac{p}{RT}g$
	* $\int _{p_1}^{p_2}\frac{1}{p}\,\dd p = -\int _{z_1}^{z_2}\frac{g}{RT}\,\dz \implies \ln\frac{p_2}{p_1} = -\frac{g}{RT}\Delta z$
	* $p_2 = p_1e^{-\frac{g}{RT}(z_2 - z_1)}$

