# Lecture 15, Feb 15, 2022

## Rank

* Definition: The *rank* of $\bm A$, denoted $\rank \bm A$, is the common dimension of its row and column space: $\rank \bm A \equiv \dim \row \bm A = \dim \col \bm A$
	* Can also be expressed in different ways, e.g. number of nonzero rows in the RREF, the number of leading ones in the RREF, etc
* Properties of rank:
	* Property I: $\rank \bm A = \rank \tilde{\bm A}$
	* Property II: $\rank \bm A = \rank \bm A^T$
	* Property III: $\rank \bm U\bm A \leq \rank \bm A$
		* $\row \bm U\bm A \subseteq \row \bm A$ by Prop. I
		* $\rank \bm U\bm A = \rank \bm A$ when $\bm U$ is invertible since $\row \bm U\bm A = \row\bm A$ by Prop. I
		* Similarly $\rank \bm A\bm V \leq \rank \bm A$ and $\rank \bm A\bm V = \rank \bm A$ if (but not only if) $\bm V$ is invertible

