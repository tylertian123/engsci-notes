# Lecture 13, Feb 11, 2022

## Null, Column, and Row Space

* The null space is defined as $\Null\bm A = \Set{\bm x \in \matdim{n}{} | \bm A\bm x = \bm 0} \subseteq \reals$
* Consider $\bm A = \matthreeb{a_{11}}{\cdots}{a_{1n}}{\vdots}{\ddots}{\vdots}{a_{m1}}{\cdots}{a_{mn}} \in \matdim{m}{n}$; $\bm A$ can be expressed as a set of rows $\bm A = \cvec{\bm r_1}{\vdots}{\bm r_m}, \bm r_k \in \matdim{}{n}$ or a set of columns $\bm A = \rvec{\bm c_1}{\cdots}{\bm c_n}, \bm c_j \in \matdim{m}{}$
* Define the *row space* of $\bm A$ as $\row \bm A = \Span\Set{\bm r_1, \cdots \bm r_m} \sqsubseteq \matdim{}{n}$, the *column space* of $\bm A$ as $\col \bm A = \Span\Set{\bm c_1, \cdots \bm c_n} \sqsubseteq \matdim{m}{}$
	* Both the row space and the column space have max dimension $\min\Set{m, n}$ because they're restricted by the number of vectors in the spanning set and the space it's a subspace of
* The column space of $\bm A$ is equal to its image: $\col \bm A = \Set{\bm y \in \matdim{m}{} | \bm y = \bm A\bm x, \forall \bm x \in \matdim{n}{}}$
* Proposition I: Let $\bm A \in \matdim{m}{n}$ and $\bm U \in \matdim{m}{m}, \bm V \in \matdim{n}{n}$, then:
	1. $\row \bm U\bm A \sqsubseteq \row \bm A$
		* All the rows of $\bm U\bm A$ are linear combinations of the rows of $\bm A$
	2. $\col\bm A\bm V \sqsubseteq \col \bm A$
		* Similarly the columns of $\bm A\bm V$ are linear combinations of the columns of $\bm A$
	3. If $\bm U, \bm V$ are invertible, then $\row \bm U\bm A = \row \bm A$ and $\col \bm A\bm V = \col \bm A$
		* If $\bm U$ is invertible, consider $\bm U \to \bm U^{-1}$ and $\bm A \to \bm U\bm A$, so $\row \bm U\bm A \sqsubseteq \row \bm A \iff \row \bm U^{-1}(\bm U\bm A) \sqsubseteq \row \bm U\bm A \implies \row \bm A \sqsubseteq \row \bm U\bm A$
		* Since the two subspaces are within each other they must be equal
* Proposition II: Let $\Set{\bm x_1, \cdots, \bm x_r} \subset \matdim{m}{}, \bm U \in \matdim{m}{m}$ invertible, then $\Set{\bm x_1, \cdots, \bm x_r}$ is linearly independent iff $\Set{\bm U\bm x_1, \cdots, \bm U\bm x_r}$ is linearly independent
	* Proof: $\sum _{i = 1}^n \lambda _i(\bm U\bm x_i) = \bm 0 \iff \bm U\left(\sum _{i = 1}^n \lambda _i\bm x_i\right) = \bm 0 \iff \sum _{i = 1}^n \lambda _i\bm x_i = \bm 0$ so linearly independence of one set implies all $\lambda _i = 0$ which means the other set is linearly independent
	* We don't lose any information by multiplying a set of vectors by an invertible matrix

