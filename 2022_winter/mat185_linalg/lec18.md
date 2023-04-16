# Lecture 18, Mar 1, 2022

## Linear Transformations/Operators

* Definition: A *linear transformation* is a transformation between two vector spaces $\mathcal V$ and $\mathcal W$, $\mathscr L: \mathcal V \mapsto \mathcal W$ (where $\mathcal V$ is the *domain* and $\mathcal W$ is the *codomain*) that has the following properties:
	1. (L1) Distribution: $\mathscr L(\bm u + \bm v) = \mathscr L(\bm u) + \mathscr L(\bm v), \forall \bm u, \bm v \in \mathcal V$
	2. (L2) Homogeneity: $\mathscr L(\lambda \bm v) = \lambda\mathscr L(\bm v), \forall \bm v \in \mathcal V, \lambda \in \Gamma$
* These properties can be combined into one as $\mathscr L(\lambda \bm u + \mu \bm v) = \lambda\mathscr L(\bm u) + \mu \mathscr L(\bm v)$
* A matrix $\bm A \in \matdim{m}{n}$ can be thought of as a linear transformation of $\bm A: \matdim{m}{} \mapsto \matdim{n}{}$
* The trace $\tr \bm A = \sum _{i = 1}^n a_{ii}$ is a linear transformation $\tr: \matdim{n}{n} \mapsto \reals$
	* L1: $\tr (\bm A + \bm B) = \sum _{i = 1}^n(a_{ii} + b_{ii}) = \sum _{i = 1}^n a_{ii} + \sum _{i = 1}^n b_{ii} = \tr \bm A + \tr \bm B$
	* L2: $\tr (\lambda \bm A) = \sum _{i = 1}^n \lambda a_{ii} = \lambda \sum _{i = 1}^n a_{ii} = \lambda \tr \bm A$
* Properties of linear transformations $\mathscr L: \mathcal V \mapsto \mathcal W$:
	1. $\mathscr L(\bm 0) = \bm 0$
		* $\mathscr L(\bm 0) = \mathscr L(0\bm v) = 0\mathscr L(\bm v) = \bm 0$
	2. $\mathscr L(-\bm v) = -\mathscr L(\bm v)$
		* $\mathscr L(-\bm v) = \mathscr L((-1)\bm v) = -1\mathscr L(\bm v) = -\mathscr L(\bm v)$
	3. $\mathscr L\left(\sum _{i = 1}^n \lambda_i\bm v_i\right) = \sum _{i = 1}^n \lambda\mathscr L(\bm v_i)$
		* Proven by induction
* Definition: The *image* of a linear transformation $\mathscr L: \mathcal V \mapsto \mathcal W$ is $\im \mathscr L = \Set{\bm w \in \mathcal W | \bm w = \mathscr L(\bm v), \forall \bm v \in \mathcal V}$ (column space for a matrix)
	* The image is a subspace of $\mathcal W$
* $\mathscr L$ maps $\mathcal V$ *into* $\mathcal W$ if $\mathscr L: \mathcal V \mapsto \mathcal W$ but $\im \mathscr L \neq \mathcal W$
* $\mathscr L$ maps $\mathcal V$ *onto* $\mathcal W$ if $\im \mathscr L = \mathcal W$ (*surjective*), i.e. $\forall \bm w \in \mathcal W, \exists \bm v \ni \mathscr L(\bm v) = \bm w$
* $\mathscr L$ is *injective* if it is one-to-one, i.e. no two vectors in $\mathcal V$ maps onto the same vector in $\mathcal W$: $\nexists \bm v_1 = \bm v_2 \in \mathcal V \ni \mathscr L(\bm v_1) = \mathscr L(\bm v_2)$
* If $\mathscr L$ is surjective and injective then it is *bijective*
	* Bijective transformations have inverses
* Definition: The *kernel* of a linear transformation $\mathscr L: \mathcal V \mapsto \mathcal W$ is $\ker \mathscr L = \Set{\bm v \in \mathcal V | \mathscr L(\bm v) = \bm 0}$ (null space for a matrix)
	* The kernel is a subspace of $\mathcal V$
	* The kernel is everything in $\mathcal V$ that maps to $\bm 0$ in $\mathcal W$
* The dimension formula for linear transformations: $\dim \ker \mathscr L + \dim \im \mathscr L = \dim \mathcal V$
	* Analogous to the dimension formula for matrices; for matrices $\ker \bm A = \Null \bm A$, $\im \bm A = \col \bm A$ and $\dim \mathcal V = n$

