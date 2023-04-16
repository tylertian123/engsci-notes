# Lecture 10, Sep 29, 2022

## Eigenvalues of Linear ODE Systems

* Example: $\diff{\vec x}{t} = \mattwo{-\frac{13}{8}}{\frac{3}{4}}{\frac{1}{4}}{-\frac{1}{4}}\vec x, \vec x_0 = \cvec{-16}{20}$
	* Eigenvalues and eigenvectors: $\lambda _1 = -\frac{7}{4}, \vec v_1 = \cvec{6}{-1}, \lambda _2 = -\frac{1}{8}, \vec v_2 = \frac{1}{2}$
	* General solution: $\vec x(t) = c_1e^{-\frac{7}{4}}\cvec{6}{-1} + c_2e^{-\frac{1}{8}}\cvec{1}{2}$
	* Solution to IVP: $x(0) = \cvec{-16}{20} = c_1\cvec{6}{-1} + c_2\cvec{1}{2} \implies c_1 = -4, c_2 = 8$
	* Unstable equilibrium (sink) at $(0, 0)$; all solutions approach this as $t \to \infty$
* To visualize these in 2D, first plot the eigenvectors; use the sign of the eigenvalues to determine the directions of solutions along the eigenvectors
* For a given solution, it moves in the direction of the "dominant" eigenvector faster (the dominant eigenvector is the one with the greatest magnitude in eigenvalue)
* With two negative eigenvalues, all solutions tend towards the equilibrium at $\cvec{0}{0}$ as $t \to \infty$
	* The equilibrium at $\cvec{0}{0}$ is a *sink* and stable equilibrium
* With two positive eigenvalues, all solutions (except for the one starting at the origin) diverge towards infinity
	* The equilibrium at $\cvec{0}{0}$ is a *source* and unstable equilibrium
* With one positive and one negative eigenvalue, one of the eigenvectors is divergent and one is convergent
	* The equilibrium at $\cvec{0}{0}$ is a semistable equilibrium
* With one negative and one zero eigenvalue, solutions converge towards the zero eigenvalue, which is an entire line of equilibrium points

