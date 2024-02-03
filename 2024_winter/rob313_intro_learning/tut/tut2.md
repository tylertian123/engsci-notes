# Tutorial 2, Jan 30, 2024

## Linear Algebra Refresher

* A vector inner product takes $2n - 1$ flops ($n$ multiplications, $n - 1$ additions), which we often shorten to just $2n$
* A matrix-vector product takes $2nm$ flops for an $m \times n$ matrix
* The *condition number* of a function measures how much its output changes for a small change in the input, i.e. how susceptible the output is to noise
	* For the linear equation $\bm A\bm x = \bm b$, it gives a bound of how inaccurate the solution $\bm x$ will be after approximation; smaller condition numbers are better for stability
	* This is a property of the matrix (not the algorithm or the floating-point representation)
	* It is defined as $\kappa(\bm A) = \abs*{\frac{\lambda _\text{max}}{\lambda _\text{min}}}$
	* Note $\kappa(\bm A^T\bm A) = (\kappa(\bm A))^2$, so squaring a matrix is very bad for stability
* Once we have solved $\bm A \bm x = \bm b$, we can use it to also solve an updated problem where we perturb $\bm A$ by a small, low-rank $\bm U\bm C\bm V$
	* A low-rank perturbation means that the change in certain dimensions is much less than that in other dimensions
	* Assume we know $\bm A^{-1}$ or that it is easy to compute
	* Then $(\bm A + \bm U\bm C\bm V)^{-1} = \bm A^{-1} - \bm A^{-1}\bm U(\bm C^{-1} + \bm V\bm A^{-1}\bm U)^{-1}\bm V\bm A^{-1}$ (*matrix inversion lemma*)
	* All we need to do is to calculate $\bm C^{-1}$, which is very efficient for a low-rank $\bm C$
	* A similar formula exists for the determinant

