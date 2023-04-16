# Lecture 14, Nov 1, 2021

## Nonsquare Matrices

* When $m > n$, there are more equations than unknowns; $\rank A \leq n$; if $\rank A = n$ then there are no solutions or 1 solution
* When $m < n$, there are more unknowns than equations; $\rank A \leq m$; if $\rank A = m$, then there are always infinite solutions
* Full rank square matrices always have only 1 solution (full rank means $\rank A = \min\{m, n\}$)
* Any system that is not full rank can have either zero or infinite solutions

## More About Inverses

* If we have the inverse of $A$ for $A\vec{x} = \vec{b}$, then we can do $A^{-1}A\vec{x} = A^{-1}\vec{b} \implies I\vec{x} = A^{-1}\vec{b} \implies \vec{x} = A^{-1}\vec{b}$
* Definition: The square matrix $A$ is invertible $\iff \exists B$ such that $AB = I$ and $BA = I$
* Inverses are unique: Suppose both $B$ and $C$ are inverses of $A$, then $BA = I = AC \implies BAC = CAC \implies B = C$, so all inverses are the same
* Properties of inverses:
	1. If $A^{-1}$ exists, then when $[A|\vec{b}]$ is taken into rref, it becomes $[I|\vec{d}]$ where each variable is a leading variable
	2. If $A\vec{x} = \vec{0}$ has nontrivial solutions, then $A$ does not have an inverse; i.e. matrices with a null space of more than the zero vector are not invertible
		* Proof: Assume $A^{-1}$ exists, then $A^{-1}A\vec{x} = A^{-1}\vec{0} \implies I\vec{x} = \vec{0} \implies \vec{x} = \vec{0}$; this means that if $A$ is invertible then $\vec{x} = \vec{0}$ is the only solution to $A\vec{x} = \vec{0}$
	3. If matrices $A$ and $B$ are both invertible and of the same size, then $AB$ is also invertible, and $(AB)^{-1} = B^{-1}A^{-1}$
		* Proof: $B^{-1}A^{-1}AB = B^{-1}IB = B^{-1}B = I$, and $ABB^{-1}A^{-1} = A^{-1}IA = A^{-1}A = I$, so by the definition of the inverse $B^{-1}A^{-1}$ is the inverse of $AB$
	4. If $A$ is invertible, then $A^{-1}$ is also invertible, and $(A^{-1})^{-1} = A$
	5. Every invertible matrix $A$ can be expressed as a product of elementary matrices

