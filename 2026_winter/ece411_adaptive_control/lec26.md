# Lecture 26, Mar 13, 2026

## Control Design for Tracking and Disturbance Rejection

\noteDefn{\textit{Regulator Problem}: Given a model $$\begin{aligned}[t] x(k + 1) &= Ax(k) + Bu(k) + Ew(k) \\ w(k + 1) &= Sw(k) \\ e(k) &= Cx(k) + Dw(k) \end{aligned}$$ where $x(k) \in \reals^n, u(k) \in \reals^m, e(k) \in \reals^p, w(k) \in \reals^q$, we want to design a controller (\textit{regulator}) $u(k)$ to satisfy 2 requirements:
\begin{enumerate}
\item The unforced closed-loop system (i.e. $w(k) \equiv 0, \forall k \geq 0$) has an equilibrium that is asymptotically stable.
\item When $w(0) \neq 0$, $\lim _{k \to \infty} e(k) = 0$.
\end{enumerate}}

* Note that we assume knowledge of all the matrices in this system
	* We don't know the exact value of $w(k)$ but we know $E$, which reflects the fact that we know how disturbances may enter the system, but not exactly how much the disturbances are
* $w(k + 1) = Sw(k)$ is the *exosystem*, and models possible disturbances to the system; we cannot measure $w(k)$ directly
* $Dw(k)$ can be seen as a reference signal
	* Note that $w(k)$ contains both the modes that correspond to possible disturbances and our reference signal, and by picking $E$ and $D$ we can pick them out
	* This allows us to have a single exosystem model for both
* The exosystem will be designed based on the expected reference and disturbance signals, which are usually a combination of constant signals and sinusoids

