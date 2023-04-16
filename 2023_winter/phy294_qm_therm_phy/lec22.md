# Lecture 22 (2-5), Mar 9, 2023

## Adiabatic Processes

* In an adiabatic process there is no heat exchange between a system and its surroundings ($Q = 0$)
* Since there is no heat $\Delta U = -p\Delta V$ at every step
* From $U = \frac{f}{2}NkT$ (where $f = 3$ for monoatomic gases and $f = 7$ for diatomic gases) we have $\Delta U = \frac{f}{2}Nk\Delta T$ so $-p\Delta V = \frac{f}{2}Nk\Delta T$
* Bring in the ideal gas law $Nk\Delta T = \Delta (pV) = V\Delta p + p\Delta V$, combine with above $-p\Delta V = \frac{f}{2}(V\Delta p + p\Delta V)$
* $-\left(1 + \frac{f}{2}\right)p\Delta V = \frac{f}{2}V\Delta p \implies -\frac{1 + \frac{f}{2}}{\frac{f}{2}}\frac{\Delta V}{V} = \frac{\Delta p}{p} \implies \frac{2 + f}{f}\frac{\dV}{V} = \frac{\dd p}{p}$
* $-\frac{2 + f}{f}\dd\ln V = \dd\ln p$, integrate to get $-\frac{2 + f}{f}\ln\frac{V_2}{V_1} = \ln\frac{p_2}{p_1}$
* Therefore $\left(\frac{V_1}{V_2}\right)^\frac{2 + f}{f} = \frac{p_2}{p_1}$, or $V_1^\frac{2 + f}{f}p_1 = V_2^\frac{2 + f}{f}p_2$
	* This means $V_2^\frac{2 + f}{f}p_2$ is a constant
	* $\frac{2 + f}{f} = 1 + \frac{2}{f} = \gamma > 1$, which means that for the same pressure, the volume will be smaller; or for the same volume, the pressure will be smaller
	* The adiabatic curve on the P-V diagram falls steeper than the isotherm

## Heat Capacities

* In general $C = \frac{Q}{\Delta T}$ is ill-defined because $Q$ depends on the environment, i.e. how the gas is being heated
* If $V$ is constant then $\Delta U = Q$ since there is no work; therefore we can define a constant volume heat capacity $C_v = \left(\frac{\Delta U}{\Delta T}\right)_V = \left(\pdiff{U}{T}\right)_V$
	* For an ideal gas $U = \frac{f}{2}NkT$ so $C_V = \frac{f}{2}kN$
* If $P$ is constant, $Q$ and $U$ have no straightforward relationship
	* $Q = \Delta U + p\Delta V$
	* $C_p = \left(\frac{\Delta U + p\Delta V}{\Delta V}\right)_p = \left(\frac{\Delta U}{\Delta T}\right)_p + p\left(\frac{\Delta V}{\Delta T}\right)_p$
	* $C_p = \left(\pdiff{U}{T}\right)_p + \left(\pdiff{V}{T}\right)_p$ for any gas in general
	* For the ideal gas $\left(\pdiff{U}{T}\right)_p = \left(\pdiff{U}{T}\right)_V = \frac{f}{2}NkT$ are the same since energy only depends on the temperature
	* $\left(\pdiff{V}{T}\right)_p = \left(\pdiff{}{T}\frac{NkT}{p}\right)_p = \frac{Nk}{p}$
	* Combing these we get $C_p = \frac{f}{2}Nk + Nk = \frac{f + 2}{2}Nk = \frac{f + 2}{2}C_v = \gamma C_v$
	* $C_p > C_v$ always holds true for any gas
		* For an ideal gas it is because some of the energy goes towards the expansion of the gas
		* This also works for everything else even if it contracts when being heated

## Directional Asymmetry of Time

* e.g. heat only flows from hot to cold, diffusion only happens from dense to diffuse
* This is due to the randomness inherent to a system of many bodies
* There is one unifying principle, the fundamental postulate of statistical mechanics: Consider a closed (constant energy, isolated) system of many particles, in the system every accessible microstate is equally likely

