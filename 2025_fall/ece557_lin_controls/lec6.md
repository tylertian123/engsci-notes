# Lecture 6, Sep 17, 2025

## Computing the Matrix Exponential -- Continued

### Complex Eigenvalues

* Consider $\bm A = \cvec{1}{2}{-1}{-1}$; the eigenvectors and eigenvalues are $\left(\cvec{2}{i - 1}, i\right)$ and $\left(\cvec{2}{-i - 1}, -i\right)$
	* Recall that eigenvector/eigenvalues always come in complex conjugate pairs, so for a 2x2 we can take the conjugate to find the other one
	* $\bm A$ has two distinct eigenvalues, so it is diagonalizable
* Direct calculation: $\alignedeqntwo[t]{e^{\bm At}}{\bm Pe^{\bm\Lambda t}\bm P^{-1}}{\cdots}{\mattwo{\sin t + \cos t}{2\sin t}{-\sin t}{\cos t - \sin t}}$
	* Note we applied Euler's formula
* Alternatively, we can define $\bm P$ and $\bm\Lambda$ differently to avoid dealing with complex numbers
	* Denote $\bm v = \cvec{2}{i - 1}$ (the other eigenvector is $\bar{\bm v}$
	* Let $\tilde{\bm P} = \rvec{\Re(v)}{\Im(v)} = \mattwo{2}{0}{-1}{1}$
	* Let $\tilde{\bm\Lambda} = \mattwo{0}{1}{-1}{0}$ (the imaginary parts of $\lambda _1, \lambda _2$ are in the off-diagonal entries)
	* We can show that $e^{\mattwo{a}{b}{-b}{a}t} = e^{at}\mattwo{\cos(bt)}{\sin(bt)}{-\sin(bt)}{\cos(bt)}$
		* When we have complex eigenvalues, we see that this results in a rotation with a rate of decay
	* Now we can compute $\tilde{\bm P}e^{\tilde{\bm\Lambda}t}\tilde{\bm P}^{-1}$ and this leads to the same answer

### Non-Diagonalizable Case -- Jordan Forms

* Let $\bm A \in \reals^{n \times n}$ have less than $n$ linearly independent eigenvectors, i.e. it is non-diagonalizable; in this case we cannot form an invertible $\bm P$ with the eigenvectors
	* We will introduce the notion of *generalized eigenvectors* which allow us to form $\bm P$ in this case
* Recall that the characteristic polynomial of $\bm A$ is $x_A(s) = \det(s\bm I - \bm A) = \prod _{i = 1}^\sigma (s - \lambda _i)^{m_i}$, where $\sum _{i = 1}^\sigma m_i = n$
	* $m_i$ is the *algebraic multiplicity* of the eigenvalue $\lambda _i$
* The *minimal polynomial* $\psi _A(s)$ is the polynomial of least degree such that $\psi _A(\bm A) = \bm 0$
	* We can show that such a polynomial always exists
	* The minimal polynomial has the form $\psi _A(s) = \prod _{i = 1}^\sigma (s - \lambda _i)^{l_i}$ where $l_i \leq m_i$
		* Note that normally $s \in \complex$; when we substitute $\bm A$ into the polynomial we replace $\lambda _i$ with $\lambda _i\bm I$
		* This is the same form as the characteristic polynomial but we may not have to repeat each term as many times, i.e. some of the information in the characteristic polynomial is redundant
	* The $l_i$ are known as the *geometric multiplicity* of $\lambda _i$
	* Each $l_i$ is also the number of linearly independent eigenvectors corresponding to $\lambda _i$ (i.e. $\dim(\mathcal N(\lambda _i\bm I - \bm A))$ where $\mathcal N$ denotes null space)
* Using this, we can decompose $\complex^n$ into $\sigma$ subspaces: $\complex^n = \mathcal N(\lambda _1\bm I - \bm A)^{l_1} \oplus \cdots \oplus \mathcal N(\lambda _\sigma\bm I - \bm A)^{l_\sigma}$
	* $\sigma$ denotes a direct sum, $\mathcal V \oplus \mathcal W = \set{\bm v + \bm w | \bm v \in \mathcal V, \bm w \in \mathcal W}$, where it is required that $\mathcal V \intersect \mathcal W = \set{0}$
* Example: Let $\bm A \in \reals^{6 \times 6}$ have the characteristic polynomial $x_A(s) = (s - \lambda)^6$ (i.e. $\lambda$ repeated 6 times) and $\psi _A(s) = (s - \lambda)^3$ (i.e. only 3 independent eigenvectors)
	* $\mathcal N(\lambda\bm I - \bm A) = \Span\set{\bm e_1, \bm e_2, \bm e_3}$ from the 3 independent eigenvectors
	* Let $\bm v_1, \bm v_2$ be linearly independent solutions to $\twopiece{(\lambda\bm I - \bm A)\bm v_1 = -\bm e_1}{(\lambda\bm I - \bm A)\bm v_2 = -\bm e_2}$ and $\bm w_1$ be a solution to $(\lambda\bm I - \bm A)\bm w_1 = -\bm v_1$ and all of $\bm e_1, \bm e_2, \bm e_3, \bm v_1, \bm v_2, \bm w_1$ are linearly independent
		* Multiplying by $(\lambda\bm I - \bm A)$ on both sides, the right hand side goes to zero, so we see that $\bm v_1, \bm v_2 \in \mathcal N((\lambda\bm I - \bm A)^2)$ and $\bm w_1 \in \mathcal N((\lambda\bm I - \bm A)^3)$
		* In general, a *generalized eigenvector* is a vector such that $(\lambda\bm I - \bm A)^n\bm v = \bm 0$ where $n \in \naturals$
		* For each of the eigenvectors, we can create an entire chain of these generalized eigenvectors
	* Now notice that if we rearrange the expressions we get $\bm A\bm v_1 = \lambda\bm v_1 + \bm e_1$, and $\bm A\bm w_1 = \lambda\bm w_1 + \bm v_1$ (and so on for longer chains)
	* Let $\bm P = \rvec{\bm e_1}{\bm v_1}{\bm w_1}{\bm e_2}{\bm v_2}{\bm e_3}$
		* We group together the chain related to $\bm e_1$, then the chain of $\bm e_2$ and so on
	* $\bm A\bm P = \rvec{\lambda\bm e_1}{\lambda\bm v_1 + \bm e_1}{\lambda\bm w_1 + \bm v_1}{\lambda\bm e_2}{\lambda\bm v_2 + \bm e_2}{\lambda\bm e_3} = \bm P\begin{bmatrix}\lambda & 1 & 0 & 0 & 0 & 0 \\ 0 & \lambda & 1 & 0 & 0 & 0 \\ 0 & 0 & \lambda & 0 & 0 & 0 \\ 0 & 0 & 0 & \lambda & 1 & 0 \\ 0 & 0 & 0 & 0 & \lambda & 0 \\ 0 & 0 & 0 & 0 & 0 & \lambda \end{bmatrix} = \bm P\bm J$
	* The resulting matrix $\bm J$ is the *Jordan form*, which is block diagonal; each of the blocks is known as a *Jordan block*
		* The number of Jordan blocks is always equal to the number of linearly independent eigenvectors
	* Note there are multiple other forms that are possible, depending on how we choose to do the generalized eigenvectors: we can have 3 Jordan blocks of size 2, 1 block of size 4 and 2 blocks of size 1; as long as we only have 3 blocks, any combination is possible
		* Also, in general we have multiple distinct eigenvalues, so we have a block for each distinct eigenvalue, and then within each block we have a block for each linearly independent eigenvector for that eigenvalue (and its chain)
	* In this way we can generalize the notion of diagonalizability to matrices without a full set of independent eigenvectors

\noteDefn{The \textit{Jordan form} of $\bm A \in \reals^{n \times n}$ has the form $$\bm P^{-1}\bm A\bm P = \bm J = \diagthree{\bm J_{\lambda _1}}{\ddots}{\bm J_{\lambda _k}}$$ where $k$ is the number of distinct eigenvalues, and each $\bm J_{\lambda _i}$ has form $$\bm J_{\lambda _i} = \diagthree{\bm J_{\lambda _i}^1}{\ddots}{\bm J_{\lambda _i}^{l_i}} \in \complex^{m_i \times m_i}$$ where $m_i$ is the \textit{algebraic multiplicity} of $\lambda _i$ (number of times it appears as a root in the characteristic equation) and $l_i$ is its \textit{geometric multiplicity} (number of linearly independent eigenvectors for $\lambda _i$); each $\bm J_{\lambda _i}^j$ takes the form $$\bm J_{\lambda _i}^j = \begin{bmatrix}\lambda _i & 1 & & \\ & \lambda _i & \ddots & \\ & & \ddots & 1 \\ & & & \lambda _i \end{bmatrix}$$ with $\lambda _i$ repeated along the diagonal, and 1s above each $\lambda$.}

* With this we can now write $e^{\bm At} = \bm Pe^{\bm Jt}\bm P^{-1}$ (following the same proof as the case of normal diagonalization for $\bm A$)
	* The block diagonal form means $e^{\bm Jt} = \diagthree{e^{\bm J_{\lambda _1}t}}{\ddots}{e^{\bm J_{\lambda _k}t}}$
	* Similarly $e^{\bm J_{\lambda _i}t} = \diagthree{e^{\bm J_{\lambda _i}^1}}{\ddots}{e^{\bm J_{\lambda _i}^{l_i}}}$
	* $\bm J_{\lambda _i}^jt = \left(\lambda _i\bm I + \bm N\right)t$ where $\bm N$ is a matrix with 1s above the diagonal
	* Therefore $e^{\bm J_{\lambda _i}^j} = e^{\lambda _it}e^{\bm Nt}$
		* $\bm N$ is a nilpotent matrix, so we can show that eventually the higher order terms in the infinite series expansion for $e^{\bm Nt}$ all go to zero
	* We can show that $e^{\bm Nt}$ has form $\begin{bmatrix}1 & t & \cdots & \frac{t^{p - 1}}{(p - 1)!} \\ & \ddots & \ddots & \vdots \\ & & 1 & t \\ & & & 1 \end{bmatrix} \in \complex^{p \times p}$
		* Here $p$ is the size of the block $\bm J_{\lambda _i}^j$ (i.e. the size of the chain of generalized eigenvectors corresponding to $\lambda _i$), which is not unique

