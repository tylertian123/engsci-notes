# Tutorial 4, Feb 2, 2026

* PBH test proof: $(A, B)$ is controllable if and only if each $\lambda \in \sigma(A)$ is controllable
	* Forward: suppose $(A, B)$ is controllable, and for contradiction suppose some $\lambda$ is not controllable, so $\rank\rvec{A - \lambda I}{B} < n$
		* The rows of the matrix are dependent, therefore $\exists v \in \reals^n, v \neq 0$ such that $v^T\rvec{A - \lambda I}{B} = 0$
		* Therefore $v^T(A - \lambda I) = v^TB = 0 \implies v^TA = \lambda v^T$
		* $v^TAB = \lambda v^TB = 0$, $v^TA^2B = \lambda^2v^TB = 0$ and so on
		* Therefore $v^TQ_c = v^T\rvec{B}{AB}{\cdots}{A^{n - 1}B} = 0$, so $Q_c$ is not full row rank, therefore $(A, B)$ is not controllable

