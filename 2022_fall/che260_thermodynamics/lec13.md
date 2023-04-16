# Lecture 13, Oct 6, 2022

## Phase Change

* We assume a phase is either liquid, vapour, or solid and only deal with pure substances
* Most applications involve phase changes
	* e.g. cooling down a hot surface by blowing a fluid across the surface (surface cooling)
		* If we used air, $c_p \approx 1\si{kJ/kg.K}$, but if we used water and get it to boil, the latent heat is approximately $2000\si{kJ/kg}$
		* If we can get the water to boil we can carry away orders of magnitude more heat
	* Steam turbines are also an example

## Two-Phase Mixtures

* e.g. getting vapour bubbles when we heat water, or water carried along in a steam pipe
* How do we define properties for such a mixed system? We have neither an incompressible liquid nor an ideal gas

## Phase Transitions

* Consider if we had a tank with a liquid and a vapour
	* The molecules in the liquid are much closer together; in the vapour molecules are much further apart
	* The liquid molecules have varying energies, some with enough energy to break loose (evaporation)
	* At the same time, the vapour molecules are hitting the surface of the liquid, some with low enough energy that they are re-captured (condensation)
	* Eventually we will reach a point where the rate of evaporation equals the rate of condensation, and we have *phase equilibrium*
* At phase equilibrium, the pressure of the system is constant; we define this as the *saturation pressure* $P_{sat}$
	* The temperature will also be constant, defined as the *saturation temperature* $T_{sat}$
* If we increase the temperature, more molecules end up in the vapour at phase equilibrium ($P_{sat}, T_{sat}\uparrow$)
* The rate of evaporation is proportional to the surface area
* If we consider the energy distribution of the molecules, the molecules evaporating have a higher energy, so evaporation removes the most energetic molecules, resulting in cooling of a liquid
* To keep the temperature constant, we need to supply energy
	* This is defined as the *latent heat of evaporation*
* Consider a system with a liquid and vapour and consider an infinitesimal amount of mass $\delta m$ going from liquid to vapour
	* Treat either the liquid or the vapour as an open system
	* How much is the energy change of this system?
	* Consider forcing the system to a constant temperature and pressure
	* Consider an infinitesimal $\delta s$ being pushed into the system
	* The net change in internal energy (PE, KE change assumed 0) so $\dd u = \delta q + \delta w + h\,\dd m$
		* Enthalpy change includes flow rate
	* Entropy change is $\dd s = \frac{\delta q}{T} + \delta\dd m \implies \delta q = T\,\ds - Ts\,\dd m$
	* If we assume reversibility $\delta w = -P\,\dV$
	* $\dd U = T\dd s - P\,\dV + (h - Ts)\,\dd m$
* Energy change is due to 3 terms: heat transfer, work, and mass transfer

\noteDefn{The Gibbs Energy $G = H - TS$ and the specific Gibbs Energy $g = \frac{G}{m} = h - Ts$, also known as the chemical potential \tcblower A difference in the Gibbs energy results in mass transfer}

* Then energy change is $\dd U = T\,\ds - P\,\dV + g\,\dd m$
* $g$ is the increase in energy of an open system per unit mass added

\noteImportant{Gibbs equation for an open system: $$\dd s = \frac{\dd U}{T} + \frac{P}{T}\dV - \frac{g}{T}\,\dd m$$}

## Phase Equilibrium

* Consider an isolated system partially filled with saturated liquid and partially filled with saturated vapour
* What is the condition for phase equilibrium?
	* Start with the state principle: $S = S(U, V, m)$
		* We have two components, the saturated vapour (subscript $g$) and the saturated liquid (subscript $f$)
	* Total entropy: $S = S_f(U_f, V_f, m_f) + S_g(U_g, V_g, m_g)$
	* At equilibrium $\dd S = 0 \implies \dd S_f + \dd S_g = 0$
	* $\dd S_f = \frac{\dd U_f}{T_f} + \frac{P_f}{T_f}\dd V_f - \frac{g_f}{T_f}\dd m_f, \dd S_g = \frac{\dd U_g}{T_g} + \frac{P_g}{T_g}\dd V_g - \frac{g_g}{T_g}\dd m_g$
	* Isolated system so $\dd U_f = -\dd U_g, \dd V_f = -\dd V_g, \dd m_f = -\dd m_g$
	* Combining these two we get $\dd S = \left(\frac{1}{T_f} - \frac{1}{T_g}\right)\dd U_f + \left(\frac{P_f}{T_F} - \frac{P_g}{T_g}\right)\dd V_f + \left(\frac{g_f}{T_f} - \frac{g_g}{T_g}\right)\dd m_f = 0$
	* $\dd U_f, \dd V_f, \dd m_f$ are all arbitrary (we never said how much the mass, volume, etc had to change), so each of the terms in the brackets are independently zero
	* Therefore the equilibrium condition is: $\threepiece{T_f = T_g}{P_f = P_g}{g_f = g_g}$
* $g_f = g_g$ is new -- at equilibrium there is no exchange of gas between two phases whose chemical potentials are the same
* $g$, the specific Gibbs energy, drives mass exchange
	* Assume $T, P$ are constant but $g_f > g_g$, then $\dd S = -\frac{1}{T_f}(g_f - g_g)\dd m_f > 0 \implies \dd m_f < 0$
	* If $g_f > g_g$ then there is mass transfer from the liquid to the vapour (evaporation)
	* Conversely if $g_g < g_f$ then there is mass transfer from vapour to liquid (condensation)
* If chemical potentials are unequal, then there will be mass exchange until chemical potentials are equal

