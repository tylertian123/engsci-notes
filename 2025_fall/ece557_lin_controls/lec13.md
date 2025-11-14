# Lecture 13, Oct 15, 2025

## Controllability

\noteDefn{An LTI system $\dot{\bm x} = \bm A\bm x + \bm B\bm u$ is \textit{completely controllable} (or just controllable) if, for some positive time $T$, for all possible initial and final states $\bm x_0, \bm x_f \in \reals^n$, there exists some piecewise continuous input $\bm u(t), t \in [0, T]$ that brings the system from the initial state to the final state, i.e. $$\bm x_f = \bm x(T) = e^{\bm AT}\bm x_0 + \int _0^T e^{\bm A(T - \tau)}\bm B\bm u(\tau)\,\dtau = e^{\bm A\bm T} + L_c(\bm u(\cdot))$$}
* $L_c(\bm u(\cdot))$ is a map from real piecewise continuous functions to $\reals^n$, the impact of the input on the final state (compared to just an autonomous system)
* Let $\bar{\mathcal R}_T(\bm x_0) = \set{\bm x_f \in \reals^n | \exists u: [0, T] \mapsto \reals^m, \bm x_f = e^{\bm AT}\bm x_0 + L_c(\bm u(\cdot))}$
	* This denotes the set of all possible final states $\bm x_f$ that we can reach from an initial state $\bm x_0$ with piecewise continuous inputs $\bm u$
* Lemma: The LTI system $(\bm A, \bm B)$ is completely controllable if and only if $\bar{\mathcal R}_T(0) = \reals^n$, or equivalently $\mathcal R(L_c) = \reals^n$
	* Assume $(\bm A, \bm B)$ is completely controllable, then we can let $\bm x_0 = 0$, and there exists $\bm u(t)$ such that we can reach any $\bm x_f \in \reals^n$; therefore by definition, $\bar{\mathcal R}_T(0) = \reals^n$

### Coordinate and Feedback Transformations

* Consider the coordinate transformation $\bm z = \bm P^{-1}\bm x \implies \alignedeqntwo[t]{\dot{\bm z}}{\bm P^{-1}\dot{\bm x}}{\bm P^{-1}(\bm A\bm x + \bm B\bm u)}{\bm P^{-1}\bm A\bm P\bm z + \bm P^{-1}\bm B\bm u}$
	* Therefore the coordinate transform does $(\bm A, \bm B) \to (\bm P^{-1}\bm A\bm P, \bm P^{-1}\bm B)$
