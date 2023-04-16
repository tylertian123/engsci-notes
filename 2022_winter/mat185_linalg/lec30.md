# Lecture 30, Mar 29, 2022

## Independence of Eigenspaces

* Theorem III: Let $\bm A \in \matdim{n}{n}$ have $r$ distinct eigenvalues ($r \leq n$) denoted $\lambda _1, \cdots, \lambda _r$, and let $\bm x_\alpha \in \mathscr E_{\lambda _\alpha}$ but $\bm x _\alpha \neq \bm 0$; then $\Set{\bm x_1, \cdots, \bm x_r}$ is linearly independent
	* i.e. eigenvectors corresponding to different eigenvalues are always linearly independent
	* Proof by induction:
		* For $k = 1$, the set $\Set{\bm x_1}$ is linearly independent
		* Assume $\Set{\bm x_1, \cdots, \bm x_k}$ is linearly independent
		* Consider $\alignedimp[t]{\sum _{i = 1}^{k + 1} \mu _i\bm x_i = \bm 0}{\sum _{i = 1}^{k + 1}\mu _i\bm A\bm x_i = \bm 0}{\sum _{i = 1}^{k + 1} \mu _i\lambda _i\bm x_i = \bm 0}{\sum _{i = 1}^{k + 1} \mu _i\lambda _i\bm x_i - \lambda _{k + 1}\sum _{i = 1}^{k + 1} \mu _i\bm x_i = \bm 0}{\sum _{i = 1}^{k + 1} \mu _i(\lambda _i - \lambda _{k + 1})\bm x_i = \bm 0}{\sum _{i = 1}^k \mu _i(\lambda _i - \lambda _{k + 1})\bm x_i = \bm 0}{\mu _1, \cdots, \mu _k = \bm 0}{\mu _{k + 1}\bm x_{k + 1} = \bm 0}{\mu _{k + 1} = 0}{\Set{\bm x_1, \cdots, \bm x_{k + 1}}\text{ is linearly independent}}$
	* Corollary: If all the eigenvalues of $\bm A$ are distinct, then $\bm A$ is diagonalizable (since if $r = n$, we can pick a set of $n$ independent eigenvectors, which must be a basis for $\matdim{n}{}$)
		* However, if the eigenvalues are not distinct, that doesn't mean the matrix is not diagonalizable
* Lemma I: Let $\bm A \in \matdim{n}{n}$ have $r$ distinct eigenvalues and $\bm x_\alpha \in \mathscr E_{\lambda _\alpha}$, if $\bm x_1 + \cdots + \bm x_n = \bm 0$ then $\bm x_\alpha = \bm 0$
	* Proof:
		* Consider $\mu _1\bm x_1 + \cdots + \mu _r\bm x_r = \bm 0$
		* If $\bm x_\alpha \neq 0$ for some $\alpha$ then $\mu _\alpha = 0$ since $\bm x_1, \cdots, \bm x_r$ are independent
		* This contradicts $\bm x_1 + \cdots + \bm x_r = \bm 0$
* Theorem IV: Let $\bm A \in \matdim{n}{n}$ have $r$ distinct eigenvalues and $H_{\lambda _\alpha}$ be a linearly independent set of eigenvectors from $\mathscr E_{\lambda _\alpha}$, then $H_{\lambda _1} \cup H_{\lambda _2} \cup \cdots \cup H_{\lambda _r}$ is linearly independent
	* Proof:
		* Let $H_{\lambda _\alpha} = \Set{\bm p_{\alpha, 1}, \cdots, \bm p_{\alpha, m_\alpha}}$
		* $\sum _{j = 1}^{m_1}\mu _{1,j}\bm p_{1,j} + \sum _{j = 2}^{m_2} \mu _{2,j}\bm p_{2, j} + \cdots + \sum _{j = 1}^{m_r} \mu _{r,j}\bm p_{r,j} = \bm 0$
		* $\bm x_1 + \cdots + \bm x_r = 0 \implies \bm x_\alpha = \bm 0$ by Lemma I
		* Since each sum adds up to zero, all $\mu$ are zero since each $H$ is linearly independent
		* Therefore the union of all the sets is linearly independent

