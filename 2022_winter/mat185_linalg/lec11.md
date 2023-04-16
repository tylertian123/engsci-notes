# Lecture 11, Feb 7, 2022

## Minimal Spanning Sets

* Theorem I: Let $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \subset \mathcal V$. For every $v_k$ (where $k = 1, 2, \cdots n$), $\Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_{k - 1}, \bm v_{k + 1}, \cdots \bm v_n} \subsetneq \Span \Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ iff $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ is linearly independent
	* i.e. if we have a set of linearly independent vectors and we take a vector out, the resulting span is always a strict subset (gets smaller)
	* Corollary (contrapositive): Let $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n} \subset \mathcal V$, then for at least one $v_k$, $\Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_{k - 1}, \bm v_{k + 1}, \cdots \bm v_n} = \Span \Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ if and only if $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ is linearly dependent
		* Note the original theorem is for every $v_k$ but the contrapositive is for at least one $v_k$
	* Proof: At least one $\bm v_k$ implies linear dependence:
		* Let there be one $\bm v_k$ such that $\Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_{k - 1}, \bm v_{k + 1}, \cdots \bm v_n} = \Span \Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$
		* Then $\bm v_k \in \Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_{k - 1}, \bm v_{k + 1}, \cdots \bm v_n}$
		* $\bm v_k = \sum _{\substack{i = 1 \\ (i \neq k)}}^n \lambda _i\bm v_i \implies \lambda _1\bm v_1 + \cdots + (-1)\bm v_k + \cdots + \lambda _n\bm v_n = \bm 0$
		* Therefore the set $\Set{\bm v_1, \bm v_2, \cdots, \bm v_n}$ is not linearly independent because the coefficient on $\bm v_k$ can be nonzero
	* Proof: Linear dependence implies existence of $\bm v_k$:
		* $\sum _{i = 1}^n \lambda _i\bm v_i = \bm 0$ has at least one $\lambda _k \neq 0$; take the vector associated with this $\lambda$ to be $\bm v_k$
		* $\lambda _k\bm v_k = -\lambda _1\bm v_1 - \cdots - \lambda _{k - 1}\bm v_{k - 1} - \lambda _{k + 1}\bm v_{k + 1} - \cdots - \lambda _n\bm v_n$
		* $\bm v_k = -\frac{\lambda _1}{\lambda _k} _1\bm v_1 - \cdots - \frac{\lambda _{k - 1}}{\lambda _k}\bm v_{k - 1} - \frac{\lambda _{k + 1}}{\lambda _k}\bm v_{k + 1} - \cdots - \frac{\lambda _n}{\lambda _k}\bm v_n$
		* Therefore $\bm v_k \in \Span\Set{\bm v_1, \bm v_2, \cdots, \bm v_{k - 1}, \bm v_{k + 1}, \cdots \bm v_n}$ so the span with $\bm v_k$ is the same as the span without $\bm v_k$
* Any minimum spanning set of a vector space is also a maximum independent set of that vector space
	* Taking any vector out of a set of linearly independent vectors loses information
* Theorem IV: Let $\Set{\bm v_1, \cdots, \bm v_n} \subset \mathcal V$ be linearly independent; then for another $\bm v \in \mathcal V$, $\Set{\bm v, \bm v_1, \cdots, \bm v_n}$ is linearly independent if and only if $\bm v \notin \Span\Set{\bm v_1, \cdots, \bm v_n}$; i.e. we can add a vector to a linearly independent set and keep it linearly independent if this vector is not already in the span
	* Contrapositive: If $\bm v \in \Span\Set{\bm v_1, \cdots, \bm v_n}$ then $\Set{\bm v, \bm v_1, \cdots, \bm v_n}$ is linearly dependent
	* Proof:
		* $\bm v \in \Span\Set{\bm v_1, \cdots, \bm v_n} \implies \bm v = \sum _{i = 1}^n \lambda _i\bm v_i \implies (-1)\bm v + \lambda _1\bm v_1 + \cdots + \lambda _n\bm v_n = \bm 0$ therefore the set is linearly dependent
		* $\Set{\bm v, \bm v_1, \cdots, \bm v_n}$ linearly dependent means $\lambda\bm v + \lambda _1\bm v_1 + \cdots + \lambda _n\bm v_n = \bm 0$ and not all $\lambda$s equal zero
			* First we need to show $\lambda \neq 0$: If $\lambda = 0$, that means the rest of the $\lambda _i$ have to be 0, which would mean $\Set{\bm v, \bm v_1, \cdots, \bm v_n}$ is linearly independent, creating a contradiction
			* Since $\lambda \neq 0$, $\bm v = -\frac{\lambda _1}{\lambda}\bm v_1 - \cdots - \frac{\lambda _n}{\lambda}\bm v_n$

