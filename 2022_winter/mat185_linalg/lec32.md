# Lecture 32, Apr 4, 2022

## The Diagonalization Test

* Theorem VI: Diagonalization Test: Let $\bm A \in \matdim{n}{n}$ with distinct eigenvalues $\lambda _1, \cdots, \lambda _r$, then $\bm A$ is diagonalizable if and only if $\forall \alpha, m_\alpha = n_\alpha$, where $m _\alpha$ is the geometric multiplicity and $n _\alpha$ is the algebraic multiplicity
	* Proof: $[\implies]$ Let $\bm A$ be diagonalizable, then:
		* If $\bm A$ is diagonalizable then there are $n$ linearly independent eigenvectors; let $E = E _{\lambda _1}\cup \cdots \cup E_{\lambda _r}$ be a linearly independent set of eigenvectors where $E _{\lambda _\alpha}$ is a basis for each eigenspace
		* Since $E$ is a basis for $\matdim{n}{}$, we have $n = \abs{E}$ where $E$ is the cardinality of $E$ (i.e. number of elements)
		* Since $E _{\lambda _i} \cap E_{\lambda _j} = \emptyset$, so then $n = \abs{E} = \sum _{\alpha = 1}^r \abs{E_{\lambda _\alpha}} = \sum _{\alpha = 1}^r m_\alpha \leq \sum _{\alpha = 1}^r n_\alpha = n$
			* Note $n_1 + n_2 + \cdots + n_r = n$
		* Therefore $\sum _{\alpha = 1}^r m_\alpha = \sum _{\alpha = 1}^r n_\alpha$, and since $m_\alpha \leq n_\alpha$ we must have $m_\alpha = n_\alpha$ for all $\alpha$
	* Proof: $[\impliedby]$ For $m_\alpha = n\alpha, \forall \alpha$:
		* $\abs{E} = \sum _{\alpha = 1}^r \abs{E_{\lambda _\alpha}} = \sum _{\alpha = 1}^r m_\alpha = \sum _{\alpha = 1}^r n_\alpha = n$
		* Since $\abs{E} = n$ there are $n$ linearly independent eigenvectors, which span and form a basis for $\matdim{n}{}$, so $\bm A$ is diagonalizable

