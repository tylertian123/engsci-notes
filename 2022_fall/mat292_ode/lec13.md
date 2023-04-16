# Lecture 13, Oct 6, 2022

## Repeated Eigenvalues Examples

* Example: $\bm x' = \mattwo{1}{-1}{1}{3}\bm x, \lambda _1 = \lambda _2 = 2, \bm v_1 = \cvec{1}{-1}$
	* Generalized eigenvector: $(\bm A - \lambda\bm I)\bm w = \bm v \implies \mattwo{-1}{-1}{1}{1}\bm w = \cvec{1}{-1} \implies \bm w = \cvec{k}{-1 - k}$
	* General solution: $\bm x = c_1e^{2t}\cvec{1}{-1} + c_2\left(te^{2t}\cvec{1}{-1} + e^{2t}\cvec{k}{-1 - k}\right)$
		* Notice that the term with $\bm w$ is $ke^{2t}\cvec{1}{-1} + e^{2t}\cvec{0}{-1}$; the former can be absorbed into the $c_1$ term
		* We can also just choose $k$ to be whatever we want
	* Simplified, $\bm x = c_1e^{2t}\cvec{1}{-1} + c_2\left(te^{2t}\cvec{1}{-1} + e^{2t}\cvec{0}{-1}\right)$
	* As $t \to \infty$ the solution is dominated by the $te^{2t}$ term or the vector $\cvec{1}{-1}$
	* As $t \to -\infty$ the solution goes to 0, but is still dominated by $te^{2t}$
	* The equilibrium at 0 is unstable; it is an *improper* equilibrium (also known as an improper node as all solutions emerge from it)

