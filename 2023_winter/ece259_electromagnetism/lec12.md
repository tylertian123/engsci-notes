# Lecture 12, Feb 6, 2023

## Polarization

* Consider the effect of a static field on the atoms in an insulator:
	* The field inside the insulator, $\vec E_0$, *polarizes* the bond atoms within the material -- the atoms are stretched, negative charges and positive charges are pushed to different sides
	* The insulator has become a *dielectric* (refers to the separation of the positive and negative charges)
	* This separation of charge creates an electric field of its own, the *polarization field* $\vec E_n$
		* Now the total field is reduced: $\vec E_{tot} = \vec E_0 - \vec E_p$
	* The polarized atoms can be approximated with an *electric dipole*
* The dipole is represented by the *dipole moment* $\vec p = Q\vec d$, where $\vec d$ is the vector connecting the two charges with $-Q$ and $+Q$
	* $\vec d$ and thus $\vec p$ always points from the negative charge to the positive charge by convention

\noteDefn{The \textit{dipole moment} of a pair of charges $-Q$ and $Q$, where $\vec d$ is the vector pointing from the negative charge to the positive charge, is $$\vec p = Q\vec d$$ \tcblower The \textit{polarization vector} of a material is $$\vec P = \lim _{\Delta v \to 0} \frac{1}{\Delta v}\sum _{i = 1}^{N\Delta v}\vec p_i \approx N\vec p_i \qquad \text{if $\vec p_i$ are the same}$$ where $N$ is the number of atoms per unit volume}

* The polarization vector has units of $\si{C/m^2}$; it is a measure of the "average" dipole moment per unit volume
* In this course we are concerned with *simple media*, that is:
	* Linear: The properties of the dielectric do not depend on the electric field strength
		* The strength of the polarization is directly proportional to the applied field
	* Isotropic: The properties of the dielectric do not depend on the field direction
		* The direction of polarization is always parallel to the direction of the applied field
	* Homogeneous: The properties of the dielectric do not depend on the electric field position (i.e. there's only one type of material)
		* The relationship between the polarization and the electric field is the same everywhere within the material
* For such simple media, $\vec P = \varepsilon _0\chi _e\vec E$
	* $\chi _e$ is the *electric susceptibility* of the material, a unitless quantity -- higher $\chi _e$ means higher polarization
		* $\chi _e$ can be a matrix if the material is not isotropic
	* Define $\varepsilon _r = \chi _e + 1$ so that $\vec P = \varepsilon _0(\varepsilon _r - 1)\vec E$ where $\varepsilon _r$ is the *relative permittivity* of the material
		* Therefore $\vec D = \varepsilon\vec E = \varepsilon _r\varepsilon _0\vec E$
* At the surfaces of the material, there's no more atoms, we have a negative charge layer and a positive charge layer, which causes attraction
	* This results in the *bound charge density* $\pm \rho _{sb}$ (as opposed to the free charge densities $\pm \rho _s$)
	* Therefore $\vec E_p = \frac{\rho _{sb}}{\varepsilon _0}$ or $\norm{\vec E_{tot}} = \norm{\vec E_0} - \norm{\vec E_p} = \frac{1}{\varepsilon _0}(\rho _s - \rho _{sb})$
	* **This is equivalent to reducing it by a factor of $\varepsilon _r$: $\vec E_{tot} = \frac{\vec E_0}{\varepsilon _r}$**
* In a polarized material:
	* $\vec E_0$ is the original field applied, which results in free charge densities
	* Bound charge densities $\rho _{sb} = \vec P \cdot \vec a_n$ where $\vec a_n$ are the outward normal vectors of the surface
		* This gives $\rho _{sb} = \norm{\vec P}$ if the polarization vector is normal to the surface
* When dealing with these problems, it's important to note whether the potential difference or the $\rho _s$ are constant
 
\noteSummary{To account for polarization in a material, all we need to do is to add the relative permittivity $\varepsilon _r$: $$\vec E = \frac{\vec E_0}{\varepsilon _r}$$ The polarization induces bound charges, with surface bound charge density given by $$\rho _{sb} = \vec P \cdot \hat a_n$$ where $\hat a_n$ is the unit normal of the surface; the volume bound charge density is given by $$\rho _{vb} = -\del \cdot \vec P$$ $\vec P$ is the polarization vector, given by $$\vec P = \varepsilon _0\chi _e\vec E = \varepsilon _0(\varepsilon _r - 1)\vec E = \vec D - \varepsilon _0\vec E$$}

