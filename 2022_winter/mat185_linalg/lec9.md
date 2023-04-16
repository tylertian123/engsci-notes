# Lecture 9, Feb 1, 2022

## Basis

* Fundamental Theorem of Linear Algebra: Let $\mathcal V$ be a vector space spanned by $n$ vectors. If a set of $m$ vectors from $\mathcal V$ is linearly independent, then $m \leq n$.
	* This is equivalent to saying if $m > n$ then any set of $m$ vectors from $\mathcal V$ is linearly dependent (this is the contrapositive statement: if $A \implies B$, then $\lnot B \implies \lnot A$)
	* Proof by contraposition: Let $m > n$, we show that this implies a set of $m$ vectors is dependent.
		* Consider a set of $m$ vectors $\Set{\bm u_1, \cdots, \bm u_m}$ and let $\Span \Set{\bm v_1, \cdots, \bm v_n} = \mathcal V$
		* Since $\bm u_j \in \mathcal V$, $\bm u_j = \sum _{i = 1}^n a_{ij}\bm v_i$ and so $\alignedeqntwo[t]{\sum _{j = 1}^m x_j\bm u_j}{\sum _{j = 1}^m x_j\left(\sum _{i = 1}^n a_{ij}\bm v_i\right)}{\sum _{i = 1}^n\left(\sum _{j = 1}^m a_{ij}x_j\right)\bm v_i}$
		* Set $\sum _{i = 1}^n\left(\sum _{j = 1}^m a_{ij}x_j\right)\bm v_i = \bm 0$; this will be satisfied if each $\sum _{j = 1}^m a_{ij}x_j = 0$; this is a set of linear equations $\bm A\bm x = \bm 0$ where $\bm A$ is $n \times m$; since we have $m > n$ there are infinite number of solutions to this system, i.e. there exist a nontrivial solution, therefore not all $x_j$ have to be 0, so the set $\Set{\bm u_1, \cdots, \bm u_m}$ is linearly dependent
* Define the *basis* for a vectors space $\mathcal V$ to be a set of vectors $\Set{\bm e_1, \bm e_2, \cdots, \bm e_n}$ that are linearly independent and $\Span \Set{\bm e_1, \bm e_2, \cdots, \bm e_m} = \mathcal V$
	* Every basis for a given vector space contains the same number of vectors:
		* Let $E = \Set{\bm e_1, \bm e_2, \cdots, \bm e_n}$ and $F = \Set{\bm f_1, \bm f_2, \cdots, \bm f_n}$ be bases
		* Consider $E$ to be linearly independent and $F$ to span $\mathcal V$, then by the fundamental theorem $n \leq m$; consider $F$ to be linearly independent and $E$ to span $\mathcal V$, then by the fundamental theorem $m \leq n$, therefore $m = n$
	* We say that a basis *generates* $\mathcal V$
* Definition: The *dimension* of a vector space $\mathcal V$, denoted $\dim \mathcal V$, is the number of vectors in any of its bases
	* Note: Define $\dim\Set{\bm 0} = 0$

