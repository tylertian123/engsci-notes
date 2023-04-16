# Lecture 28, Mar 25, 2022

## Properties of Eigenvalues and Eigenvectors

* If $\bm A = \mattwo{a_{11}}{a_{12}}{a_{21}}{a_{22}}$, the eigenvalues satisfy $\lambda^2 - (a_{11} + a_{22})\lambda + (a_{11}a_{22} - a_{12}a_{21}) = \lambda^2 - (\tr\bm A)\lambda + \det\bm A = 0$
* In general, for $\bm A \in \matdim{n}{n}$, $\lambda^n - (\tr \bm A)\lambda^{n - 1} + \cdots + (-1)^n\det \bm A = 0$
* Proposition I: Let $\lambda, \mu$ be two distinct eigenvalues for $\bm A \in \matdim{n}{n}$, then $\mathscr E_{\lambda} \cap \mathscr E_{\mu} = \Set{\bm 0}$
	* Proof: Let $\bm x \in \mathscr E_{\lambda} \cap \mathscr E_{\mu}$, then $\bm A\bm x = \lambda\bm x$ and $\bm A\bm x = \mu\bm x \implies \lambda\bm x = \mu\bm x \implies (\lambda - \mu)\bm x = \bm 0$, but $\lambda \neq \mu$ so $\bm x = \bm 0$
* Note eigenvalues may be complex

## Diagonalizability

* We have $\threepiece{\bm A\bm p_1 = \lambda _1\bm p_1}{\vdots}{\bm A\bm p_n = \lambda _n\bm p_n} \implies \bm A\rvec{\bm p_1}{\cdots}{\bm p_n} = \rvec{\bm p_1}{\cdots}{\bm p_n}\matthreeb{\lambda _1}{}{}{}{\ddots}{}{}{}{\lambda _n}$
	* This can be written as $\bm A\bm P = \bm P\bm \Lambda$
	* Suppose $\bm p_1, \cdots, \bm p_n$ are linearly independent, then $\bm P$ is invertible, then $\bm P^{-1}\bm A\bm P = \bm\Lambda$
		* This is called *diagonalization* since $\bm \Lambda$ is a diagonal matrix
* If we had $\bm{\dot \eta} = \bm\Lambda\bm\eta \implies \Set{\dot \eta _i = \lambda _i\eta _i}$, which is a system of decoupled differential equations
* Definition: $\bm P \in \matdim{n}{n}$ *diagonalizes* $\bm A \in \matdim{n}{n}$ if $\bm P$ is invertible and $\bm P^{-1}\bm A\bm P = \bm\Lambda$
	* However, it's not always possible to find a set of $\bm p_n$ such that $\bm P$ is invertible, i.e. not all matrices are diagonalizable
* Theorem I: Diagonalization Theorem: The matrix $\bm P \in \matdim{n}{n}$ diagonalizes $\bm A \in \matdim{n}{n}$ (i.e. $\bm P^{-1}\bm A\bm P = \bm \Lambda$) iff $\bm P$ the columns of $\bm P$ are eigenvectors of $\bm A$ that form a basis for $\matdim{n}{}$
* Note that $P^{-1}\bm A\bm P = \bm\Lambda \implies \bm A = \bm P\bm \Lambda\bm P^{-1}$

