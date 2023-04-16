# Lecture 24, Mar 15, 2023

## Magnetic Vector Potential

* We know $\del \cdot \vec B = 0 \implies \oiint _S \vec B \cdot \dd\vec s = 0$
	* Magnetic flux through a closed surface is always zero
	* Magnetic flux is denoted by $\Phi _m$
* Since the divergence of curl is 0 we can express $\vec B$ as the curl of a potential $\vec A$
	* $\vec B$ has units of tesla, or webers per unit area (where weber is the unit of magnetic flux, in volt seconds)
	* $\vec A$ has units of tesla meters, or webers per unit length
	* Note $\vec A$ does not have relation to energy like $V$ does

\noteDefn{The magnetic vector potential $\vec A$ is defined such that $$\vec B = \nabla \times \vec A$$ It is directly related to the current as $$\del^2 \vec A = -\mu _0\vec J \implies \vec A = \frac{\mu _0}{4 \pi}\iiint _V \frac{\vec J}{\abs{\vec R - \vec R'}}\,\dv' = \frac{\mu _0}{4\pi}\int _L \frac{I}{\abs{\vec R - \vec R'}}\,\dd l'$$ which is the analogue of the Poisson equation, where $\mu _0$ is the magnetic permeability}

* Note that the magnetic vector potential is always in the same direction as $\vec J$
* The magnetic flux can be directly determined from the magnetic vector potential:
	* $\Phi _m = \oint _C \vec A \cdot \dd\vec l$ where $\Phi _m$ is the magnetic flux through any surface with $C$ as its boundary
	* This follows directly from Stokes' theorem

## The Biot-Savart Law

* All magnetic phenomenon come from moving charges (in a permanent magnet, this comes from the movement of charges in the atoms)
* The Biot-Savart law relates magnetic fields to their sources
* Consider a very small bit of current (a current element or filament, which is part of a larger current loop)
	* This bit of current has position $\vec R'$ and creates a field at $\vec R$

\noteDefn{The Biot-Savart law relates the magnetic field intensity to currents: $$\dd \vec B = \frac{\mu _0 I\,\dd\vec l \times (\vec R - \vec R')}{4\pi\abs{\vec R - \vec R'}^3}$$}

* $I\,\dd\vec l$ is the analogue of $\dd Q$
* This is completely analogous to Coulomb's law, except for the cross product, which represents the right hand rule
* Given different types of current distributions we can integrate this in different ways to find $\vec B$:
	* Moving charge: $\vec B = \frac{\mu _0}{4\pi}\frac{Q\vec u \times (\vec R  - \vec R')}{\abs{\vec R - \vec R'}^3}$
	* Linear current loop: $\vec B = \frac{\mu _0}{4\pi}\int _C \frac{I\,\dd\vec l' \times (\vec R - \vec R')}{\abs{\vec R - \vec R'}^3}$
	* Surface current: $\vec B = \frac{\mu _0}{4\pi}\iint _S \frac{\vec J_s \times (\vec R - \vec R')}{\abs{\vec R - \vec R'}^3}\,\ds'$
	* Volume current: $\vec B = \frac{\mu _0}{4\pi}\iiint _V \frac{\vec J \times (\vec R - \vec R')}{\abs{\vec R - \vec R'}^3}\dd v'$
* The Biot-Savart law can be derived from $\vec A$
* e.g. for a strip of length $2a$, in the $x$-$y$ plane extending infinitely in the $x$ direction, the current is $\vec J_s\,\ds' = \frac{I}{2a}\,\dx'\,\dy'\,\hat a_x$; find the field at $P(0, 0, z)$
	* $\dd\vec B = \frac{\mu _0\vec J_s \times (\vec R - \vec R')\,\ds'}{\abs{\vec R - \vec R'}^3}$
	* Integrate in $x', y'$ since those are the dimensions the strip lives in, $\ds' = \dx'\,\dy'$
	* $\vec J_s\,\ds' = \left(\frac{I}{2a}\vec a_x\right)\,\dx\,\dy$
	* $\vec R = z\vec a_z, \vec R' = x'\vec a_x + y'\hat a_y$
	* $\alignedeqntwo[t]{\vec B}{\intinf \int _{-a}^a \frac{\mu _0\left(\frac{I}{2a}\right)\hat a_x \times (-x'\hat a_x - y'\hat a_y + z\hat a_z)}{4\pi\left(x'^2 + y'^2 + z'^2\right)^\frac{3}{2}}\,\dy'\,\dx'}{\frac{\mu _0I}{8\pi a}\intinf \int _{-a}^a \frac{-y'\hat a_z - z\hat a_y}{\left(x'^2 + y'^2 + z'^2\right)^\frac{3}{2}}\,\dy'\,\dx'}{-\frac{\mu _0I}{2\pi a}\tan^{-1}\left(\frac{a}{z}\right)\hat a_y}$
		* Note we could ignore the $\hat a_z$ component because from symmetry and right hand rule we know the field is going to be in the $-\hat a_y$ direction

