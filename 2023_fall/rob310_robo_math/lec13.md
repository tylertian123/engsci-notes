# Lecture 13, Oct 20, 2023

## Additional Linear Algebra Topics

### Positive Definiteness

\noteDefn{A matrix $\bm B \in \reals^{n \times n}$ is \textit{positive semidefinite} if $$\forall \bm x \in \reals^n, \bm x^T\bm B\bm x \geq 0$$
$\bm B$ is \textit{positive definite} if $$\forall \bm x \in \reals^n, \bm x \neq \bm 0 \implies \bm x^T\bm B\bm x > 0$$}

* $\bm x^T\bm B\bm x$ is referred to as the *quadratic form*, which is the matrix version of $x^2$
* For any $\bm A \in \reals^{n \times n}$, $\bm A^T\bm A$ is positive semi-definite; $\bm A^T\bm A$ is positive definite if and only if $\bm A$ is full rank
	* $\bm x^T(\bm A^T\bm A)\bm x = (\bm A\bm x)^T(\bm A\bm x) = \abs{\bm A\bm x}_2^2 \geq 0$
	* If $\bm A$ has linearly independent columns, then $\bm A\bm x = \bm 0 \implies \bm x = \bm 0$, so $\bm x^T(\bm A^T\bm A)\bm x = (\bm A\bm x)^T(\bm A\bm x) = \bm 0$ only when $\bm x = \bm 0$; this goes both ways
* The eigenvalues of a positive semi-definite matrix are always greater than or equal to zero; for positive definite matrices all eigenvalues are strictly positive
* Positive definite matrices come up often as inertia matrices or covariance matrices

### Orthogonality

\noteDefn{A set of vectors $\Set{\bm v_1, \bm v_2, \dots, \bm v_n}$ is \textit{orthonormal} if and only if $$\bm v_i \cdot \bm v_j = \twocond{1}{i = j}{0}{i \neq j}$$
That is, each vector has norm 1 and is orthogonal to every other vector. \tcblower A square matrix whose columns are orthonormal is called an \textit{orthogonal} matrix.}

* Let $\bm Q$ be orthogonal, then:
	* $\bm Q^T\bm Q = \bm 1$, and so $\bm Q^T = \bm Q^{-1}$
	* Applying $\bm Q$ has a linear transformation will not affect the length of a vector or the angle between two vectors; this means $\bm Q$ is an *isometry*
		* $\norm{\bm Q\bm x}_2^2 = \bm x^T\bm Q^T\bm Q\bm x = \bm x^T\bm x = \norm{\bm x}_2^2$
		* $(\bm Q\bm x) \cdot (\bm Q\bm y) = \bm x^T\bm Q^T\bm Q\bm y = \bm x^T\bm y = \bm x \cdot \bm y$
* An orthogonal matrix can rate vectors but not scale them; all rotation matrices are orthogonal

### Solving Linear Systems

* Solving systems in the form of $\bm A\bm x = \bm b$ is a common problem
* However solving by $\bm A^{-1}\bm b$ is almost never a good idea since $\bm A^{-1}$ can be expensive to compute, reduces solution accuracy, and is less efficient since a sparse $\bm A$ will have a dense $\bm A^{-1}$
* Gaussian elimination works for any $\bm A$ and $\bm b$, but we can only achieve $O(n^3)$ for $\bm A \in \reals^{n \times n}$; to get better performance, we can exploit the structure of a matrix (e.g. sparse/dense, triangular, Hermitian, etc)
	* Simplest case: $\bm A$ diagonal, which we can solve in $O(n)$
	* If $\bm A$ is upper or lower triangular, we can solve in $O(n^2)$; we can use each row to solve for exactly a single element of $\bm x$
	* For a sparse matrix, if we can split it up into blocks, we can solve for each block individually
* Gaussian elimination is equivalent to first factorizing $\bm A\bm x = \bm L\bm U\bm x = \bm b$ and then solving $\bm L\bm y = \bm b, \bm U\bm x = \bm y$, where $\bm L$ is lower triangular and $\bm U$ is upper triangular
	* If we want to reuse $\bm A$ with different values of $\bm b$, we can prefactorize $\bm A$ and reuse the factors to save time
* In practice, use `x = np.linalg.solve(A, b)` in Python or `x = A \ b` in MATLAB

### Matrix and Vector Norms

\noteDefn{A general \textit{vector norm} is any function $\norm{\cdot}: \reals^n \mapsto [0, \infty)$ which satisfies the following conditions:
\begin{enumerate}
	\item $\norm{\bm x} = 0 \iff \bm x = \bm 0$
	\item $\forall c \in \reals, \bm x \in \reals^n, \norm{c\bm x} = \abs{c}\norm{\bm x}$
	\item $\forall \bm x, \bm y \in \reals^n, \norm{\bm x + \bm y} \leq \norm{\bm x} + \norm{\bm y}$
\end{enumerate}}

