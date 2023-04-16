# Lecture 19, Mar 4, 2022

## Linear Transformations and Matrices

* Not only do all matrices represent linear transformations, all linear transformations can be represented as a matrix; there exists a one-to-one relationship between matrices and linear transformations
* Consider $\mathscr L: \mathcal V \mapsto \mathcal W$ and $\bm w \in \mathcal W = \mathscr L(\bm v \in \mathcal V)$
	* $\bm v = \sum _{j = 1}^n v_j\bm e_j$ given $E = \Set{\bm e_1, \cdots, \bm e_n}$ is a basis for $\mathcal V$
	* $\bm w = \mathscr L\left(\sum _{j = 1}^n v_j\bm e_j\right) = \sum _{j = 1}^n v_j\mathscr L(\bm e_j)$
	* $\bm w = \sum _{i = 1}^m w_i\bm h_i$ where $H = \Set{\bm h_1, \cdots, \bm h_m}$ is a basis for $\mathcal W$
	* $\mathscr L(\bm e_j) = \sum _{i = 1}^m l_{ij}\bm h_i \implies \bm w = \sum _{j = 1}^n v_j\mathscr L(\bm e_j) = \sum _{j = 1}^n v_j\left(\sum _{i = 1}^m l_{ij}\bm h_i\right) = \sum _{i = 1}^n\left(\sum _{j = 1}^n l_{ij}v_j\right)\bm h_i$
	* Compare the 2 lines above, we get $w_i = \sum _{j = 1}^n l_{ij}v_j$ which is a matrix multiplication: $\bm w = \bm L\bm v$
		* $\bm w = \cvec{w_1}{\vdots}{w_m}, \bm v = \cvec{v_1}{\vdots}{v_n}, \bm L = \cvec{l_{ij}}$
	* The $v_j$ are *coordinates* of $\bm v$ with respect to the basis $E$; $w_i$ are coordinates of $\bm w$ with respect to the basis $H$
* There is a one-to-one relationship between $\bm w = \mathscr L(\bm v)$ and $\bm w = \bm L\bm v$

