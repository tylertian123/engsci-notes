# Lecture 20, Mar 3, 2023

## Uniqueness Principle

\noteThm{If a solution to Laplace's or Poisson's equation can be found that satisfies the boundary conditions, then the solution must be unique}

* Example: electric shielding
	* What is the voltage and electric field inside a closed conductive shell with no enclosed charge?
	* We need Laplace's equation, with a homogeneous medium $\del^2V = 0$
	* Boundary condition: $V = V_0$ everywhere on the boundary of the shell since it's a perfect conductor
	* The simplest solution is $V(x, y, z) = V_0$; then by the uniqueness principle, we may conclude that this is the only solution
	* Therefore $\vec E = -\del V = 0$, i.e. there is no electric field inside the shell at all
	* More commonly known as a *Faraday cage*
		* This would still work even in a cage where there are holes in the conductor; as long as the holes are smaller than the wavelength of the signal, EM waves will be completely blocked out
		* In practice the thickness of the shell also matters

## Method of Images

* Before computers, this method was used to solve challenging EM problems
* When a charge distribution is placed near a perfectly conducting object, the distribution gets "reflected" in the object, i.e. the field configuration resembles that of a dipole
	* There isn't actually any field in the perfect conductor, but the field outside the conductor is identical to the case where we have a dipole
	* This is caused by the fact that the perfect conductor is an equipotential surface so the field lines are perpendicular to it, just line the field lines would be all in the same direction halfway between a dipole
* The charge distribution is reflected and the charge is inverted
* We can take this further and consider the case where the plate is finite, where we have a sphere, where we have multiple conductors, etc

