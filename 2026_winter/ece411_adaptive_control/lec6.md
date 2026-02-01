# Lecture 6, Jan 16, 2026

## Stability of Discrete-Time Systems

* Consider a general open-loop nonlinear system $x(k + 1) = f'(x(k), u(k))$ and its closed-loop system, $x(k + 1) = f(k, x(k))$, where $u$ no longer appears since we have designed some control law
	* Note that since we have $k$ appearing explicitly in $f$, our systems are not time-invariant; this is necessary when we talk about adaptive control

\noteDefn{A constant vector $\bar x \in \reals^n$ is an \textit{equilibrium} of the closed-loop system $x(k + 1) = f(k, x(k))$ if $\bar x = f(k, \bar x)$.}

* Notice that whereas in continuous time the equilibria are points where $f$ is zero, in discrete time equilibria are fixed points of $f$
* To make initial conditions explicit, denote $x(k) \equiv x(k; k_0, x_0)$ which means $x(k_0) = x_0$

\noteDefn{Let $\bar x \in \reals^n$ be an equilibrium of the system $x(k + 1) = f(k, x(k))$, then
\begin{enumerate}
	\item $\bar x$ is \textit{stable} if $\forall k_0 \geq 0, \varepsilon > 0, \exists \delta(\varepsilon, k_0) > 0 \suchthat \norm{x_0 - \bar x} < \delta \implies \norm{x(k; k_0, x_0) - \bar x} < \varepsilon, \forall k \geq k_0$.
	\item $\bar x$ is \textit{asymptotically stable} if it's stable and $\exists \delta(k_0) > 0 \suchthat \norm{x_0 - \bar x} < \delta \implies \lim _{k \to \infty} x(k; k_0, x_0) = \bar x$ (attractivity condition).
	\item $\bar x$ is \textit{uniformly asymptotically stable} if it's asymptotically stable and $\delta$ in the previous definitions are independent of $k_0$.
	\item $\bar x$ is \textit{globally asymptotically stable} if it is asymptotically stable (or \textit{globally uniformly asymptotically stable} if it is also uniformly asymptotically stable), and $\delta(k_0)$ can be arbitrary large, i.e. all initial conditions converge to $\bar x$.
\end{enumerate}}

* The definition of stability is analogous to the continuous time definition; it requires that for any positive $\varepsilon$, we can find $\delta$ such that starting within $\delta$ of the equilibrium guarantees that the solution never goes outside $\varepsilon$ of the equilibrium
* Similarly for asymptotic stability, like in the continuous case, we require that solutions near the equilibrium converge to the equilibrium
* Uniform asymptotic stability is important for reasons of robustness
	* Note that this is only an issue for time-dependent systems; for time-invariant systems we never have this $k_0$ dependence, but adaptive control is time-dependent
* In general GUAS is the best outcome

