# Lecture 23, Oct 28, 2022

## Hydrostatics

* Hydrostatics deal with fluids at rest or in rigid body motion (e.g. holding a cup and moving)
	* The fluid particles do not move relative to each other
* Recall there are 2 categories of forces on a fluid, body forces and surface forces
	* Surface forces can be split into normal forces (pressure) and shear forces
	* In hydrostatics, since fluid particles don't move relative to each other, there are no shear forces

## Pressure

* A normal surface force acting on fluids
* The result of molecular collisions on a real or imaginary surface
	* Molecules colliding with the surface undergo a momentum change, which acts on the surface with a force
* A flat surface may be rough at a microscopic scale, but statistically any tangential forces generated will be cancelled out, so total pressure is normal to the surface
* Pressure is the inward acting normal force per unit area (i.e. normal stress)
* $\dd\vec F = -p\,\dA\vec n$
	* The force vector is proportional to area, and in the opposite direction as the outward facing normal vector
	* We can get a large $p$ with a small $F$ if $A$ is small (e.g. ice skating melting ice)

## Pressure at a Point

* Consider a point in a static fluid and an imaginary plane that goes through the point; we can take the limit as the area around the point goes to 0 to define the pressure stress
* There are however infinitely many planes that go through this point, but we can prove that the pressure is equal no matter what direction

\noteImportant{Pascal's Law: Pressure at a point in hydrostatic fluid is the same in all directions}

* Proof:
	* Consider a container with fluid undergoing rigid body motion
	* Consider a triangular wedge within the container; we have body forces (gravity) and surface forces (pressure) acting on it
		* This includes a slanted plane with some angle $\theta$, sides $\delta x, \delta y, \delta z$ and diagonal $\delta s$
	* Pressure forces on the region:
		* On the bottom: $p_z\delta y\delta x$
		* Similarly on the left: $p_y\delta y\delta x$
		* On the slanted surface: $p_s\delta s\delta x$
		* Note we can ignore the pressure forces on the front and back for now
		* Gravitational force $mg = \rho g\left(\frac{\delta x\delta y\delta z}{2}\right)$
	* Force balance: $\twopiece{\sum F_y = ma_y = p_y\delta z\delta x - p_s\delta s\delta x\sin\theta = \rho\frac{\delta x\delta y\delta z}{2}a_y}{\sum F_z = ma_z = p_z\delta y\delta x - p_s\delta s\delta x\cos\theta - \rho g\left(\frac{\delta x\delta y\delta z}{2}\right) = \rho\frac{\delta x\delta y\delta z}{2}a_z}$
		* Note $\delta s = \frac{\delta y}{\cos\theta} = \frac{\delta z}{\sin\theta}$
		* Substitute and cancel: $\twopiece{p_y - p_s = \rho\frac{\delta y}{2}a_y}{p_z - p_s = \rho\frac{\delta z}{2}(a_z + g)}$
	* Now take the limit as the size of the region approaches 0 without changing its shape:
		* Let $\delta y \to 0$ then from the first equation we have $p_y = p_s$
		* Let $\delta z \to 0$ then from the second equation we have $p_z = p_s$
		* Therefore $p_s = p_y = p_z$
	* Since these directions are arbitrary, we know pressure is the same for any direction

## Basic Pressure Field Equation

* This time, consider a small cubic region inside the fluid with sides $\delta x, \delta y, \delta z$, with center $(x_0, y_0, z_0)$
* Note: a free surface is denoted in fluid mechanics diagrams with a floating triangular thing
* We want a pressure function $p = p(x, y, z)$
* We again have gravitational and pressure forces
	* We can use a linear approximation to find the pressure at the edge of the region from the pressure in the center
		* Pressure on the left: $p_L = p - \pdiff{p}{y}\frac{\delta y}{2}$
		* Pressure on the right: $p_L = p + \pdiff{p}{y}\frac{\delta y}{2}$
		* Similarly for the 4 other faces
	* Now find the pressure forces:
		* Pressure force on the left would be $p_L\delta x\delta z = \left(p - \pdiff{p}{y}\frac{\delta y}{2}\right)\delta x\delta z$
		* Pressure force on the right: $\left(p_L = p + \pdiff{p}{y}\frac{\delta y}{2}\right)\delta x\delta z$
		* Repeat for the other 4 faces
	* Gravitational force: $\rho g\delta x\delta y\delta z$
	* $\sum \delta F_{s, y} = \left(p - \pdiff{p}{y}\frac{\delta y}{2}\right)\delta x\delta z - \left(p_L = p + \pdiff{p}{y}\frac{\delta y}{2}\right)\delta x\delta z$
		* $\sum \delta \vec F_s = -\left(\pdiff{p}{x}\ihat + \pdiff{p}{y}\jhat + \pdiff{p}{z}\khat\right)\delta x\delta y\delta z$
	* Total surface force per unit volume is then $-\del p$
	* Total body force per unit volume is $-\rho g\khat$
* Apply Newton's Second Law:
	* $\sum \delta \vec F = \delta m\vec a$
	* $-\del p\delta x\delta y\delta z - \rho g\delta x\delta y\delta z\khat = (\rho\delta x\delta y\delta z)\vec a$
	* $-\delta p - \rho g\khat = \rho\vec a$
	* Net pressure force per unit volume plus net body force per unit volume is equal to mass times acceleration per unit volume

\noteEqn{General equation of motion for fluids in which there are no shear forces: $$-\delta p - \rho g\khat = \rho\vec a$$ or $$-\del p + \rho\vec g = \rho \vec a$$ if $\vec g$ is not in the negative $\khat$ direction}


