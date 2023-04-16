# Lecture 19, Oct 24, 2022

## Conduction

* Heat transfer through a stationary medium as a result of a temperature difference
* Temperature $T_1$ on one side and $T_2$ on the other, resulting in a heat transfer $\dot Q$
* Conduction can occur in any material -- solid, liquid or gas, but without long range motion in the medium
* "Thermometers are speedometers for atoms"
	* In a solid, atoms can vibrate in their lattice
	* In a fluid, atoms and molecules can translate, molecules can vibrate and rotate
	* At higher temperature, atoms move faster; collisions between them transfer energy, which is heat transfer
* Conduction is modelled by *Fourier's Law*
	* Consider a temperature gradient $T_1, T_2$; somewhere in the middle we have $T_0$
	* Heat flux $\dot q = \frac{\dot Q}{A}$, with $\dot q^+$ from $T_0$ to $T_2$ and $\dot q^-$ from $T_0$ to $T_1$
	* Define the average molecular velocity $\bar v$, number density $n$, and mean free path $\lambda$
		* Over a distance of $\lambda$ the direction of the molecules should be constant
	* Molecular energy is $mcT(y)$ where $m$ is the molecular mass, $c$ is the specific heat capacity and $T(y)$ is temperature
	* The heat flux is defined as the number of molecules crossing a unit area per unit time, times the number energy per molecule
		* $\dot q = n\bar vmcT(y)$
		* The positive heat flux is $\dot q^+ = n\bar vmcT\left(-\frac{\lambda}{2}\right)$
		* The negative flux is $\dot q^- = n\bar vmcT\left(\frac{\lambda}{2}\right)$
		* The net heat flux is the difference, $n\bar vmc\left(T\left(-\frac{\lambda}{2}\right) - T\left(\frac{\lambda}{2}\right)\right)$
		* We can approximate $T\left(-\frac{\lambda}{2}\right) - T\left(\frac{\lambda}{2}\right)$ as $-\lambda\diff{T}{y}$
	* $\dot q = -n\bar vmc\lambda\diff{T}{y}$
	* The first 5 constants are all properties of the gas, which we define to be $k$, the thermal conductivity

\noteEqn{Fourier's Law: $$\dot Q = \dot qA = -kA\diff{T}{y}$$ where the thermal conductivity $k = n\bar vmc\lambda$, where $n$ is the number density, $\bar v$ is the velocity, $m$ is the mass per molecule, $c$ is the heat capacity and $\lambda$ is the mean free path \tcblower In reality $k = k(T, P)$, but we assume it to be constant}

* Notes:
	* $k$ has units of $\si{W}{m.K}$
	* The sign is negative -- the direction of heat conduction is opposite to the temperature gradient
	* The closer the atoms are, the better the thermal conductivity
		* Typically $k$ is the greatest for solids, then liquids, then gases
* In addition to transfer of kinetic energy, conduction can also occur through electron flow
	* This is why good electrical conductors are usually good thermal conductors

## Convection

* Heat transfer between a solid surface and a moving fluid
* Two heat transfer mechanisms:
	1. Motion/collision of fluid molecules (conduction)
	2. Energy transfer due to bulk motion of fluid (advection)
* We care about fluid flow near surfaces
	* Near the surface of the solid, we have the *boundary layer*, where the fluid is severely slowed down
	* At the surface we have a no-slip condition, i.e. the fluid has zero velocity
	* The edge of the boundary later is defined as where $v = 0.99v_{free}$ where $v_{free}$ is the free stream velocity
* When $\text{Re} < 2000$, the flow is laminar
* Temperature will also have a boundary layer -- the temperature as you approach the surface differers from that of the bulk
	* $\dot Q_{conv} = -kA\diff{T}{y}$, but $\diff{T}{y}$ is a complex function of fluid mechanics
	* We typically use Newton's Law of Cooling, $\dot Q_{conv} = hA(T_s - T_\infty)$, where $h$ is the heat transfer coefficient in units of $\si{W/m^2.K}$
		* $h$ is a function of fluid flow and properties
			* Thermal conductivity of the fluid
			* Surface geometry
			* Fluid velocity (higher average velocity leads to a higher $h$)

\noteEqn{Newton's Law of Cooling: $\dot Q_{conv} = hA(T_s - T_\infty)$}

