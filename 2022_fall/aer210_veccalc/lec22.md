# Lecture 22, Oct 27, 2022

## Forces on a Fluid

* Two categories:
	* Body forces: developed without physical contact, proportional to the fluid's mass
		* e.g. gravity
	* Surface forces: developed with physical contact at the surface of a fluid element
		* These don't have to be real surfaces
		* Can be broken down into components tangential (shear) or normal to the surface
		* Surface forces result in stresses

\noteDefn{Normal stress is defined as $$\sigma = \lim _{\delta A \to 0} \frac{\delta F_n}{A}$$ Shear stress is defined as $$\tau = \lim _{\delta A \to 0} \frac{\delta F_t}{\delta A}$$}

* Stress: Force per unit area
	* Stress at a point is defined as the limit as the area decreases to 0
	* Normal stress is defined as $\sigma = \lim _{\delta A \to 0} \frac{\delta F_n}{A}$
	* Shear stress is defined as $\tau = \lim _{\delta A \to 0} \frac{\delta F_t}{\delta A}$
	* Since there are multiple surfaces that can pass through a point, the stress at a point is described completely by specifying 3 stresses on mutually perpendicular planes through the point
* Double subscript notation for stress: $\tau _{xy}$ is a stress on the $x$ plane (unit vector in the $x$ direction) acting in the $y$ direction
	* One normal stress $\sigma _{xx}$, two tangential stresses $\tau _{xy}, \tau _{xz}$, for every surface (in this case $x$)
	* This means there are 9 such stresses for every point! From these we can form a stress tensor to describe all stress components:
	* Stress tensor: $\matthreeb{\sigma _{xx}}{\tau _{xy}}{\tau _{xz}}{\tau _{yx}}{\sigma _{yy}}{\tau _{yz}}{\tau _{zx}}{\tau _{zy}}{\sigma _{zz}}$

## (Dynamic) Viscosity

* Recall shear stress in a solid is proportional to deformation angle $\delta\alpha$
* Since a fluid never stops deforming, shear stress is instead proportional to the rate of change in the deformation angle
	* $\tau \propto \diff{\alpha}{t}$
* In a parallel flow field with a velocity gradient (e.g. a boundary layer), the fluid undergoes shear forces as it deforms due to difference in velocity between layers
	* $\dd\alpha = \diff{u}{y}\,\dt \implies \diff{\alpha}{t} = \diff{u}{y}$
	* The rate of angular deformation of the fluid region is equal to the velocity gradient of the field
* Since $\tau \propto \diff{\alpha}{t} = \diff{u}{y}$ for Newtonian fluids we can let $\tau = \mu\diff{\alpha}{t} = \mu\diff{u}{y}$, where the proportionality constant $\mu$ is the *viscosity*

\noteDefn{The viscosity of a Newtonian fluid is $\mu$ defined such that $$\tau = \mu\diff{\alpha}{t} = \mu\diff{u}{y}$$ where $\diff{\alpha}{t}$ is the rate of angular deformation of the fluid element, equal to $\diff{u}{y}$, the velocity gradient in the fluid}

* Newtonian fluids' viscosity are independent of the rate of deformation
	* On a graph of shear stress vs. velocity gradient, a Newtonian fluid starts at the origin and has constant slope
	* For non-Newtonian fluids, this graph is nonlinear and $\mu$ can vary with rate of deformation; some may even not start at the origin
		* Shear thinning: with higher rates of deformation, viscosity decreases (e.g. some paints, blood, cookie dough)
		* Shear thickening: with higher rates of deformation, viscosity increases (e.g. cornstarch + water)
		* Bingham plastic: acts like a solid until a certain shear stress, until a certain threshold after which it acts like a fluid (e.g. toothpaste)
			* Graph starts above zero
	* The *local viscosity/apparent viscosity* $\mu _{ap}$ is $\mu$ at the local conditions
* Viscosity has a strong dependence of temperature:
	* For liquids, viscosity *decreases* with temperature
		* Viscosity is caused by intermolecular forces; at higher temperatures molecules overcome these forces
	* For gases, viscosity *increases* with temperature
		* Viscosity is caused by molecular collisions; at higher temperatures molecules collide more
* "Viscosity" commonly refers to dynamic viscosity as opposed to kinematic viscosity

\noteDefn{The kinematic viscosity $v = \frac{\mu}{\rho}$, where $\mu$ is the dynamic viscosity and $\rho$ is the density}

## Compressibility

\noteDefn{The bulk modulus is defined as $E_V = -\frac{1}{\msout{V}}\diff{P}{\Vbar}$ where $\Vbar$ is the volume}

* Bulk modulus measures compressibility; the larger it is, the less compressible the fluid
	* Note an increase in $P$ causes a decrease in $\Vbar$, which is why there is a negative sign
	* Alternatively can be expressed as $E_V = \frac{1}{\rho}\diff{P}{\rho}$ (note there is no minus sign)
		* $m = \rho \Vbar \implies \dd m = \rho\dd \Vbar + \Vbar\dd\rho = 0 \implies \frac{\dd\rho}{\rho} = -\frac{\dd \Vbar}{\Vbar}$
	* A truly incompressible flow has $E_V \to \infty$
		* For water it is $\SI{2.2e9}{Pa}$, so it can be approximated as incompressible
		* Even though air is a lot more compressible, we can still assume it to be incompressible in a low speed flow

