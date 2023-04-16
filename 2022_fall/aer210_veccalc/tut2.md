# Tutorial 2, Nov 17, 2022

## Modeling and Similarity

* If we do an experiment on a smaller model, how does this scale to a larger prototype?
* 3 types of similarity:
	1. Geometric
		* All lengths scale by the same factor
		* The model is essentially a smaller scale version of the prototype
	2. Dynamic
		* The corresponding forces scale by a constant factor
	3. Kinematic
		* Velocities at corresponding points scale
* If we have all 3 types, then we have *complete similarity*
* Principle of similarity: suppose $\pi _1 = f(\pi _2, \pi _3, \cdots, \pi _n)$; to ensure complete similarity between model and prototype, geometric similarity must exist and all independent $\pi$s must be identical
	* Under these conditions, the solutions in dimensionless form are guaranteed to be equal
	* In short, if geometric similarity exists and $\pi _{2, m} = \pi _{2, p}, \pi _{3, m} = \pi _{3, p}, \cdots, \pi _{n, m} = \pi _{n, p}$, then $\pi _{1, m} = \pi _{1, p}$
* Example: Designing a large scale car prototype with length $L_p$, we would like to reduce drag; if we found $\pi _1 = f(\pi _2)$, where $\pi _1 = \frac{F_D}{\rho V^2L^2}$ and $\pi _2 = \frac{\rho VL}{\mu} = \text{Re}$ for a smaller scale model with wind properties $V_m, \mu _m$ and $\rho _m$; if we match the Reynolds numbers between the model and prototype, then $\pi _1$ will also be the same between the two
* So long as corresponding independent $\pi$s are equal, similarity can be achieved, even in different fluids

