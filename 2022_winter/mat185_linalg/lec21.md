# Lecture 21, Mar 8, 2022

## The Determinant Function

* Every matrix has a determinant denoted $\det(\bm A)$; for $2 \times 2$ matrix this is $ad - bc$
* Let $\bm A = \cvec{\bm r_1}{\vdots}{\bm r_n} \in \matdim{n}{n}$; then the *determinant function* $\Delta _n: \matdim{n}{n} \mapsto \reals$ is any function that satisfies the following:
	1. Adding one row to another row leaves the result unchanged: $\Delta _n\cvec{\bm E(1; i, j)\bm A} = \Delta _n(\bm A)$
		* $\bm E(\lambda; i, j)$ is an elementary matrix of type III that multiplies row $j$ by $\lambda$ and adds it to row $i$
	2. $\Delta _n\cvec{\bm E(\lambda, i)\bm A} = \lambda\Delta _n(\bm A)$
		* $\bm E(\lambda, i)$ is an elementary matrix of type II that multiplies row $i$ by $\lambda$
* The determinant function is homogeneous in each row (i.e. scaling a row scales the entire determinant)
* Theorem I: $\Delta _n: \matdim{n}{n} \mapsto \reals$ has the properties:
	1. If $\bm A$ has a zero row, then $\Delta _n(\bm A) = 0$
		* Proof: If row $i$ of $\bm A$ is zero, then $\bm E(0, i)\bm A = \bm A$, therefore $\Delta _n\cvec{\bm E(0, i)\bm A} = \Delta _n(\bm A) = 0\Delta _n(\bm A) = 0$
	2. $\Delta _n\cvec{\bm E(\lambda; i, j)\bm A} = \Delta _n(\bm A)$ (property 1, but with any scalar multiple)
		* Proof: Trivially true for $\lambda = 0$; for nonzero $\lambda$, scale row $j$ by $\lambda$ (scales the determinant by $j$), then add row $j$ to row $i$ (determinant unchanged), then divide the result by $\lambda$ (determent scaled by $\frac{1}{\lambda}$), which gives the same determinant
	3. Interchanging rows negates the determinant: $\Delta _n\cvec{\bm E(i, j)\bm A} = -\Delta _n(\bm A)$
		* Proof: $\Delta _n\cvec{\vdots}{\bm r_j}{\vdots}{\bm r_i}{\vdots} = -\Delta _n\cvec{\vdots}{-\bm r_j}{\vdots}{\bm r_i}{\vdots} = -\Delta _n\cvec{\vdots}{-\bm r_j}{\vdots}{\bm r_i - \bm r_j}{\vdots} = \Delta _n\cvec{\vdots}{-\bm r_j}{\vdots}{\bm r_j - \bm r_i}{\vdots} = \Delta _n\cvec{\vdots}{-\bm r_i}{\vdots}{\bm r_j - \bm r_i}{\vdots} = -\Delta _n\cvec{\vdots}{\bm r_i}{\vdots}{\bm r_j - \bm r_i}{\vdots} = -\Delta _n\cvec{\vdots}{\bm r_i}{\vdots}{\bm r_j}{\vdots}$
	4. If the rows of $\bm A$ are linearly dependent then $\Delta _n(\bm A) = 0$
		* Proof: If the rows are dependent, then at least one row can be written as a linear combination of the others; therefore by adding multiples of other rows to this row (does not change the determinant by property 2), it is possible to make this row all zero, which means the determinant is 0 (by property 1)
	5. The determinant function is linear in every row (n-linear): $\Delta _n\cvec{\vdots}{\lambda\bm p + \mu\bm q}{\vdots} = \lambda\Delta _n\cvec{\vdots}{\bm p}{\vdots} + \mu\Delta _n\cvec{\vdots}{\bm q}{\vdots}$
		* Proof: Without loss of generality, show $\Delta _n\cvec{\bm p + \bm q}{\vdots} = \Delta _n\cvec{\bm p}{\vdots} + \Delta _n\cvec{\bm q}{\vdots}$
			* If the rest of the rows are dependent, then by property 4 each determinant is 0 so $0 = 0 + 0$
			* If the rest of the rows are independent, extend the rest of the rows to a basis for $\matdim{}{n}$ by adding an independent vector; then $\bm p = \sum _{i = 1}^n \lambda _i\bm r_i$ and $\bm q = \sum _{i = 1}^n \mu _k\bm r_k$ so $\Delta _n \cvec{\bm p + \bm q}{\vdots} = \Delta _n\cvec{(\lambda _1 + \mu _1)\bm r_1 + \sum _{k = 2}^n (\lambda _k + \mu _k)\bm r_k}{\vdots} = \Delta _n\cvec{(\lambda _1 + \mu _1)\bm r_1}{\vdots} = (\lambda _1 + \mu _1)\Delta _n\cvec{\bm r_1}{\vdots}$; also by the same process $\Delta _n\cvec{\bm p}{\vdots} = \lambda _1\Delta _n\cvec{\bm r_1}{\vdots}$ and $\Delta _n\cvec{\bm q}{\vdots} = \mu _1\Delta _n\cvec{\bm r_1}{\vdots}$

