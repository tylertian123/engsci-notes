# Lecture 8, Jan 22, 2026

## Exponential Stability

\noteDefn{An equilibrium $\bar x \in \reals^n$ for a system $x(k + 1) = f(k, x(k))$ is \textit{exponentially stable} if $$\exists c, \delta > 0, \lambda \in (0, 1) \suchthat \norm{x(k_0) - \bar x} < \delta \implies \norm{x(k) - \bar x} \leq c\norm{x(k_0)}\lambda^{k - k_0}, \forall k \geq k_0 \geq 0$$}

\noteThm{Consider an open set $\mathcal D \subset \reals^n$ with $0 \in \mathcal D$; the equilibrium $\bar x = 0$ is exponentially stable if and only if there exists $V: \naturals _0 \times \mathcal D \mapsto \reals$ and constants $c_1, c_2, c_3 > 0$ such that $c_1\norm{x}^2 \leq V(k, x) \leq c_2\norm{x}^2$ and $\Delta V(k, x) \leq -c_3\norm{x}^2, \forall k \leq 0, x \in \mathcal D$.
\tcblower
If $\mathcal D = \reals^n$, then the equilibrium $\bar x = 0$ is globally exponentially stable.}

* Note that this is an extension to the Lyapunov theorem we covered last lecture; the conditions here are stricter than the definiteness and radially unboundedness conditions in the previous theorems

## Stability of Linear Time-Invariant Systems

\noteThm{For a linear time-invariant system $x(k + 1) = Ax(k)$, the equilibrium $\bar x = 0$ is globally exponentially stable if and only if $\abs{\lambda} < 1, \forall \lambda \in \sigma(A)$, i.e. all eigenvalues of $A$ are inside the open unit disk in $\complex$. Such a matrix $A$ is called \textit{Schur stable}.
\tcblower
The equilibrium $\bar x = 0$ is stable if and only if $\abs{\lambda} \leq 1, \forall \lambda \in \sigma(A)$, and any eigenvalues $\abs{\lambda} = 1$ have a Jordan block of size 1.}

\noteThm{For $x(k + 1) = Ax(k)$, $\bar x = 0$ is globally exponentially stable if and only if for each symmetric positive definite $Q \in \reals^{n \times n}$, there exists a unique symmetric positive definite  $P \in \reals^{n \times n}$ such that $A^TPA - P = -Q$ (the \textit{Lyapunov equation}).}

* The idea is to use a Lyapunov function of $V(x) = x^TPx$, which is positive definite if $P$ is positive definite, and $\alignedeqntwo[t]{\Delta V(x)}{V(Ax(k)) - V(x(k))}{(Ax(k))^TP(Ax(k)) - x^T(k)Px(k)}{x^T(k)A^TPAx(k) - x^T(k)Px(k)}{x^T(k)(A^TPA - P)x(k)}{-x^T(k)Qx(k)}$
	* This gives us global asymptotic stability if $Q$ is positive definite
	* For exponential stability, we make use of the fact that $\lambda _\text{min}(P)\norm{x}^2 \leq x^TPx \leq \lambda _\text{max}(P)\norm{x}^2$ where $\lambda _\text{min}, \lambda _\text{max}$ denote the minimum and maximum eigenvalues
		* Note since $P$ is symmetric positive definite it has all real and positive eigenvalues
	* This also gives $\Delta V(x) = -x^TQx \leq -\lambda _\text{min}(Q)\norm{x}^2$, so we have all the conditions for exponential stability

