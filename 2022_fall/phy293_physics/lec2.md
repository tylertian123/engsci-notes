# Lecture 2, Sep 12, 2022

## Simple Harmonic Motion

* Periodic motion about an equilibrium, caused by a restoring force
	* Can think of it as the 1D projection of circular motion
* $\vec F = -k\Delta\vec x$
	* The restoring force is conservative (gradient of a scalar field potential)
* SHM exhibits a sinusoidal pattern
* Applicable to many scenarios:
	* Mass on spring, rigid beams, crystals, chemical bonds, etc
* To get the DE: $F_x = -kx \implies -kx = ma_x \implies -kx = m\diffn{2}{x}{t} \implies \diffn{2}{x}{t} + \frac{k}{m}x = 0$
* Let $\omega^2 = \frac{k}{m}$ to restrict it to positive, so $\diffn{2}{x}{t} + \omega^2 x = 0$

\begin{note-important}
The general solution for SHM is $x(t) = X_0 + A\cos(\omega t + \phi _0)$, where:
\begin{itemize}
	\item $X_0$ is an offset for the position at equilibrium
	\item $\omega = \sqrt{\frac{k}{m}}$
	\item Two constants to match initial conditions: $A$ is the amplitude, $\phi _0$ is the phase
\end{itemize}
\end{note-important}

* $\omega$ is the angular frequency in radians per second
	* $\omega = 2\pi f = \frac{2\pi}{T}$
* Can also write $x(t) = A\cos\left(2\pi\frac{t}{T} + \phi _0\right)$ in terms of the period instead of angular frequency
* Velocity is $v(t) = -A\omega\sin(\omega t + \phi _0)$
	* Max speed $v_{max} = A\omega$, occurs near equilibrium (centre of oscillation)
* Acceleration is $a(t) = -A\omega^2\cos(\omega t + \phi _0)$
	* Max acceleration $a_{max} = A\omega^2$, occurs near boundary of oscillation
	* Note this is also equal to $-\omega^2 x(t)$ which matches our equation of motion
* Alternative form: $x(t) = A\cos(\omega t + \phi _0) = A\cos(\omega t)\cos(\phi _0) - A\sin(\omega t)\sin(\phi _0)$
	* Since $A\cos(\phi _0), A\sin(\phi _0)$ are constants, $x(t) = a\cos(\omega t) + b\sin(\omega t)$

\noteImportant{The general solution can also be expressed as a sum of a sine and cosine: $x(t) = a\cos\omega t + b\sin\omega t$, where $a = A\cos(\phi _0), b = -A\sin(\phi _0)$}

* Notice $a = A\cos(\phi _0)$ is simply $x(0)$, the initial position, and $b\omega = -A\omega\sin(\phi _0) = v(0)$
* Notice: $a^2 + b^2 = A^2(\cos^2\phi _0 + \sin^2\phi _0) = A^2$ and $\frac{b}{a} = -\tan\phi _0$

\noteNote{The coefficients $a$ and $b$ of the sine and cosine are components of the oscillation's phasor $\bm Z = a - bi$}

