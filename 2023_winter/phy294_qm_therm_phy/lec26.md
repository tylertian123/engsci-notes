# Lecture 26 (2-9), Mar 17, 2023

## 2 Einstein Solids

* The thermodynamic limit: in the limit as $N \to \infty, V \to \infty, E \to \infty$ (all extensive properties), but keeping the density and energy density $\frac{E}{N}, \frac{N}{V}$ fixed, the results of statistical mechanics become certainties instead of probabilistic
* Recall for the Einstein solid $E = \hbar\omega q, \Omega = \frac{(N - 1 + q)!}{(N - 1)!q!}$
	* We keep $\frac{q}{N}$ fixed, but we could either have $\frac{q}{n} \ll 1$ or $\frac{q}{n} \gg 1$
* First consider the classical limit, where $\frac{q}{n} \gg 1$
	* For large $N$ the multiplicity function just becomes $\frac{(N + q)!}{N!q!}$
	* $\ln\Omega = \ln(N + q)! - \ln N! - \ln q!$
	* Stirling approximation: $\ln n! \approx n\ln n$ for large $n$
	* $\ln \Omega \approx (N + q)\ln(N + q) - N\ln N - q\ln q = N\ln\left(q\left(1 + \frac{N}{q}\right)\right) + q\ln\left(q\left(1 + \frac{N}{q}\right)\right) - N\ln N - q\ln q$
	* $\ln \Omega = N\ln q + N\ln\left(1 + \frac{N}{q}\right) + q\ln q + q\ln\left(1 + \frac{N}{q}\right) - N\ln N - q\ln q$
	* $\ln \Omega \approx N\ln q + N\frac{N}{q} + N - N\ln N = N\ln q + N\ln e - N\ln N = \ln q^N + \ln e^N - \ln N^N$
	* $\ln \Omega = N\ln\frac{qe}{N}$ or equivalently $\Omega(q, N) = \left(\frac{qe}{N}\right)^N$
	* Entropy is $S = kN\ln\frac{qe}{N} = kN\ln\frac{Ee}{\hbar\omega N}$
	* $\frac{1}{T} = \pdiff{S}{E} = \frac{kN}{E}$ or $\frac{E}{N} = kT$
		* This is equipartition!
	* Note the assumption that $\frac{q}{N} \gg 1 \implies kT \gg \hbar\omega$
* What about $\frac{q}{N} \ll 1$?
	* $\Omega(q, N) = \frac{(N + q)!}{N!q!}$ is symmetric with respect to switching $q$ and $N$
	* This means we can do this case in exactly the same way just by swapping $N$ and $q$
	* $\Omega = \left(\frac{Ne}{q}\right)^q$
	* $S = k\ln\left(\frac{Ne}{q}\right)^q = k\frac{E}{\hbar\omega}\ln\frac{Ne\hbar \omega}{E}$
	* $\frac{1}{T} = \frac{k}{\hbar\omega}\ln\left(\frac{N\hbar\omega}{E}\right)$
	* $\frac{E}{N} = \hbar\omega e^{-\frac{\hbar\omega}{kT}}$
		* Equipartition does not hold
		* If temperature is not enough to excite vibrational normal modes the energy per particle drops off exponentially

## Distribution of Energies

* What is the probability of the energies of the system being different?
* Take two Einstein solids with the same $N$ and flow
* $P(x) \sim \Omega _A\left(\frac{q}{2} - x\right)\Omega _B\left(\frac{q}{2} + x\right) = \left(\frac{\left(\frac{q}{2} - x\right)e}{N}\right)^N\left(\frac{\left(\frac{q}{2} + x\right)e}{N}\right)^N = \left(\frac{e^2}{N^2}\right)^N\left(\frac{q^2}{4} - x^2\right)^N$
* Take the ratio $\frac{P(x)}{P(0)} = \frac{\left(\frac{q^2}{4} - x^2\right)^N}{\left(\frac{q^2}{4}\right)^N} = \left(1 - \frac{qx^2}{q^2}\right)^N$
* $\ln\frac{P(x)}{P_0} = N\ln\left(1 - \left(\frac{x}{\frac{q}{2}}\right)^2\right)$
* $\frac{\abs{x}}{\frac{q}{2}}$ is the relative energy balance
* Consider small energy balances, we can approximate it as $-N\left(\frac{x}{\frac{q}{2}}\right)^2$
* $P(x) = P_0e^{-N\left(\frac{x}{\frac{q}{2}}\right)^2}$
* As $N \to \infty$, $P(x)$ becomes nonzero only at $x = 0$, making it a delta function, so the distribution of temperatures is now a certainty

