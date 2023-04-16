# Lecture 31, Mar 31, 2023

## Mutual Inductance Example

* Mutual inductance is usually denoted $L_{12} = M = L_{21}$; the fact that the mutual inductances go both ways is a result of the *reciprocity* rule
* Example: small circular loop of radius $a$, a distance $d$ from an infinite wire carrying $I_1$; what is the mutual inductance of 1 due to 2, $L_{21}$?
	* We can instead find $L_{12}$ since we don't know how to find the flux through an infinitely long wire
	* Approximate flux from the infinite wire as $B_1 \approx \frac{\mu _0I_1}{2\pi d}$ (i.e. take the field at the centre of the circle), because the loop is small
	* $\Phi _{12} \approx \frac{\mu _0I_1}{2\pi d}(\pi a^2)$
	* $L_{12} = L_{21} = M = \frac{N_2\Phi _{12}}{I_1} = \frac{\mu _0a^2}{2 d}$

## Magnetic Energy

* Like how electric potential energy is the energy it took to build up a collection of charges, magnetic potential energy is the energy it took to create a current distribution
* For free current distributions, this is due to Lenz's law -- the field will oppose a change in current
* For bound current distributions, this is the energy required to align the magnetic dipoles within the material

\noteDefn{The stored \textit{magnetic potential energy} of a current distribution is $$W_m = \frac{1}{2} \iiint _v \vec B \cdot \vec H\,\dv = \frac{1}{2}\iiint _v \mu _r\mu _0 \abs{\vec H}^2\,\dv$$ The \textit{magnetic energy density} is then $$w_m = \frac{1}{2}\vec B \cdot \vec H$$}

* Example: stored magnetic energy within an infinitely long solenoid
	* $H = nI, B = \mu _0\mu _rnI$ by Ampere's law
	* $W_m = \frac{1}{2}\iiint _v \mu _r\mu _0\abs{\vec H}^2\,\dv = \frac{1}{2}\mu _r\mu _0(\pi a^2l)(n^2I^2) = \frac{\mu _r\mu _0\pi a^2N^2I^2}{2l}$
* The energy stored in an inductive element is $W_m = \frac{1}{2}LI^2$, which holds here as well
	* Often inductance is easier to find by first finding the energy and then solving for $L$
* Example: energy storage in coupled circular toroids -- what is their self inductance, mutual inductance, and the energy stored?
	* First find $B_1, B_2$ from Ampere's law, with a loop concentric to the toroids going through them
	* We will approximate $B_1 = \frac{N_1I_1\mu _r\mu _0}{2\pi r_0}$ by assuming a constant $B$ through the cross section (so the expression isn't a nightmare)
	* $B_1 = \frac{N_2I_2\mu _r\mu _0}{2\pi r_0}$
	* We can write the energy as $W_m = \frac{1}{2}L_{11}I_1^2 + \frac{1}{2}L_{22}I_2^2 + \frac{1}{2}L_{12}I_1I_2 + \frac{1}{2}L_{21}I_1I_2$
		* The first 2 terms are the self-energies; the second 2 terms are the mutual energies
	* To find $L_{11}, L_{22}$ we first find $W_m$ for the toroids
	* To find $L_{12}$, we integrate $\vec B_1 \cdot \vec H_2$, over the volume of the outer toroid
	* The volumes are chosen to be everywhere the field exists -- in this case, we only consider the space in the toroids, since by Ampere's law the fields are zero outside them

