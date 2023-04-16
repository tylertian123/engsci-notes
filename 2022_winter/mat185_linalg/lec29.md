# Lecture 29, Mar 28, 2022

## Diagonalization Properties

* Proposition II: Let $\bm A, \bm T \in \matdim{n}{n}$ and $\bm T$ be invertible, then $\bm A$ and $\bm T^{-1}\bm A\bm T$ have the same characteristic polynomial and therefore same eigenvalues
	* $\bm T^{-1}\bm A\bm T$ is known as a *similarity transformation* of $\bm A$
	* Proof: $\alignedeqn[t]{\det(\lambda\bm 1 - \bm T^{-1}\bm A\bm T)}{\det(\lambda\bm T^{-1}\bm T - \bm T^{-1}\bm A\bm T)}{\det(\bm T^{-1}(\lambda \bm 1 - \bm A)\bm T)}{\det(\bm T^{-1})\det(\lambda \bm 1 - \bm A)\det(\bm T)}{\det(\lambda\bm 1 - \bm A)}$
* Theorem II: Let $\bm A \in \matdim{n}{n}$ be diagonalizable; then:
	1. The characteristic equation for $\bm A$ can be written as $c_{\bm A}(\lambda) = \det(\lambda\bm1 - \bm A) = \prod _{\alpha = 1}^n (\lambda - \lambda _\alpha)$
		* If $\bm A$ is diagonalized by $\bm P$ then $c_{\bm A}(\lambda) = c_{\bm P^{-1}\bm A\bm P}(\lambda) = c_{\bm\Lambda}(\lambda)$
	2. $\det(\bm A) = \prod _{\alpha = 1}^n \lambda _{\alpha}$
		* Proof: $\bm A = \bm P\bm \Lambda\bm P^{-1} \implies \alignedeqntwo[t]{\det(\bm A)}{\det(\bm P\bm\Lambda\bm P^{-1})}{\det(\bm P)\det(\bm \Lambda)\det(\bm P^{-1})}{\det(\bm \Lambda)}{\prod _{\alpha = 1}^n (\lambda - \lambda _\alpha)}$
	3. $\tr \bm A = \sum _{\alpha = 1}^n \lambda _\alpha$
		* Proof: $\tr \bm A = \tr(\bm P\bm \Lambda\bm P^{-1}) = \tr(\bm P\bm P^{-1}\bm \Lambda) = \tr(\bm \Lambda) = \sum _{\alpha = 1}^n \lambda _\alpha$ 
		* Note $\tr(\bm S\bm T) = \tr(\bm T\bm S)$
* Theorem II holds for all matrices, even ones that are not diagonalizable, we just currently cannot prove it
* It's important to note that repeated eigenvalues are counted multiple times

