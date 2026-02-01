# Tutorial 2, Jan 19, 2026

## Time Response

* Suppose a discrete time LTI system has poles at $p = 0.6 \pm j0.3$; describe its time response
	* Converting to polar form, $p = 0.671e^{\pm j0.46}$
	* Since $\abs{r} < 1$, the solution decays
	* The response contains a sinusoid with frequency $0.46$
* Consider the system $x(k + 1) = \mattwo{0}{1}{-8}{6}x(k) + \cvec{0}{1}u(k), y = \rvec{1}{0}x(k)$ and suppose $x(0) = \cvec{1}{2}, u(k) = 2^k$; compute the time response
	* First diagonalize $A$
		* Eigenvalues are $\set{2, 4}$, eigenvectors are $\cvec{1}{2}, \cvec{1}{4}$
		* $A^k = P\Lambda^k P^{-1} = \mattwo{1}{1}{2}{4}\mattwo{2^k}{0}{0}{4^k}\mattwo{1}{1}{2}{4}^{-1}$
	* Initial state response: $A^kx(0)$
		* Note that here since $\cvec{1}{2}$ is an eigenvalue, we simply have $A^kv = \lambda^kv$

