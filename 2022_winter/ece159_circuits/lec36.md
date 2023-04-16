# Lecture 36, Apr 8, 2022

## Root-Mean-Square (RMS) Power

* The RMS (aka *effective value*) of a periodic signal $x(t)$ with period $T$ is given by $x_{rms} = x_{eff} = \sqrt{\frac{1}{T}\int _{t_0}^{t_0 + T} x^2(t)\,\dt}$
* AC voltages are often expressed in RMS
* Consider $v(t) = V_m\cos(\omega t + \theta _v)$, $T = \frac{2\pi}{\omega}$
	* $\alignedeqntwo[t]{v_{rms}}{\sqrt{\frac{1}{T}\int _{t_0}^{t_0 + T} x^2(t)\,\dt}}{\sqrt{\frac{1}{T}\int _0^T V_m^2\cos^2(\omega t + \theta _v)\,\dt}}{\sqrt{\frac{V_m^2}{T}\int _0^T \frac{1}{2} + \frac{1}{2}\cos(2\omega t + 2\theta _v)\,\dt}}{\sqrt{\frac{V_m^2}{T} \cdot \frac{1}{2}T}}{\sqrt{\frac{V_m^2}{2}}}{\frac{V_m}{\sqrt{2}}}$
		* Note the second term in the integral cancels since we're integrating a sinusoidal function over a multiple of its period
* Similarly for currents $i_{rms} = \frac{I_m}{\sqrt 2}$
* North American 110V AC outlets have an amplitude of $110\sqrt{2}\si{V}$
* RMS values are associated with the energy in the signal and applies to non-sinusoidal periodic waveforms as well

