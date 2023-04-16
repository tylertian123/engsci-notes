# Lecture 27, Mar 22, 2022

## Eigenvalues and Eigenvectors: Definition and Motivation

* Motivation: Finding solutions to a system of differential equations $\dot{\bm x} = \bm A\bm x, \bm x = \bm x(t) \in \matdim{n}{}$, where the dot indicates time derivative
	* Assume that $\bm A \in \matdim{n}{n}$ is constant
	* Each equation is first order, but higher order equations can also be expressed in this form by making derivatives also variables
* As in the case for scalars, try $\bm x(t) = \bm pe^{\lambda t}$ where $\bm p \in \matdim{n}{}$
	* $\dot{\bm x} = \bm A\bm x \implies \lambda\bm pe^{\lambda t} = \bm A\bm pe^{\lambda t} \implies \lambda p = \bm A\bm p \implies (\lambda\bm 1 - \bm A)\bm p = \bm 0$
		* This is similar to the characteristic equation in the scalar case
		* We can say that $\bm p \neq \bm 0$ since that would give the trivial solution
		* This means that $(\lambda \bm 1 - \bm A)$ must have a null space, which means $\lambda \bm 1 - \bm A$ cannot have full rank, so we must choose $\lambda$ such that $(\lambda\bm 1 - \bm A)$ is singular, i.e. $\det(\lambda\bm 1 - \lambda A) = 0$
		* The "eigenproblem"
	* The $\lambda$ that make $\det(\lambda\bm 1 - \lambda\bm A) = 0$ are the *eigenvalues* of $\bm A$
	* The nontrivial $\bm p$ are the *eigenvectors* (for a particular $\lambda$)
		* Note these can be scaled arbitrarily
* For $\bm A \in \matdim{n}{n}$, there are $n$ such $\lambda$, because $\det(\lambda\bm 1 - \lambda\bm A)$ is an $n$-th degree polynomial of $\lambda$
	* Expanding out the determinant, we obtain the *characteristic polynomial* (eigenpolynomial?) of this system of differential equations; when we set it to zero, we obtain the *characteristic equation* (eigenequation?)
	* Notation: $C_{\bm A}(\lambda)$ for the eigenpolynomial
* Since $\bm p \in \Null(\lambda\bm 1 - \bm A)$, the *eigenspace* for an eigenvalue $\lambda$ is $\Set{\bm p \in \matdim{n}{} | \bm A\bm p = \lambda \bm p} = \Null(\lambda\bm 1 - \lambda\bm A)$ (sometimes denoted $\mathscr E_{\lambda}$)
	* The bases for the eigenspaces are the eigenvectors
	* All the eigenvectors are linearly independent
	* Note that since $\bm 0$ is the trivial eigenvector, normally we use "eigenvector" to refer to only nonzero eigenvectors
* If $\bm A$ is viewed as a linear transformation, eigenvectors are the vectors that are scaled by the transformation by an eigenvalue (i.e. direction remains unchanged)
* This allows us to solve the general $n$-th order differential equation
	* Let $x_1 = x, x_2 = \dot x$, then $\dot x_1 = x_2, \dot x_2 = \ddot x = -a_1\dot x - a_0x = -a_1x_2 - a_0x_1$
	* We can put this in a matrix as $\cvec{\dot x_1}{\dot x_2} = \mattwo{0}{1}{-a_0}{-a_1}\cvec{x_1}{x_2}$
	* By extension this can be used to solve a linear system of any order
* The eigenvalues of an upper triangular matrix are the values on the diagonal of the matrix (since the determinant of such a matrix is the product of the diagonal)
* "Eigen" is a German word meaning "characteristic, proper"

