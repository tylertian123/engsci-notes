# Lecture 31, Nov 24, 2022

## Fluid in Motion (Continued)

* Viscous regions are regions in which the frictional effects are significant
	* In these regions we need to consider shear forces due viscous effects
	* Boundary layers are viscous regions; in these areas the friction slows down the velocity and creates a gradient
	* This also includes wake regions
* Inviscid regions are regions in which the frictional effects are negligible
	* Doesn't mean that viscosity is zero, but we don't have to consider shear stresses
* Flow dimensionality: a flow is $n$-dimensional if flow properties vary in $n$ dimensions
	* e.g. consider a uniform flow entering a pipe; near the entrance region, the flow is 2 dimensional since the velocity profile changes as you go down the pipe; after the flow is fully developed, the flow becomes 1 dimensional as the velocity profile stops changing
	* This depends on what coordinate system is used! e.g. with the pipe example, the flow is 2 or 1 dimensional in cylindrical coordinates, but is 3 or 2 dimensional in Cartesian coordinates
* Laminar flow: highly ordered fluid motion with smooth layers
* Turbulent flow: Highly disordered fluid motion with a lot of velocity fluctuations
	* Typically occurs at high velocities
* Transitional flow: a flow that alternates between laminar and turbulent

\noteDefn{The Reynolds number is defined as $$\text{Re} = \frac{\rho VL}{\mu}$$ At low Reynolds numbers, flow tends to be laminar; at high Reynolds numbers, flow tends to be turbulent}

* The Reynolds number is a non-dimensional number that characterizes the flow; most fluids have a critical Reynolds number at which they transition from laminar to turbulent
	* A ratio of inertial to viscous forces
	* Higher viscosity makes the flow more laminar
	* Higher velocity, density or characteristic length makes the flow turbulent

## Mass Conservation

* For now, assume steady (time-independent), incompressible (constant $\rho$) and 1 dimensional flow
* The volumetric flow rate $\dot\Vbar$ is the rate of fluid passing through a given region per unit time, in units of $\si{m^3/s}$
* The volumetric flow rate through a surface $A$ is $\Vbar = \iint _A \vec V \cdot \vec n\,\dA = \iint _A V_n\,\dA$ where $V_n$ is the normal component of velocity
	* In the special case where $V_n$ is constant, $\dot\Vbar = V_nA$
	* Multiply by $\rho$ for the mass flow rate $\dot m$
* Since the flow is steady, the volume flow rate along a streamtube does not change therefore we have $\dot m_1 = \dot m_2$
	* Additionally for 1D flow $\rho$ and $V$ are constant over an area, so $\dot m_1 \dot m_2 = \rho _1V_1A_1 = \rho _2V_2A_2$

\noteEqn{Conservation of mass for a steady 1D flow: $$\rho _1V_1A_1 = \rho _2V_2A_2$$ for a compressible flow, or $$V_1A_1 = V_2A_2$$ for an incompressible flow}

* Due to the 1D assumption, velocities would need to be given as average velocities

## Energy Conservation (Euler and Bernoulli Equation)

* In fluids there are 3 types of energy: potential, kinetic, and pressure
* Assume steady and incompressible flow in an inviscid region (note inviscid implies laminar flow, since turbulence introduces frictional losses)
	* Friction will lead to energy losses, which is why this only works in inviscid regions
	* Therefore this is only an approximation and will not work in the boundary region (close to solid surface) and wake (turbulent) regions
* Consider a cylindrical differential element along the pathline/streamline
	* Use the coordinate system of $s$ tangent to the streamline, $s$ normal to the streamline
* For the $s$ direction, $\sum F_s = ma_s$
	* $\sum F_s = W_s + \sum F_{p, s}$ (sum of weight and pressure forces)
	* $\sum F_s = -\rho g\,\dA\,\ds\sin\theta + p\,\dA - (p + \dd p)\,\dA = -\rho g\,\dA\,\dz - \dd p\,\dA$
	* $a_s = \diff{V}{t} = \diff{V}{s}\diff{s}{t} = V\diff{V}{s}$
	* $ma_s = \rho\,\dA\,\ds \cdot V\diff{V}{s}$
	* Equating the two, we get Euler's equation: $V\,\dV + g\,\dz + \frac{1}{\rho}\,\dd p = 0$

\noteEqn{Euler's equation: $$V\,\dV + g\,\dz + \frac{1}{\rho}\,\dd p = 0$$ valid for steady, inviscid flow along a streamline (can be compressible)}

