# Lecture 9, Sep 26, 2022

## Nonhomogeneous to Homogeneous

* Homogeneous ODEs always have an equilibrium at the origin, whereas nonhomogeneous ODEs' equilibrium points aren't at the origin
* The equilibrium point for $\diff{\vec x}{t} = A\vec x + b$ is $\vec x_{eq} = -A^{-1}b$
* With a change of coordinates $\vec{\tilde x} = \vec x - \vec x_{eq}$, we get $\diff{\vec{\tilde x} + \vec x_{eq}}{t} = A(\vec{\tilde x} + \vec x_{eq}) \implies \diff{\vec{\tilde x}}{t} = A\tilde{\vec x}$, a homogeneous system of ODEs

## Superposition

* We like homogeneous ODEs because we can superimpose them

\noteImportant{Principle of Superposition: Given $\vec x_1(t), \vec x_2(t)$ are solutions to $\vec x'(t) = A\vec x(t)$, then $c_1\vec x_1(t) + c_2\vec x_2(t)$ is also a solution for any $c_1, c_2$}

* Proof: $\diff{}{t}(c_1\vec x_1(t) + c_2\vec x_2(t)) = c_1x_1'(t) + c_2x_2'(t) = c_1Ax_1(t) + c_2Ax_2(t) = A(c_1\vec x_1(t) + c_2\vec x_2(t))$

## Linear Independence of Solutions

\noteDefn{Two solutions $\vec x_1(t), \vec x_2(t)$ are linearly dependent if $\exists k$ s.t. $\vec x_1(t) = k\vec x_2(t)$}

* Given two independent solutions, we can take linear combinations of them to span the full solution space and find a solution for any initial condition
* However, if the solutions are not independent, we can't do that

\noteDefn{The Wronskian $W[\vec x_1, \vec x_2](t) = \rvec[v]{\vec x_1(t)}{\vec x_2(t)}$ \tcblower If $W[\vec x_1, \vec x_2](t) = 0$, then $x_1, x_2$ are linearly dependent}

## General Solutions Through Eigendecomposition

* Given $\diff{\vec x}{t} = A\vec x$, guess $\vec x(t) = e^{\lambda t}\vec v$
	* This guess corresponds to the straight line solutions; their directions don't change, and their magnitudes change exponentially
* Substituting in, we get $\lambda\vec v = A\vec v$: if $\lambda$ and $\vec v$ are an eigenvalue and eigenvector of $A$, then $\vec x = e^{\lambda t}\vec v$ solves the ODE
* Assuming $\lambda _1 \neq \lambda _2$ we have two independent solutions $\vec x_1(t) = e^{\lambda _1t}\vec v_1, \vec x_2(t) = e^{\lambda _2t}\vec v_2$ corresponding to the two eigenvalues and eigenvectors
	* We know the Wronskian is nonzero because eigenvectors for different eigenvalues are independent
* From them we can generate the general solution $c_1\vec x_1(t) + c_2\vec x_2(t)$, which spans the 2D space of all initial conditions

