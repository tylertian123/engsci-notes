# Lecture 14, Oct 25, 2023

## Eigendecomposition

\noteDefn{An \textit{eigenvector} $\bm x \neq \bm 0$ of a square matrix $\bm A \in \reals^{n \times n}$ is any vector satisfying $$\bm A \bm x = \lambda\bm x$$ for some \textit{eigenvalue} $\lambda \in \complex$.}

\noteDefn{The \textit{spectrum} of $\bm A$ is the set of all eigenvalues of $\bm A$. \tcblower The \textit{spectral radius} of $\bm A$ is $\rho(\bm A) = \max\abs{\lambda}$ overall eigenvalues $\lambda$ of $\bm A$.}

* Eigenvalues are connected to optimization; consider the optimization: $\min _{\bm x} \bm x^T\bm A\bm x$ subject to $\norm{\bm x}_2 = 1$
	* This is a quadratically constrained quadratic program (QCQP)
	* The Lagrangian is $\Lambda(\bm x, \lambda) = \bm x^T\bm A\bm x - \lambda(\bm x^T\bm x - 1)$
	* From $\pdiff{\Lambda}{\bm x^T} = 0$ we get that $2\bm A\bm x - 2\lambda\bm x = 0 \implies \bm A\bm x = \lambda\bm x$
	* Therefore the critical points are the unit eigenvectors of $\bm A$ (unit due to the constraint)
* Important properties:
	* Eigenvectors corresponding to different eigenvalues are linearly independent
	* $\bm A$ is diagonalizable if its eigenvectors span $\reals^n$, in which case $\bm A = \bm V\bm\Lambda\bm V^{-1} \iff \bm\Lambda = \bm V^{-1}\bm A\bm V$, which is called a *similarity transformation*
		* If $\bm A$ is not diagonalizable, it is *degenerate* or has *degenerate eigenvalues*
		* If $\bm V$ is orthogonal, we can interpret this as decomposing $\bm A$ into a pure rotation, a pure scaling, and then the inverse of the pure rotation
	* *Spectral theorem*: Symmetric matrices have $n$ orthonormal eigenvectors with (possibly repeated) real eigenvalues
	* Positive definite matrices have all positive eigenvalues; positive semi-definite matrices have all nonnegative eigenvalues

## Singular Value Decomposition

\noteDefn{The \textit{singular value decomposition} (SVD) of $\bm A \in \reals^{m \times n}$ is $$\bm U^T\bm A\bm V = \bm\Sigma \iff \bm A = \bm U\bm\Sigma\bm V^T$$ where $\bm V \in \reals^{n \times n}, \bm U \in \reals^{m \times m}$ are orthogonal matrices, and $\bm\Sigma \in \reals^{m \times n}$ is a rectangular diagonal matrix which contains the singular values of $\bm A$.
\tcblower
Note that $\bm V$ contains the eigenvectors of $\bm A^T\bm A$ and $\bm U$ contains the eigenvectors of $\bm A\bm A^T$, while the $\sigma _i \in \reals$ singular values on the diagonal of $\bm\Sigma$ are the square roots of the eigenvalues of $\bm A^T\bm A$.}

* Note $\bm\Sigma$ has the same dimension as $\bm A$
* $\bm A^T\bm A$, $\bm A\bm A^T$ are symmetric, so by the spectral theorem their eigenvalues are orthonormal; furthermore, $\bm A^T\bm A$ is positive semi-definite so eigenvalues are all nonnegative, thus the singular values are real
* $\bm\Sigma$ has the singular values $\sigma _1, \dots, \sigma _m$ (assuming $m \leq n$) on its diagonal; note that it can be rectangular
	* We can split up $\bm\Sigma$ into a square diagonal matrix and a block of all zeroes
	* In general $\bm\Sigma = \mattwo{\matthree{\sigma _1}{}{}{}{\ddots}{}{}{}{\sigma _k}}{\cvec[]{\bm 0}{\vdots}{\bm 0}}{\rvec[]{\bm 0}{\cdots}{\bm 0}}{\bm 0}$
	* By convention the singular values are sorted such that $\sigma _1 \geq \sigma _2 \geq \cdots \geq \sigma _k \geq \sigma _{k + 1} = \sigma _{k + 2} = \cdots = 0$
	* The first $k = \rank\bm A$ singular values are nonzero (note $k$ is also the number of strictly positive eigenvalues of $\bm A^T\bm A$)
* Note that $\bm A\bm V = \bm U\bm\Sigma \implies \bm A\bm v_j = \sigma _j\bm u_j$; therefore we see that the SVD is a generalization of eigendecomposition for non-square $\bm A$
	* $\bm V = \rvec{\bm v_1}{\bm v_2}{\cdots}{\bm v_k}{\bm v_{k + 1}}{\bm v_{k + 2}}{\cdots}{\bm v_n}$
		* $\bm v_1$ to $\bm v_k$ are the normalized eigenvectors of $\bm A^T\bm A$
		* $\bm v_{k + 1}$ to $\bm v_n$ are taken from the null space of $\bm A^T\bm A$
		* All $\bm v_j$ are chosen such that $\bm V$ is orthogonal
	* $\bm U = \rvec{\bm u_1}{\bm u_2}{\cdots}{\bm u_k}{\bm u_{k + 1}}{\bm u_{k + 2}}{\cdots}{\bm u_n}$
		* $\bm u_1$ to $\bm u_k$ are the normalized eigenvectors of $\bm A\bm A^T$
		* $\bm u_{k + 1}$ to $\bm u_n$ are taken from the null space of $\bm A\bm A^T$
		* All $\bm u_j$ are chosen such that $\bm U$ is orthogonal
		* This is because $\bm A\bm A^T = \bm U\bm\Sigma\bm V^T(\bm V\bm\Sigma^T\bm U^T) = \bm U\bm\Sigma\bm\Sigma^T\bm U^T = \bm U\bm\Lambda\bm U^T$ which is just a diagonalization; ditto for $\bm V$
