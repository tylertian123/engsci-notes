# Lecture 14, Feb 10, 2022

## Dielectric Breakdown

* When a strong enough electric field is applied, even in a dielectric the electrons can jump from the valence to the conduction band
	* When this happens, the material becomes a conductor; this is referred to as *dielectric breakdown*
	* The field is strong enough to overcome the attractive force between the nucleus and its orbiting electrons; the atom goes beyond just stretching and the electrons are detached
* The *dielectric strength* $E_b$ is the maximum electric field that the material can withstand before a current flows
	* $E_B$ for air is $\SI{3e6}{V/m}$
	* $E_B$ for mica is $\SI{200e6}{V/m}$
		* This is why mica is used for capacitors -- the very small inter-plate distance means the same voltage creates a much larger electric field
* Lightning is a great example of this
	* Lightning rods work by concentrating the electric field at its end

## Boundary Conditions for the Electric Field in Materials

* Application example: optical fibres
	* Low conductivity of the glass reduces conductive power loss
	* e.g. copper wire requires signal boosters every 10 km; with optical fibres boosters are only needed every 100 km or 1000 km
	* Optical fibres consists of an outer cylinder (cladding) with an index of refraction on the order of 1.2, and a core cylinder with an index of refraction slightly larger
		* Index of refraction is directly related to $\varepsilon _r$
	* A light source shines into the core, and most of the light is reflected and travels down the core
		* When the light hits the interface between the cladding and the core, total internal reflection happens
	* Total internal reflection happens due to the boundary conditions
	* The fibre is a *waveguide* that carries electromagnetic waves
* Consider the boundary of two materials 1 and 2, to see how an electric field behaves at the boundary we apply Maxwell's equations
* Break the electric field into tangential and normal components; these components are affected differently, and based on how they are affected the field lines bend
* Consider the tangential components $\vec E_{t1}, \vec E_{t2}$
	* From Faraday's law $\oint _C \vec E \cdot \dd\vec l = 0$
	* We can create a contour right on the boundary with infinitesimal thickness, so we can isolate the boundary tangential components
	* $\oint _C \vec E \cdot \dd\vec l = E_{t2}\Delta l - E_{t1}\Delta l = 0 \implies E_{t1} = E_{t2} \implies \frac{D_{t1}}{\varepsilon _{r1}} = \frac{D_{t2}}{\varepsilon _{r2}}$
	* At the boundary of an interface, tangential components of the field have to be the same
* Consider the normal components $\vec D_{n1}, \vec D_{n2}$
	* From Gauss's law $\oiint _S \vec D \cdot \dd\vec S = Q_{enc}$
	* Use a Gaussian cylinder, with parts just above and just below the boundary, with surface area $\Delta S$
	* Through this cylinder we have $D_{n2}$ going in from the bottom and $D_{n1}$ coming out from the top
	* In the limit: $\oiint _S \vec D \cdot \dd\vec S = -D_{n2}\Delta S + D_{n1}\Delta s = \rho _s\Delta S \implies D_{n1} - D_{n2} = \rho _s$ or $\hat n_2 \cdot (\vec D_1 - \vec D_2) = \rho _s$
	* This gives us $\varepsilon _{r1}\varepsilon _0E_{n1} - \varepsilon _{r2}\varepsilon _0E_{n2} = \rho _s$
	* When there is no surface free charge, $\varepsilon _{r1}E_{n1} = \varepsilon _{r2}E_{n2}$

\noteSummary{At the boundary between two dielectrics, taking the normal direction to be pointing from material 2 to material 1: $$E_{t1} = E_{t2} \implies \frac{D_{t1}}{\varepsilon _{r1}} = \frac{D_{t2}}{\varepsilon _{r2}}$$ $$D_{n1} - D_{n2} = \rho _s \implies \varepsilon _{r1}\varepsilon _0E_{n1} - \varepsilon _{r2}\varepsilon _0E_{n2} = \rho _s$$ or when there is no free charge at the boundary: $$D_{n1} = D_{n2} \implies \varepsilon _{r1}E_{n1} = \varepsilon _{r2}E_{n2}$$}

