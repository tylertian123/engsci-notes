# Lecture 21, Oct 21, 2022

## What is a Fluid?

* With a solid, when a small shear force is applied, we get a small angular deformation, but it stops at equilibrium even when the force is applied continuously
* However the same applied to a fluid will cause the fluid to deform continuously as long as the force is applied
* No slip condition: fluid in direct contact with a solid boundary sticks to it, i.e. it has zero velocity relative to the solid boundary

\noteDefn{A fluid is a substance that deforms \textit{continuously} under the application of a tangential (shear) force, no matter how small the force}

* Note, this definition does not address the rate of deformation
* Thus a fluid at rest is always at a state of zero shear force

## Studying Fluids

* Two approaches:
	1. Statistical approach: account for the molecular nature of the fluid
		* Macroscopic behaviour of the fluid is determined through statistics and kinetic theory
		* However not practical in most engineering applications
	2. Continuum approach: ignore individual molecules and treat the fluid as a continuous matter
		* More practical for typical engineering applications
		* Will be used in this course
* The continuum approach requires that the macroscopic length scale (size of the system) is much larger than the microscopic length scale (gap between molecules)
	* This is captured in the Knudsen number $\text{Kn}$ which is the ratio of the microscopic to the macroscopic length scales
* The continuum approach fails when:
	* Flow through tiny passages, e.g. blood in a vessel
	* Granular flows, e.g. sand
	* Flows with shockwaves, e.g. wake of a supersonic bullet
	* When there is a sudden jump in pressure/temperature, e.g. when a spacecraft enters the atmosphere
* With the continuum approach, we can apply limit concepts from calculus (e.g. work with differentials and infinitesimals) and talk about "points" in the fluid

\noteImportant{The continuum approach is only valid when the macroscopic length scale (size of the system) is much larger than the microscopic length scale (gap between molecules) of the fluid}

