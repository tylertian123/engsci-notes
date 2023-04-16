# Lecture 7, Jan 28, 2022

## Linear Combination and Span

* Definition: A vector $\bm v \in \mathcal V$ is a linear combination of $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \subset \mathcal V$ if and only if it can be written as $\bm v = \sum _{j = 1}^n \lambda _j\bm v_j$ for $\lambda _j \in \Gamma$
	* Note the use of $\subset$ instead of $\subseteq$ because for now we want to keep the set finite
* Definition: The *span* of $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \subset \mathcal V$ is denoted: $\Span \Set{\bm v_1, \bm v_2, \cdots, \bm v_n} = \Set{\bm v | \bm v = \sum _{j = 1}^n \lambda _j\bm v _j, \forall \lambda _j \in \Gamma}$, i.e. all the vectors that can be written as a linear combination of this set of vectors
	* Example: $\matdim{3}{} = \Span\Set{\cvec{1}{0}{0}, \cvec{0}{1}{0}, \cvec{0}{0}{1}}$
	* $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ is the *spanning set* of vectors (for now, this set will be finite, but the span itself is infinite)
* Proposition I: The span of $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \in \mathcal V$ is a subspace of $\mathcal V$
	* Proof:
		* $\mathcal{SI}$: $\bm 0 = \sum _{j = 1}^n 0\bm v_j$ therefore $\bm 0$ in this subset
		* $\mathcal{SII}:$ Let $\bm u \in \mathcal V = \sum _{j = 1}^n \alpha _j\bm v _j$ and $\bm w \in \mathcal V = \sum _{j = 1}^n \beta _j\bm v _j$ then $\bm u + \bm w = \sum _{j = 1}^n (\alpha _j + \beta _j)\bm v_j$
		* $\mathcal{SIII}$: $\bm u \in \mathcal V = \sum _{j = 1}^n \alpha _j\bm v _j$, then $\lambda\bm u = \lambda\sum _{j = 1}^n \alpha _j\bm v _j = \sum _{j = 1}^n (\lambda\alpha _j)\bm v _j$

