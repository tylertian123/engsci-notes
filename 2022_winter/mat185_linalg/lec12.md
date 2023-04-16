# Lecture 12, Feb 8, 2022

## Existence of Bases

* Theorem V: Let $\mathcal V$ be spanned by a finite set of vectors; then every linearly independent set in $\mathcal V$ can be extended to a basis for $\mathcal V$ (note we assume the set is not the zero set)
	* Proof by construction:
		1. Start with a linearly independent set $S_k = \Set{\bm v_1, \cdots \bm v_k} \subset \mathcal V$
		2. $\Span S_k = \mathcal V$ or $\Span S_k \neq \mathcal V$; if $\Span S_k = \mathcal V$ then we have a linearly independent spanning set, which is a basis, so we're done
		3. Otherwise, $\exists (\bm v_{k + 1} \in \mathcal V) \notin \Span S_k$; by Theorem IV, $S_{k + 1} = \Set{\bm v_1, \cdots, \bm v_k, \bm v_{k + 1}}$ is linearly independent
		4. If $\Span S_k = \mathcal V$ then we have a basis; otherwise, repeat the previous step until we eventually get a basis
			* Because $\mathcal V$ is spanned by a finite set of vectors, this will always result in a basis
			* If it doesn't result in a basis then we'll end up with a set of linearly independent vectors that don't span $\mathcal V$ but has more vectors than the finite set that spans $\mathcal V$, which violates the fundamental theorem
* Theorem V gives a *maximally linearly independent set*
* Theorem VII: Let $\mathcal V$ be spanned by a finite set of vectors; then any spanning set for $\mathcal V$ can be reduced to a basis (i.e. it contains a basis)
	* Proof by construction:
		1. Start with a spanning set $\Span S_p = \mathcal V$ where $S_p = \Set{\bm v_1, \cdots, \bm v_p} \subset \mathcal V$
		2. $S_p$ is either linearly independent or not; if it is then $S_p$ is a basis and we're done
		3. Otherwise, by Theorem I Corollary, $\exists \bm v_p \in S_p$ such that $\Span S_{p - 1} = \mathcal V$ where $S_{p - 1} = \Set{\bm v_1, \cdots, \bm v_{p - 1}}$ (renumber the vectors such that $v_p$ is that vector)
		4. If $S_{p - 1}$ is linearly independent then we have a basis; otherwise repeat the previous step until we eventually get a basis
			* This process must stop because eventually we get a set with just 1 vector which will be linearly independent
* Theorem VII gives a *minimally spanning set*
* Bases can be thought as minimally spanning sets or maximally independent sets
* Theorem VIII: Let $\mathcal V$ be such that $\dim \mathcal V = n$; then:
	1. Any linearly independent set of $n$ vectors is a basis
	2. Any spanning set of $n$ vectors is a basis
* Theorem VI: Let $\mathcal U, \mathcal W \sqsubseteq \mathcal V$, then:
	1. $\mathcal U, \mathcal W$ are finite dimensional with dimensions less than or equal to $\mathcal V$
	2. If $\mathcal U \subseteq \mathcal W$ then $\dim \mathcal U \leq \dim \mathcal W$
	3. $\mathcal U \subseteq \mathcal W \land \dim \mathcal U = \dim \mathcal W \implies \mathcal U = \mathcal W$

