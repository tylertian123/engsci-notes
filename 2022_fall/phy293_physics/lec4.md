# Lecture 4, Sep 15, 2022

## Damped Harmonic Oscillator Energy

* Recall in an underdamped oscillator $\omega _0^2 > \frac{\gamma^2}{4}$
* Because of the damping, energy is lost as heat
* Assuming $\frac{\gamma^2}{4} \ll \omega _0^2 \implies \omega \approx \omega _0$
	* $x(t) = A_0e^{-\frac{\gamma}{2}t}\cos(\omega _0t)$
	* $\diff{x}{t} = -A_0\omega _0 e^{-\frac{\gamma}{2}t}\sin(\omega _0t)$, under the approximation that $\frac{\gamma}{2\omega _0}\cos(\omega _0t)$ is tiny
	* This leads us to $E(t) = \frac{1}{2}kA_0^2e^{-\gamma t}$
	* Notice energy decays twice as fast as amplitude

\noteDefn{The lifetime of a damped oscillator is $\tau = \frac{1}{\gamma}$, so $E(t) = E_0e^{-\frac{t}{\tau}}$}

* Every cycle amplitude decays by $\exp(-\gamma T)$
* $\diff{E}{t} = mv\diff{v}{t} + kx\diff{x}{t} = v(ma + kx)$, but $ma = -kx - bv \implies ma + kx = -bv$ so $\diff{E}{t} = -bv^2$

## The Q Factor

\noteDefn{The quality factor is defined as $Q = \frac{\omega _0}{\gamma}$}

* $Q$ is the quality factor, a measurement of how good the oscillator is (how slowly it loses energy)
* For $\frac{\gamma}{2} \ll \omega _0$, every period $\frac{E(t_2)}{E(t_1)} = e^{-\gamma T}$
* With a series expansion for $\exp$, $\frac{E(t_2 = t + T)}{E(t_1 = T)} = 1 - \gamma T$
	* $\frac{\Delta E}{E(t_1)} = -\gamma T$
	* $\frac{E(t_1) - E(t_2)}{E(t_1)} = \gamma T = \frac{2\pi\gamma}{\omega} = \frac{2\pi}{Q}$
	* This says the quality factor is the energy stored in the oscillator over the energy dissipated per radian
* The approximation $\omega \approx \omega _0$ is quite valid even for small values of $Q$
* $Q = \frac{1}{2}$ is the smallest $Q$ possible, which corresponds to a critically damped oscillator
	* $\gamma = \frac{\omega _0}{Q} \implies \omega = \omega _0\sqrt{1 - \frac{1}{4Q^2}}$

\begin{note-summary}
For a lightly damped harmonic oscillator ($\omega _0 \approx \omega$):
\begin{itemize}
	\item $E(t) = \frac{1}{2}kA_0^2e^{-\gamma t}$
	\item $A(t) = A_0e^{-\frac{\gamma}{2}t}$
	\item $\diff{E}{t} = -bv^2$
\end{itemize}
\end{note-summary}

