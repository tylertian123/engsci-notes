# Lecture 33 (2-16), Apr 3, 2023

## Boltzmann Distribution

* A *microcanonical distribution* is $\frac{1}{\Omega(U, V, N)}$
* Consider a system with fixed $V$ and $N$, with varying $E$ in thermal contact with a thermal reservoir with energy $U_R$; the system and the reservoir form a closed system with $U_{tot}$ fixed
* The probability of any microstate of the system and the reservoir is the same, $\frac{1}{\sum _{E'} \Omega(E)\Omega _R(U_{tot} - E')}$
* Specify a microstate in the system $S$ by $s$; what is the probability of $S$ being in a particular microstate $s$ with energy $E_s$?
	* Note we're not trying to find the probability of the system having energy $E_s$, since there can be many microstates with the same energy; we're looking for the probability of each microstate with this energy
	* If the system is in $s$, the reservoir can be in any microstate with energy $U_{tot} = E_s$
	* Therefore we have $\frac{\Omega _R(U_{tot} - E_s)}{\sum _{E'} \Omega(E')\Omega _R(U_{tot} - E')}$
* $\frac{P(E_{\bar s_1})}{P(E_{\bar s_2})} = \frac{\Omega _R(U_{tot} - E_{\bar s_1})}{\Omega _R(U_{tot} - E_{\bar s_2})} = e^{\frac{1}{k}S_R(U_{tot} - E_{\bar s_1}) - S_R(U_{tot} - E_{\bar s_1})}$ where $S_R$ is the entropy
* Assume the reservoir is big, so $S_R(U_{tot} - E) \approx S_R(U_{tot}) - E\eval{\pdiff{S_R}{U}}{U = U_{tot}}$ (i.e. the changes in entropy are small enough that we can use a linear approximation)
	* $\frac{P(E_{\bar s_1})}{P(E_{\bar s_2})} = e^{\frac{1}{k}\left(\left(E_{\bar s_2} - E_{\bar s_2}\right)\eval{\pdiff{S_R}{U}}{U = U_{tot}}\right)} = e^{\frac{1}{k}\left(\left(E_{\bar s_2} - E_{\bar s_2}\right)\frac{1}{T}\right)}$
	* Therefore we find $\frac{P(E_{\bar s_1})}{P(E_{\bar s_2})} = e^{-\frac{E_{\bar s_1} - E_{\bar s_2}}{kT}}$ -- the relative probability only depends on the difference in energy and temperature
	* $\frac{P(E_{\bar s_1})}{e^{-\frac{E_{\bar s_1}}{kT}}} = \frac{P(E_{\bar s_2})}{e^{-\frac{E_{\bar s_2}}{kT}}}$ is true for any $\bar s_1$ and $\bar s_2$, therefore this ratio must not depend on $\bar s$, so let it be a constant, $\frac{1}{Z}$
* Therefore $P(E_{\bar s}) = \frac{1}{Z}e^{-\frac{E_{\bar s}}{kT}}$, which is known as the *Boltzmann distribution* (or *canonical distribution*)
	* $Z$ is independent of $\bar s$ and characterizes the system; it is a normalization, so that $\sum _{\bar s}P(E_{\bar s}) = 1$
	* $Z = \sum _{\bar s}e^{-\frac{E_{\bar s}}{kT}}$
	* $Z$ is known as the Boltzmann partition function (function of state)
* We may also compute it by $Z = \sum _{E} e^{-\frac{E}{kT}}\Omega(E) = \sum _E e^{-\frac{E}{kT}}e^{\frac{1}{k}S(E)} = \sum _{E} e^{-\frac{E - TS(E)}{kT}}$
	* Instead of summing over all microstates, we instead sum over all possible energies (i.e. the spectrum of $\hat H$)
	* The quantity $F = E - TS(E)$ is known as the Helmholtz free energy
* The probability that the system has energy $E$ is just $\frac{1}{Z}e^{-\frac{E - TS(E)}{kT}} = \frac{1}{Z}e^{-\frac{F}{kT}}$, which is maximized when $F$ is minimized -- therefore macroscopically, the system behaves as to minimize the Helmholtz free energy
	* The thermodynamic potential for the system is therefore the Helmholtz free energy

