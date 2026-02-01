# Lecture 10, Jan 27, 2026

## Deadbeat Control

* If $(A, B)$ is controllable, it is possible to arbitrary assign $\sigma(A + BK)$; what if we assign the spectrum to be all zeros?
	* This means the characteristic polynomial of $A + BK$ is $s^n$; by Cayley-Hamilton, we then have $(A + BK)^n = 0$
	* Therefore by using a controller $u(k) = Kx(k)$ and setting a zero spectrum, the closed-loop system goes to 0 in exactly $n$ steps, i.e. $x(n) = x(n + 1) = \cdots = 0$
	* This is called *deadbeat control*, and is in theory the perfect controller in discrete time
		* This behaviour of finite-time convergence is not possible in continuous time with only linear feedback

## Stabilizability

\noteDefn{The LTI system $x(k + 1) = Ax(k) + Bu(k)$ is \textit{stabilizable} if there exists a linear feedback $K \in \reals^{m \times p}$ such that $\sigma(A + BK)$ is in the open unit disk in $\complex$, i.e. the closed-loop system is asymptotically stable.}

* This definition is analogous to that of the continuous time case
* It is possible for a system to be stabilizable but not controllable
	* e.g. $x(k + 1) = \mattwo{0.1}{0}{0}{1}x(k) + \cvec{0}{1}u(k)$
	* We can tell that by inspection we have no control over the first state since the input is zero in that state and it is not affected by the second state
	* We can also check $Q_c = \rvec{B}{AB} = \mattwo{0}{0}{1}{1}$
	* However, we can pick $u(k) = k_2x_2(k)$ such that $\abs{1 + k_2} < 1$, which gives $A + BK = \mattwo{0.1}{0}{0}{1 + k_2}$ which is Schur stable, therefore the system is stabilizable despite it not being controllable
	* In general for some uncontrollable systems, the uncontrollable states are already stable, so we can do a partial state feedback to control only the unstable ones (Kalman decomposition)

\noteDefn{The eigenvalue $\lambda$ is \textit{controllable} for a system $(A, B)$ if $\rank\left(\rvec{A - \lambda I}{B}\right) = n$.}

\noteThm{\textit{PBH Test:} The system $(A, B)$ is controllable if and only if every $\lambda \in \sigma(A)$ is controllable. If there are uncontrollable eigenvalues, they must have $\abs{\lambda} < 1$ for the system to be stabilizable, i.e. $(A, B)$ is stabilizable if and only if each $\lambda \in \sigma(A)$ where $\abs{\lambda} \geq 1$ is controllable.}

* Example: with the same system from before
	* $\sigma(A) = \set{0.1, 1}$
	* For $\lambda = 0.1$: $\rank\rvec{A - 0.1I}{B} = \rank\mattwothree{0}{0}{0}{0}{0.9}{1} = 1 < 2$ so this eigenvalue is uncontrollable
	* For $\lambda = 1$: $\rank\rvec{A - I}{B} = \rank\mattwothree{-0.9}{0}{0}{0}{0}{1} = 2$ so this eigenvalue is controllable
	* By the PBH test we conclude that the system is uncontrollable but stabilizable

