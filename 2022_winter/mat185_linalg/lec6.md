# Lecture 6, Jan 25, 2022

## Subspaces

* A subset $\mathcal U$ of $\mathcal V$ is a subspace of $\mathcal V$ iff $\mathcal U$ is itself a vector space over the same field $\Gamma$ with the same vector addition and scalar multiplication operations of $\mathcal V$
	* $X \subseteq Y \iff \forall x \in X \implies x \in Y$
	* In this case the subset is not strict, i.e. $\mathcal U = \mathcal V$ is allowed
	* Every $\mathcal V$ has two subspaces, the space itself, and the subspace of only zero: $\mathcal U = V$ and $\mathcal U = \Set{\bm 0}$
	* Sometimes the notation $\mathcal U \sqsubseteq \mathcal V$ is used
* Theorem 1: Subspace test: $\mathcal U \sqsubseteq \mathcal V$ iff for all $\bm u, \bm v \in \mathcal U$ and all $\alpha \in \Gamma$:
	1. Zero: $\exists \bm 0 \in \mathcal U \ni \bm u + \bm 0 = \bm u$
	2. Closure under addition: $\bm u + \bm v \in \mathcal U$
	3. Closure under scalar multiplication: $\alpha\bm u \in \mathcal U$
* Proof of the subspace test:
	* $\mathcal U \sqsubseteq \mathcal V \implies (\mathcal{SI}, \mathcal{SII}, \mathcal{SIII})$: By definition $\mathcal U$ is a vector space, therefore it automatically satisfies all 3 axioms
	* $(\mathcal{SI}, \mathcal{SII}, \mathcal{SIII}) \implies \mathcal U \sqsubseteq \mathcal V$:
		* $\mathcal{AI}$: Implied by $\mathcal{SII}$
		* $\mathcal{AII}$: Automatically true since $\bm u \in \mathcal U \implies \bm u \in \mathcal V$ and the addition operator is associative in $\mathcal V$ (i.e. inherited from $\mathcal V$)
		* $\mathcal{AIII}$: Implied by $\mathcal{SI}$
		* $\mathcal{AIV}$: We have proven previously that $(-1)\bm u$ is the additive inverse of $\bm u$; we also know $(-1)\bm u \in \mathcal U$ by $\mathcal{SIII}$, so an inverse exists
		* $\mathcal{MI}$: Implied by $\mathcal{SIII}$
		* $\mathcal{MII}$ -- $\mathcal{MIII}$: Inherited from $\mathcal V$
		* $\mathcal{MIV}$: $1\bm u \in \mathcal U$ by $\mathcal{SIII}$ and $\bm u \in \mathcal V$ so $1\bm u = \bm u \in \mathcal U$
* Example: $\im A = \Set{\bm y | \bm y = \bm A\bm x \forall \bm x \in \matdim{n}{}} \subseteq \matdim{m}{}$ for $\bm A \in \matdim{m}{n}$
	* Since $\matdim{m}{}$ is a vector space over $\reals$ we only need to do the subspace test
	* $\mathcal{SI}$: Satisfied since $\bm 0 = \bm A\bm 0 \implies \bm 0 \in \im\bm A$
	* $\mathcal{SII}$: $\bm y_1, \bm y_2 \in \im\bm A \implies \bm y_1 = \bm A\bm x_1, \bm y_2 = \bm A\bm x_2 \implies \bm y_1 + \bm y_2 = \bm A(\bm x_1 + \bm x_2)$
	* $\mathcal{SIII}$: $\bm y \in \im\bm A \implies \bm y = \bm A\bm x \implies \alpha\bm y = \alpha(\bm A\bm x) = \bm A(\alpha\bm x) \in \im\bm A$
* Example: $\ker \bm A = \Set{\bm x | \bm A\bm x = \bm 0}$ for $\bm A \in \matdim{m}{n}$ (kernel or null space of $A$)
	* $x \in \matdim{n}{}$ so we can apply the subspace test
	* $\mathcal{SI}$: $\bm 0 \in \ker \bm A$ because $\bm A\bm 0 = \bm 0$
	* $\mathcal{SI}$: $\bm A(\bm x_1 + \bm x_2) = \bm A\bm x_1 + \bm A\bm x_2 = \bm 0 + \bm 0 = \bm 0 \implies \bm x_1 + \bm x_2 \in \ker \bm A$
	* $\mathcal{SIII}$: $\bm A(\alpha\bm x) = \alpha(\bm A\bm x) = \alpha\bm 0 = \bm 0 \implies \alpha\bm x \in \ker \bm A$

