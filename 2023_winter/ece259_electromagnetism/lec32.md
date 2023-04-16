# Lecture 32, Apr 3, 2023

## Time-Varying Fields: Overview

* So far we've discussed only static charges and steady currents; for these cases, electricity and magnetism are separate entities
* With time-varying charges and currents, electricity and magnetism are now related by Maxwell's equations:
	* $\del \times \vec E = -\pdiff{\vec B}{t}$
	* $\del \times \vec H = \vec J + \pdiff{\vec D}{t}$
	* $\del \cdot \vec D = \rho _v$
	* $\del \cdot \vec B = 0$
* Now changes in the electric field induce changes in the magnetic field and vice versa, which allows electromagnetic waves

## Faraday's and Lenz's Laws

* A changing magnetic flux causes a current to flow in a closed loop; this means an electromotive force (EMF) is created
* Faraday's law states that the EMF induced in a circuit is directly proportional to the time rate of change of the magnetic flux linking that circuit
* The EMF is the amount of work done per unit charge, or $V_{emf} = \oint _C \frac{\vec F_e \cdot \dd\vec l}{q} = \oint _C \vec E \cdot \dd\vec l$
	* Because $\vec F = q\vec E + q\vec u \times \vec B$, an EMF can be caused by an electric force, a magnetic force, or a combination of both
	* Notice since the electric field is conservative in electrostatics, the EMF is zero without time-varying fields

\noteEqn{Faraday's Law: $$\del \times \vec E = -\pdiff{\vec B}{t} \iff V_{emf} = \oint _C \vec E \cdot \dd\vec l = -\pdiff{}{t}\iint _S \vec B \cdot \dd\vec s = -\pdiff{\Phi}{t}$$}

* Electric fields induced by magnetic flux changes are not conservative, which is how EMF can be zero
* If the loop is closed, then the EMF will cause a current to flow, $I_{emf} = \frac{V_{emf}}{R}$
	* Lenz's law: The direction of this current is such that the magnetic field it produces opposes the original change in the magnetic field
	* Lenz's law is why there is a negative sign on Faraday's law
	* The field is not opposing the field, but opposing the change (e.g. if the field is up but decreasing, the induced current produces a field that still points up, to compensate the decrease)
* Lenz's law is a statement of the conservation of energy; if the induced current flowed the other way, it would lead to a positive feedback loop and violate conservation of energy
* With multiple turns in the loop, $V_{emf} = -N\pdiff{\Phi}{t} = -N\pdiff{}{t}\iint _S \vec B \cdot \dd\vec s$ since every turn experiences the same EMF
* To cause this change in the flux, we could either change $\vec B$ itself or change the surface $S$ (e.g. expand/shrink, change in orientation)
	* Changes in flux caused by changes in $\vec B$ causes an EMF known as the *transformer EMF*
		* This is created by the induced electric force
	* Changes in the flux caused by changes in $S$ is known as a *motional EMF*
		* This is caused by moving charges in the presence of a $\vec B$
* Example: transformer EMF: find induced $V_{emf}$ in a torus, if $I(t) = I_0\cos(\omega t)$ passes through the centre, $N$ turns of wire, inner diameter $a$, outer diameter $b$, height $c$
	* $\vec B(t) = \frac{\mu I(t)}{2\pi r}$
	* $\Phi(t) = \iint _S \vec B(t) \cdot \dd\vec s = \int _a^b \int _{-c}^0 \frac{\mu I(t)}{2\pi r}\,\dz\,\dr = \frac{\mu c I(t)}{2\pi}\ln\frac{b}{a} = \frac{\mu c\ln\left(\frac{b}{a}\right)}{2\pi}I_0\cos(\omega t)$
	* $V_{emf} = -N\pdiff{\Phi}{t} = \frac{N\mu c\ln\left(\frac{b}{a}\right)I_0\omega}{2\pi}\sin(\omega t)$
	* Notice: $V_{emf} = V_0\sin(\omega t) = L\diff{I}{t}$

