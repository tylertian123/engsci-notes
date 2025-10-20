# Lecture 5, Sep 12, 2025

## Solving $\dot{\bm x} = \bm A\bm x$

* Consider the *autonomous* (i.e. no control input) LTI system, $\dbm x = \bm A\bm x, \bm x(0) = \bm x_0 \in \reals^n$; we will show that this is solved by $e^{\bm At}\bm x_0$
* We will show that $\diff{}{t}e^{\bm At} = e^{\bm At}\bm A$
	* $\alignedeqntwo[t]{\diff{}{t}e^{\bm At}}{\lim _{h \to 0} \frac{e^{\bm A(t + h)} - e^{\bm At}}{h}}{\lim _{h \to 0} \frac{e^{\bm At}e^{\bm Ah} - e^{\bm At}}{h}\Ttag{Since \(\bm Ah\) and \(\bm At\) commute}}{\lim _{h \to 0} \frac{e^{\bm At}(e^{\bm Ah} - \bm I)}{h}}{e^{\bm At}\lim _{h \to 0}\frac{1}{h}\left(-\bm I + \sum _{k = 0}^\infty \frac{(\bm Ah)^k}{k!}\right)\Ttag{Matrix exponential definition}}{e^{\bm At}\lim _{h \to 0}\frac{1}{h}\left(-\bm I + \bm I + h\sum _{k = 1}^\infty \frac{\bm A^kh^{k - 1}}{k!}\right)\Ttag{Take out first term and factor \(h\)}}{e^{\bm At}\lim _{h \to 0}\sum _{k = 1}^\infty \frac{\bm A^k\bm h^{k - 1}}{k!}}{e^{\bm At}\lim _{h \to 0}\left(\frac{\bm Ah^0}{1!} + \sum _{k = 2}^\infty \frac{\bm A^kh^{k - 1}}{k!}\right)\Ttag{Take out first term}}{e^{\bm At}\bm A}$
	* Note due to commutativity, we could've also taken out $e^{\bm At}$ on the right and get $\diff{}{t}e^{\bm At} = \bm Ae^{\bm At}$

\noteThm{The differential equation $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0 \in \reals^n$ has the \textbf{unique solution} $$\bm x(t) = e^{\bm At}\bm x_0, t \geq 0$$}

* To show existence:
	* $\dot{\bm x}(t) = \diff{}{t}(e^{\bm At}\bm x_0) = \diff{}{t}(e^{\bm At})\bm x_0 = \bm Ae^{\bm At}\bm x_0 = \bm A\bm x(t)$
	* $\bm x(0) = e^{\bm 0}\bm x_0 = \bm I\bm x_0 = \bm x_0$
* To show uniqueness, let $\bm y(t)$ be any other solution to the differential equation; we want to show that $\bm y = \bm x$
	* $\diff{}{t}\bm y(t) = \bm A\bm y(t)$ and $\bm y(0) = \bm x_0$
	* We want to show $\bm y(t) = e^{\bm At}x_0$, equivalently $e^{-\bm At}\bm y(t) = e^{-\bm At}e^{\bm At}\bm x_0 = \bm x_0$
	* Notice that both sides are constants, so we can try taking the derivative and seeing what we get
	* $\alignedeqntwo[t]{\diff{}{t}e^{-\bm At}\bm y(t)}{\left(\diff{}{t}e^{-\bm At}\right)\bm y(t) + e^{-\bm At}\diff{}{t}\bm y(t)}{-e^{-\bm At}\bm A\bm y(t) + e^{-\bm At}\bm A\bm y(t)}{-e^{\bm At}\left(-\bm A\bm y(t) + \bm A\bm y(t)\right)}{\bm 0}$
	* Since $e^{-\bm At}\bm y(t)$ has a zero derivative, it must be constant, so $e^{-\bm At}\bm y(t) = e^{-0\bm A}\bm y(0) = \bm y(0)$, but $\bm y(0) = \bm x_0$ since $\bm y$ is a solution to the differential equation
	* Therefore we've shown $e^{-\bm At}\bm y(t) = \bm x_0$ and so $\bm y(t) = e^{\bm At}\bm x_0$, and thus $\bm x(t) = \bm y(t)$

