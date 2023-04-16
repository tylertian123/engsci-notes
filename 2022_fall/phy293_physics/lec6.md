# Lecture 6, Sep 20, 2022

## Average Power of a Forced Oscillator

* When average power is potted against $\frac{\omega}{\omega _0}$, max power occurs near resonance
	* From the curve of average power vs frequency, we can figure out damping
	* Full width at half height when plotted against $\omega$ is $\gamma$
* The shape of this curve gets more asymmetric with more damping (higher $\gamma$)
* Full width at half height is $\frac{\gamma}{\omega _0} = \frac{1}{Q}$
	* The smaller the $\gamma$ the narrower the peak
* Assume $\omega _0 \approx \omega$, then the equation can be simplified
	* The max power can be determined to be $\frac{F_0^2}{2m\gamma}$

## Example: RLC Circuit

* $\diffn{2}{q}{t} + \frac{R}{L}\diff{q}{t} + \frac{1}{LC}q = \frac{\epsilon _0}{L}\cos(\omega t)$
* The solution gives an amplitude similar to that of the mass spring system

## Transient Response

* Eventually the frequency of the driven oscillator matches the frequency of the driver
* The system has inertia, so initially the system is inclined to oscillate at its natural frequency
* In the initial period we have a sum of two oscillations, the driven and natural
* For damped oscillators the frequency $\omega _0$ oscillations will dissipate at a rate depending on $\gamma$
	* This is called the *transient response*

