# Lecture 30, Apr 11, 2022

## Resistance and Resistivity

* Resistance is a property of a certain object, resistivity is a material property (resistance depends on length, area, etc)
* Resistivity is defined as $\rho = R\frac{A}{l}$ in units of $\si{\ohm m}$
	* Resistance is proportional to length and inversely proportional to cross sectional area
* Conductivity is defined as $\sigma = \frac{1}{\rho}$ in units of $\si{\ohm^{-1}/m}$
* For a metal, $\sigma = ne\mu _e$, where $n$ is the density of free electrons (or holes in some rare cases) in $m^{-3}$, $e$ is the electron charge, $\mu _e$ is the electron mobility (units of $\si{m^2/V.s}$)

## Semiconductors

* For an intrinsic semiconductor (i.e. no additives), charge is carried by both holes and free electrons in the valence band; $\sigma = n_ie(\mu _e + \mu _h)$ where $\mu _e$ and $\mu _h$ are the electron and hole mobilities
	* Increasing the temperature increases the charge density; $n_i \propto e^{-\frac{E_g}{2kT}}$ where $E_g$ is the band gap, $k$ the Boltzmann constant, and $T$ the temperature in Kelvins
	* Optical absorption can also create charge carriers
	* Since charge carrier density changes with temperature, intrinsic semiconductor conductivity varies with temperature, so they're not often used
* Silicon semiconductors are tetrahedrally coordinated; if we put in a group 5 element, we get an extra electron; if we put in a group 3 element we get an extra hole
* In an extrinsic semiconductor, usually there are much more charge carriers introduced by doping, so we can approximate $\sigma = N_de\mu _e$ for N-type (negative charge carrier) semiconductors, or $\sigma = Pe\mu _h$ for P-type (positive charge carrier) semiconductors
* Example: Doping silicon with 1 part per billion arsenic
	* $\ce{As}$ is a group 5 element, so this is a N-type semiconductor
	* 1 part per billion means the electron density is one one-billionth of the atomic density for silicon
	* For silicon $N = \frac{8}{a^3} = \SI{4.997e22}{cm^{-3}}$ where $a = 0.543\si{nm}$ (8 because the diamond cubic structure has 8 atoms per unit cell)
	* So $N_d = \SI{4.997e13}{cm^{-3}}$
	* Using $\mu _e = 1350\si{cm^2/V.s}$ and $\mu _h = 450\si{cm^2}{V.s}$, $\sigma = \SI{1.08e-2}{\ohm^{-1}cm^{-1}}$

