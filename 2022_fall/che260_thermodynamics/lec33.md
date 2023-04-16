# Lecture 33, Dec 1, 2022

## Thermal Radiation

* Consider an enclosure at temperature $T_{surr}$ filled with vacuum, containing an object of temperature $T_s$
	* $T_s = T_{surr}$ at equilibrium
* Thermal radiation is energy emitted by matter as a result of its finite temperature
	* Radiation has wave patterns (EM waves)
	* Thermal radiation typically has wavelengths of $0.1$ to $100\si{\micro m}$
		* UV is $0.1$ to $0.4\si{\micro m}$
		* Visible radiation is $0.4$ to $0.7\si{\micro m}$
		* IR radiation is $0.7$ to $100\si{\micro m}$
* Radiation is released with energy level changes from an excited state
	* When radiation is absorbed we go from lower to higher energy states, similar to spectroscopy
	* For infrared radiation this corresponds to vibrational energy levels
	* Visible radiation corresponds to electronic energy levels (typically outer electrons)
* Radiation is a volumetric phenomenon, but most solids are "opaque", so emissions from within the object will just be immediately reabsorbed
	* This is why we usually consider it a surface property
* A blackbody is a perfect emitter and absorber of radiation
	* At a given temperature, no surface can emit more energy than a blackbody
	* It also emits radiation equally in all directions ("diffuse" emission)
* Stefan-Boltzmann Law: The radiation energy emitted by a blackbody per unit time per unit area is given by $E_b = \sigma T^4$ for the Stefan-Boltzmann constant $\sigma = \SI{5.67e-8}{W/m^2.K^4}$
	* $E_b$ is the blackbody emissive power
* A blackbody is a theoretical object, but some things come close:
	* Black paint
	* Isothermal cavity (e.g. a box with a very small hole, the hole is a blackbody)
* The spectral distribution of blackbody radiation has the form $\frac{c_1}{\lambda^5\exp\left(\frac{c_2}{\lambda T}\right) - 1}$
* In a real body, the radiation emission and absorption are dependent on wavelength and direction
	* e.g. $\ce{CO2}$'s absorption spectrum absorbs more in the region of sunlight reflected by Earth's surface, which causes the greenhouse effect
	* Real surfaces can emit more in certain directions
	* Real surfaces also never have the same overall emission power as a blackbody
* We can define the emissivity: $\varepsilon(T) = \frac{E(T)}{E_b(T)}$
	* This is integrated over all directions and wavelengths
	* To simplify calculations, we assume $\varepsilon$ is independent of $\lambda$ (gray surface) and $\theta$ (diffuse surface)
	* This gives us the formula we already know: $E(T) \approx \varepsilon\sigma T^4$
* Consider a surface with some incident radiation $G$; some will be reflected, $G_{ref}$; some will be absorbed, $G_{abs}$; some will be transmitted, $G_{tran}$
	* Define the absorptivity $\alpha = \frac{G_{abs}}{G}$, the reflectivity $\rho = \frac{G_{ref}}{g}$, and the transmittivity $\tau = \frac{G_{tran}}{G}$
	* For a general material these have to sum to 1; for an opaque material $\tau = 0$, so $\alpha + \rho = 1$
	* A blackbody has $\rho = 0$ and so $\alpha = 1$
	* We assume a gray body, where $\alpha, \rho, \tau$ are independent of $\lambda$, and diffuse, where $\alpha, \rho, \tau$ are independent of $\theta$

