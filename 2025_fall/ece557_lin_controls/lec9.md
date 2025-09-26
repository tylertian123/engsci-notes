# Lecture 9, Sep 24, 2025

## Stability

\noteDefn{A system $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0$ is said to be \textit{stable} if for every $\bm x_0 \in \reals^n$, the solution $\bm x(t) = e^{\bm At}\bm x_0$ is \textit{bounded}, i.e. $$\exists M < \infty \suchthat \norm{\bm x(t)} \leq M,\,\forall t \geq 0$$
\tcblower
The system is \textit{asymptotically stable} if for every $\bm x_0 \in \reals^n$, $$\lim _{t \to \infty} x(t) = \bm 0 \in \reals^n$$}

\noteThm{The system $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0$ is asymptotically stable if and only if $\Re(\lambda _i) < 0$ for all eigenvalues $\lambda _i$ of $\bm A$.}

* The intuition here is that we can decouple the system using the eigenvectors like we showed before, and if all eigenvalues have negative real parts, then all components must decay to 0
* Asymptotic stability is equivalent to $e^{\bm At}$ converging to 0 as $t \to \infty$ (since this is the unique solution)
	* Recall that using the Jordan form, this is equivalent to $e^{\bm J_{\lambda _i}t}$ converging to 0 for each $i$, which can be expanded to $e^{\lambda _it}\bm N$ where $\bm N$ is a matrix of polynomials of $t$
	* Suppose all $\Re(\lambda _i) < 0$; then $e^{\lambda _it}$ times any polynomial of $t$ will decay to 0 as $t \to \infty$ for all $i$, since the exponential grows faster than any polynomial
	* Therefore every term in every Jordan block will converge to 0, and so $e^{\bm At}$ converges to 0 and the system is asymptotically stable
* We can also define some notions of stability when the input $\bm u$ is involved:

\noteDefn{The system $$\alignedlines[t]{}{\dot{\bm x} = \bm A\bm x + \bm B\bm u, \bm x(0) = \bm x_0}{\bm y = \bm C\bm x + \bm D\bm u}$$ is \textit{bounded-input-bounded-output stable} (\textit{BIBO stable}) if, when $\bm x_0 = \bm 0$, as long as the input $\bm u(t)$ is bounded, the output $\bm y(t)$ is bounded.
\tcblower
The system $$\bm y(t) = \int _0^t \bm h(t - \tau)\bm u(\tau)\,\dtau$$ where $\bm h: [0, \infty) \mapsto \reals^{m \times p}$ is BIBO stable if for all bounded $\bm u(t)$, $\bm y(t)$ is also bounded. Note this model implicitly assumes zero inital conditions.}

\noteDefn{The system $$\alignedlines[t]{}{\dot{\bm x} = \bm A\bm x + \bm B\bm u, \bm x(0) = \bm x_0}{\bm y = \bm C\bm x + \bm D\bm u}$$ is \textit{input-output stable} if \textbf{for all inital conditions} $\bm x_0 \in \reals^n$, a bounded $\bm u(t)$ implies a bounded $\bm y(t)$. Note input-output stability implies BIBO stability.}

\noteThm{If $\dot{\bm x} = \bm A\bm x$ is asymptotically stable, then for any $\bm B, \bm C, \bm D$, the system $$\alignedlines[t]{}{\dot{\bm x} = \bm A\bm x + \bm B\bm u, \bm x(0) = \bm x_0}{\bm y = \bm C\bm x + \bm D\bm u}$$ is both BIBO and input-output stable.}

* Recall that PSD for a real symmetric matrix means $\bm v^T\bm P\bm v \geq 0$ for all $\bm v \in \reals^n$, and positive definite means $\bm v^T\bm P\bm v > 0$ for all nonzero $\bm v$
	* PSD is sometimes denoted $\bm P \in \mathbb S_n^+$; positive definite is denoted $\bm P \in \mathbb S_n$
* For complex $\bm v$, $\bm v^*\bm P\bm v > 0$ for positive definite $\bm P$, and greater than or equal to zero for PSD $\bm P$ ($\bm v^*$ denotes a conjugate-transpose or *Hermitian transpose*)
	* $\alignedeqntwo[t]{\bm v^*\bm P\bm v}{(\bm x + i\bm y)^*\bm P(\bm x + i\bm y)}{(\bm x^T - i\bm y^T)\bm P(\bm x + i\bm y)}{\bm x^T\bm P\bm x - i\bm y^T\bm P\bm x + i\bm x^T\bm P\bm y - i^2\bm y^T\bm P\bm y}{\bm x^T\bm P\bm x + \bm y^T\bm P\bm y}$
		* Since $\bm P$ is positive definite (or PSD) the last two remaining terms are both positive (or nonnegative for PSD)
		* Note that $\bm y^T\bm P\bm x$ is a scalar, so we can take its transpose, and since $\bm P$ is symmetric we can show the expression is equal to $\bm x^T\bm P\bm y$ and so the middle terms cancel

