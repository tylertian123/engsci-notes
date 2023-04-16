# Lecture 28, Mar 23, 2022

## Sinusoids and Phasors

* Many AC sources generate sinusoidal voltages and currents (e.g. power generators, the power grid)
* Generally $v(t) = V_m\sin(\omega t + \alpha)$ for a sinusoidal voltage
	* $V_m$ is the amplitude of the sinusoidal voltage in volts
	* $\omega$ is the angular frequency, in $\si{rad/s}$
	* $t$ is time in seconds, so that $\omega t$ has units of $\si{rad}$
		* The period is related by $T_0 = \frac{2\pi}{\omega}$, or $\omega = \frac{2\pi}{T_0}$
		* $T_0$ is the *fundamental period*, the smallest possible period
	* $\alpha$ is the phase/phase angle/initial phase/etc in radians
		* Note sometimes $\alpha$ may be given in degrees, in which case you need to multiply by $\frac{\pi}{180\degree}$ to convert to radians
		* A signal with larger $\alpha$ *leads* another signal, while a smaller $\alpha$ *lags* another signal
		* Phase leads or lags are commonly expressed with an angle in the $-\pi$ to $\pi$ range (e.g. "leading by $270\degree$" is unconventional)
	* We also define *frequency* (as opposed to angular frequency) as $f = \frac{1}{T_0} = \frac{\omega}{2\pi}$ with units of $\si{s^{-1}} = \si{Hz}$
* Note the phase difference between two sinusoidal signals is $\alpha _1 - \alpha _2$ in radians, but to convert this to time we need to divide by $\omega$
	* If two $\omega$ are different for two signals, the phase difference is undefined
	* Cosine has an additional phase offset of $+\frac{\pi}{2}$ when compared to sine
	* Adding a phase offset of $180\degree$ negates the sign
	* $\sin(\alpha \pm 180\degree) = -\sin(\alpha)$
	* $\cos(\alpha \pm 180\degree) = -\cos(\alpha)$
	* $\sin(\alpha \pm 90\degree) = \pm\cos(\alpha)$
	* $\cos(\alpha \pm 90\degree) = \mp\sin(\alpha)$
* Often sinusoidal signals are defined with a cosine function as $v(t) = V_m\cos(\omega t + \alpha)$
* Using Euler's formula, $V_me^{j(\omega t + \alpha)} = V_m\cos(\omega t + \alpha) + jV_m\sin(\omega t + \alpha)$ (where $j^2 = -1$)
	* $v(t) = \Re\left(V_me^{j(\omega t + \alpha)}\right) = \Re\left(V_me^{j\alpha}e^{j\omega t}\right)$
	* For a given $\omega$, $v(t)$ is uniquely determined by a complex number $V_me^{j\alpha}$ (magnitude is $V_m$, argument is $\alpha$)
		* This complex number is the *phasor* for the voltage, indicated by $\bm V = V_me^{j\alpha}$
* Similarly for currents, the phasor for $i(t) = I_m\cos(\omega t + \alpha)$ is $\bm I = I_me^{j\alpha}$

