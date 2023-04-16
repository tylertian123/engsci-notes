# Lecture 29, Mar 25, 2022

## Phasors (Continued)

* Phasors are often shown on a phasor diagram on a complex plane, where the length is the magnitude, and the angle is the phase offset
* Alternatively they can be expressed as $\bm V = V_m\angle\alpha = V_me^{j\alpha}$
* Example: Phasor for $v(t) = V_m\cos(377t + 60\degree)$ is $\bm V = V_me^{j60\degree}$; phasor for $i(t) = I_m\sin(377t + 30\degree)$ is $\bm I = I_me^{-j60\degree}$
	* Note phasors are defined in terms of cosines, which is why $30\degree$ becomes $-60\degree$
	* Also note how the frequencies don't affect the phasors
* Phasors can be used to add together two sinusoids in frequency domain
* Example: Using phasors, find the sum of $i_1(t) = 4\cos(\omega t + 30\degree)$ and $i_2(t) = 5\sin(\omega t - 20\degree)$
	* $\bm I_1 = 4e^{j30\degree}, \bm I_2 = 5e^{-j110\degree}$
	* Convert phasors to rectangular format to add them: $\bm I_1 = 4\cos(30\degree) + 4i\sin(30\degree), \bm I_2 = 5\cos(-110\degree) + 5i\sin(-110\degree)$
	* $\bm I_1 + \bm I_2 = 1.754 - 2.698j = 3.218e^{-j56.98\degree}$

## Derivatives and Integrals of Sinusoids

* $v(t) = V_m\cos(\omega t + \alpha) \implies \bm V = V_me^{j\alpha}$
* $\alignedimp[t]{\diff{v}{t} = -V_m\omega\sin(\omega t + \alpha) = V_m\omega\cos\left(\omega t + \alpha + \frac{\pi}{2}\right)}{\bm V = V_m\omega e^{j\left(\alpha + \frac{\pi}{2}\right)} = \left(\omega e^{j\frac{\pi}{2}}\right)\left(V_me^{j\alpha}\right) = j\omega V_me^{j\alpha}}$
* Taking the time-domain derivative multiplies the phasor by $j\omega$
* $\alignedimp[t]{\int v(t)\,\dt = \frac{V_m}{\omega}\sin(\omega t + \alpha) = \frac{V_m}{\omega}\cos\left(\omega t + \alpha - \frac{\pi}{2}\right)}{\bm V = \frac{V_m}{\omega}e^{j\left(\alpha - \frac{\pi}{2}\right)} = \left(\frac{1}{\omega}e^{-j\frac{\pi}{2}}\right)\left(V_me^{j\alpha}\right) = -\frac{j}{\omega}V_me^{j\alpha}} = \frac{1}{j\omega}V_me^{j\alpha}$
* Taking the time-domain integral multiplies the phasor by $\frac{1}{j\omega}$ (i.e. divide by $j\omega$)

## Phasor Relations for R, L, C

* Suppose $i(t) = I_m\cos(\omega t + \theta _i) \implies \bm I = I_me^{j\theta _i}$ passes through a resistor
	* Assuming PSC, by Ohm's law, $v(t) = Ri(t) = RI_m\cos(\omega t + \theta _i) \implies \bm V = RI_me^{j\theta _i} \implies \bm V = R\bm I$
* $\bm V = R\bm I$ for a resistor; voltage and current are in phase
	* In the phasor diagram, a resistor only changes the length of the phasor and does not rotate it
* For an inductor: $v(t) = L\diff{i}{t}$ in the time domain, so in the phasor domain, $\bm V = j\omega L\bm I$
	* Since $j = e^{j90\degree}$, an inductor introduces a $90\degree$ phase difference (voltage leads current by $90\degree$)
	* The magnitude is scaled by $\omega L$
	* In the phasor diagram, the two phasors have an angle of $90\degree$ relative to each other
* For a capacitor: $i(t) = C\diff{v}{t}$ in the time domain, so in the phasor domain, $\bm I = j\omega C\bm V$ or $\bm V = \frac{1}{j\omega C}\bm I$
	* A capacitor also introduces a $90\degree$ phase difference (voltage lags current by $90\degree$)

