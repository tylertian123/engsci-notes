# Lecture 19, Oct 20, 2022

## Surface Integrals of Vector Fields

* Orientation starts to matter when we talk about vector functions!
	* Some surfaces are orientable, that is, two sided
	* Some surfaces are non-orientable, e.g. a Möbius strip
* A surface has two normal vectors; for an orientable surface, we can define a positive side and a negative side
	* For an open surface, the sign convention is arbitrary unless specified
	* For a closed surface, the convention is always outside is positive
* Consider $S: \vec r(u, v)$, a normal to the surface is $\vec N = \vec r_u \times \vec r_v$; the unit normal is $\vec n = \frac{\vec r_u \times \vec r_v}{\norm{\vec r_u \times \vec r_v}}$
	* If the surface is $z = f(x, y)$, then $\vec n = \frac{-\pdiff{f}{x}\ihat + \pdiff{f}{y}\jhat + \khat}{\sqrt{1 + \left(\pdiff{f}{x}\right)^2 + \left(\pdiff{f}{y}\right)^2}}$
* Consider some imaginary, smooth, orientable surface and some fluid with density $\rho(x, y, z)$ and velocity $\vec V(x, y, z)$; we can use a surface integral over the vector field to find out how much mass passes through this surface per unit time (the flux)
	* Divide the surface into subregions; for a subregion $S_i$, the volume of fluid passing through per unit time is $\vec V \cdot \vec n$
	* Therefore the mass flow through the surface is $\iint _S \rho(x, y, z)\vec V(x, y, z) \cdot \vec n\,\dS = \iint _S \vec F \cdot \vec n\,\dS = \iint _S\vec F \cdot \dd\vec S$
	* This is known as *flux integration*
	* Note $\dS = \norm{\vec r_u \times \vec r_v}\,\du\,\dv$ and $\vec n = \frac{\vec r_u \times \vec r_v}{\norm{\vec r_u \times \vec r_v}}$, so $\vec n\,\dS = \dd\vec S = \vec r_u \times \vec r_v$

\noteDefn{The flux of the vector field $\vec F(x, y, z)$ over a surface $S: \vec r(u, v)$ is given by $$\iint _S \vec F \cdot \dd\vec S = \iint _S \vec F \cdot \vec n\,\dS = \iint _D \vec F(\vec r(u, v)) \cdot (\vec r_u \times \vec r_v)\,\du\,\dv$$}

* For a closed surface, the flux is positive if there is a net outflow through the surface

