# Lecture 31 (2-14), Mar 30, 2023

## Chemical (Diffusive) Equilibrium

* Consider once again 2 systems with $U_1, N_1, V_1$ and $U_2, N_2, V_2$ being brought together; what happens if we allow exchange of $U$ and $N$?
* Initially if we keep the barrier, the energy will exchange such that thermal equilibrium is reached with systems having $U_1'$ and $U_2'$
	* Note we have to allow exchange of energy because particles carry energy, so we can't exchange particles without exchanging energy
* We want to determine $U_1'', U_2'', N_1'', N_2''$ that maximizes entropy: $S = S_1(U_1'', N_1'') + S_2(U - U_1'', N - N_1'')$
	* We want $\pdiff{S}{U_1''} = 0 \implies \pdiff{S_1}{U_1''} = \pdiff{S_2}{(U - U_1'')}$
	* And also $\pdiff{S}{N_1''} = 0 \implies \pdiff{S}{N_1''} = \pdiff{S}{(N - N_1'')}$
	* Therefore we have that the system property $\pdiff{S_i}{N_i}$ for both systems must be equal
	* $S$ has units of energy per temperature, so $\pdiff{S}{N}$ also has units of energy per temperature
* Define $-\frac{\mu}{T} = \pdiff{S}{N}$, where $\mu$ is the *chemical potential* (or *diffusive potential*)
	* $\mu$ has units of energy
	* Note we defined it with the minus sign, so that the particles end up flowing from regions with higher chemical potential to lower chemical potential
* Example: ideal gas
	* $\alignedeqntwo[t]{\frac{\mu}{T}}{-\pdiff{}{N}kN\left(\ln\left(\frac{V}{N}\left(\frac{U}{3N}\right)^\frac{3}{L}\left(\frac{4\pi m}{h^2}\right)^\frac{3}{2}\right) + \frac{5}{2}\right)}{-k\ln\left(\frac{V}{N}\left(\frac{1}{2}kT\right)^\frac{3}{2}\left(\frac{4\pi m}{h^2}\right)^\frac{3}{2}\right)}$
	* Where we have replaced $\frac{U}{3N} = \frac{1}{2}kT$
	* Therefore $\mu(T, V, N) = -kT\ln\left(\frac{\text{const}}{n\lambda _d^3}\right)$
	* As the number density $n$ increases, the log goes down, so we need the minus sign to have $\mu$ higher in regions of higher number density
	* $\mu$ is a proxy for the density

## Applications to Chemistry

* Suppose we have a gas of $N_h$ hydrogen atoms occupying some space; as hydrogen atoms bump into each other, some of them may be ionized so we have some protons $N_p$ and electrons $N_e$
* All 3 gases exist in thermal and chemical equilibrium
* The equilibrium condition is specified by two of the energies and a $\Delta$ (for every $\Delta$ in hydrogen gained, we lose $\Delta$ protons and $\Delta$ electrons)
* Note we need to consider each hydrogen has lower energy than a proton and an electron together; to do this we need to consider the rest energies of the particles to get the ionization energy
* Maximize entropy: $\frac{n_en_p}{n_h} = \frac{1}{\left(\frac{4\pi}{h^2}m_e\frac{kT}{2}\right)^\frac{3}{2}} = e^{-\frac{I}{kT}}$ where $n_e = \frac{N_e}{V} = \frac{N_p}{V} = n_p, n_h = \frac{N_h}{V}$ and $I$ is the ionization energy, 13.6 eV
	* This is known as the Saha equation
	* At low temperatures, $-\frac{I}{kT} \gg 1$ so $n_en_p \approx 0$ -- there is very little interaction because the particles move slowly
	* As the gas is heated, increased particle velocity leads to more interaction and more breakdown
* In general if we have stoichiometric coefficients, we can do the derivation to find each number density being taken to the power of their stoichiometric coefficient
* We can also express the law as $\frac{n_B^{\nu _B}n_C^{\nu _C}}{n_A^{\nu _A}} = K(T)$, which is known as the law of mass action
* $e^{-\frac{I}{kT}}$ is known as the *Boltzmann factor*

