# Lecture 10, Feb 4, 2022

## Basis Continued

* In general $\dim\matdim{n}{} = \dim\matdim{}{n} = n$ and $\dim\matdim{m}{n} = mn$
* The standard basis is the set $\Set{\cvec{1}{0}{0}{\vdots}, \cvec{0}{1}{0}{\vdots}, \cvec{0}{0}{1}{\vdots}, \cdots}$
* Example: Consider the space of skew-symmetric matrices $\mathcal U = \Set{\bm S | \bm S = -\bm S^T, \bm S \in \matdim{3}{3}}$
	* $\bm S = \bm S^T$ means the diagonal is forced to be zero
	* We can now write $\bm S = \matthreeb{0}{a}{b}{-a}{0}{c}{-b}{-c}{0} = a\matthreeb{0}{1}{0}{-1}{0}{0}{0}{0}{0} + b\matthreeb{0}{0}{1}{0}{0}{0}{-1}{0}{0} + c\matthreeb{0}{0}{0}{0}{0}{1}{0}{-1}{0}$
	* Since those 3 matrices span $\mathcal U$ and are linearly independent they form a basis, therefore $\dim \mathcal U = 3$
* Let $\mathcal V$ be a finite-dimensional vector space with $\dim\mathcal V = n$, then
	1. A linearly independent set of vectors in $\mathcal V$ can at most contain $n$ vectors
	2. A spanning set for $\mathcal V$ must contain at least $n$ vectors
* We can add vectors to any linearly independent set until we have $\mathcal V = n$ vectors; we can take away vectors from any spanning set until we have $n$ vectors; at $n$ vectors, we can have a spanning set that is linearly independent
	* Sometimes referred to as the rule of the extreme middle
* A basis characterizes a vector space