* Example: find the SVD of $\rvec{1}{0}$
	* $\bm A^T\bm A = \mattwo{1}{0}{0}{0}$
		* This has rank 1, giving eigenvalues $\lambda _1 = 1, \lambda _2 = 0$
		* We get the nonzero singular value $\sigma _1 = \sqrt{\lambda _1} = 1$
		* The unit eigenvector corresponding to $\lambda _1$ is $\cvec{1}{0}$
		* To get the second vector in $\bm V$ we take $\cvec{0}{1}$, which is orthogonal to the first and is a zero eigenvector
	* To find $\bm u_j$ we can use $\bm A\bm v_j = \sigma _j\bm u_j$, giving $u_1 = 1$
	* Therefore $\bm\Sigma = \rvec{\sigma _1}{0} = \rvec{1}{0}, \bm V = \mattwo{1}{0}{0}{1}, \bm U = \cvec{1}$
* Example: find the SVD of $\cvec{1}{0}$
	* $\bm A^T\bm A = 1$ giving $\lambda _1 = 1 \implies \sigma _1 = 1$ and an eigenvector of $1$
	* $\bm A\bm v_j = \sigma _j\bm u_j \implies \bm u_1 = \cvec{1}{0}1 = \cvec{1}{0}$
		* Choose $\bm u_2 = \cvec{0}{1}$ so that it is orthogonal to $\bm u_1$ and gives $\bm A\bm A^T\bm u_2 = \bm 0$
	* Therefore $\bm\Sigma = \cvec{\sigma _1}{0} = \cvec{1}{0}, \bm V = \cvec{1}, \bm U = \mattwo{1}{0}{0}{1}$
	* We could have found this using the previous example's result, since the matrix was just transposed
* If $\bm A_1 = \bm U_1\bm\Sigma _1\bm V_1^T$ and $\bm A_1^T = \bm A_2 = \bm U_2\bm\Sigma _2\bm V_2^T$, then $\bm V_1 = \bm U_2, \bm U_1 = \bm V_2, \bm\Sigma _1 = \bm\Sigma _2^T$
* Consider the effect of $\bm A$ on length: examine the critical points of $\norm{\bm A\bm x}_2^2 = \bm x^T\bm A^T\bm A\bm x$ (the *Rayleigh quotient*) subject to $\norm{\bm x}_2 = 1$
	* From the example in the previous section we know that critical points are the unit eigenvectors of $\bm A^T\bm A$: $\bm A^T\bm A\bm v_i = \lambda _i\bm v_i$, where all eigenvalues are nonnegative and eigenvectors are orthonormal
	* Let $\tilde{\bm u}_i = \bm A\bm v_i$, then $\lambda _i\tilde{\bm u}_i = \lambda _i\bm A\bm v_i = \bm A(\lambda _i\bm v_i) = \bm A\bm A^T\bm A\bm v_i = \bm A\bm A^T\tilde{\bm u_i}$ so $\tilde{\bm u}_i$ is an eigenvector of $\bm A\bm A^T$ with the same eigenvalue $\lambda _i$
		* $\norm{\tilde{\bm u}_i}_2 = \sqrt{\bm v_i^T\bm A^T\bm A\bm v_i} = \sqrt{\lambda _i\bm v_i^T\bm v_i} = \sqrt{\lambda}\norm{\bm v_i}_2 = \sqrt{\lambda}$
		* We can normalize to get $\bm u_i = \frac{\tilde{\bm u}_i}{\lambda _i}$
	* So we get two eigenproblems $\bm A^T\bm A\bm v_i = \lambda _i\bm v_i, \bm A\bm A^T\bm u_i = \lambda _i\bm u_i$ with all $\bm v_i, \bm u_1$ being orthonormal
	* Now define $\bm U_1 = \rvec{\bm u_1}{\cdots}{\bm u_k}, \bm V_1 = \rvec{\bm v_1}{\cdots}{\bm v_k}$ and we can show that this leads us to the SVD
* $\bm A = \rvec{\bm U_1}{\bm U_2}\mattwo{\bm\Sigma _{11}}{\bm 0}{\bm 0}{\bm 0}\cvec{\bm V_1^T}{\bm V_2^T}$ where $\bm U_2$ and $\bm V_2$ are chosen in the null spaces of $\bm A\bm A^T$, $\bm A^T\bm A$ to give orthogonality
	* Essentially, $\bm A$ takes everything from $\Span\set{\bm V_1}$ and maps it to $\Span\set{\bm U_1}$; everything in $\Span\set{\bm V_2}$ is mapped to zero, so everything in $\Span\set{\bm U_2}$ are all the points that $\bm A$ cannot reach
	* $\bm V_1, \bm U_1$ are unique, but $\bm V_2, \bm U_2$ can be chosen arbitrarily as long as orthogonality is maintained
	* In practice, we rarely need to compute $\bm V_2, \bm U_2$
* The SVD allows us to write $\bm A$ using its modes: $\bm A = \sum _{i = 1}^k \sigma _i \bm u_i\bm v_i^T$
	* Since the $\sigma _i$ are sorted, the earlier terms in the summation are more "important"
	* We can cut of this summation to get a version of $\bm A$ with some of the unimportant bits removed

