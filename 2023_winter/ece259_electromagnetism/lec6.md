# Lecture 6, Jan 20, 2023

## Gauss's Law

\noteEqn{Electrostatics is governed by two fundamental postulates:

In differential form: $$\begin{aligned}\del \times \vec E &= 0 \\ \del \cdot \vec D &= \rho _v\end{aligned}$$
In integral form: $$\begin{aligned}\oint _C \vec E \cdot \dd\vec l &= 0 \\ \oiint _S \vec D \cdot \dd\vec S &= Q_{enc}\end{aligned}$$
}

* Electrostatics deal with systems with stationary charges; we represent the field with $\vec E$ or $\vec D$
	* $\vec E$ is the electric field density with units of $\si{V/m} = \si{N/C}$
	* $\vec D$ is the electric flux density with units of $\si{C/m^2}$
* $\vec E$ and $\vec D$ are related by the parameter $\varepsilon$: $\vec D = \varepsilon _r\varepsilon _0 = \varepsilon\vec E$
	* $\varepsilon$ is the *electrical permittivity* of the material
	* $\varepsilon _r$ is the *relative permittivity* of the material
	* "Free space" is what you would get in a vacuum $\varepsilon _r = 1$, so $\varepsilon = \varepsilon _0 = \SI{8.85e-12}{F/m}$; this is similar to in air where $\varepsilon _r = 1.0006$
* *Gauss's Law* is one of the postulates: $\del \cdot \vec D = \rho _v$
	* In differential form this tells us that at any given point, the divergence of the electric flux density is the same as the volume charge density
* Applying the divergence theorem gives us $\oiint _s \vec D \cdot \dd\vec S = \iiint _V \rho _v\dV = Q_{enc}$
	* In integral form this tells us that the net electric flux through a closed surface is the net charge enclosed by the surface
* Coulomb's Law can be derived from this, if we assume $\vec D$ only has a radial component

