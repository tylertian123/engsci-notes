# Lecture 34, Apr 8, 2022

## The Matrix Exponential

* Consider the scalar case where $\exp x = \sum _{k = 0}^\infty \frac{x^k}{k!}$
* Let $\bm X \in \matdim{n}{n}$, then define $e^{\bm X} = \exp \bm X = \sum _{k = 0}^\infty \frac{\bm X^k}{k!}$
	* Note we have to define $\bm X^0 = \bm 1$
* We know that in the scalar case $\dot x = ax$ has solution $x(t) = x_0e^{at}$; can we do the same for the matrix exponential?
* $e^{\bm At} = \sum _{k = 0}^\infty \frac{\bm A^k}{k!}t^k \implies \diff{}{t}e^{\bm At} = \sum _{k = 1}^\infty \frac{\bm A^k}{(k - 1)!}t^{k - 1} = \sum _{k = 0}^\infty \frac{\bm A^{k + 1}}{k!}t^k = \bm A\sum _{k = 0}^\infty \frac{\bm A^k}{k!}t^k = \bm Ae^{\bm At}$
* Therefore in the general case of $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0$ the solution is $e^{\bm At}\bm x_0$
* How do we actually compute $e^{\bm At}$?
	* If $\bm A$ is diagonalizable, then $\bm A = \bm P\bm\Lambda\bm P^{-1}$, so $\bm A^n = (\bm P\bm\Lambda\bm P^{-1})(\bm P\bm\Lambda\bm P^{-1})\cdots(\bm P\bm\Lambda\bm P^{-1}) = \bm P\bm\Lambda^n\bm P^{-1}$
	* $\bm\Lambda^n$ is easy to compute, since $\bm\Lambda$ is diagonal, we simply take the diaongal entries to the $n$th power
* Using this result, $\alignedeqntwo[t]{e^{\bm At}}{\sum _{k = 0}^\infty \bm P\frac{\bm\Lambda^n}{k!}\bm P^{-1}t^k}{\bm P\left(\sum _{k = 0}^\infty \frac{\bm\Lambda^k}{k!}t^k\right)\bm P^{-1}}{\bm Pe^{\bm\Lambda t}\bm P^{-1}}{\bm P\matthreeb{\sum _{k = 0}^\infty \frac{\lambda _2^k}{k!}t^k}{0}{\cdots}{0}{\sum _{k = 0}^\infty \frac{\lambda _2^k}{k!}t^k}{\cdots}{\vdots}{\vdots}{\ddots}\bm P^{-1}}{\bm P\matthreeb{e^{\lambda _1t}}{0}{\cdots}{0}{e^{\lambda _2t}}{\cdots}{\vdots}{\vdots}{\ddots}\bm P^{-1}}$

