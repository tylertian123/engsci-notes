# Lecture 31, Apr 1, 2022

## Criteria for Diagonalizability

* $m_1 + m_2 + \cdots + m_r \leq n$ where $m_{\alpha} = \dim \mathscr E_{\lambda _\alpha}$ for $\bm A \in \matdim{n}{n}$
	* Proof: Let $\Set{\bm p_{\alpha,j}}$ be a set of eigenvectors in $H_{\lambda _\alpha}$; $m_1 + \cdots + m_r$ is the total number of vectors in $H_{\lambda _1}\cup \cdots \cup H_{\lambda _\alpha}$; this cannot exceed $n$ as that would violate the fundamental theorem
	* Corollary: If $m_1 + \cdots + m_r = n$, then $\bm A$ is diagonalizable
* Definition: Let $\bm A \in \matdim{n}{n}$ have eigenvalues $\lambda _\alpha$; then the *algebraic multiplicity* of $\lambda _\alpha$ is $n_\alpha$, the highest power of $(\lambda - \lambda _\alpha)$ that divides the characteristic equation for $\bm A$
	* i.e. the algebraic multiplicity of $\lambda _\alpha$ is the number of times $\lambda _\alpha$ appears as a root of the characteristic polynomial
* Definition: The *geometric multiplicity* of $\lambda _\alpha$ is $m_\alpha = \dim \mathscr E_{\lambda _\alpha}$, i.e. the dimension of its eigenspace
	* Theorem VI: Diagonalization Test: $m_\alpha = n_\alpha$ for all $\alpha$ if and only if the matrix is diagonalizable (proven next lecture)
* Proposition III: Let $\bm A = \mattwo{\bm 1}{\bm B}{\bm 0}{\bm C} \in \matdim{n}{n}$ and $\bm 1 \in \matdim{r}{r}$ (and $\bm C \in \matdim{n - r}{n - r}$), then $\det \bm A = \det \bm C$
	* Take $\bm A$ and reduce it into $\bm A' = \mattwo{\bm 1}{\bm B'}{\bm 0}{\bm C'}$ where $\bm C$ is upper triangular
		* We can do this by some $\bm E$ without having to multiply any row by a scalar since we don't need the leading entries to be 1
	* $\det(\bm A') = \det(\bm C') = (-1)^p\det(\bm C)$
	* $\det (\bm A') = (-1)^p\det(\bm A)$ since the same operations were performed on $\bm A$
	* The minus signs cancel so $\det(\bm A) = \det(\bm C)$
* Theorem V: Multiplicity Theorem: $1 \leq m_\alpha \leq n_\alpha$
	* Proof: Consider $\lambda _\alpha$; Let $F = \Set{\bm f_1, \cdots, \bm f_{m_\alpha}}$ be a basis for $\mathscr E_{\lambda _\alpha}$ where $m_\alpha = \dim \mathscr E_{\lambda _\alpha}$
		* We can extend this basis for a basis for $\matdim{n}{}$
		* Let $\bm Q$ be the transition matrix from $F$ to $E_0 = \Set{\bm e_1, \cdots, \bm e_{m_\alpha}, \cdots, \bm e_n}$, the standard basis for $\matdim{n}{}$, then $\bm Q = \rvec{\bm f_1}{\cdots}{\bm f_n}$ and $\bm Q\bm e_{\alpha} = \bm f_\alpha$, i.e. $\bm Q^{-1}\bm f_\alpha = \bm e_\alpha$
		* Consider $\bm Q^{-1}\bm A\bm Q\bm e_{j_\alpha} = \bm Q^{-1}\bm A\bm f_{j_\alpha} = \lambda _\alpha\bm Q^{-1}\bm f_{j\alpha} = \lambda _\alpha\bm e_{j_\alpha}$ where $j_\alpha = 1, \cdots, m_\alpha$
		* So $\bm Q^{-1}\bm A\bm Q = \mattwo{\lambda _\alpha\bm 1}{\bm B}{\bm 0}{\bm C}$ where $\bm 1 \in \matdim{m_\alpha}{m_\alpha}$ since using the standard basis vectors we can pick out the $\lambda _\alpha$ for the first $m_\alpha$ columns
		* Consider $\alignedeqntwo[t]{c_{\bm A}(\lambda)}{c_{\bm Q^{-1}\bm A\bm Q}(\lambda)}{\det\mattwo{(\lambda - \lambda _\alpha)\bm 1}{-\bm B}{\bm 0}{\lambda \bm 1 - \bm C}}{(\lambda - \lambda _\alpha)^{m_\alpha}\det\mattwo{\bm 1}{-\bm B}{\bm 0}{\lambda\bm 1 - \bm C}}{(\lambda - \lambda _\alpha)^{m_\alpha}\det(\lambda \bm 1 - \bm C)}$
			* Note the first line relies on the similarity transformation preserving the characteristic equation
			* The last line relies on Prop. III
		* This shows us that we have to have at least $m_\alpha$ repeated roots of $\lambda _\alpha$, so $m_\alpha \leq n_\alpha$
		* Since every eigenspace must have at least one nontrivial eigenvector $m_\alpha \geq 1$

