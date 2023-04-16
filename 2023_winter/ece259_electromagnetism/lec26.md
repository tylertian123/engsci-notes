# Lecture 26, Mar 20, 2023

## Magnetic Dipole

* A *magnetic dipole* is simply a closed loop of current, characterized by its *magnetic dipole moment* $\vec m = IS\hat a_n$, where the direction is determined through the right hand rule and $S$ is the enclosed area
	* e.g. for a loop with radius $a$, we have $\vec m = \pi a^2I\hat a_z$
	* If the loop has $n$ turns, then the effective $I$ is increased, so the magnetic dipole moment is magnified by a factor of $n$
	* $\vec m = nIS\hat a_n$ with units $[\si{A.m^2}]$
	* A magnetic dipole will produce a field in the same direction as the direction it points in
* What happens to a magnetic dipole moment in a $\vec B$ field?
	* The loop will experience some magnetic force $\vec F = I\vec L \times \vec B$ (from $\vec F_m = q\vec u \times \vec B$)
	* This produces a net torque $\vec T = \vec m \times \vec B$
	* When $\vec m$ and $\vec B$ are aligned, the torque goes to zero; therefore a magnetic dipole will rotate until its own field is aligned with the applied field

## Magnetization

* All materials have small atomic magnetic dipoles caused by the movement of electrons around the nuclei
	* Since they're all randomly oriented, there is no net field
* In a magnetic material, in the presence of an external magnetic field, the dipoles experience a torque that aligns them in the same direction as the field
* The overall result is that the small $\vec B$ fields from the dipoles now all point in the same direction, producing a net magnetic field
	* The magnetic field produced by the dipoles is in the same direction as the external applied field, so they add together
* A material is *magnetic* if it allows their atomic magnetic dipoles to be all aligned in the same direction
* Define the *magnetization vector* $\vec M$ (akin to $\vec P$'s relationship with $\vec p$) as an average of the magnetic dipoles within a material:
	* $\vec M = \lim _{\Delta v \to 0}\frac{1}{\Delta v}\sum _i \vec m_i \approx N\vec m$ with units $[\si{A/m}]$
* This magnetization leads to a *bound current density* (surface) $\vec J_{ms} = \vec M \times \hat a_n$ where $\hat a_n$ is the outward normal of the surface
	* There could also be volume bound current densities
* Now we can define 3 new quantities:
	* The magnetic field intensity $\vec H = \frac{\vec B}{\mu _0} - \vec M = \frac{\vec B}{\mu _r\mu _0}$
	* The magnetic susceptibility $\chi _m$, where $\vec M = \chi _m\vec H$
	* The relative permeability $\mu _r = \chi _m + 1$
	* Like in the electric field case, $\vec B$ accounts for both bound and free currents, but $\vec H$ only cares about free currents

\noteImportant{The magnetic flux density in a magnetized material is not always greater than the applied field, since the magnetic dipole moments can also align to be antiparallel to the applied field, depending on the material (as a consequence, $\chi _m$ is not necessarily positive, so $\mu _r$ could be less than 1)}

* Example: cylindrical permanent magnet, where a constant uniform $M = M_0\hat a_z$ exists; the cylinder is defined by $-\frac{L}{2} \leq z \leq \frac{L}{2}, 0 \leq r \leq a$
	* $\vec J_{ms} = \vec M \times \hat a_n = \vec M \times \hat a_r = M_0\hat a_\phi$
	* $\alignedeqntwo[t]{\vec B}{\iint \frac{\mu _0\vec J_{ms} \times (\vec R - \vec R')}{4\pi\abs{\vec R - \vec R'}^3}a\,\dphi'\,\dz'}{\frac{\mu _0}{4\pi}\int _{-\frac{L}{2}}^\frac{L}{2}\int _0^{2\pi} \frac{M_0\hat a_\phi \times \left(-a\hat a_r + (z - z')\hat a_z\right)}{\left(a^2 + (z - z^2)^2\right)^\frac{3}{2}}a\,\dphi'\dz'}{\frac{\mu _0M_0}{2}\left(\frac{\frac{L}{2}}{\sqrt{a^2 + (z - L/2)^2}} + \frac{\frac{L}{2}}{\sqrt{a^2 + (z + L/2)^2}}\right)\hat a_z}$
	* What if $L \gg a$?
		* $\vec B \to \mu _0M_0\hat a_z$

\noteSummary{When a magnetic material is exposed to an external applied magnetic field, it is magnetized; the magnetization is characterized by the magnetization vector, $$\vec M = \chi _m\vec H$$ where the magnetic field intensity is defined as $$\vec H = \frac{\vec B}{\mu _0} - \vec M = \frac{\vec B}{\mu _r\mu _0}$$ where the relative permeability is defined as $$\mu _r = \chi _m + 1$$ The magnetization creates a surface bound current density, $$\vec J_{ms} = \vec M \times \hat a_n$$ where $\hat a_n$ is the surface normal vector, and also a volume bound current density, $$\vec J_m = \del \times \vec M$$}

