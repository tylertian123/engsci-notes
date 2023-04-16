# Lecture 3, Sep 13, 2022

## Simple Harmonic Oscillator Energy

* Since the force is conservative, we have a potential, which can be calculated by the negative work done by the oscillator
* Energy is conserved in a SHO: $K + U = c = \frac{1}{2}kA^2 = \frac{1}{2}mv_{max}^2$
	* Potential energy goes by $\cos^2$, kinetic energy goes by $\sin^2$
* Note the periodicity of energy is different (maximum kinetic/potential energy is reached twice per oscillation)

## Damped Harmonic Oscillator

* Damping force at low speeds can be modelled as a drag force, proportional and opposing velocity
	* At higher speeds $F_d \propto v^2$ but this is much harder to model
* $F_{net} = -kx - bv \implies m\diffn{2}{x}{t} + b\diff{x}{t} + kx = 0$
	* $b$ is the drag coefficient, depending on the medium
	* $b$ is also known as the damping constant (but also this name is sometimes given to $\gamma$)
* Let $\omega _0^2 = \frac{k}{m}, \gamma = \frac{b}{m} \implies \diffn{2}{x}{t} + \gamma\diff{x}{t} + \omega _0^2x = 0$
	* $\omega _0$ is the natural frequency of the oscillation (frequency if it were undamped)
	* The damped oscillator does not oscillate at the same frequency

### Light Damping (Underdamping)

* Damping is light enough that oscillations continue, losing amplitude slowly
* Predict that solution looks like $x(t) = A_0e^{-\beta t}\cos(\omega t)$ (ignore phase constant for now)
* Plugging this solution back in: $A_0e^{-\beta t}\left((2\beta\omega - \gamma\omega)\sin(\omega t) + (\beta^2 - \omega^2 - \gamma\beta + \omega^2\cos(\omega t)\right) = 0$
	* This is only zero when $2\beta\omega - \gamma\omega = 0$ and $\beta^2 - \omega^2 - \gamma\beta + \omega _0^2$
	* Solve: $\beta = \frac{\gamma}{2}, \omega^2 = \omega _0^2 - \frac{\gamma^2}{4}$
	* Notice that the new $\omega$ is smaller, since the damping slows it down

\noteImportant{The general solution for an underdamped oscillator: $x(t) = A_0e^{-\frac{\gamma}{2}t}\cos(\omega t + \phi _0)$, where $\omega = \sqrt{\omega _0^2 + \frac{\gamma^2}{4}}$}

### Heavy Damping (Overdamping)

* Damping is heavy enough that no oscillations occur; system returns to equilibrium sluggishly
* We know the amplitude decays exponentially, but something else will also happen, so guess $x(t) = e^{-\beta t}f(t)$
* Plugging this back in leads to $\diffn{2}{f}{t} = \alpha^2f, \alpha^2 = \frac{\gamma^2}{4} - \omega _0^2$
	* If $\omega _0^2 > \frac{\gamma^2}{4}$ we just have an underdamped oscillator
	* Otherwise $\alpha^2 > 0 \implies -\omega _0^2 > \frac{\gamma^2}{4}$, and $f(t) = Ae^{\alpha t} + Be^{\beta t}$

\noteImportant{The general solution for an overdamped oscillator: $x(t) = e^{-\frac{\gamma}{2}t}\left(Ae^{\alpha t} + Be^{\beta t}\right)$}

### Critical Damping

* When $\omega _0^2 - \frac{\gamma^2}{4} = 0$, the equation from heavy damping becomes $\diffn{2}{f}{t} = 0$
* The general solution is $f(t) = A + Bt$, so $x(t) = Ae^{-\frac{\gamma}{2}t} + Bte^{-\frac{\gamma}{2}t}$
	* $A$ has dimensions of length, $B$ has dimensions of speed
* The behaviour is a smooth exponential decay

\noteImportant{The general solution for a critically damped oscillator: $x(t) = Ae^{-\frac{\gamma}{2}t} + Bte^{-\frac{\gamma}{2}t}$}

