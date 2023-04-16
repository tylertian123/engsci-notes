# Lecture 17, Feb 28, 2022

## Non-Square Matrices

* Theorem IV: Let $\bm A \in \matdim{m}{n}$; then the following are equivalent:
	1. $\rank \bm A = n$
	2. The columns of $\bm A$ are linearly independent
	3. $\bm A\bm x = \bm 0 \implies \bm x = \bm 0$
	4. $\bm A^T\bm A$ is invertible
	5. $\bm A$ has a left inverse ($\exists \bm B \ni \bm B\bm A = \bm 1 \in \matdim{n}{n}$), where $\bm B = (\bm A^T\bm A)^{-1}\bm A^T$ is the left inverse, known as the Moore-Penrose pseudoinverse
* This necessitates $m \geq n$, i.e. $\bm A$ is a "tall" matrix, because if $n > m$ then the columns cannot be independent
* Proof:
	* $1 \implies 2$: $\rank \bm A = n \implies \dim \col \bm A = n$ so the columns are linearly independent as there are $n$ columns
	* $2 \implies 3$: The columns are independent, so the only linear combination of the columns that add to 0 is all 0s, which is the zero vector
	* $3 \implies 4$: $\bm A^T\bm A$ is square, so it is invertible if and only if $\bm A^T\bm A\bm x = \bm 0 \implies \bm x = \bm 0$
		* Lemma III: Let $\bm s \in \matdim{n}{}$ and $\bm s^T\bm s = 0$ then $\bm s = \bm 0$
			* Proof: $\bm s^T\bm s = \sum _{i = 1}^n s_i^2 = 0$ but each $s_i^2 \geq 0$, which means all $s_i^2 = 0 \implies s_i = 0 \implies \bm s = \bm 0$
		* $\alignedimp[t]{\bm A^T\bm A\bm x = \bm 0}{\bm x^T\bm A^T\bm A\bm x = 0}{(\bm A\bm x)^T(\bm A\bm x) = 0}{\bm A\bm x = \bm 0}{\bm x = \bm 0}$
	* $4 \implies 5$: $\bm A^T\bm A$ is invertible implies $\exists \bm C \ni \bm C\bm A^T\bm A = \bm 1$; let $\bm B = \bm C\bm A^T$, then $\bm B$ is the one-sided inverse
	* $5 \implies 1$: Show the columns are linearly independent: $\alignedimp[t]{\sum _{i = 1}^n \bm x_i\bm c_i = \bm 0}{\bm A\bm c = \bm 0}{\bm B\bm A\bm c = \bm 0}{\bm 1\bm c = \bm 0}{\bm c = \bm 0}$
* Theorem IV: Let $\bm A \in \matdim{m}{n}$ (this time $n \geq m$, i.e. $\bm A$ is short and wide); then the following are equivalent:
	1. $\rank \bm A = m$
	2. The rows of $\bm A$ are linearly independent
	3. $\bm x^T\bm A = \bm 0^T \implies \bm x = \bm 0$
	4. $\bm A\bm A^T$ is invertible
	5. $\bm A$ has a right inverse ($\exists \bm B \ni \bm A\bm B = \bm 1 \in \matdim{m}{m}$), where $\bm B = \bm A^T(\bm A\bm A^T)^{-1}$ (also the Moore-Penrose pseudoinverse)

