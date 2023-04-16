# Lecture 5, Sep 19, 2022

## Driven Oscillators

* An oscillator is driven by another oscillation
* With time the frequency of the oscillator will match the driving frequency
	* Initially the movement is messy (transient response), but with time it tries to match the driver
	* There will always be a phase lag
* Maximum amplitude happens when the driving frequency matches the natural frequency of the oscillator
	* Further increasing the frequency at this point decreases the amplitude, even if the driving frequency is a multiple of the natural frequency

### Undamped Forced Oscillation

* Equation of motion: $m\diffn{2}{x}{t} + kx = F_0\cos(\omega t)$
	* Assume the spring moves according to $\xi(t) = \xi _0\cos(\omega t)$, then $F_0 = k\xi _0$
* The solution is $x(t) = A(\omega)\cos(\omega t - \delta)$
	* $\delta$ is the phase lag
* Substituting into the equation of motion: $A(\omega)(-\omega ^2 + \omega _0^2)\cos(\delta) = \omega _0^2\xi _0, A(\omega)(-\omega ^2 + \omega _0^2)\sin\delta = 0$
	* $\tan \delta = 0$, which gives us either $\delta = 0$ or $\delta = \pi$
		* With no damping, the system is either perfectly in phase or perfectly out of phase with the driver
	* $A(\omega)\left(1 - \frac{\omega ^2}{\omega _0^2}\right)\cos\delta = \xi _0, A(\omega)\left(1 - \frac{\omega ^2}{\omega _0^2}\right)\sin\delta = 0$
	* If $\delta = 0$: $A(\omega) = \frac{\xi _0}{1 - \frac{\omega ^2}{\omega _0^2}}$ for $\omega < \omega _0$
		* Response is perfectly in phase
	* If $\delta = \pi$: $A(\omega) = \frac{-\xi _0}{1 - \frac{\omega^2}{\omega _0^2}}$ for $\omega > \omega _0$
		* Response is perfectly out of phase
* For an undamped system the amplitude goes to infinity as $\omega \to \omega _0$

### Damped Forced Oscillation

* $\diffn{2}{x}{t} + \gamma\diff{x}{t} + \omega _0^2x = \frac{F_0}{m}\cos(\omega t)$
* Solution is the same $x = A(\omega)\cos(\omega t - \delta)$
* Plug back in and we get $\tan \delta = \frac{\omega\gamma}{\omega _0^2 - \omega^2}$
	* As $\omega \to \omega _0, \tan \delta \to \infty \implies \delta \to \frac{\pi}{2}$
		* In resonance the response is 90 degrees out of phase
* $A(\omega) = \frac{\xi _0\omega _0^2}{\sqrt{(\omega _0^2 - \omega ^2)^2 + (\omega\gamma)^2}}$
	* Amplitude is the largest for $\omega = \omega _0$, but $A(\omega)$ will never really go to infinity
	* For $\omega \to 0, A(\omega) \to \xi _0 = \frac{F_0}{k}$ (non periodic force) and $\delta \to 0$
	* For $\omega \to \omega _0, A(\omega) \to \frac{\xi _0\omega _0}{\gamma}$ and $\delta \to \frac{\pi}{2}$
	* For $\omega \to \infty, A(\omega) \to 0$ and $\delta \to \pi$
* For $\omega < \omega _0$ the oscillations are in phase, but for $\omega > \omega _0$ the oscillations become out of phase
	* This is normally a very sharp transition without damping, but with more damping it smoothes out
* Note when there is dampening, the maximum amplitude is not guaranteed when $\omega = \omega _0$
	* The largest amplitude happens when $\sqrt{(\omega _0^2 - \omega ^2) + (\omega\gamma)^2}$ is minimized
	* This works out to $\omega = \omega _0\sqrt{1 - \frac{\gamma^2}{2\omega _0^2}}$
	* The maximum amplitude always occurs shortly before $\omega _0$ when there is damping

## Forced Oscillation Power Absorbed

* $v(t) = -v_0(\omega)\sin(\omega t - \delta)$
	* $v_0 = \frac{\xi _0\omega _0^2\omega}{\sqrt{(\omega _0^2 - \omega^2)^2 + \omega^2\gamma^2}}$
* With dampening power is dissipated at a rate of $bv^2$
* The instantaneous power changes, so we can integrate for the average power over a period
* $\bar P(\omega) = \frac{bv^2}{2} = \frac{\omega^2F_0^2\gamma}{2m\left((\omega _0^2 - \omega ^2)^2 +\gamma^2\omega^2\right)}$
	* Note $\omega \to 0$ or $\omega \to \infty, \bar P \to 0$

