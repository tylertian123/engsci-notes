# Lecture 35, Dec 2, 2022

## Models of the Fluid

* To develop any governing equation, we start from physical principles (e.g. conservation of mass, energy), use a suitable model of the fluid, and then derive mathematical equations
	* We have seen the finite control volume and finite system, now we will see the infinitesimal control volume and infinitesimal system
* We take an infinitesimally small control volume and system moving with the flow, such that all properties in this volume are constant

## Substantial Derivative

* Consider an infinitesimally small fluid element, at point 1 at $t = t_1$ and travelling to point 2 at $t = t_2$
* Let $\vec V = u\ihat + v\jhat + w\khat$ be the velocity field, where $u, v, w$ are functions of $(x, y, z, t)$
	* Let $\rho = \rho(x, y, z, t)$ be the density
* Initially the fluid particle has $\rho _1 = \rho(x_1, y_1, z_1, t_1)$ and velocity $\vec V_1$; at time $t = t_2$ the particle has $\rho _2 = \rho(x_2, y_2, z_2, t_2)$ and $\vec V_2$
* Taylor expand density around point 1: $\rho _2 = \rho _1 + \pdiff{\rho}{x}(x_2 - x_1) + \pdiff{\rho}{y}(y_2 - y_1) + \pdiff{\rho}{z}(z_2 - z_1) + \pdiff{\rho}{t}(t_2 - t_1) + \cdots$
	* $\frac{\rho _2 - \rho _1}{t_2 - t_1} = \pdiff{\rho}{x}\frac{x_2 - x_1}{t_2 - t_1} + \pdiff{\rho}{y}\frac{y_2 - y_1}{t_2 - t_1} + \pdiff{\rho}{z}\frac{z_2 - z_1}{t_2 - t_1} + \pdiff{\rho}{t}$
	* If we take $\lim _{t_2 \to t_1}$, we get $\frac{\mathrm{D}\rho}{\mathrm{D}t} = u\pdiff{\rho}{x} + v\pdiff{\rho}{y} + w\pdiff{\rho}{z} + \pdiff{\rho}{t}$
		* The notation $\Diff{\rho}{t}$ indicates that we're following the same system
		* This is called a *substantial derivative*
* The substantial derivative $\Diff{}{t}$ is Lagrangian, while the right hand side with all the partial derivatives is Eulerian

\noteDefn{The substantial derivative operator is defined as $$\Diff{}{t} = \pdiff{}{t} + u\pdiff{}{x} + v\pdiff{}{y} + w\pdiff{}{z} = \pdiff{}{t} + \vec V \cdot \grad$$ where $\vec V \cdot \grad$ is the convective derivative}

* The substantial derivative is made of the local derivative, time rate of change at a fixed point due to unsteady fluctuations, and the *convective derivative* $u\pdiff{}{x} + v\pdiff{}{y} + w\pdiff{}{z}$, which is the time rate of change as a result of the movement of fluid
* The substantial derivative is a total derivative with respect to time

## Divergence of Velocity

* $\grad \cdot \vec V = \pdiff{u}{x} + \pdiff{v}{y} + \pdiff{w}{z}$ can be interpreted as the time rate of change of the volume of an infinitesimal moving system per unit volume
* As the system is moving, its volume is continuously changing
* $\grad \cdot \vec V = \frac{1}{\delta\Omega}\Diff{(\delta\Omega)}{t}$
* Note that if we have an incompressible flow, constant density means $\delta\Omega _{sys}$ must be constant, so $\Diff{(\delta\Omega)}{t} = 0$, this means $\grad \cdot \vec V = 0$

## General Continuity Equation

* We're starting with mass conservation, move through the 4 different models to get the continuity equation
* Recall for the finite control volume we have $\diff{}{t}\iiint _{\Omega} \rho\,\dd\Omega + \oiint _S \rho\vec V \cdot \dd\vec S = 0$ which we derived from RTT
* For the finite system, we follow the system and take $\Diff{m_{sys}}{t}$, which by mass conservation should be 0, which gives us $\Diff{}{t}\iiint _\Omega \rho\,\dd\Omega = 0$
* For the infinitesimal control volume:
	* Along a side we have the flow rate as $\left(\rho u + \pdiff{(\rho u)}{x}\,\dx\right)\,\dy\,\dz$
	* The net mass flow rate out of the control volume is $\left(\pdiff{(\rho u)}{x} + \pdiff{(\rho u)}{y} + \pdiff{(\rho w)}{z}\right)\,\dx\,\dy\,\dz$
	* This is equal to $-\pdiff{}{t}\,\dx\,\dy\,\dz$ due to conservation of mass
	* Combined this gives us $\pdiff{\rho}{t} + \grad \cdot (\rho\vec V) = 0$
* Now consider the infinitesimal system:
	* $\Diff{(\delta m)}{t} = 0$ where $\delta m = \rho\delta\Omega$
	* $\Diff{(\delta m)}{t} = \Diff{}{t}(\rho\delta\Omega) = \rho\Diff{}{t}(\Delta\Omega) + \delta\Omega\Diff{\rho}{t} = 0$
	* $\Diff{\rho}{t} + \rho\left(\frac{1}{\delta\Omega}\Diff{(\Delta\Omega)}{t}\right) = 0$
	* This gives us $\Diff{\rho}{t} + \rho\grad \cdot \vec V = 0$
* This gave us 4 general forms of the continuity equation:
	1. $\diff{}{t}\iiint _{\Omega} \rho\,\dd\Omega + \oiint _S \rho\vec V \cdot \dd\vec S = 0$
	2. $\Diff{}{t}\iiint _\Omega \rho\,\dd\Omega = 0$
	3. $\pdiff{\rho}{t} + \grad \cdot (\rho\vec V) = 0$
	4. $\Diff{\rho}{t} + \rho\grad \cdot \vec V = 0$
* For a steady flow, $\pdiff{}{t} = 0$ but $\Diff{}{t} \neq 0$, so we have:
	1. $\oiint _S \rho\vec V \cdot \,\dd\vec S = 0$
	2. $\Diff{}{t}\iiint _\Omega \rho\,\dd\Omega = 0$
	3. $\grad \cdot (\rho\vec V) = 0$
	4. $\Diff{\rho}{t} + \rho\grad \cdot \vec V = 0$
* For an compressible flow, $\rho$ is constant and so:
	1. $\oiint _S \rho\vec V \cdot \dd\vec S = 0$
	2. $\Diff{}{t}\Omega = 0$
	3. $\grad \cdot \vec V = 0$
		* Note 3 and 4 became the same
* All these forms are mathematically equivalent

