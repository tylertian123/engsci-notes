# Lecture 20, Oct 25, 2022

## Radiation

* Energy emitted by all matter in the form of electromagnetic waves
	* Thermal radiation is emitted by all bodies above absolute zero
* Typically volumetric, i.e. scales with volume of the body
	* However for opaque objects, radiation can only be emitted from the surface, so radiation scales with surface area
* Amount of radiation is a function of the surface temperature

\noteEqn{Stefan-Boltzmann Law: The maximum amount of radiation that a surface can emit is $$\dot Q_{max} = \sigma AT_s^4$$ where $A$ is the surface area, $T_s$ is the surface temperature, and $\sigma$ is the Stefan-Boltzmann constant, $\sigma = \SI{5.67e-8}{W/m^2.K^4}$}

* For a blackbody, the higher the temperature, the more the distribution of wavelengths shifts towards shorter wavelengths
	* A blackbody is a surface that emits the maximum amount of radiation
	* However real surfaces emit less radiation
* For a real surface, $\dot Q = \varepsilon\sigma AT^4$, where $\varepsilon$ is the emissivity, $0 \leq \varepsilon \leq 1$
	* When $\varepsilon = 1$, the body is a blackbody
	* Otherwise it is a *graybody*
* Real objects have complex wavelength distributions that can be approximated by a graybody
	* A graybody has a constant emissivity less than 1
* e.g. the emissivity of black paint is $0.99$; aluminum foil has an emissivity of $0.07$
* Example: Liquid $\ce{N2}$ is kept inside a vacuum Dewar Flask
	* There are 2 layers of glass separated by a vacuum to prevent conduction and convection
	* The surfaces are coated with silver, which has a very low emissivity, to prevent radiation
* Radiation can also be absorbed when it's incident on a surface
	* Some radiation is absorbed and some is reflected for an opaque system
	* For a blackbody everything is absorbed
	* The fraction absorbed is defined as the *absorptivity* $\alpha$, such that $\dot Q_{\text{absorbed}} = \alpha\dot Q_{\text{incident}}$
	* From conservation of energy, the amount reflected is $\dot Q_{\text{reflected}} = (1 - \alpha)\dot Q_{\text{incident}}$
	* Kirchhoff's Law: $\alpha = \varepsilon$
* Special case: when a small surface is completely surrounded by a much larger surface, $\dot Q_{net} = \varepsilon\sigma A_s(T_s^4 - T_{surr}^4)$
	* This net radiation accounts for radiation absorbed and emitted
* Example: Chip with $\varepsilon = 0.6$ in a room with air/wall temperature $25\si{\degree C}$, and $A_s = (0.015\si{m})^2$
	* Natural (free) convection
		* Estimate using a simple model $h = c(T_s - T_\infty)^{\frac{1}{4}}$ where $c = \SI{4.2}{W/m^2.K^{5/4}}$
	* Forced convection with $h = 250\si{W/m^2.K}$
	* What is the maximum power we can dissipate if the chip temperature must be less than $85\si{\degree C}$?
		* Natural convection: $\dot Q_{conv} = hA(T_s - T_\infty) = cA(T_s - T_\infty)^\frac{1}{4}(T_s - T_\infty) = 0.158\si{W}$
		* Radiation: $\dot Q_{rad} = \varepsilon A\sigma(T_s^4 - T_{surr}^4) = 0.065\si{W}$
		* Net heat transfer: $\dot Q = \dot Q_{conv} + \dot Q_{rad} = 0.223\si{W}$
			* Note here the convective and radiative heat transfers are of similar magnitude
				* Typically values for free convection is 3-20 $\si{W/m^2.K}$
		* Forced convection: $\dot Q_{conv} = 3.375\si{W}$
			* In this case the radiative heat transfer is only about $2\%$ of the total heat transfer, so we can ignore it

\noteSummary{For heat radiation:
\begin{itemize}
	\item For an ideal blackbody: $$\dot Q = \sigma AT^4$$
	\item For a real object: $$\dot Q = \varepsilon\sigma AT^4$$
	\item If a smaller surface is surrounded by a larger surface: $$\dot Q_{net} = \varepsilon\sigma A_s(T_s^4 - T_{surr}^4)$$
\end{itemize}
where $\sigma = \SI{5.67e-8}{W/m^2K^4}$ and $\varepsilon$ is the surface emissivity, which is equal to $\alpha$, the surface absorptivity}

## Thermal Conductivity Via Electrons

* Wiedemann-Franz Law: relates thermal and electrical conductivities of metals: $\frac{k}{\sigma} = LT$ where $\sigma$ is the electrical conductivity, $k$ is the thermal conductivity, $L$ is the Lorenz number $L = \frac{\pi^2}{3}\left(\frac{k_B}{e}\right)^2 = \SI{2.44e-8}{V^2/K^2}$

## Heat Conduction

* Consider system volume, we can have 3D heat conduction $\dot Q_x, \dot Q_y, \dot Q_z$
	* Temperature is a function of position and time
	* Heat conduction is a vector, $\vec{\dot Q} = \dot Q_x\ihat + \dot Q_y\jhat + \dot Q_z\khat$
	* Use Fourier's law: $\dot Q_x = -kA_x\diff{T}{x}, \dot Q_y = -kA_y\diff{T}{y}, \dot Q_z = -kA_z\diff{T}{z}$
* We will assume our system is 1 dimensional
	* This can happen if $\Delta x \ll \Delta y, \Delta z$ (e.g. a wall or through a plate), so $\diff{T}{x} \gg \diff{T}{y}, \diff{T}{z}$ and we can ignore the other two dimensions
	* This can also happen if we have insulated sides
	* Can also happen in cylindrical coordinates