\noteThm{Let $\bm P \in \reals^{n \times n}$ be symmetric; then $\bm P$ is positive definite if and only if all its eigenvalues are positive; $\bm P$ is positive semidefinite if and only if all its eigenvalues are non-negative. This result is sometimes known as the \textit{spectral theorem}. \\ Note since $\bm P$ is real and symmetric, all eigenvalues are real.
\tcblower
This theorem also applies for negative (semi-)definite matrices and negative (nonpositive) eigenvalues.}

\noteThm{Let $\bm A \in \reals^{n \times n}$ and suppose there exists a symmetric positive definite matrix $\bm P$ such that $$\bm Q = -\bm A^T\bm P - \bm P\bm A$$ is also positive definite, then $\dot{\bm x} = \bm A\bm x$ is asymptotically stable. $\bm Q$ is known as the \textit{continuous-time Lyapunov operator}.}

* Let $\bm e \in \complex^n$ be an eigenvector of $\bm A$; we know $\bm e^*\bm Q\bm e = \bm e^*(-\bm A^T\bm P - \bm P\bm A)\bm e > 0$ and we can expand the right hand side, using $\bm A\bm e = \lambda\bm e$, to show that all the eigenvalues of $\bm A$ have negative real parts
* In discrete time, the analogous equation is $\bm x_{k + 1} = \bm A\bm x_k$, which turns out to be asymptotically stable if and only if $\abs{\lambda _i} < 1$ for all eigenvalues of $\bm A$
	* The analogous definition of $\bm Q$ is $\mathcal L_d(\bm P) = \bm P - \bm A^T\bm P\bm A$ and it also holds that if there exists a $\bm P$ that makes this positive definite, then $\bm A$ has all eigenvalues with magnitude less than 1 and therefore the system is stable
* Now consider $\bm A$ with eigenvalues less than or equal to zero; if we take its Jordan form and expand $e^{\bm Jt}$, we find that in some Jordan blocks we only have $e^{\lambda t}$, but in other blocks we have terms with $e^{\lambda t}$ times a polynomial of $t$
	* We allow the blocks that only have $e^{\lambda t}$ to have a zero eigenvalue, since this becomes a constant
	* However the blocks containing $e^{\lambda t}$ times a polynomial must have a negative eigenvalue, because otherwise that term will grow to infinity as $t \to \infty$
	* This means for all Jordan (sub-)blocks that are bigger than $1 \times 1$, its $\lambda$ value must be strictly negative
	* Recall that we get bigger Jordan blocks when the algebraic multiplicity is greater than the geometric multiplicity for some eigenvalue
	* This is the intuition for the next theorem

\noteThm{$\dot{\bm x} = \bm A\bm x$ is stable if and only if $\Re(\lambda _i) \geq 0$ for all $i$, and if for all eigenvalues that have $\Re(\lambda _i) = 0$, the algebraic multiplicity equals the geometric multiplicity for that eigenvalue.}

* To prove this, we equate stability to $e^{\bm At}$ being bounded, which is equal to $e^{\bm Jt}$ being bounded, which we can consider separately for negative and zero eigenvalues:
	* $\Re(\lambda _j) < 0$: then all $\lim _{t \to \infty} e^{\bm J_{\lambda _j}t} = 0$ since the exponential grows faster than all polynomials
	* $\Re(\lambda _j) = 0$: $e^{\bm J_{\lambda _j}t}$ is bounded if and only if it has no polynomials in $t$; this only happens if we have Jordan blocks of size 1, which happens if and only if the geometric and algebraic multiplicities are equal
* Example: $\bm A = \mattwo{\lambda}{1}{0}{\lambda}$; under what conditions is $\dot{\bm x} = \bm A\bm x$ stable? Asymptotically stable?
	* For both stability and asymptotic stability, we require $\lambda < 0$, since for this matrix $\lambda$ has algebraic multiplicity of 2 but geometric multiplicity of 1
	* We can see this from $e^{\bm At} = \mattwo{e^{\lambda t}}{te^{\lambda t}}{0}{e^{\lambda t}}$ since the matrix is already in Jordan form

\noteThm{If $\Re(\lambda _i) > 0$ for any eigenvalue $\lambda _i$ of $\bm A$, then $\dot{\bm x} = \bm A\bm x$ is unstable.}

