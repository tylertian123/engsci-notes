# Lecture 29, Nov 18, 2022

## Boat and Stone Problem

* If you're on a boat with a stone and throw the stone into the water, what happens to the water level?
* When the stone is on the boat, some portion of the buoyant force goes to lift the stone
* The displaced water volume by the stone on the boat is larger than the volume of the stone itself in order to generate the necessary buoyant force, since the stone is denser than the water
* When the stone is thrown into the water, it sinks and displaces its volume to the water; however the boat rises up by an amount that is more than the volume of the stone
* Therefore throwing the stone into the lake decreases the lake level

## Stability of Immersed and Floating Bodies

* For immersed or floating bodies, there are two forces, $\vec F_B$ which acts through the centroid of the displaced volume and $\vec W$ which acts through the center of gravity of the object
* For a completely submerged body, if the body is bottom-heavy then it is stable; if it's top-heavy then it's unstable
	* e.g. in a hot air balloon or a submarine the mass is concentrated at the bottom so they are stable
* For floating bodies, stability depends on the shape since the centroid of the submerged region changes as the body rotates
	* A wide body is stable while a narrow body is not

## Hydrostatics Equation Derivation From Integrals

* Consider a fluid volume $\Vbar$ with arbitrary shape, with gravity $\vec g$ not necessarily aligned with the axes
* The only assumption is we're dealing with hydrostatic so no shear is involved
* Consider a differential volume element $\dd\Vbar$ with mass $\dd m = \rho\dd\Vbar$
	* The body forces are $\delta \vec F_{body} = \rho\vec g\,\dd\Vbar \implies \sum \vec F_{body} = \iiint _{\Vbar} \rho\vec g\,\dd\Vbar$
	* The surfaces forces are $\delta \vec F_{surface} = -p\vec n\,\dS \implies \sum \vec F_{surface} = -\iint _s p\vec n\,\dS$
	* Therefore $\iiint _{\Vbar} \rho\vec g\,\dd\Vbar - \iint _s p\vec n\,\dS = m\vec a = \iiint \rho\vec a\,\dd\Vbar$
	* Using the gradient theorem $\iint _S p\vec n\,\dS = \iiint _\Vbar \grad p\,\dd\Vbar$
		* $\iint _S f\vec n\,\dS = \iiint _\Vbar\grad f\,\dd\Vbar$ where $f$ is a scalar and $\grad f$ is the gradient of $f$
		* The gradient theorem is the analogue of the divergence theorem
	* We can now combine the integrals as $\iiint _\Vbar (\rho\vec g - \grad p)\,\dd\Vbar = \iiint _\Vbar \rho\vec a\,\dd\Vbar$
	* Since the region is arbitrary we can shrink it arbitrarily; therefore the integrands have to be equal
	* Therefore $\rho\vec g - \grad p = \rho\vec a$, which is the hydrostatic equation

## Fluids in Linear Rigid-Body Motion

* Consider a container partially filled with incompressible liquid moving in a straight path with $\vec a = \text{const}$
* What is the shape of the free surface $z_s(y)$?
* From the hydrostatic equation $-\left(\pdiff{p}{x}\ihat + \pdiff{p}{y}\jhat + \pdiff{p}{z}\khat\right) - \rho g\vec k = \rho(a_x\ihat + a_y\jhat + a_z\khat)$
	* If the acceleration is in the $y$ and $z$ directions we get $\dd p = \pdiff{p}{y}\dy + \pdiff{p}{z}\dz = -\rho a_y\,\dy - \rho(g + a_z)\,\dz$
	* This gives $p(y, z) = -\rho a_yy - \rho(g + a_z)z + C$
* Boundary condition: At $z = z_s$, $p = p_{atm}$
	* $p_{atm} = -\rho a_yy - \rho(g + az)z_s + C$
	* $z_s = \frac{C - p_{atm}}{\rho(g + az)} - \frac{a_y}{(g + az)}y$
	* Let $C_1 = \frac{C - p_{atm}}{\rho(g + az)}$ then $z_s = C_1 - \frac{a_y}{(g + az)}y$
* The surface of the liquid turns out to be linear, with a slope of $-\frac{a_y}{g + az}$
* At rest the surface should be flat and have the same volume, we can use this to find $C_1$
	* $\int _0^L wz_s\,\dy = HwL \implies C_1L - \frac{a_y}{g + a_z}\frac{L^2}{2} = HL \implies C_1 = H + \frac{a_y}{2(g + az)}L$
	* Therefore $z_s(y) = H + \frac{a_y}{g + a_z}\left(\frac{L}{2} - y\right)$
* Alternatively notice along a line of constant pressure $\dd p = 0$, if we put this into $\dd p = -\rho a_y\,\dy - \rho(g + a_z)\,\dz$ we get $\diff{z}{y} = -\frac{a_y}{g + a_z}$, since the surface of the fluid is a line of constant pressure
* Notice if $a_y = 0$ the slope is still 0, so the fluid surface stays flat
	* In this case $\pdiff{p}{x} = \pdiff{p}{y} = 0$ but $\pdiff{p}{z} = -\rho(g + a_z) \neq 0$
	* If we are e.g. in an elevator, we can integrate $\pdiff{p}{z}$ and notice a larger pressure gradient in the $z$ direction
* Also note for a fluid in free fall $a_z = -g$ so $p$ is constant throughout the fluid

\noteSummary{The free surface for a fluid undergoing linear rigid-body motion is a flat planar surface given by $$z_s(y) = H + \frac{a_y}{g + a_z}\left(\frac{L}{2} - y\right)$$ with pressure given by $$p(y, z) = -\rho a_yy - \rho(g + a_z)z + C$$}