* A *feedback transformation* is $\bm u = \bm K\bm x + \bm v$ where $\bm v$ is the new input, for some feedback matrix $\bm K$ (now the system's input contains feedback based on its state)
	* $\dot{\bm x} = \bm A\bm x + \bm B\bm u = \bm A\bm x + \bm B(\bm K\bm x + \bm v) = (\bm A + \bm B\bm K)\bm x + \bm B\bm v$
	* The feedback transform does $(\bm A, \bm B) \to (\bm A + \bm B\bm K, \bm B)$
* We will see that coordinate and feedback transformations do not affect the controllability of a system
	* This is useful because we can see the system under a different transformation, which may lead to more insights, and obtain information applicable to the original system

\noteThm{For any nonsingular $\bm P$, the system $(\bm A, \bm B)$ is completely controllable if and only if $(\bm P^{-1}\bm A\bm P, \bm P^{-1}\bm B)$ is completely controllable. \\ For any $\bm K$, the system $(\bm A, \bm B)$ is completely controllable if and only if $(\bm A + \bm B\bm K, \bm B)$ is completely controllable. \tcblower In other words, controllability is invariant under coordinate and feedback transformations.}

* Proof for coordinate transform invariance:
	* From the lemma, completely controllable $(\bm A, \bm B)$ means $\mathcal R(L_c) = \reals^n$
	* Consider the transformed $\tilde L_c(\bm u(\cdot)) = \int _0^T e^{\bm P^{-1}\bm A\bm P(T - \tau)}\bm P^{-1}\bm B\bm u(\tau)\,\dtau$ so $\mathcal R(\tilde L_c) = \reals^n$ if and only if the transformed system is controllable
	* The idea is that $L_c$ and $\tilde L_c$ are related by a nonsingular matrix, so they should have the same range space (similar to how $\bm B$ and $\bm P\bm B$ have the same range space for nonsingular $\bm P$)

### Controllability Matrix

\noteThm{\textit{Cayley-Hamilton Theorem}: Let $\bm A \in \reals^{n \times n}$ have characteristic polynomial $$\det(s\bm I - \bm A) = s^n + a_{n - 1}s^{n - 1} + \cdots + a_0$$ then $\bm A$ satisfies $$\bm A^n + a_{n - 1}\bm A^{n - 1} + \cdots + a_0\bm I = \bm 0_{n \times n}$$ i.e. every square matrix satisfies its own characteristic equation. This allows us to express $\bm A^n$ and any higher powers of $\bm A$ as a linear combination of $\bm I, \bm A, \dots, \bm A^{n - 1}$.}

\noteDefn{The \textit{controllability matrix} for a system $(\bm A, \bm B)$ is defined as $$\bm Q_c = \rvec{\bm B}{\bm A\bm B}{\cdots}{\bm A^{n - 1}\bm B} \in \reals^{n \times nm}$$
\tcblower
The system $(\bm A, \bm B)$ is completely controllable if and only if $\mathcal R(\bm Q_c) = \reals^n$, or $\rank(\bm Q_c) = n$.}

* Proof ($\rank(\bm Q_c) = n \implies (\bm A, \bm B)$ is controllable):
	* Proof by contradiction: first assume the negation of the statement, i.e. let $\rank(\bm Q_c) = n$ but $(\bm A, \bm B)$ not controllable; we will show that this shows $\rank(\bm Q_c) \neq n$, leading to a contradiction
	* Let $\hat L_c$ such that $L_c(\bm u(\cdot)) = \int _0^T e^{\bm A(T - \tau)}\bm B\bm u(\tau)\,\dtau = e^{\bm AT}\int _0^T e^{-\bm A\tau}\bm B\bm u(\tau)\,\dtau = e^{\bm AT}\hat L_c(\bm u(\cdot))$
		* $(\bm A, \bm B)$ not controllable means $\dim(\mathcal R(L_c)) < n$
		* Since $e^{\bm AT}$ is always invertible, $\rank(L_c) = \rank(\hat L_c) \implies \dim(\mathcal R(\hat L_c)) < n$
	* $\mathcal R(\hat L_c)$ has an orthogonal component $\mathcal R(\hat L_c)^\perp$ where $\mathcal R(\hat L_c)^\perp \oplus \mathcal R(\hat L_c) = \reals^n$, and $\dim(\mathcal R(\hat L_c)) < n$ means there exists a nonzero $\bm v \in \mathcal R(\hat L_c)^\perp$ orthogonal to all elements in $\hat L_c$
	* Then for any any piecewise continuous $\bm u(\cdot): [0, T] \mapsto \reals^m$, we have $\bm v^T\int _0^T e^{-\bm A\tau}\bm B\bm u(\tau)\,\dtau = 0$
		* Consider the control input $\bm u^{i, s}(t) = \twocond{\bm e_i}{t \in [0, s]}{0}{t \in (s, T])}$ for $s \in [0, T]$ and $i = 1, \dots, m$
			* Note $\bm e_i$ denotes a vector with a 1 in the $i$th element and all 0s everywhere else
			* This input picks out the $i$th column of $\bm B$ for $t \in [0, s]$
		* Therefore $0 = \bm v^T\int _0^T e^{-\bm A\tau}\bm B\bm u^{i,s}(\tau)\,\dtau = \bm v^T\int _0^s e^{-\bm A\tau}\bm b_i\dtau$ holds $\forall s \in [0, T]$
			* $\diff{}{s}\left(\bm v^T\int _0^s e^{-\bm A\tau}\bm b_i\dtau\right) = \bm v^Te^{-\bm As}\bm b_i = 0$, evaluate at $s = 0$ gives us $\bm v^T\bm b_i = 0$
			* $\diffn{2}{}{s}\left(\bm v^T\int _0^s e^{-\bm A\tau}\bm b_i\dtau\right) = -\bm v^T\bm Ae^{-\bm As}\bm b_i = 0$, again at $s = 0$ gives $\bm v^T\bm A\bm b_i = 0$
			* Do this for up to the $n$th derivative, then $\bm v^T\bm A^k\bm b_i = 0$ for all $k = 0, \dots, n - 1$
		* Altogether $\bm v^T\rvec{\bm b_i}{\bm A\bm b_i}{\cdots}{\bm A^{n - 1}\bm b_i} = \bm 0 \in \reals^{1 \times n}$
		* Repeat for all $i$, then $\bm v^T\rvec{\bm B}{\bm A\bm B}{\cdots}{\bm A^{n - 1}\bm B} = \bm 0 \in \reals^{1 \times nm}$
	* Therefore we've shown there exists a nonzero $\bm v$ where $\bm v^T\bm Q_c = \bm 0$, meaning the rows of $\bm Q_c$ are linearly dependent; since row rank equals column rank, $\rank(\bm Q_c) < n$
* Example: RLC circuit with $\bm A = \mattwo{0}{\frac{1}{C}}{-\frac{1}{L}}{-\frac{R}{L}}, \bm B = \cvec{0}{\frac{1}{L}}$
	* $\bm Q_c = \rvec{\bm B}{\bm A\bm B} = \mattwo{0}{\frac{1}{LC}}{\frac{1}{L}}{-\frac{R}{L^2}}$
	* For all nonzero $L, C$ this matrix has rank 2, therefore this system is always completely controllable

