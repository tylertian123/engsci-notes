# Lecture 23, Mar 14, 2022

## The Determinant

* Lemma I: If $\Delta _n: \matdim{n}{n} \mapsto \reals$ is a determinant function, then $\Delta _n(\bm A) = \kappa(\bm A)\Delta _n(\bm 1)$ where $\kappa(\bm A)$ is a scalar function of $\bm A$
	* Proof: Gaussian eliminate on $\bm A$ until it is upper triangular, i.e. $\bm E_1\cdots\bm E_n\bm U$; $\Delta _n(\bm U) = \Delta _n(\bm 1)\prod _{i = 1}^n u_{ii}$ which is a scalar times $\Delta _n(\bm 1)$; since elementary matrices either scale, negate, or leave the determinant unchanged, the final result is going to be a scalar times $\Delta _n(\bm 1)$
* Theorem II: Let $\Delta _n: \matdim{n}{n} \mapsto \reals$ and $\hat \Delta _n: \matdim{n}{n} \mapsto \reals$; $\hat \Delta _n$ satisfies an additional property DIII $\hat \Delta _n(\bm 1) = 1$; then $\Delta _n(\bm A) = \hat\Delta _n(\bm A)\Delta _n(\bm 1)$
	* Proof: Consider $\alignedeqntwo[t]{\Delta _n(\bm A) - \hat\Delta _n(\bm A)\Delta _n(\bm 1)}{\kappa(\bm A)\Delta _n(\bm 1) - \kappa(\bm A)\hat\Delta _n(\bm 1)\Delta _n(\bm 1)}{\kappa(\bm A)\Delta _n(\bm 1) - \kappa(\bm A)\Delta _n(\bm 1)}{0}$
	* Corollary: If $\Delta _n(\bm 1) = 1$ as well, then $\Delta _n(\bm A) = \hat\Delta _n(\bm A)$
		* If DIII also holds, then the determinant function is unique
* Definition: The *determinant* of $\bm A \in \matdim{n}{n}$ is the unique determinant function $\Delta _n: \matdim{n}{n} \mapsto \reals$ that satisfies:
	1. DI: Adding one row to another row leaves the result unchanged: $\Delta _n\cvec{\bm E(1; i, j)\bm A} = \Delta _n(\bm A)$
		* $\bm E(\lambda; i, j)$ is an elementary matrix of type III that multiplies row $j$ by $\lambda$ and adds it to row $i$
	2. DII: $\Delta _n\cvec{\bm E(\lambda, i)\bm A} = \lambda\Delta _n(\bm A)$
		* $\bm E(\lambda, i)$ is an elementary matrix of type II that multiplies row $i$ by $\lambda$
	3. DIII: $\Delta _n(\bm 1) = 1$
* Definition: The $(i, j)$ *minor* of a square matrix $\bm A \in \matdim{n}{n}$, denoted $\bm M_{ij}(\bm A) \in \matdim{n - 1}{n - 1}$, is the matrix obtained by eliminating the $i$-th row and $j$-th column
* Definition: The function ${\textstyle\det _n}: \matdim{n}{n} \mapsto \reals$ is ${\textstyle\det _n}\bm A = \sum _{k = 1}^n (-1)^{k + j} a_{kj}{\textstyle\det _{n - 1}}\bm M_{kj}(\bm A)$ for any $1 \leq j \leq n$ and ${\textstyle\det _1}\cvec{a} = a$
	* We can use any column and the definition still works
	* This is known as the *Laplace expansion*
* Theorem III: ${\textstyle\det _n}\matdim{n}{n} \mapsto \reals$ is the determinant
	* This shows the existence and uniqueness of the determinant
* The determinant can also be denoted $\abs{\bm A}$

