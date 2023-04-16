# Lecture 8, Jan 31, 2022

## Equivalence of Spans

* We can show equivalence of sets $U = V$ by showing $U \subseteq V$ and $V \subseteq U$
* To show equivalence of spans, we do the same and show both spans are subsets of the other
	* It is sufficient to show that each member of the spanning set is in the other span; if $\bm u_i = \sum _{k = 1}^n \bm \alpha _{ik}v_k$, then $\bm u = \sum _{i = 1}^m \lambda _i\bm u_i = \sum _{i = 1}^m \lambda _i\left(\sum _{k = 1}^n \alpha _{ik}\bm v_k\right) = \sum _{k = 1}^n\left(\sum _{i = 1}^m\right)\bm v_k = \sum _{k = 1}^n \mu _k\bm v_k \implies \bm u \in \Span\Set{\bm v_j}$
* Example: $\Span\Set{\bm u, \bm v} = \Span\Set{\bm u + \bm v, \bm u - \bm v}$?
	* $\Set{\bm u + \bm v, \bm u - \bm v} \subseteq \Span\Set{\bm u, \bm v}$ since they're both linear combinations of $\bm u$ and $\bm v$
	* $\Set{\bm u, \bm v} \subseteq \Span\Set{\bm u + \bm v, \bm u - \bm v}$ since $\bm u = \frac{1}{2}(\bm u + \bm v) + \frac{1}{2}(\bm u - \bm v)$ and $\bm v = \frac{1}{2}(\bm u + \bm v) - \frac{1}{2}(\bm u - \bm v)$
* Proposition II: Let $\mathcal U = \Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \sqsubseteq \mathcal V$. If $\mathcal W$ is a subspace of $\mathcal V$ containing the vectors $\Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ then $\mathcal U \sqsubseteq \mathcal W$.
	* Any vector in $\mathcal U$ is a linear combination of those vectors, and since those vectors are in $\mathcal W$, $\mathcal W$ contains all linear combinations of those vectors

## Linear Independence

* Linear independence: A set of vectors $\Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ is *linearly independent* if and only if $\sum _{j = 1}^n \lambda _j\bm v_j = \bm 0 \implies \lambda _j = 0$
	* Example: $\Set{\cvec{1}{0}, \cvec{0}{1}}$ are independent: $\lambda _1\cvec{1}{0} + \lambda _2\cvec{0}{1} = \cvec{0}{0} \implies \cvec{\lambda _1}{\lambda _2} = \cvec{0}{0} \implies \lambda _1 = \lambda _2 = 0$
	* Example: $\Set{\cvec{1}{0}, \cvec{0}{1}, \cvec{1}{1}}$ are not independent: $\lambda _1\cvec{1}{0} + \lambda _2\cvec{0}{1} + \lambda _3\cvec{1}{1} = \cvec{0}{0}$ can be satisfied with $\threepiece{\lambda _1 = 1}{\lambda _2 = 1}{\lambda _3 = -1}$
* Proposition I: If $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \subset \mathcal V$ is linearly independent and $\bm v = \sum _{j = 1}^n \lambda _j\bm v_j$ for all $\bm v \in \mathcal V$ then $\lambda _j$ are uniquely determined, i.e. there is only one way to construct any vector
	* Proof: Assume that $\lambda _j$ are not uniquely determined. Let $\bm v = \sum _{j = 1}^n \lambda _j\bm v_j = \sum _{j = 1}^n \mu _j\bm v_j$ then $\bm 0 = \bm v - \bm v = \sum _{j = 1}^n (\lambda _j - \mu _j) = \bm v_j$ and because the set is linearly independent $\lambda _j - \mu _j = 0 \implies \lambda _j = \mu _j$, so $\lambda _j$ are uniquely determined
* This generalizes to any kind of vector, e.g. functions
	* e.g. to show $\Set{\sin x, \cos x}$ are linearly independent we show $\lambda _1f + \lambda _2g = z \implies \lambda _1 = \lambda _2 = 0$ where $z: \reals \mapsto \Set{0}$
		* We want to show $\lambda _1\cos x + \lambda _2\sin x = 0 \forall x \in \reals$; we can consider $x = 0 \implies \lambda 1 = 0$, and $x = \frac{\pi}{2} \implies \lambda _2 = 0$

