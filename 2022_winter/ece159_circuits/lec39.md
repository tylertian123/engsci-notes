# Lecture 39, Apr 12, 2022

## AC Power Example

* \begin{circuitikz}\draw (0, 0) to[open, v=$\bm V_s$, invert, o-o] ++(0, 1.5) to[R=$0.05\si{\ohm}$, i_=$\bm I_s$] ++(1.5, 0) to[L=$j50\si{\ohm}$] ++(1.5, 0) -- ++(1.5, 0) coordinate(topright) to[european resistor=$L_1$, v=$250\angle 0\degree\si{V}$(rms)] ++(0, -1.5) coordinate(bottomright) -- (0, 0); \draw (topright) -- ++(1.5, 0) to[european resistor=$L_2$] ++(0, -1.5) -- (bottomright); \end{circuitikz}
	* In the circuit above, $L_1$ absorbs $8\si{kW}, PF = 0.8$ leading; $L_2$ absorbs $20\si{kVA}, PF = 0.6$ lagging; find the power factor of the combined load, $\bm I_s$, and the average power loss of the transmission line
	* $L_1$'s power draw has units of watts, which indicates that it's an average power; $L_2$'s power draw is in volt-amps, indicating either apparent, instantaneous or complex power, but since it's a real time-independent expression it's an apparently power
		* Complex power can only be entirely real when the power factor is 1, since in that case the angle is zero
	* Note the complex power of two combined loads is simply the sum, so for part 1, we want to find the complex power of both loads, add them and then find the angle to get the PF
	* First we need the apparent power of $L_1$ since we only have the average power:
		* $P_1 = V_{rms}I_{rms}PF \implies V_{rms_1}I_{rms_1} = \frac{8\si{kW}}{0.8} = 10\si{kW} = S_1$
		* Now we can find angle by $\theta = \cos^{-1}(0.8) = \pm 36.87\degree$
		* Since the power factor is leading, the angle is negative, so $\bm S_1 = 10000\angle -36.87\degree \si{VA}$
		* Now we can calculate $\bm S_1 = P + jQ = 8000 + j10000\sin(-36.8\degree) = 8000 - j6000\si{VA}$
	* Do the same for $L_2$:
		* $\theta = \cos^{-1}(0.6) = \pm 53.13\degree$, since the power factor is lagging, this is positive
		* $P_2 = S_2 \cdot 0.6 = 12\si{kW}$
		* Combined $\bm S_2 = 12000 + j16000\si{VA}$
	* Adding the two loads gives a combined complex power of $20000 + j10000\si{VA}$, which has an angle of $26.56\degree$, giving it a power factor of $0.894$ lagging
	* Recall $\bm S = \bm V\bm I^* \implies \bm I_s^* = \frac{\bm S}{\bm V} \implies \bm I_s = \frac{\bm S^*}{\bm V^*} = \frac{22361\angle -26.56\degree}{250\angle 0\degree} = 89.44\angle -26\degree\si{A}$
	* To find the average power loss, we find the active power of the resistor and inductor (since the inductor has only reactive power we can ignore it)
		* $P_{loss} = R\abs{I_s}^2 = 0.05\si{\ohm} \cdot (89.44\si{A})^2 = 400\si{W}$

## Power Factor Correction

* For most practical loads, the power factors are lagging since most loads can be modelled by $\bm Z = R + j\omega L$; some of the power is loss through the transmission line, which is proportional to the square of the magnitude of the current phasor
* The more the voltage and current are out of phase, the more inefficient the power transmission is (large magnitude of line current which leads to high loss, but low power factor for the actual load)
* By properly choosing a capacitance in parallel with the load, we can cancel or reduce the imaginary part of $\bm I_{load}$, putting the voltage and current more in phase and increasing transmission efficiency ($\theta _v - \theta _i$ becomes smaller, power factor becomes bigger, which is why this method is called *power factor correction*)
* If the corrected power factor is 1, we call it *full power factor correction*; otherwise it's a *partial power factor correction*
* Example: For the previous circuit, we had a frequency of $60\si{Hz}$
	* We want to choose $\bm S_C$ such that $\bm S + \bm S_C$ is entirely real so it has a power factor of 1
	* This means for the capacitor $Q = -j10000$, but also for a capacitor $Q = jX_C\abs{\bm I_C}^2 = jX_C\abs*{\frac{\bm V}{jX_C}}^2 = j\frac{\abs{\bm V}^2}{X_C}$
	* Therefore $\frac{\abs{\bm V^2}}{X_C} = -10000 \implies X_C = -6.25\si{\ohm}$
	* From this reactance we can find the capacitance as $X_C = -\frac{1}{2\pi f C} \implies C = 424.4\si{\micro F}$