## Computing the Matrix Exponential

### Matrix Exponential by Laplace Transform

* Consider $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0 \in \reals^n$, taking the Laplace transform:
	* $\alignedimp[t]{\laplace{\dot{\bm x}} = \laplace{\bm A\bm x}}{s\bm X(s) - \bm x(0) = \bm A\bm X(s)}{s\bm X(s) - \bm A\bm X(s) = \bm x(0)}{(s\bm I - \bm A)\bm X(s) = \bm x_0}{\bm X(s) = (s\bm I - \bm A)^{-1}\bm x_0}{\bm x(t) = \ilaplace{(s\bm I - \bm A)^{-1}}\bm x_0}$
* Because we know that the unique solution is $\bm x(t) = e^{\bm At}\bm x_0$, $e^{\bm At}\bm x_0 = \ilaplace{(s\bm I - \bm A)^{-1}}\bm x_0$
	* Since this holds for all $\bm x_0$, it must be that $e^{\bm At} = \ilaplace{(s\bm I - \bm A)^{-1}}$
	* Formally, to justify this, consider the case where $\bm x_0 = \bm e_i$, i.e. all zeros except 1 in the $i$th row; substituting this into the equation we get that the $i$th column of the LHS must be equal to the $i$th column of the RHS, so do this for all $n$ columns

### Matrix Exponential by Modal Decomposition (Eigenvectors & Eigenvalues)

* Recall that $\lambda \in \complex$ is an eigenvalue of $\bm A$ if and only if $\det(\lambda\bm I - \bm A) = \det(\bm A - \lambda\bm I) = 0$; i.e. $\lambda$ are the roots of the characteristic polynomial of $\bm A$
	* To find eigenvectors corresponding to each $\lambda$, we find a basis for $\mathcal N(\lambda\bm I - \bm A)$ where $\mathcal N$ denotes the null space

\noteDefn{If there exists a nonsingular matrix $\bm P \in \complex^{n \times n}$ such that $\bm P^{-1}\bm A\bm P$ is diagonal, then $\bm A \in \reals^{n \times n}$ is \textit{diagonalizable}.}

\noteThm{$\bm A \in \reals^{n \times n}$ is diagonalizable if and only if it has $n$ linearly independent eigenvectors.}

* Suppose $\bm A$ has $n$ linearly independent eigenvectors, and let $\bm P = \rvec{\bm v_1}{\cdots}{\bm v_n}$
	* $\bm A\bm P = \rvec{\bm A\bm v_1}{\cdots}{\bm A\bm v_n} = \rvec{\lambda _1\bm v_1}{\cdots}{\lambda _n\bm v_n} = \bm P\diagthree{\lambda _ 1}{\ddots}{\lambda _n} = \bm P\bm\Lambda$
	* Since $\bm P$ has all linearly independent columns it is invertible, therefore $\bm P^{-1}\bm A\bm P = \bm\Lambda$
* Note $\bm A$ is diagonalizable if it has $n$ distinct eigenvalues (but diagonalizability does not always imply distinct eigenvalues); $\bm A$ is also diagonalizable if it is symmetric (the *spectral theorem*)

\noteThm{If $\bm A \in \reals^{n \times n}$ is diagonalizable, then $e^{\bm A} = \bm Pe^{\bm\Lambda}\bm P^{-1}$, where $$e^{\bm\Lambda} = \diagthree{e^{\lambda _1}}{\ddots}{e^{\lambda _n}}$$ and $\lambda _i$ are eigenvalues of $\bm A$.}

* We can show by induction that $\bm A^n = (\bm P\bm\Lambda\bm P^{-1})^n = \bm P\bm\Lambda^n\bm P^{-1}$, then we can prove the above by substituting this into the definition of the matrix exponential, and noting that taking a diagonal matrix to a power is equivalent to taking each of the components to that power

