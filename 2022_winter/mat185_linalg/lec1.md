# Lecture 1, Jan 11, 2022

## Review: Matrices

* $A = [a_{ij}] \in \matdim{m}{n}$ is a general $m \times n$ matrix in the reals
	* $\matdim{m}{}$ is the set of all $m \times 1$ real matrices (i.e. columns)
	* $\reals^n$ is the set of all $1 \times n$ real matrices (i.e. rows)
	* We can also have matrices of $\complex, \integers, \rationals$, etc
* Matrix multiplication: $A \in \matdim{m}{n}, B \in \matdim{n}{p} \implies C = AB = [c_{ij}] \in \matdim{m}{p}, c_{ij} = \sum _{k = 1}^n a_{ik}b_{kj}$
* Transpose swaps rows and columns: $A \in \matdim{m}{n} \implies A^T \in \matdim{n}{m}$
* Trace is the sum of the main diagonal $A \in \matdim{n}{n} \implies \tr A = \sum _{i = 1}^n a_{ii}$ (for square matrices only)
* Determinant $\det A$ for square matrices
* Inverse $A^{-1}$ also for square matrices; exists only when $\det A \neq 0$ (i.e. matrix is full rank); $AA^{-1} = A^{-1}A = I$
	* Pseudoinverses exist for nonsquare matrices
	* For square matrices $AB = I \implies BA = I$
* $(A^T)^{-1} = (A^{-1})^T$ so sometimes we denote $(A^{-1})^T = A^{-T}$
* Symmetric matrices $A^T = A$, skew symmetric (or anti-symmetric) $A^T = -A$
* Identity denoted as a boldface 1
* Matrix addition is associative and commutative; matrix multiplication is associative and not commutative
* We have closure under matrix addition and scalar multiplication; that is after adding two matrices and multiplying by a scalar we still get a matrix in the same dimensions

