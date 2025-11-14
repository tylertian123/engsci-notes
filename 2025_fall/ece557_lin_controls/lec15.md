# Lecture 15, Nov 7, 2025

## Stabilization and Pole Assignment

* The *stabilization problem* is to design a controller $\bm u = \bm K\bm x$ so that the resulting system $\dot{\bm x} = \bm A\bm x + \bm B\bm u = (\bm A + \bm B\bm K)\bm x$ is asymptotically stable
	* For a nonlinear system, we want $\bm x(t) \to \bm x^*(t)$ where $\bm x^*(t)$ is an equilibrium condition, in which case $\tilde{\bm u} = \bm u - \bm u^* = \bm K(\bm x - \bm x^*)$ and the system is $\dot{\tilde{\bm x}} = (\bm A + \bm B\bm K)\tilde{\bm x}$
* The *pole assignment problem* is to find $\bm K$ such that the eigenvalues of $\bm A + \bm B\bm K$ are in designed locations of $\complex$

\noteThm{If the single-input system $(\bm A, \bm b)$ is controllable, then the pole assignment problem is solvable, i.e. the eigenvalues of $(\bm A + \bm B\bm K)$ can be placed arbitrarily, as long as they are in conjugate pairs.}

* Proof: We can put $(\bm A, \bm b)$ in controllable canonical form, $\dot{\bm z} = \hat{\bm A}\bm z + \hat{\bm b}\bm u$
	* Let $\hat{\bm k} = \rvec{\hat k_1}{\cdots}{\hat k_n}$
	* The closed-loop system looks like $\bm A + \hat{\bm b}\hat{\bm k} = \mat{\mrow{0}{1}{0}{\cdots}{0}\mrow{0}{0}{1}{\cdots}{0}\mrow{\vdots}{\vdots}{\vdots}{\ddots}{\vdots}\mrow{0}{0}{0}{\cdots}{1}\mrow{\hat k_1 - a_0}{\hat k_2 - a_1}{\hat k_3 - a_2}{\cdots}{\hat k_n - a_{n - 1}}}$
	* We can show $\det(s\bm I - (\bm A + \hat{\bm b}\hat{\bm k})) = s^n + (a_{n - 1} - \hat k_n)s^{n - 1} + \cdots + (a_1 - \hat k_2)s + (a_0 - \hat k_1)$
	* Therefore if we want some set of poles $\lambda _1, \dots, \lambda _n$, we can expand $(s - \lambda _1)(s - \lambda _2)\cdots(s - \lambda _n) = s^n + \alpha _{n - 1}s^{n - 1} + \cdots + \alpha _1s + \alpha _0$, then take $\hat k_i = a_{i - 1} - \alpha _{i - 1}$
	* To get $\bm k$ for the original system (if it was not originally in controllable canonical form), note $\bm k\bm x = \bm u = \hat{\bm k}\bm z = \hat{\bm k}\bm P^{-1}\bm x$, so $\bm k = \hat{\bm k}\bm P^{-1}$

\noteThm{\textit{Wonham's Pole Assignment Theorem}: Any system $(\bm A, \bm B)$ is completely controllable if and only if the poles of $\bm A + \bm B\bm K$ can be freely assigned, i.e. the pole assignment problem is solvable.}

* Lemma: If $(\bm A, \bm B)$ is completely controllable, then $\forall \bm b \in \mathcal R(\bm B), \exists \bm F \in \reals^{m \times n}$ such that $(\bm A + \bm B\bm F, \bm b)$ is controllable
	* This essentially transforms the multi-input case into the single-input case
	* We will not prove this in lecture, but we'll use this for the proof of Wonham's pole assignment theorem

\noteSummary{To place the closed-loop poles of $(\bm A, \bm b)$, i.e. set the eigenvalues of $\bm A + \bm k\bm b$ to $\set{\lambda _1, \dots, \lambda _n}$:
\begin{enumerate}
	\item Expand the desired characteristic polynomial: $$p_{des}(s) = (s - \lambda _1)\cdots(s - \lambda _n) = s^n + \alpha _{n - 1}s^{n - 1} + \cdots + \alpha _1s + \alpha _0$$
	\item Expand the characteristic polynomial of $\bm A$: $$p_A(s) = s^n + a_{n - 1}s^{n - 1} + \cdots + a_1s + a_0$$
	\item Let $\hat{\bm k} = \rvec{a_0 - \alpha _0}{\cdots}{a_{n - 1} - \alpha _{n - 1}}$
	\item Determine $\bm P$ required to put the system into controllable canonical form: $$\bm P = \bm Q_c\bm T \qquad \bm T = \mat{\mrow{a_1}{a_2}{\cdots}{a_{n - 1}}{1}\mrow{a_2}{a_3}{\cdots}{1}{0}\mrow{\vdots}{\vdots}{\ddots}{\vdots}{\vdots}\mrow{a_{n - 1}}{1}{\cdots}{0}{0}\mrow{1}{0}{\cdots}{0}{0}}$$
	\item Let $\bm k = \hat{\bm k}\bm P^{-1}$ and $\bm u = \bm k\bm x$ solves the pole assignment problem.
\end{enumerate}}

