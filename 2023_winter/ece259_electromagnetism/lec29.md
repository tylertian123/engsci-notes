# Lecture 29, Mar 27, 2023

## Magnetic Circuits: Example

* Example: toroid with $N$ windings of wire carrying current $I_0$, with a piece cut out from it; what is $\vec B$ in that gap?
	* Boundary conditions have to be satisfied at the gap
	* Ignoring fringing effects, we would only have a $B_n$, so since $B_n$ stays the same across a boundary, $\vec B$ also stays the same
	* If the current creates a field with intensity $B_0$, then $H_\text{core} = \frac{B_0}{\mu _{rc}\mu _0}, H_\text{air} = \frac{B}{\mu _0}$
		* Typically $H_\text{core} \ll H_\text{air}$
	* Apply Ampere's law with a contour aligned with the field: $\oint _C \vec H \cdot \dd\vec l = H_\text{core}L_\text{core} + H_\text{air}L_\text{air} = NI_0$
		* Since we have a toroid, we take $L$ to be the mean distances
	* This gives $B_0 = \frac{NI_0}{\frac{L_c}{\mu _r\mu _0} + \frac{L_g}{\mu _0}}$
	* To get flux, approximate as $\Phi = \iint _S \vec B \cdot \dd\vec s = B_0S = \frac{NI_0}{\frac{L_c}{\mu _r\mu _0S} + \frac{L_g}{\mu _0S}}$
* We can interpret $NI_0$ as a "voltage" of sorts, and the terms $\frac{L_c}{\mu _r\mu _0S}$ and $\frac{L_g}{\mu _0S}$ to be like "resistances"; this way we can think of this as a magnetic circuit, with "current" being the flux
* $NI_0$ is $V_{mmf}$, or the *magnetomotive force* (MMF); $\frac{L_c}{\mu _r\mu _0S}$ is $R$, or the *reluctance*
	* MMF is the driving force in the same way voltage (electromotive force, EMF) is the driving force in an electric circuit
	* Reluctances resist the flux
	* In this case the reluctance of the core is much smaller than the reluctance of the air gap

