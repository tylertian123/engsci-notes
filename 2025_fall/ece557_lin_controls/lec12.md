# Lecture 12, Oct 10, 2025

## Invariant Subspaces and the Representation Theorem

\noteDefn{A subspace $\mathcal V \in \reals^n$ is $\bm A$-\textit{invariant} for $\bm A \in \reals^{n \times n}$ if and only if $$\forall\bm x \in \mathcal V,\,\bm A\bm x \in \mathcal V$$ i.e. any vector in the subspace stays within the subspace under a linear transformation $\bm A$. We denote this by $\bm A\mathcal V \subseteq \mathcal V$.}

* Note this is equivalent to $\forall \bm x_0 \in \mathcal V, e^{\bm At}\bm x_0 \in \mathcal V$
* Some examples:
	* $\mathcal N(\bm A), \mathcal R(\bm A)$ are both $\bm A$-invariant
	* If $\bm w_1, \dots, \bm w_n \in \reals^n$ are eigenvectors of $\mathcal N$, then $\Span\set{\bm w_1, \dots, \bm w_n}$ is $\bm A$-invariant

\noteThm{\textit{Representation theorem}: Let $\mathcal X$ be a finite dimensional vector space over $\mathbb F$ ($\dim(\mathcal X) = n$) and let $L: \mathcal X \mapsto \mathcal X$ be a linear map, and let $\mathcal V$ be an $L$-invariant subspace of $\mathcal X$ ($\dim(\mathcal V) = k$). Then there exists a basis $\set{\bm x^1, \dots, \bm x^n}$ for $\mathcal X$ such that the matrix representation of $L$ in this basis has the form $$\bm A = \mattwo{\bm A_{11}}{\bm A_{12}}{\bm 0_{(n - k) \times k}}{\bm A_{22}} \qquad \bm A_{11} \in \mathbb F^{k \times k}, \bm A_{12} \in \mathbb F^{k \times (n - k)}, \bm A_{22} \in \mathbb F^{(n - k) \times (n - k)}$$}

* Note that if $L$ has a matrix representation $\bm B$ in the standard basis, then $\bm A = \bm P^{-1}\bm B\bm P$, where $\bm P = \rvec{\bm x^1, \dots, \bm x^n}$
* Proof:
	* $\mathcal V$ is a subspace so it has an independent complement $\mathcal W$
	* Let $\set{\bm v^1, \dots, \bm v^k}$ be a basis for $\mathcal V$ and $\set{\bm v^{k + 1}, \dots, \bm v^n}$ be a basis for $\mathcal W$, then $\set{\bm v^1, \dots, \bm v^n}$ is a basis for $\mathcal X$
	* $\mathcal V$ is $L$-invariant, so $L(\bm v^i) \in \mathcal V$ for $i = 1, \dots, k$ so we can express each $L(\bm v^i) = \sum _{i = 1}^k a_{ji}\bm v^j + \sum _{l = k + 1}^n 0\bm v^l$
		* For $i = k + 1, \dots, n$ we no longer have $L(\bm v^i)$ since $\mathcal W$ is not $L$-invariant, so for these terms the second sum does not have all zeros
	* Recall column $i$ of the matrix representation of $L$ in this basis are the coordinates of $L(\bm v^i)$, so columns $i = 1, \dots, k$ have the form $\cvec{a_{1i}}{\vdots}{a_{ki}}{0}{\vdots}{0}$, and the rest of the columns are nonzero in general
	* Putting it all together, we get the form of $\bm A$ stated in the theorem
* The representation theorem allows us to split up a linear map into parts that are invariant and parts that are not
* Consider $\dot{\bm x} = \bm A\bm x$ and $\mathcal V$ as an $\bm A$-invariant subspace of $\reals^n$, then the representation theorem tells us that there exists a basis $\set{\bm v^1, \dots, \bm v^n}$ of $\reals^n$ such that the matrix representation of $\bm A$ has the form $\hat{\bm A} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{22}}$
	* Now let $\bm P = \rvec{\bm v^1}{\cdots}{\bm v^n}$, then $\bm A\bm P = \bm P\hat{\bm A}$, i.e. $\bm P^{-1}\bm A\bm P = \hat{\bm A}$
		* $\bm A\bm v^j = \sum _{i = 1}^n \hat a_{ij}\bm v^i = \rvec{\bm v^1}{\cdots}{\bm v^n}\cvec{\hat a_{ij}}{\vdots}{\hat a_{nj}} = \bm P\cvec{\hat a_{ij}}{\vdots}{\hat a_{nj}}$
		* Recall that for a matrix representation of a linear map, column $i$ contains the coordinates of the $i$-th basis vector after transformation by the linear map
			* This means $\hat a_{ij}$ are the coordinates of $\bm A\bm v^j$ with respect to our basis
			* The last column vector here is the $j$th column of $\hat{\bm A}$
		* Repeat this for every column
	* Let $\bm z = \bm P^{-1}\bm x$ so $\dot{\bm z} = \bm P^{-1}\dot{\bm x} = \bm P^{-1}\bm A\bm x = \bm P^{-1}\bm A\bm P\bm z = \hat{\bm A}\bm z$
	* Then $\cvec{\dot{\bm z}^1}{\dot{\bm z}^2} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{22}}\cvec{\bm z^1}{\bm z^2}$
	* Now $\dot{\bm z}^1 = \hat{\bm A}_{11}\bm z^1 + \hat{\bm A}_{12}\bm z^2$ and $\dot{\bm z}^2 = \hat{\bm A}_{22}\bm z^2$
	* Notice now that the $\bm z^2$ subsystem is decoupled
	* We will later make use of this to define the Kalman decomposition and the notion of stabilizability

