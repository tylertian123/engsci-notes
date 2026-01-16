# Lecture 4, Jan 13, 2026

## Computing the Matrix Power

* Given $A \in \reals^{n \times n}$, we want to find a closed-form expression for $A^k$ so we can compute the time response
* Let $\sigma(A) = \set{\lambda _1, \dots, \lambda _n}, \lambda _i \in \complex$ denote the spectrum of $A$, i.e. the set of eigenvalues of $A$
* Assume that $A$ is diagonalizable (recall that this is equivalent to $A$ having $n$ linearly independent eigenvectors), then we can compute $A^k$ as $A^k = P\Lambda^kP^{-1}$ where $P$ is the matrix of eigenvectors which diagonalizes $A$
	* In general for nondiagonalizable $A$ this will be replaced with the Jordan form
* Example: $A = \mattwo{0}{1}{3}{-2}$
	* This has characteristic polynomial $s^2 + 2s - 3 = (s + 3)(s - 1)$ so $\sigma(A) = \set{1, -3}$
	* Substitute $\lambda$ in $\mattwo{0}{1}{3}{-2}\cvec{v_{11}}{v_{12}} = \lambda\cvec{v_{11}}{v_{22}}$ and solve for eigenvectors to get $v_1 = \cvec{1}{1}, v_2 = \cvec{1}{-3}$
	* $P = \mattwo{1}{1}{1}{-3} \implies A^k = \mattwo{1}{1}{1}{-3}\mattwo{1^k}{0}{0}{(-3)^k}\mattwo{1}{1}{1}{-3}^{-1}$
* Note that $A^k$ can also be computed using the Z-transform (similarly to how $e^{At}$ can be computed with the Laplace transform)
	* Starting with $x(k + 1) = Ax(k)$, which we know the solution to be $x(k) = A^kx(0)$
	* Apply Z-transforms to get $\alignedimp[t]{zX(z) - zx(0) = AX(z)}{X(z) = (zI - A)^{-1}zx(0)}{x(k) = \iztf{(zI - A)^{-1}z}x(0)}$
		* Note we don't assume zero initial conditions here since we're not trying to derive a transfer function
	* By existence and uniqueness of solutions, we conclude that $A^k = \iztf{(zI - A)^{-1}z}x(0)$
		* Note that this inverse Z-transform can be computed componentwise using the residue theorem (not covered in this course)

## Poles and Eigenvalues

* The qualitative behaviour of solutions can be inferred by looking at either the eigenvalues of $A$ or the poles of the transfer function
* What is the relationship between poles and eigenvalues of $A$?
* Consider the output equation $y(k) = Cx(k)$ with transfer function (SISO) $\frac{Y(z)}{U(z)} = C(zI - A)^{-1}B$ as we've derived last time
	* Expanding the inverse we get $C\left(\frac{\operatorname{adj}(zI - A)}{\det(zI - A)}\right)B = \frac{N'(z)}{D'(z)}$
		* Note that the middle term is a scalar, so we can conclude that $D'(z)$ is the characteristic polynomial of $A$
	* To get an actual transfer function we need to cancel roots so that the numerator and denominator are coprime, to get $\frac{N(z)}{D(z)}$
	* This means that all the poles (roots of $D(z)$) are eigenvalues of $A$, but not the other way around due to pole-zero cancellations -- some information is lost when we convert from state space to transfer function
		* A system that has a stable transfer function might not necessarily be stable in all its states

