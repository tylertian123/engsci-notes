# Lecture 33, Apr 4, 2022

## Thevenin and Norton Equivalent Circuits for AC Circuits

* Thevenin and Norton equivalent circuits can be found for AC circuits as well
* Thevenin voltage and Norton current become the phasors for the Thevenin voltage and Norton current
* The Thevenin/Norton resistance becomes an impedance
* Thevenin voltage/resistance and Norton current can be found in the same way as in the DC case
* Source transformation also applies for AC circuits with impedances and phasors

## Power in AC Circuits

* For AC circuits $P = vi$ also holds, but now $v$ and $i$ are time-variant, so additional complexity is involved
* Power is a function of time: $P(t) = v(t)i(t) = v(t)i(t)$
	* In the time domain, $v(t) = V_m\cos(\omega t + \theta _v), i(t) = I_m\cos(\omega t + \theta _i)$
	* Without loss of generality change the time reference so that $\theta _v = 0$
	* $P(t) = V_mI_m\cos(\omega t)\cos(\omega t - \theta)$ where $\theta = \theta _v - \theta _i$
	* Use $\cos(\alpha)\cos(\beta) = \frac{1}{2}\left(\cos(\alpha - \beta) + \cos(\alpha + \beta)\right)$
	* $P(t) = \frac{V_mI_m}{2}\left(\cos(\theta) + \cos(2\omega t - \theta)\right)$
	* This $P(t)$ is the *instantaneous power* (in volt-amps)
* Instantaneous power is split into two parts: $\frac{V_mI_m}{2}\cos\theta$, the constant part, and $\frac{V_mI_m}{2}\cos(2\omega t - \theta)$, the time-variant term
	* Plotting power against time shows a sinusoid offset above the time axis
	* Since $\cos \theta \leq 1$ we always have $P(t) \leq V_mI_m$
	* $\theta$ shifts the curve up or down as well as left and right

