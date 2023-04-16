# Lecture 18, Oct 20, 2022

## The Matrix Exponential

* If a scalar IVP $x' = ax, x(0) = x_0$ can be solved by $x = e^{at}x_0$, then can we solve $\bm x' = \bm A\bm x, \bm x(0) = \bm x_0$ with $\bm x = e^{\bm At}\bm x_0$?
* We can define the matrix exponential $e^{\bm At}$ using a Taylor series, similar to a scalar exponential

\noteDefn{The matrix exponential $$e^{\bm At} = \bm I + \bm At + \frac{1}{2!}\bm A^2t^2 + \frac{1}{3!}\bm A^3t^3 + \cdots = \sum _{k = 0}^\infty \frac{\bm A^kt^k}{k!}$$}

* The matrix exponential has the same properties as the scalar exponential
	* $e^{\bm 0t} = \bm I$
	* $\diff{}{t}e^{\bm At} = \bm Ae^{\bm At}$
	* $e^{\bm A(t + \tau)} = e^{\bm At}e^{\bm A\tau}$
	* $(e^{\bm At})^{-1} = e^{-\bm At}$
	* $Ae^{\bm At} = e^{\bm At}\bm A$
	* $e^{(\bm A + \bm B)t} = e^{\bm At}e^{\bm Bt}$, but only if $\bm A\bm B = \bm B\bm A$

\noteThm{Given an ODE $\bm X' = \bm A\bm X$, $$\bm \Phi(t) = e^{\bm At}$$ is a solution to this ODE, and satisfies $\bm\Phi(0) = \bm I$}

* Note that this is a matrix differential equation; this contains multiple solutions $\bm x_1, \bm x_2, \cdots$, which forms the fundamental set
* The matrix exponential is also sometimes known as the *special fundamental matrix*, because its columns are solutions that form a basis for the solution space
	* The general solution $\bm x(t)$ can be written as $\bm x(t) = c_1\bm x_1(t) + c_2\bm x_2(t) + \cdots = \bm\Phi(t)\bm c$
* If we are given an initial condition $\bm X(0) = \bm x_0$, then $\bm x(0) = \bm\Phi(0)\bm c \implies \bm c = \bm\Phi(0)^{-1}$; since $\bm\Phi(0) = \bm I$, the IVP is satisfied by $\bm X(t) = \bm x_0\bm \Phi(t)$

\noteThm{The IVP $$\bm x' = \bm A\bm x, \bm x(0) = \bm x_0$$ is satisfied by $$\bm x(t) = e^{\bm At}\bm x_0$$}

## Calculating The Matrix Exponential

* How do we take all those higher powers of $\bm A$?
* Eigendecomposition: $\bm A = \bm V\bm D\bm V^{-1}$ where $\bm D$ is a diagonal matrix of the eigenvalues and $\bm V$ is a matrix of all the eigenvectors
	* This works because $\bm A\bm V = \bm V\bm D = \bm D\bm V$
* Using eigendecomposition we can easily take higher powers: $\bm A^k = \bm V\bm D^k\bm V^{-1}$
	* This is great because $\bm D$ is diagonal, so $\bm D^k$ simply has the diagonal entries to the power of $k$
	* This allows us to write $e^{\bm At} = \bm Ve^{\bm Dt}\bm V^{-1}$, and $e^{\bm Dt} = \matthreeb{e^{\lambda _1t}}{0}{\cdots}{0}{e^{\lambda _2t}}{\cdots}{\vdots}{\vdots}{\ddots}$

\noteImportant{The IVP $$\bm x' = \bm A\bm x, \bm x(0) = \bm x_0$$ is satisfied by $$\bm x = e^{\bm At}\bm x_0 = \bm Ve^{\bm Dt}\bm V^{-1}\bm x_0$$}

