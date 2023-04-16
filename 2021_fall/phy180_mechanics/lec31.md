# Lecture 31, Dec 6, 2021

## Simple Harmonic Oscillator Energy

* Recall $a(t) = -A\omega^2\cos(\omega t + \phi) \implies F_x = -mA\omega^2\cos(\omega t + \phi) = -m\omega^2x(t)$
* We can integrate this force to find the work done: $W = \int _{x_0}^x -m\omega^2 x\,\dx = \frac{1}{2}m\omega^2(x_0^2 - x^2)$
* $W = \Delta K \implies \Delta K = \frac{1}{2}m\omega^2(x_0^2 - x^2)$
* If we make the oscillator a closed system then $\Delta U = -\Delta K = \frac{1}{2}m\omega^2(x^2 - x_0^2)$
	* Since potential at $x_0$ is arbitrary we can set this to 0 so $\Delta U = \frac{1}{2}m\omega^2x^2$
* The total energy is then $E = U + K = \frac{1}{2}m\omega^2x^2 + \frac{1}{2}mv^2 = \frac{1}{2}m\omega^2A^2\cos^2(\omega t + \phi) + \frac{1}{2}m\omega^2A^2\sin^2(\omega t + \phi) = \frac{1}{2}m\omega^2A^2$
	* The energy of a simple harmonic oscillator is constant and it only trades potential and kinetic energy back and forth
	* The energy is proportional to the square of the amplitude

## Torsional Oscillators

* A disk suspended by a twisting fibre creates a torsional oscillator in simple harmonic motion
	* $\tau = I\alpha$
	* For small angular displacements $\tau = -\kappa(\omega - \omega _0)$ where $\kappa$ is the angular equivalent of $k$
	* The differential equation is then $\diffn{2}{\theta}{t} = -\frac{\kappa}{I}\theta$ which is the same as the one for translational simple harmonic motion, just with the translational terms substituted by rotational ones
* The equations of motion are identical to translational simple harmonic motion $\theta = \theta _{max}\cos(\omega t + \phi)$ and $\omega = \sqrt{\frac{\kappa}{I}}$

## Examples of Oscillating Systems

* All simple harmonic oscillators obey $\diffn{x}{t} + \omega^2x = 0$
* Examples:
	1. Mass on a spring: $m\diffn{2}{x}{t} + kx = 0 \implies \omega^2 = \frac{k}{m}$
	2. Torsional oscillator: $I\diffn{2}{\theta}{t} + \kappa\theta = 0 \implies \omega^2 = \frac{\kappa}{I}$
	3. Pendulum: $ml^2\diffn{2}{\theta}{t} + mgl\sin\theta \approx ml^2\diffn{2}{\theta}{t} + mgl\theta = 0 \implies \omega^2 = \frac{g}{l}$
	4. Floating object bobbing in water: $m\diffn{2}{y}{t} + g(\rho Ay) = 0 \implies \omega^2 = \frac{g\rho A}{m}$
		* A buoyant object will float in the water at some neutral point, and if pushed past this neutral point then $F_y \propto y$
	5. Capacitor-inductor circuit $L\diffn{2}{Q}{t} + \frac{Q}{C} = 0 \implies \omega^2 = \frac{1}{LC}$
		* Voltage drop across capacitor: $\frac{Q}{C}$
		* Voltage drop across inductor: $L\diffn{2}{Q}{t}$

## Damped Oscillations

* In reality there is always some friction present, causing the oscillator to lose energy and thus amplitude
* The loss in amplitude is called *damping*
* Often the damping is caused by viscous friction, with the damping force opposing and proportional to velocity $F = -b\vec{v}$
* Therefore $F_x = -(kx + bv_x) = ma_x \implies m\diffn{2}{x}{t} + b\diff{x}{t} + kx = 0$
* The solution is given by $x(t) = Ae^{-\frac{bt}{2m}}\cos(\omega _dt + \phi)$ where $\omega _d = \sqrt{\omega^2 - \left(\frac{b}{2m}\right)^2} = \sqrt{\frac{k}{m} - \frac{b^2}{4m^2}}$
	* A damped harmonic oscillator oscillates slower than the equivalent undamped oscillator
	* Let the damping time constant $\gamma = \frac{b}{m}$, with units of time
	* The amplitude can be expressed as $x_{max} = Ae^{\frac{-\gamma t}{2}}$
	* The energy remaining is then $E(t) = \frac{1}{2}m\omega^2x_{max}^2 = \left(\frac{1}{2}\omega^2A^2\right)e^{-\gamma t}$
* As $b$ increases the oscillator decays faster, and when $b > 2m\omega$ the system is overdamped and there are no oscillations at all

## $Q$ Factor

* $Q$ is the quality factor of an oscillator and measures the rate of decay
	* Differs from $\omega$ in the sense that $Q$ measures the number of oscillations
* $Q \equiv \frac{\omega}{\gamma} = \frac{2\pi}{\gamma T}$
* If $Q = 2\pi$ then the energy falls to $e^{-1}$ = $37\%$ of its original energy in a single cycle
* A good bell has $Q = 100$, electronic circuits have $Q = 10^6$, quantum systems an have $Q = 10^9$

