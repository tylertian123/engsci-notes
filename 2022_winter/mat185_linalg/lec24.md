# Lecture 24, Mar 15, 2022

## Additional Properties of the Determinant

* Determinant of elementary matrices: $\det \bm E(i, j) = -1$, $\det \bm E(\lambda; i) = \lambda$, $\det \bm E(\lambda; i, j) = 1$
* Theorem IV: Cauchy-Binet Product Rule: Let $\bm A, \bm B \in \matdim{n}{n}$, then $\det(\bm A\bm B) = \det(\bm A)\det(\bm B)$
	* Proof: Define $\Delta _{\bm B}(\bm A) = \det(\bm A\bm B)$
		* Claim: $\Delta _{\bm B}$ is a proper determinant function:
			1. $\Delta _{\bm B}\cvec{\bm E(1; i, j)\bm A} = \det \cvec{\bm E(1; i, j)\bm A\bm B} = \det (\bm A\bm B) = \Delta _{\bm B}(\bm A)$
			2. $\Delta _{\bm B}\cvec{\bm E(\lambda; i)\bm A} = \det\cvec{\bm E(\lambda; i)\bm A\bm B} = \lambda\det(\bm A\bm B) = \lambda\Delta _{\bm B}(\bm A)$
		* From $\Delta _n(\bm A) = \det(\bm A)\Delta _n(\bm 1)$ we know $\Delta _{\bm B}(\bm A) = \det(\bm A)\Delta _{\bm B}(\bm 1) = \det(\bm A)\det(\bm B)$
		* Therefore $\det(\bm A)\det(\bm B) = \Delta _{\bm B}(\bm A) = \det(\bm A\bm B)$
* Theorem V: Transpose Rule: Let $\bm A \in \matdim{n}{n}$, then $\det \bm A = \det \bm A^T$
	* This means we can also compute the determinant along rows instead of columns, since the matrix can be transposed and the determinant is unchanged
	* Proof: Define $\Delta _T(\bm A) = \det \bm A^T$
		* Claim: $\Delta _T$ is a proper determinant function:
			1. $\Delta _T\cvec{\bm E(1; i, j)\bm A} = \det(\bm E\bm A)^T = \det(\bm A^T\bm E^T) = \det(\bm A^T)\det(\bm E^T) = \det(\bm A^T)\det(\bm E(\lambda; j, i)) = \det(\bm A^T) = \Delta _T(\bm A)$
			2. $\Delta _T\cvec{\bm E(\lambda; i)\bm A} = \det(\bm A^T)\det(\bm E^T) = \det(\bm A^T)\det(\bm E(\lambda; i)) = \lambda\det(\bm A^T) = \lambda\Delta _T(\bm A)$
			3. $\Delta _T(\bm 1) = \det(\bm 1^T) = \det \bm 1 = 1$
		* Therefore $\Delta _T$ is the determinant, and since the determinant is unique, $\det A^T = \Delta _T(\bm A) = \det \bm A$
* Theorem VI: Invertibility theorem: $\bm A \in \matdim{n}{n}$ is invertible iff $\det \bm A \neq 0$
	* Proof:
		* If $\bm A$ invertible, then $\bm A\bm A^{-1} = \bm 1 \implies \det(\bm A\bm A^{-1}) = \det \bm 1 = 1 \implies \det(\bm A)\det(\bm A^{-1}) = 1$ so $\det(\bm A) \neq 0$
			* Corollary: $\det \bm A^{-1} = \frac{1}{\det \bm A}$ if $\bm A$ is invertible
		* By contraposition, if $\bm A$ is not invertible, then its rows are dependent, then $\det \bm A = 0$; therefore $\det \bm A \neq 0 \implies \bm A$ is invertible

