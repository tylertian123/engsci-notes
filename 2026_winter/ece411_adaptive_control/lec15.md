# Lecture 15, Feb 6, 2026

## Theoretical Justification of the Dynamic Error Model

* Consider the general dynamic error model: $\twopiece{x(k + 1) = Ax(k) + B\tilde\psi^T(k)w(k)}{e(k) = Cx(k)}$, where $(A, B)$ is controllable and $(C, A)$ is observable, and $A$ is Schur stable
	* Let $H(z) = C(zI - A)^{-1}B$
	* Define the error estimate $\hat e(k) = H(z)\left[\hat\psi^T(k)w(k)\right] - \hat\psi^T(k)H(z)I\left[w(k)\right]$
	* Define the augmented regressor $w_a(k) = H(z)I\left[w(k)\right]$
	* Define the augmented error $e_a(k) = e(k) - \hat e(k) = \tilde\psi^T(k)w_a(k) + \varepsilon(k)$ where $\tilde\psi(k) = \hat\psi(k) - \psi$ and $\varepsilon(k) \to 0$
* We reuse the adaption law from the static error model: $\hat\psi(k + 1) = \hat\psi(k) - \gamma(k)e_a(k)w_a(k), \gamma(k) = \frac{\bar\gamma}{1 + \norm{w_a(k)}^2}, \bar\gamma \in (0, 2)$

\noteThm{\textit{Swapping Lemma:} Let $\hat\psi: \naturals _0 \mapsto \reals^q$ and $w: \naturals _0 \mapsto \reals^q$ be discrete signals, and $H(z) = C(zI - A)^{-1}B$ be stable (i.e. $A$ is Schur stable), and $(C, A, B)$ is a minimal realization (i.e. no pole-zero cancellations in the transfer function), then $$\hat\psi^T(k)H(z)I\left[w(k)\right] - H(z)\left[\hat\psi^T(k)w(k)\right] = c\tilde\eta(k)$$ where $\tilde\eta(k)$ has the dynamics $$\begin{aligned}\eta _1(k + 1) &= A\eta _1(k) + Bw^T(k) \\ \tilde\eta(k + 1) &= A\tilde\eta(k) + \eta _1(k + 1)\Delta\tilde\psi(k) \\ \Delta\tilde\psi(k) &= \tilde\psi(k + 1) - \tilde\psi(k) \end{aligned}$$}

\noteThm{For the system $$\begin{aligned} x(k + 1) &= Ax(k) + B\tilde\psi^T(k)w(k) \\ e(k) &= Cx(k)\end{aligned}$$ where $A$ is Schur stable, with the adaptation law $$\hat\psi(k + 1) = \hat\psi(k) - \gamma(k)e_a(k)w_a(k) \qquad \gamma(k) = \frac{\bar\gamma}{1 + \norm{w_a(k)}^2}$$ Suppose $\bar\gamma \in (0, 2)$ and $w \in l_\infty$, then $\hat\psi \in l_\infty, e_a \in l_\infty \cap l_2$, and $e_a(k) \to 0$ and $e(k) \to 0$ as $k \to \infty$.}

* Proof:
	* $e_a(k) = \tilde\psi^T(k)w_a(k) + \varepsilon(k)$
	* $\tilde\psi(k + 1) = \tilde\psi(k) - \gamma(k)e_a(k)w_a(k)$
	* To handle $\varepsilon(k)$, we need to give it a model; since $\varepsilon(k) \to 0$, we know there exists $(C_\varepsilon, A_\varepsilon)$ such that $A_\varepsilon$ is Schur stable and models the decay of $\varepsilon(k)$, i.e. $\norm{\varepsilon(k)} \leq \norm{C_\varepsilon\nu(k)}$ where $\nu(k + 1) = A_\varepsilon\nu(k)$ 
	* Let $P$ be the positive definite solution to $A_\varepsilon^TPA_\varepsilon - P = -I$
	* Consider the Lyapunov function $V = \tilde\psi^T(k)\tilde\psi(k) + \beta\nu^T(k)P\nu(k)$, where $\beta > 0$ to be determined, so $V$ is positive definite at $(\tilde\psi, \nu) = (0, 0)$
	* $\alignedeqntwo[t]{\Delta V}{\cdots}{-2\gamma(k)e_a(k)w_a^T(k)\tilde\psi(k) - \beta\norm{\nu(k)}^2 + \gamma^2(k)e_a^2(k)\norm{w_a(k)}^2}{\cdots}{-2\gamma(k)e_a^2(k) + 2\gamma(k)e_a(k)\varepsilon(k) - \beta\norm{\nu}^2 + \gamma^2(k)e_a^2(k)\norm{w_a(k)}^2}$
		* The first and last terms are the same as the static error model
		* The second terms is a cross term representing the coupling resulting from $\varepsilon(k)$
	* Use Young's inequality: $2\gamma(k)e_a(k)\varepsilon(k) \leq \gamma^2(k)e_a(k) + \varepsilon^2(k)$
		* After breaking down the cross term and combining it into the other terms, we can conclude that $\Delta V \leq 0$ for sufficiently large $\beta \geq 0$
	* Reusing the static error model arguments, we have $\hat\psi, \tilde\psi, e_a \in l_\infty$, then $e_a \in l_2$ which implies $e_a(k) \to 0$, and $\Delta\tilde\psi(k) = \tilde\psi(k + 1) - \tilde\psi(k) \to 0$