* $\norm{\bm x} \geq 0$ follows from these conditions
* As with the Euclidean norm, norms encode some notion of "length"
* Typical vector norms:
	* The $p$-norm for $p \geq 1$ is defined as $\norm{\bm x}_p = (\abs{x_1}^p + \abs{x_2}^p + \cdots + \abs{x_n}^p)^{\frac{1}{p}}$
		* The 2-norm, or Euclidean norm, is an example of a $p$-norm
		* If we constrain $\norm{\bm x}_p = 1$, we get boxes of various shapes; e.g. a 1-norm is a rotated square in 2D, 2-norm is a circle in 2D, and infinity norm is a square in 2D; all other norms are somewhere in between
	* The $\infty$-norm (infinity norm) is defined as $\norm{\bm x}_\infty = \max(\abs{x_1}, \abs{x_2}, \dots, \abs{x_n})$
* All $p$-norms for $p \geq 1$ (including the $\infty$-norm) are convex

\noteDefn{The \textit{matrix norm} on $\reals^{m \times n}$ induced by a vector norm $\norm{\cdot}$ is given by $$\norm{\bm A} = \max\Set{\norm{\bm A\bm x} | \norm{\bm x} = 1}$$
Or equivalently $$\norm{\bm A} = \max _{\bm x \in \reals^n, \bm x \neq 0} = \frac{\norm{\bm A\bm x}}{\norm{\bm x}}$$}

* The induced vector norm is essentially the maximum norm of a unit vector after multiplying by $\bm A$
* This makes the property that $\norm{\bm A\bm x} \leq \norm{\bm A}\norm{\bm x}$
* Typical matrix norms:
	* 1-norm: $\norm{\bm A}_1 = \max_{i \leq j \leq n} \sum _{i = 1}^m \abs{a_{ij}}$
		* This is equivalent to the maximum column sum
	* 2-norm: $\norm{\bm A}_2 = \max\Set{\sqrt{\lambda} | \exists\bm x \in \reals^n\text{ s.t. }\bm A^T\bm A\bm x = \lambda\bm x}$
		* This is the square root of the largest eigenvalue of $\bm A^T\bm A$ (intuitively we can interpret this as the largest eigenvalue of $\bm A$)
		* Sometimes called the *spectral radius* of $\bm A$
	* Frobenius norm: $\norm{\bm A}_F = \sqrt{\sum _{i = 1}^m\sum _{j = 1}^n \abs{a_{ij}}^2} = \sqrt{\tr \bm A^T\bm A}$
		* $\norm{\bm A}_2 \leq \norm{\bm A}_F$ always holds
	* $\infty$-norm (infinity norm): $\norm{\bm A}_\infty = \max _{1 \leq i \leq m} \sum _{j = 1}^n \abs{a_{ij}}$
		* This is the maximum row sum
		* Proof:
			* $\norm{\bm A}_\infty = \max\Set{\norm{\bm A\bm x}_\infty | \norm{\bm x}_\infty = 1}$
			* Note $[\bm A\bm x]_i = \sum _j a_{ij}x_j$, so $\norm{\bm A\bm x}_\infty = \max _i\abs*{\sum _j a_{ij}x_j} \leq \max _i\sum _j \abs{a_{ij}}\abs{x_j} \leq \max _i \sum _j \abs{a_{ij}}x_{max} = \max _i\sum _j \abs{a_{ij}}\norm{\bm x}_\infty = \max _i \sum _j\abs{a_{ij}}$

### Condition Number

\noteDefn{The \textit{condition number} of $\bm A \in \reals^{n \times n}$ with respect to a given norm $\norm{\cdot}$ is $$\operatorname{cond}\bm A = \norm{\bm A}\norm{\bm A^{-1}}$$ if $\bm A$ is invertible, $\operatorname{cond}\bm A = \infty$ by definition.}

* Recall that conditioning describes how a small error in the input propagates to an error in the output
* For a matrix, we ask the question: for finding $\bm x$ such that $\bm A\bm x = \bm b$, how does the solution $\bm x$ change if we make a small change to the matrices $\bm A$ and $\bm b$?
	* We can derive the relative condition number to be $\abs{\varepsilon}\norm{\bm A}\norm{\bm A^{-1}}$, where $\varepsilon$ is some input error
* e.g. if we used the 2-norm, we would essentially get the ratio between the largest eigenvalue and the smallest eigenvalue; intuitively if these two eigenvalues are different, we will see more error since the system is stiff

