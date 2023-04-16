# Lecture 5, Sep 21, 2021

How do we know how big forces really are compared to the element? Is a load of $100\si{MN}$ in a bridge cable a lot of force?
We can use *stress* and *strain*, which are normalized concepts of forces, so we can compare them for elements of different sizes.

## Hooke's Law

* The restoring force in a spring is proportional to its change in length: $F = k\Delta t$
* Hooke's law also applies to structures subjected to direct tension or compression such as cables and columns
* Structures that obey Hooke's law are **linear elastic**
* $k$ is sometimes refired to as the *axial stiffness*

## Stress and Strain

* *Stress* is an area-normalized measurement of internal force; for a cable carrying a force $F$ with undeformed cross-sectional area $A$, the stress is $\sigma = \frac{F}{A}$
	* Stress has units of force per unit area and is usually in $\si{MPa}$ ($1\si{Pa} = 1\si{N/m^2}$; $1\si{MPa} = \frac{1\si{MN}}{\si{m}^2} = \frac{1\si{N}}{\si{mm^2}}$)
	* Stress is similar to pressure, but pressure acts externally while stress acts internally
* *Strain* is a length-normalized measurement of deformation; if a cable was originally $L_0$ units long but has now been stretched by an additional $\Delta l$, the strain is $\varepsilon = \frac{\Delta l}{L_0}$
	* Strain is dimensionless but typically presented in units of $\si{mm/mm}$, $\si{mm/m}$ or even percentage
	* $0.001$ is about a reasonable strain under "working load conditions" (e.g. a building with a roof under normal conditions)
* *Engineering strain/stress* use the undeformed area and length; the *true strain/stress* use the deformed area/length; true strain is $\diff{}{x}$ of the displacement field
	* Engineering stress/strain is used instead of the true strain/stress because the latter is too hard to measure
* Using stress and strain allow us to compare structures of different sizes
	* e.g. a thicker cable will break at a higher load than a thinner cable, but if they're the same material, the stress that breaks them will be the same
* Stress and strain also apply for compression, as long as the compression is not too much and buckling doesn't happen

## Young's Modulus and Relation to Hooke's Law

* Stress is proportional to strain by a constant $E$, the *Young's Modulus*: $\sigma = E\varepsilon$
	* Young's modulus is a property of the material and has the same dimensions as stress, typically $\si{MPa}$
	* The strains here are only as a result of carrying a load causing a stress; e.g. thermal or shrinkage strains should not be used here
	* Also known as the *material stiffness*
* $k$ can be expressed in terms of a member's cross sectional area $A$, length $L_0$, and material stiffness $E$: $F = AE\frac{\Delta l}{L_0} = \frac{AE}{L_0}\Delta l \implies k = \frac{AE}{L_0}$
	* This shows that the axial stiffness is proportional to the cross-sectional area and material stiffness, and inversely proportional to length

