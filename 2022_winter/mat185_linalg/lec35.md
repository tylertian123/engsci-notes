# Lecture 35, Apr 11, 2022

## Example Problems

* Consider the sequence: $\bm x_{k + 1} = \bm A\bm x_k, \bm x_k \in \matdim{n}{}$, and let $\bm A \in \matdim{n}{n}$ be diagonalizable with real eigenvalues; show that if all $\abs{\lambda _\alpha} < 1$, then $\bm x_k \to 0$ as $k \to \infty$
	* Note $\bm x_k = \bm A^k\bm x_0$
	* $\lim _{k \to \infty} \bm x_k = \lim _{k \to \infty} \bm A^k\bm x_0 = \lim _{k \to \infty} \bm P\bm\Lambda^k\bm P^{-1}\bm x_0$
	* $\lim _{k \to \infty}\bm\Lambda^k = \lim _{k \to \infty}\matthreeb{\lambda _1^k}{}{}{}{\lambda _2^k}{}{}{}{\ddots} = \bm 0$
	* Therefore $\lim _{k \to \infty} \bm P\bm\Lambda^k\bm P^{-1}\bm x_0 = \bm 0$

