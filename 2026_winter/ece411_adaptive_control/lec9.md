# Lecture 9, Jan 23, 2026

## Feedback Stabilization

* Consider the LTI system $x(k + 1) = Ax(k) + Bu(k), x \in \reals^n, u \in \reals^m$; we want to find a simple feedback controller $u(k) = Kx(k)$, such that $\abs{\lambda} < 1, \forall\lambda \in \sigma(A + BK)$, i.e. the resulting closed-loop system is exponentially stable
* To study this we look at the *reachability* problem: what are the states reachable in $l$ steps, using any $\set{u(0), \dots, u(l - 1)}$ from $x(0)$?
	* $x(k) = A^kx(0) + \sum _{j = 0}^{k - 1} A^{k - 1 - j}Bu(j)$
	* For $k = n$ this can be expanded: $x(n) = \rvec{B}{AB}{\cdots}{A^{n - 1}B}\cvec{u(n - 1)}{\vdots}{u(0)} + A^nx(0)$
	* We have the *controllability matrix* $Q_c = \rvec{B}{AB}{\cdots}{A^{n - 1}B} \in \reals^{n \times (nm)}$
		* Note this is identical to the controllability matrix in the continuous case
	* If we want $x(n) = 0$, then we just need to find the inputs so that $Q_c\cvec{u(n - 1)}{\vdots}{u(0)} = -A^nx(0)$
		* Therefore if $\rank(Q_c) = n$ then we can always find a set of control inputs to drive the system to zero in $n$ steps regardless of $x(0)$
		* We can prove this to also be a necessary condition, i.e. we can drive the system to zero in $n$ steps if and only if $\rank(Q_c) = n$
	* As with the continuous case, there is no need to look at $l > n$ since by Cayley-Hamilton, $\rank(\rvec{B}{AB}{\cdots}{A^{l - 1}B}) \leq \rank(Q_c)$ regardless of $l$

\noteDefn{The LTI system $(A, B)$ is \textit{controllable} if $\rank(Q_c) = n$, where $Q_c = \rvec{B}{AB}{\cdots}{A^{n - 1}B}$.}

* In discrete time we also have a controllable canonical form which looks the same as the continuous-time controllable canonical form; a system is controllable if and only if it can be transformed into this form

\noteThm{If $(A, B)$ is controllable where $A \in \reals^{n \times n}, B \in \reals^{n \times m}$, then for any desired symmetric (i.e. conjugate pairs) spectrum $\set{\lambda _{1d}, \dots, \lambda _{nd}}$ where $\lambda _{id} \in \complex$, there exists a state feedback $u(k) = Kx(k)$ with $K \in \reals^{m \times n}$, such that $\sigma(A + BK) = \set{\lambda _{1d}, \dots, \lambda _{nd}}$.}

* Example: pole placement for $x(k + 1) = \matthree{0}{1}{0}{0}{0}{1}{a_1}{a_2}{a_3}x(k) + \cvec{0}{0}{1}u(k)$
	* This is in controllable canonical form so we know it's controllable
	* Let the desired eigenvalues be $\set{0, 0.5, 0.5}$
	* Let $K = \rvec{k_1}{k_2}{k_3}$ and expand $A + BK = \matthree{0}{1}{0}{0}{0}{1}{a_1 + k_1}{a_2 + k_2}{a_3 + k_3}$
	* Characteristic polynomial: $\det(sI - (A + BK)) = s^3 - (a_3 + k_3)s^2 - (a_2 + k_2)s - (a_1 + k_1)$
	* Expand desired characteristic polynomial: $(s - 0)(s - 0.5)(s - 0.5) = s^3 - s^2 + \frac{1}{4}s$
	* Solve for the terms to get $k_1 = -a_1, k_2 = -\frac{1}{4} - a_2, k_3 = 1 - a_3$

