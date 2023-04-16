# Lecture 15, Oct 7, 2022

## Energy and Power of a Travelling Wave

* To propagate a wave, we need a power source; we want to find this power
* Energy is carried by either kinetic or potential energy
* Power $P = Fv$ so $P(x, t) = -\tau\pdiff{y}{x}\pdiff{y}{t}$
	* $P(x, t) = \sqrt{\mu\tau}A^2\omega^2\sin^2(kx - \omega t + \phi _0)$
* Average power is $\frac{1}{2}\sqrt{\mu\tau}A^2\omega^2$
	* Max power is $\sqrt{\mu\tau}A^2\omega^2$
	* Note $Z = \sqrt{\mu \tau}$ and $A\omega = v_{max}$
* Sound waves propagate in multiple directions, so we define *intensity* $I = \frac{P_{avg}}{S}$, average power per unit area
	* Intensity is given by $\frac{\sqrt{\rho B}A^2\omega^2}{2} = \frac{\Delta p_{max}^2}{2\rho v} = \frac{\Delta p_{max}^2}{2\sqrt{\rho B}}$
	* In 2D, $I \propto \frac{1}{r}$
	* In 3D, $I \propto \frac{1}{r^2}$; if power at the source is $P$, then $I = \frac{P}{4\pi r^2}$

## Attenuation

* Energy is lost to the wave medium as heat as the wave passes through
* Rate of absorption is proportional to wave intensity
* $\diff{I}{x} = -\alpha I$ where $\alpha$ is the *attenuation coefficient*
	* $I(x) = I(x_0)e^{-\alpha(x - x_0)}$
	* Higher frequency gives a higher attenuation
* Attenuation and spreading are additive
	* Multiply by $\left(\frac{r_0}{r}\right)^{N - 1}$ to add the spreading, where $N$ is the number of dimensions
	* $I(r) = I(r_0)e^{-a(r - r_0)}\left(\frac{r_0}{r}\right)^{N - 1}$
* Note usually attenuation is given per unit length, but sometimes it's given per wavelength

## Intensity Level

* Intensity level is measured in decibels, $\beta = (10\si{dB})\log\left(\frac{I}{I_0}\right)$
* For us, every $10\times$ increase in intensity sounds twice as loud
* Human range of hearing is from $I_0 = \SI{1e-12}{W/m^2}$ (threshold of hearing) to $I = \SI{1e1}{W/m^2}$ (threshold of pain)
* To calculate decibels of (sound) intensity, use $I_0 = \SI{1e-12}{W/m^2}$ (remember to use a base 10 log!)

