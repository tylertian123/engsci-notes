# Lecture 34, Apr 4, 2022

## Different Types of Power in AC Circuits

* Instantaneous power: $P(t) = \frac{V_mI_m}{2}\cos(\theta) + \frac{V_mI_m}{2}\cos(2\omega t - \theta)$
* *Average power* (aka *real* or *active power*): $P_{ave} = \frac{V_mI_m}{2}\cos(\theta _v - \theta _i)$
	* If we integrate the instantaneous power over one period, the time-variant second term cancels out, and we're left with only the first term
	* Average power is in watts
* Using phasors, if $\twopiece{v(t) = V_m\cos(\omega t)}{i(t) = I_m\cos(\omega t - \theta)} \implies \twopiece{\bm V = V_m\angle 0\degree}{\bm I = I_m\angle -\theta}$, then $\frac{\bm V\bm I^*}{2} = \frac{(V_m\angle 0 \degree)(I_m\angle\theta)}{2} = \frac{V_mI_m}{2}\angle\theta = \frac{V_mI_m}{2}\cos(\theta) + j\frac{\bm V_m\bm I_m}{2}\sin(\theta)$, so $P_{ave} = \Re\left(\frac{\bm V\bm I^*}{2}\right)$
* $\alignedeqntwo[t]{P(t)}{\frac{V_mI_m}{2}\cos(\theta) + \frac{V_mI_m}{2}(2\omega t - \theta)}{\frac{V_mI_m}{2}\cos(\theta) + \frac{V_mI_m}{2}\cos(2\omega t)\cos(\theta) + \frac{V_mI_m}{2}\sin(2\omega t)\sin(\theta)}{\frac{V_mI_m}{2}\cos(\theta)\left(1 + \cos(2\omega t)\right) + \frac{V_mI_m}{2}\sin(\theta)\sin(2\omega t)}$
* *Reactive power*: $Q = \frac{V_mI_m}{2}\sin(\theta)$
	* Reactive power has units of volt-amp-reactive, more commonly known as $\si{VAR}$
* Note that from the relation derived above for average power, we have $Q = \Im\left(\frac{\bm V_m\bm I_m^*}{2}\right)$
* Instantaneous power in terms of average and reactive power: $P(t) = P_{ave}(1 + \cos(2\omega t)) + Q\sin(2\omega t)$
* Conservation holds for both active and reactive power

## AC Power for R, L, and C

* For a resistor voltage and current are in phase, so $\theta _v = \theta _i \implies \theta = 0 \implies P_{ave} = \frac{V_mI_m}{2}, Q = 0$
	* For instantaneous power, we are left with only the first term: $P(t) = \frac{V_mI_m}{2}\left(1 + \cos(2\omega t)\right)$
	* Plotting this gives a sinusoid with a DC offset equal to the amplitude, i.e. the value varies between $0$ and $V_mI_m$
	* $P_{ave} = \Re\left(\frac{\bm V\bm I^*}{2}\right) = \Re\left(\frac{R\abs{I}^2}{2}\right) = \Re\left(\frac{RI_m^2}{2}\right) = \frac{1}{2}RI_m^2$
		* This is exactly like the expression for power for DC
	* $Q = \Im\left(\frac{\bm V\bm I^*}{2}\right) = 0$
* For an inductor $\theta _v - \theta _i = 90\degree$ so we're only left with $P(t) = \frac{V_mI_m}{2}\sin(2\omega t)$
	* This is a sinusoid with no DC offset
		* Every half-period, an inductor absorbs energy (positive power), and the next half-period it releases the same amount of energy back
	* $P_{ave} = 0$
	* $Q = \frac{V_mI_m}{2}\sin(90\degree) = \frac{V_mI_m}{2}$
	* Alternatively $Q = \Im\left(\frac{j\omega L\bm I\bm I^*}{2}\right) = \frac{1}{2}\omega LI_m^2 = \frac{1}{2}X_LI_m^2$ where $X_L$ is the reactance
* For a capacitor $\theta = -90\degree$ so $P(t) = -\frac{V_mI_m}{2}\sin(2\omega t)$
	* This is the same as an inductor but negated; every half-period it absorbs energy, and then in the next half-cycle it releases power back
	* $P_{ave} = 0$
	* $Q = \frac{V_mI_m}{2}\sin(-90\degree) = -\frac{V_mI_m}{2}$
	* Alternatively $Q = \Im\left(\frac{-j\bm I\bm I^*}{\omega C}\right) = -\frac{1}{2\omega C}I_m^2 = \frac{1}{2}X_CI_m^2$ where $X_C$ is the reactance

