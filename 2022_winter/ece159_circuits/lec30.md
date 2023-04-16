# Lecture 30, Mar 28, 2022

## KVL and KCL in the Phasor Domain

* Regular KVL on a loop gives $\alignedimp[t]{\sum _{i = 1}^n v_i(t) = 0}{\sum _{i = 1}^n V_i\cos(\omega t + \alpha _i) = 0}{\Re\left\{\sum _{i = 1}^n V_ie^{j\alpha _i}e^{j\omega t}\right\} = 0}{\Re\left\{\left(\sum _{i = 1}^n V_ie^{j\alpha _i}\right)e^{j\omega t}\right\} = 0}{\sum _{i = 1}^n \bm V_i = 0}$
* Similarly for KCL on a node, $\sum _{i = 1}^n \bm I_n = 0$
* Both KVL and KCL hold in the phasor/frequency domain

## Impedance

* Consider a general circuit element: \begin{circuitikz}\draw (0, 0) to[european resistor, v=$v(t)$, i=$i(t)$, o-o] (1.5, 0); \end{circuitikz}
	* Suppose $v(t) = V_m\cos(\omega t + \theta _v)$ and $i(t) = I_m\cos(\omega t + \theta _i)$
* *Impedance* for this element is defined as $\bm Z = \frac{\bm V}{\bm I} = \frac{V_m\angle\theta _v}{I_m\angle\theta _i} = \left(\frac{V_m}{I_m}\right)\angle(\theta _v - \theta _i)$ where $\bm V$ and $\bm I$ are the phasors for the voltage and current (assuming PSC)
	* Impedance is similar to resistance in a DC circuit
	* Unit for impedance is ohms
	* Expressed in rectangular form, $\bm Z = R + jX$
		* The real part $R$ is the *resistance*
		* The imaginary part $X$ is the *reactance*
		* Both have units of ohms
* Similar to conductance in DC circuits, for AC define the *admittance* as $\bm Y = \frac{\bm I}{\bm V} = \frac{1}{\bm Z}$
	* Admittance has the same units as conductance, Siemens or mhos
	* Expressed in rectangular form, $\bm Y = G + jB$, where $G$ is the *conductance*, and $B$ is the *susceptance*, both having units of Siemens

## Impedance Relations for Passive Components

* For a resistor: \begin{circuitikz} \draw (0, 0) to[R=$R$, v=$v(t)$, i=$i(t)$, o-o] (1.5, 0); \end{circuitikz}
	* $\bm Z_R = \frac{\bm V}{\bm I} = \frac{R\bm I}{\bm I} = R$
	* The impedance of a resistor is just the resistance of that resistor
	* A resistor has no reactance; voltage and current are always in phase
* For an inductor: \begin{circuitikz} \draw (0, 0) to[L=$L$, v=$v(t)$, i=$i(t)$, o-o] (1.5, 0); \end{circuitikz}
	* $\bm Z_L = \frac{\bm V}{\bm I} = \frac{j\omega L\bm I}{\bm I} = j\omega L$
	* The impedance of an inductor is entirely imaginary, i.e. it has no resistance but $\omega L$ reactance
	* Note the impedance is dependent on frequency; when $\omega \to 0$, $\bm Z_L \to 0$, and when $\omega \to \infty$, $\bm Z_L \to \infty$
	* An inductor affects higher frequency signals more
	* Intuitively, decreasing the frequency makes the current closer to DC conditions, under which the inductor is a short circuit
* For a capacitor: \begin{circuitikz} \draw (0, 0) to[C=$C$, v=$v(t)$, i=$i(t)$, o-o] (1.5, 0); \end{circuitikz}
	* $\bm Z_C = \frac{\bm V}{\bm I} = \frac{\bm V}{j\omega C\bm V} = \frac{1}{j\omega C} = -\frac{j}{\omega C}$
	* The impedance of a capacitor is also pure imaginary; resistance is zero and reactance is $-\frac{1}{\omega C}$
	* When $\omega \to 0$, $\bm Z_C \to \infty$; when $\omega \to \infty$, $\bm Z_C \to 0$
	* A capacitor affects lower signal frequencies more
	* Intuitively, lower frequencies are closer to DC conditions, under which a capacitor is an open circuit

## Equivalent Impedances

* Consider a number of impedance elements in series; all elements have the same $\bm I$ so across each there is a voltage of $\bm V_i = \bm Z_i\bm I$, so $\bm V = \bm I\sum _{i = 1}^n \bm Z_i \implies \frac{\bm V}{\bm I} = \sum _{i = 1}^n \bm Z_i$
* The equivalent impedance for a series connection is $\bm Z_{eq} = \sum _{i = 1}^n \bm Z_i$
* For a parallel connection the impedance is $\frac{1}{\bm Z_{eq}} = \sum _{i = 1}^n \frac{1}{\bm Z_i}$

