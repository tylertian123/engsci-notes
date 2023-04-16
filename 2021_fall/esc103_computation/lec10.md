# Lecture 10, Oct 18, 2021

## Finding Eigenvectors Given Eigenvalues

* Suppose we have $\lambda$, how do we solve $(A - \lambda I)\vec{v} = \vec{0}$?
* Multiplying it out gets us a system, but some equations are not independent; we are left with equations relating the components of $\vec{v}$
* This allows us to express all the other components all in terms of one component, and allows us to write the vector $\vec{v}$ as the product of a scalar (one of the components) and a vector, which an eigenvector

## Inverses

* Suppose $\vec{u} = T(\vec{w})$, given $\vec{u}$ and $T$, can we find $\vec{w}$?
	* If $T$ is linear, $\vec{u} = M_T\vec{w}$
	* To solve the problem we want to find another matrix $N$ such that $NM_T = I$, so that $N\vec{u} = NM_T\vec{w} = I\vec{w} = \vec{w}$
	* $N$ is the inverse of $M_T$, $M_T^{-1}$
* For the $2 \times 2$ case where $M = \mattwo{a}{b}{c}{d}$, $M^{-1} = \frac{1}{ad - bc}\mattwo{d}{-b}{-c}{a}$

## Determinants

* $ad - bc$ is the *determinant* of $\mattwo{a}{b}{c}{d}$
* The determinant determines whether the inverse exists; the inverse only exists when $\det A \neq 0$
* $(M - \lambda I)$ is not invertible; proof:
	* Assume it is invertible, this would mean $N$ exists such that $N(M - \lambda I) = I$
	* Therefore, $N(M - \lambda I)\vec{v} = N\vec{0} \implies I\vec{v} = \vec{0} \implies \vec{v} = \vec{0}$
	* Therefore if $M - \lambda I$ is invertible then the only $\vec{v}$ that satisfies the equation is $\vec{v} = \vec{0}$
* Therefore, the condition for finding eigenvalues is to solve for when $\det(M - \lambda I) = 0$

