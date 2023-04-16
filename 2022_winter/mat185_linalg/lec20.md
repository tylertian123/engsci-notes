# Lecture 20, Mar 7, 2022

## Change of Basis

* Say we have a vector expressed in a vector space as coordinates with respect to one set of basis vectors; how do we express them in terms of another basis?
* The new coordinates in terms of the new basis is related to the old coordinates by a matrix
* $\bm v = \bm P\bm v'$ where $\bm P$ is the *transition matrix* or *transformation matrix* or *change-of-basis matrix*
* Let $\mathcal V$ where $\dim \mathcal V = n$ have 2 bases: $E = \Set{\bm e_1, \cdots, \bm e_n}$ and $F = \Set{\bm f_1, \cdots, \bm f_n}$
	* $\bm v = \sum _{i = 1}^n v_i^{(e)}\bm e_i = \sum _{i = 1}^n v_i^{(f)}\bm f_i$
	* Let $\bm v_e = \cvec{v_1^{(e)}}{\vdots}{v_n^{(e)}}, \bm v_f = \cvec{v_1^{(f)}}{\vdots}{v_n^{(f)}}$
		* $\bm v_e$ are the coordinates in terms of $E$, $\bm v_f$ are the coordinates in terms of $F$
	* What is the relationship between $\bm v_e$ and $\bm v_f$?
* Since the bases live in $\mathcal V$, in general $\bm e_j = \sum _{i = 1}^n p_{ij}\bm f_i$
	* $\alignedeqntwo[t]{\bm v}{\sum _{i = 1}^n v_i^{(f)}\bm f_i}{\sum _{j = 1}^n v_j^{(e)}\bm e_j}{\sum _{j = 1}^n v_j^{(e)}\left(\sum _{i = 1}^n p_{ij}\bm f_i\right)}{\sum _{i = 1}^n\left(\sum _{j = 1}^n p_{ij}v_j^{(e)}\right)\bm f_i}$
	* $v_i^{(f)} = \sum _{j = 1}^n p_{ij}v_j^{(e)}$ or $\bm v_f = \bm P\bm v_e$
	* The *columns* of $\bm P$ are the basis $\bm e_n$ expressed in terms of $\bm f_n$
* Proposition III: Let $B_e = \Set{\bm e_1, \cdots, \bm e_n}$ be the standard basis for $\matdim{n}{}$ and $B_f = \Set{\bm f_1, \cdots \bm f_n}$ be another basis; then the transition matrix from $B_f$ to $B_e$ is $\bm Q = \rvec{\bm f_1}{\cdots}{\bm f_n}$
* There is an isomorphism between $\mathcal V \leftrightarrow \matdim{n}{}$; instead of thinking of members of $\mathcal V$ directly, we can think about their coordinates, which are vectors in $\matdim{n}{}$
* Theorem II: Let $B_e = \Set{\bm e_1, \cdots, \bm e_n} \subset \mathcal V$ be a basis for $\mathcal V$ and the coordinates $\bm v' \in \matdim{n}{}$ for $\bm v \in \mathcal V$; then $\Set{\bm v_1, \cdots, \bm v_m}$ is linearly independent iff the coordinates $\Set{\bm v_1', \cdots, \bm v_m'}$ are linearly independent
	* Note notation $\bm v = v_1\bm e_1 + \cdots + v_n\bm e_n = \rvec{\bm e_1}{\cdots}{\bm e_n}\cvec{v_1}{\vdots}{v_n} = \pmb{\mathscr E}\bm v$ where $\pmb{\mathscr E} \in \matdim[\mathcal V]{}{n}$, formalized as $\mathcal V^n \times \matdim{n}{} \mapsto \mathcal V$
	* Proposition IV:
		* If $\pmb{\mathscr E}\bm v = \bm 0$ then $\bm v = \bm 0$ because $\Set{\bm e_1, \cdots, \bm e_m}$ are linearly independent
		* If $\pmb{\mathscr E}\bm v = \pmb{\mathscr E}\bm u$ then $\bm v = \bm u$ since there is only one way to express a given vector as a linear combination of a set of independent vectors
	* Proof: $\sum _{j = 1}^n \lambda_j\bm v_j = \bm 0 \iff \sum _{j = 1}^n \lambda _j(\pmb{\mathscr E}\bm v_j') = \bm 0 \iff \pmb{\mathscr E}\left(\sum _{j = 1}^n = \lambda _j\bm v_j'\right) = \bm 0 \iff \sum _{j = 1}^n = \lambda _j\bm v_j' = \bm 0$

