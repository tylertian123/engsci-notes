# Lecture 37, Apr 11, 2022

## Power In Terms of RMS Values

* Average power can be expressed in terms of the RMS voltage and current as $P_{ave} = V_{rms}I_{rms}\cos(\theta _v - \theta _i)$
	* Using phasors $P_{ave} = \Re(\bm V_{rms}\bm I_{rms}^*)$
* Likewise for reactive power $Q = V_{rms}I_{rms}\sin(\theta _v - \theta _i)$
	* Using phasors $Q = \Im(\bm V_{rms}\bm I_{rms}^*)$
* For an impedance, recall for $\bm Z = R + jX$, average power $P_{ave} = \Re\left(\frac{(R + jX)\abs{\bm I}^2}{2}\right) = \frac{1}{2}RI_m^2 = RI_{rms}^2$
* For reactive power, $Q = \Im\left(\frac{(R + jX)\abs{\bm I}^2}{2}\right) = \frac{1}{2}XI_m^2 = XI_{rms}^2$

## Apparent Power & Power Factor

* Active power $P_{ave} = \frac{1}{2}V_mI_m\cos(\theta _v - \theta _i) = V_{rms}I_{rms}\cos(\theta _v - \theta _i)$, can be divided into two terms, the *apparent power* $S = \frac{1}{2}V_mI_m = V_{rms}I_{rms}$ (in volt-amps), and the *power factor* $PF = \cos(\theta _v - \theta _i)$
* Consider an impedance $\bm Z$ with voltage $\bm V$ and current $\bm I$, $\bm Z = \frac{\bm V}{\bm I} = \frac{V_m}{I_m}\angle (\theta _v - \theta _i)$
	* Notice the power factor is the cosine of the angle of the impedance here $PF = \cos(\angle \bm Z)$
* The power factor does not uniquely determine the impedance, since cosine is an even function, so given only a power factor we don't know if the angle of the impedance is positive or negative
	* Define a power factor as *leading* if current leads voltage, i.e. $\theta _v - \theta _i < 0$, and *lagging* if current lags voltage, i.e. $\theta _v - \theta _i > 0$
* For a resistor, $\angle \bm Z = 0$ so the power factor is $\cos(0) = 1$, neither lagging nor leading
	* This is the only type of impedance to have a power factor of 1
* For an inductor, $\angle \bm Z = 90\degree$ so the power factor is $\cos(90\degree) = 0$, and lagging since $\angle \bm Z > 0$
* For a capacitor, $\angle \bm Z = -90\degree$ so the power factor is also $0$, but this time leading
* For an RL circuit, $\bm Z = R + j\omega L$ so $0\degree < \angle \bm Z < 90\degree$ so the power factor is between 0 and 1 lagging
* For an RC circuit, $\bm Z = R - \frac{j}{\omega C}$ and the power factor is between 0 and 1 leading
* For an RLC circuit, $\bm Z = R + j\left(\omega L - \frac{1}{\omega C}\right)$ so the power factor is between 0 and 1, either leading or lagging, depending on the relative values of the inductance and capacitance

