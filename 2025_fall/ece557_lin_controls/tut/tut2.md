# Tutorial 2, Sep 22, 2025

* Show that $\bm A \in \reals^{n \times n}$ is diagonalizable if and only if it has $n$ linearly independent eigenvectors
	* We have shown that if $\bm A$ has $n$ linearly independent eigenvectors, it is diagonalizable; now we need to show implication in the other direction
	* If $\bm A$ is diagonalizable, by definition there exists $\bm P \in \complex^{n \times n}$ such that $\bm P^{-1}\bm A\bm P = \bm\Lambda \in \complex^{n \times n}$ is diagonal
	* Therefore $\bm A\bm P = \bm P\bm\Lambda$
	* $\bm A\bm P = \bm A\rvec{\bm v_1}{\cdots}{\bm v_n} = \rvec{\bm A\bm v_1}{\cdots}{\bm A\bm v_n}$
	* $\bm P\bm\Lambda = \rvec{\bm v_1}{\cdots}{\bm v_n}\diagthree{\lambda _1}{\ddots}{\lambda _n} = \rvec{\lambda _1\bm v_1}{\cdots}{\lambda _n\bm v_n}$
	* Equating the columns we have that $\bm v_1, \dots, \bm v_n$ are the eigenvectors of $\bm A$
	* Now to prove linear independence, we know $\bm P\bm v = \bm 0 \iff \bm v = \bm 0$ as $\bm P$ is invertible; so the only linear combination of the columns of $\bm P$ that results in 0 is all zeros, therefore its columns are linearly independent
* $\bm A = \matfour{1}{-1}{-3}{0}{0}{-2}{0}{0}{-3}{-1}{1}{0}{0}{0}{0}{4}$
	* To make the computation for eigenvalues tractable, we expand the determinant along rows that are mostly zeros
	* $\alignedeqntwo[t]{\det(\lambda\bm I - \bm A)}{\det\matfour{\lambda - 1}{-1}{-3}{0}{0}{\lambda + 2}{0}{0}{-3}{-1}{\lambda - 1}{0}{0}{0}{0}{\lambda - 4}}{(\lambda - 4)\det\matthree{\lambda - 1}{1}{3}{0}{\lambda + 2}{0}{3}{1}{\lambda - 1}}{(\lambda - 4)(\lambda + 2)((\lambda - 1)^2 - 9)}{(\lambda - 4)(\lambda + 2)(\lambda - 4)(\lambda + 2)}{(\lambda - 4)^2(\lambda + 2)^2}$
	* By inspection the eigenvectors for $\lambda = 4$ are $\cvec{1}{0}{-1}{0}$ and $\cvec{0}{0}{0}{1}$
	* The only eigenvector for $\lambda = -2$ is $\cvec{1}{0}{1}{0}$ (we can show that $\rank(-2\bm I - \bm A) = 3$)
	* Since we don't have enough eigenvectors, the matrix is not diagonalizable (using the result from the first question)

