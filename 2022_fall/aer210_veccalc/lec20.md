# Lecture 20, Oct 21, 2022

## Divergence

\noteDefn{Let $\vec F = \vec F(x, y, z) = P(x, y, z)\ihat + Q(x, y, z)\jhat + R(x, y, z)\khat$ be a differentiable vector field, then the divergence of $\vec F$ is $$\divergence \vec F = \del \cdot \vec F = \left(\ihat\pdiff{}{x} + \jhat\pdiff{}{y} + \khat\pdiff{}{z}\right) \cdot \left(P\ihat + Q\jhat + R\khat\right) = \pdiff{P}{x} + \pdiff{Q}{y} + \pdiff{R}{z}$$}

* The divergence is a scalar field
* $\del \cdot \vec F$ is a measure of the local "outgoingness" of the vector field at each point
	* If $\del \cdot \vec F < 0$, the point is a sink -- vectors around it go towards it
		* If $\vec F$ is a velocity field, with time particles accumulate at this point, increasing the density with time
	* If $\del \cdot \vec F > 0$, then point is a source -- vectors around it move away from i
		* Likewise particles move away from it and decrease the density with time
	* If $\del \cdot \vec F = 0$, the density of the fluid around that point does not change
		* In an incompressible fluid, this is one of the governing equations

## Curl

\noteDefn{Let $\vec F = \vec F(x, y, z) = P(x, y, z)\ihat + Q(x, y, z)\jhat + R(x, y, z)\khat$ be a differentiable vector field, then the curl of $\vec F$ is $$\curl \vec F = \del \times \vec F = \matthreev{\ihat}{\jhat}{\khat}{\pdiff{}{x}}{\pdiff{}{y}}{\pdiff{}{z}}{P}{Q}{R} = \left(\pdiff{R}{y} - \pdiff{Q}{z}\right)\ihat + \left(\pdiff{P}{z} - \pdiff{R}{x}\right)\jhat + \left(\pdiff{Q}{x} - \pdiff{P}{y}\right)\khat$$}

* Unlike divergence, curl is a vector field
* The curl vector is associated with the local rotation of the vector field
	* The direction of the vector is the axis of rotation, the magnitude of the vector is the velocity of rotation
* $\del \times \vec V$ where $\vec V$ is a velocity field is the vorticity

## Properties of Divergence and Curl

* Let $f = f(x, y, z)$ be a scalar function and $\vec F = \vec F(x, y, z) = P(x, y, z)\ihat + Q(x, y, z)\jhat + R(x, y, z)\khat$ be a vector field, both with continuous first partials, then:
	1. $\del \times (\del f) = \vec 0$ (curl of a gradient is zero)
	2. If $\vec F$ is conservative, then $\del \times \vec F = 0$
		* This essentially comes from the first property; if $\vec F$ is conservative then it's a gradient of some scalar function, and we know the curl of a gradient is zero
	3. $\del \cdot (\del \times \vec F) = 0$, (divergence of curl is zero)
* $\divergence (\del \cdot f) = \del \cdot \del f = \del^2 f = \pdiffn{2}{f}{x} + \pdiffn{2}{f}{y} + \pdiffn{2}{f}{z}$ is known as the Laplace operator

## Stokes' Theorem

* Stokes' theorem is the 3D extension of Green's theorem
	* Green's theorem connects the line integral around a closed *planar* curve $C$ and the region $R$ inside
	* Stokes' theorem does this in 3 dimensions, where the curve and its enclosed region is not necessarily planar
		* Think about a bubble surface made by a wire loop

\noteThm{Let $S$ be an orientable, piecewise smooth surface that is bound by a simple, closed, piecewise smooth and positively oriented boundary curve $C$; if $\vec F$ is a vector field with continuous first partials over $S$, then $$\oint _C \vec F \cdot \dd\vec r = \iint _S (\del \times \vec F) \cdot \vec n\,\dS$$}

* Stokes' theorem relates the line integral around the boundary of a surface to the surface integral of the curl over that surface
* The orientations of $\vec n$ and $C$ must match the right-hand rule: curl your fingers in the direction of $C$, and the direction your thumb is pointing is the direction of positive $\vec n$
	* If you walk along the curve with your head in the direction of $\vec n$, if the surface is on your left, then the orientations match
* Green's theorem can be derived from Stokes' theorem:
	* For a surface $S$ in the $x$-$y$ plane with boundary curve $C$, its normal vector will be $\vec n = \vec k$
	* Therefore $\oint _C \vec F \cdot \dd\vec r = \iint _S (\del \times \vec F) \cdot \vec k\,\dS$
	* This works out to be equivalent to Green's theorem
* Note the surface of a boundary curve is not unique; we can stretch the surface however we want, as long as the boundary curve stays the same, the surface integral of the curl stays the same

## Divergence Theorem

\noteThm{Let $E$ be a solid region bounded by the closed, positively (outward) oriented surface $S$; let $\vec F$ be a vector field with continuous first partials in $E$, then $$\iint _S \vec F \cdot \vec n\,\dS = \iiint _E (\del \cdot \vec F)\,\dV$$}

* The flux across the boundary of a solid region is equal to the divergence inside the region

