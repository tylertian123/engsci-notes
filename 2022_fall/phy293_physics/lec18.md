# Lecture 18 (2-2), Oct 24, 2022

## Blackbody Radiation

* Total radiation from a body is the sum of reflection and absorption
* A *blackbody* is some object that absorbs all incoming light at all wavelengths, i.e. no reflection
	* In order to satisfy energy balance, this blackbody must radiate out power
	* Kirchhoff's Law: Emissive power is proportional to absorption coefficient
		* Therefore emissive power of a blackbody is a universal property determined only by temperature
* Intuitively we know that things glow when they're hot
	* The spectral function of a hot object has more low wavelength emissions
	* Total radiative energy is proportional to $T^4$ (Stefan-Boltzmann Law)
	* Peak wavelength is inversely proportional to temperature, i.e. $\lambda _{max}T$ is constant (Wien's Displacement Law)
* To approximate a blackbody experimentally, Wien + Lummer used a box with a tiny hole; when light goes in, it reflects around inside and has a negligible chance of coming back out

### Blackbody Radiation Theory

* Spectral distribution function $\rho$ is given by $\rho(\lambda, T) = \lambda^{-5}f(\lambda T)$, since $\lambda _{max}T$ is constant
* Wien guessed $\rho(\lambda, T) = \frac{c_1}{\lambda^5}e^{-\frac{c_2}{\lambda T}}$, which fits experimental results
	* Planck aimed to come up with a theory that explained this
* Discrepancy between Wien's model and experimental data is observed for longer wavelengths

### Planck's Law

* Planck assumed the energy of blackbody radiation is quantized in the calculation of average energy
	* In the classical picture $\braket{E} = \int _0^{\infty} Ef(E)\,\dd E$ where $f(E) = ce^{-\frac{E}{kT}}$ (Boltzmann)
		* This works out to $kT$, which does not match experimental data
	* Planck calculated $\braket{E} = \sum _0^\infty Ef(E)$
		* Assume $E = n(hf)$, i.e. energy is in quantized in units of some value proportional to frequency
		* This works out to $\frac{hf}{e^{-hf}{kT} - 1}$
* This matches Wien's model at lower wavelengths and explains the discrepancy at higher wavelengths due to the $-1$
* $\rho(\lambda, T) = \frac{8\pi hc}{\lambda^5}\frac{1}{\exp\left(\frac{hc}{\lambda k_BT}\right) - 1}$
* $h$ is *Planck's constant*, $h = \SI{6.62607015e-34}{m^2.kg/s}$
* Even though this quantization of energy was used to solve the blackbody radiation problem, no one really thought it was physically meaningful at the time -- except for Einstein

## Specific Heat of Solids

* Specific heat: amount of heat required to raise the temperature of matter by a unit amount
* Dulong-Petit Law: all solids have the same molar specific heat
* Diamond's specific heat is way lower than what the D-P law predicts
* Einstein solved this by assuming each oscillator in a solid has quantized energy levels, similar to the blackbody radiation problem

