# Lecture 16, Feb 18, 2022

## The Dimension Formula

* Theorem II: The Dimension Formula: Let $\bm A \in \matdim{m}{n}$, then $\dim \Null \bm A = n - \rank \bm A$ (or $\rank \bm A + \dim \Null \bm A = n$)
	* Proof:
		* Let $\Set{\bm s_1, \cdots, \bm s_k}$ be a basis for $\Null \bm A$; since $\Null \bm A \sqsubseteq \matdim{n}{}$, we can extend this to a basis for $\matdim{n}{}$: $\Set{\bm s_1, \cdots, \bm s_k, \bm s_{k + 1}, \cdots, \bm s_n}$
		* Claim: $\Set{\bm A\bm s_{k + 1}, \cdots, \bm A\bm s_{n}}$ is a basis for $\col \bm A$ (if this is true, then $\dim \col \bm A = n - k = n - \dim \Null \bm A$ and we're done)
			* Linear independence: $\alignedimp[t]{\sum _{i = k + 1}^n \lambda _i\bm A\bm s_i = \bm 0}{\bm A\left(\sum _{i = k + 1}^n\lambda _i\bm s_i\right) = \bm 0}{\sum _{i = k + 1}^n\lambda _i\bm s_i \in \Null \bm A}{\sum _{i = k + 1}^n\lambda _i\bm s_i = \sum _{i = 1}^k\mu _i\bm s_i}$
				* Let $\mu _i = -\lambda _i \implies \sum _{i = 1}^n \lambda _i\bm s_i = \bm 0 \implies \lambda _i = 0$ since $\Set{s_i}$ are a basis (note we can do this because $i$ in the first summation and $i$ in the second summation never have the same values)
			* Generation: $\Span\Set{\bm A\bm s_{k + 1}, \cdots, \bm A\bm s_n} \subseteq \col \bm A$ by Prop. I because each $\bm s_{k + 1}, \cdots \bm s_n \in \col \bm A$
				* To go the other way: $\alignedimp[t]{\bm y \in \col \bm A}{\exists \bm x \ni \bm y = \bm A\bm x, \bm x = \sum _{i = 1}^n \beta _i\bm s_i}{\bm y = \sum _{i = 1}^n \beta _i\bm A\bm s_i}{\sum _{i = k + 1}^n \beta _i\bm A\bm s_i}{\bm y \in \Span\Set{\bm A\bm s_{k + 1}, \cdots, \bm A\bm s_n}}$
				* Therefore $\col A = \Span\Set{\bm A\bm s_{k + 1}, \cdots, \bm A\bm s_n}$
* Consider $\bm A\bm x = \bm b$: there may exist no $\bm x$, or one unique $\bm x$, or infinitely many $\bm x$
	* No solution: $\bm b \notin \col \bm A \implies \col \bm A \subsetneq \col [\bm A | \bm b]$ or $\rank \bm A < \rank [\bm A | \bm b]$
	* Unique solution: $\bm b \in \col \bm A$ and $\col \bm A = \col [\bm A | \bm b]$ and $\Null \bm A = \Set{\bm 0}$
	* Infinite solutions: $\bm b \in \col \bm A$ and $\col \bm A = \col [\bm A | \bm b]$ and $\dim \Null \bm A > 0$
* Theorem III: The following statements are equivalent for $\bm A \in \matdim{n}{n}$:
	1. $\bm A$ is invertible
	2. $\rank \bm A = n$ (i.e. $\bm A$ is full rank)
	3. $\bm A$ has linearly independent rows
	4. $\bm A$ has linearly independent columns
	5. $\bm A\bm x = \bm 0 \implies \bm x = \bm 0$
	6. $\bm z^T\bm A = \bm 0^T \implies \bm z = \bm 0$
* Fredholm Alternative: Either $\bm A\bm x = \bm b$ has exactly one solution xor $\bm A\bm x = \bm 0$ has a nontrivial solution
* Proof of Theorem III: In the case where we have a set of equivalent statements it's often most convenient to show a circular chain of implication, e.g. 1 implies 2 implies 3 implies 1
	* $1 \implies 2$: $\bm A$ is invertible means $\tilde{\bm A} = \bm 1 \implies \rank \bm A = \dim \row \bm A = \dim \row \tilde{\bm A} = n$
	* $2 \implies 3$: $\rank \bm A = n \implies \dim \row \bm A = n$ but $\bm A$ only has $n$ rows, so they have to be linearly independent
	* $3 \implies 4$: Linearly independent rows $\implies \dim \row \bm A = n \implies \dim \col \bm A = n \implies$ the columns are linearly independent since there are $n$ columns
	* $4 \implies 5$: Linearly independent columns $\implies \sum _{i = 1}^n x_i\bm c_i = \bm 0 \implies x_i = 0 \implies \bm x = \bm 0$
		* Alternatively the independent columns implies $\rank \bm A = n \implies \dim \Null \bm A = 0 \implies \Set{\bm A\bm x = \bm 0 \implies \bm x = \bm 0}$
	* $5 \implies 6$: $\Set{\bm A\bm x = \bm 0 \implies \bm x = \bm 0} \implies \dim \Null \bm A = 0 \implies \rank \bm A = n \implies \dim \Null \bm A^T = 0 \implies \Set{\bm z^T\bm A = \bm 0 \implies \bm z = \bm 0}$
	* $6 \implies 1$: By contraposition, assume $\bm A$ is not invertible, which means there are zero rows in the rref, so $\rank \bm A < n$ so the rows are linearly dependent, which means $\bm z^T\bm A = \bm 0$ has a nontrivial solution

