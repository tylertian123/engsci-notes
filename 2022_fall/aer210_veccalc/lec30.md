# Lecture 30, Nov 18, 2022

## Fluids in Rotational Rigid-Body Motion

* Consider a cylindrical container with radius $R$ partially filled with liquid, rotated about its centre axis at a constant velocity $\omega$
* Assume no shear, what is the free surface $z = z_s$?
* Using a cylindrical coordinate system $(r, \theta, z)$, we have $\threepiece{a_r = -r\omega}{a_\theta = 0}{a_z = 0}$
	* $a_r$ comes from centripetal acceleration
* Using the hydrostatic equation again, $-\left(\pdiff{p}{r}\vec e_r + \frac{1}{r}\pdiff{p}{\theta}\vec e_\theta + \pdiff{p}{z}\vec e_z\right) - \rho g\vec e_z = \rho(-r\omega^2)\vec e_r$
	* Notice the gradient in cylindrical coordinates has a $\frac{1}{r}$ in the $\theta$ term
* Matching the terms: $\threepiece{-\pdiff{p}{r} = -\rho r\omega^2}{-\frac{1}{r}\pdiff{p}{\theta} = 0}{-\pdiff{p}{z} = \rho g} \implies \dd p = \pdiff{p}{r}\,\dr + \pdiff{p}{z}\,\dz = \rho r\omega^2\,\dr - \rho g\,\dz$
* Integrating this we have $p = \frac{\rho r^2\omega^2}{2} - \rho gz + C$
* Again using the boundary condition that $p = p_{atm}$ at $z = z_s$ we have $p_{atm} = \frac{\rho r^2\omega^2}{2} - \rho gz_s + C \implies z_s = \frac{\omega^2}{2g}r^2 + \frac{C - p_{atm}}{\rho g} = \frac{\omega^2}{2g}r^2 + C_1$
* Therefore the free surface is a paraboloid
* Again from the fact that at rest the fluid surface is flat and the volume stays the same, integrating the volume of the paraboloid we can solve for $C_1 = H - \frac{\omega^2R^2}{4g} \implies z_s = \frac{\omega^2}{4g}(2r^2 - R^2) + H$

\noteSummary{The free surface for a fluid undergoing rotational rigid-body motion is a paraboloid given by $$z_s(r) = \frac{\omega^2}{4g}(2r^2 - R^2) + H$$ with pressure given by $$p = \frac{\rho r^2\omega^2}{2} - \rho gz + C$$}

## Fluid in Motion (Overview)

* Lagrangian vs. Eulerian descriptions:
	* The Lagrangian method describes the motion of individual particles over time, modelling using Newton's laws
		* $\vec r(t) = x(t)\ihat + y(t)\jhat + k(t)\khat$
		* To describe the whole fluid we need to do this for a large number of particles
	* The Eulerian method instead considers regions of space and properties such as the overall fluid velocity in a certain region
		* $\vec V = \vec V(x, y, z, t)$
	* Eulerian method is a lot easier to work with
* 3 concepts are used to visualize a flow:
	* Streamlines: Imaginary lines that are tangent to the local fluid velocity at every point at an instant in time
		* Streamlines can vary through time
		* By definition, fluid cannot ever flow across a streamline
		* Streamlines can be determined using Particle Image Velocimetry (PIV)
		* Streamtubes: A set of streamlines passing through all points of a closed curve
			* Fluid can't cross a streamtube, so these can be used to isolate a region of a flow
		* Stream filament: A streamtube that is thin enough that the cross-sectional velocity is effectively constant
	* Pathlines: The line traced out by a specific fluid particle as it moves in time
		* Lagrangian concept
		* Experimentally, they can be visualized by putting tracer particles in the fluid and taking long-exposure photographs
	* Streaklines: The line formed by connecting all fluid particles that pass through a point
		* Experimentally, they can be visualized by injecting dye or smoke into the fluid at a particular fixed point
* Steady flows are flows in which fluid properties at a point do not change with time
	* Fluid properties are a function of space only, not time
	* In a steady flow, the streamline, streakline, and pathline all coincide
* Unsteady flows are flows in which the properties can be time-dependent
	* In an unsteady flow, the streamline, streakline and pathline are different
	* Two particles that pass through the same point don't necessarily end up in the same place, so the streakline connecting the points won't be the same as the pathline
	* The streamline will vary with time

