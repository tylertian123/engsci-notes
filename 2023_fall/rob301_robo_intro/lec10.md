# Lecture 10, Oct 10, 2023

* Example: consider the problem $\dot{\bm x} = \bm A\bm x$; given that constant $P \in \reals^{n \times n}$ is positive-definite and $\bm A^T\bm P + \bm P\bm A$ is negative-definite, show that $\bm x = \bm 0$ is asymptotically stable
	* Candidate Lyapunov function: $v(\bm x) = \bm x^T\bm P\bm x$, which is positive-definite since $\bm P$ is positive-definite
	* $\dot v(\bm x) = \pdiff{}{t}\bm x^T\bm P\bm x = \dot{\bm x}^T\bm P\bm x + \bm x^T\bm P\dot{\bm x} = \bm x^T\bm A^T\bm P\bm x + \bm x^T\bm P\bm A\bm x = \bm x^T(\bm A^T\bm P + \bm P\bm A)\bm x$ which is negative-definite since $\bm A^T\bm P + \bm P\bm A$ is negative-definite
	* Therefore by Lyapunov's method the solution $\bm x = \bm 0$ is asymptotically stable
	* The condition $\bm A^T\bm P + \bm P\bm A = -\bm L$, where $\bm P, \bm L$ are both semi-definite, is called *Lyapunov's equation*; this condition is equivalent to saying that $\bm A$ has only eigenvalues with negative real parts

