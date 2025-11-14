# Lecture 17, Nov 7, 2025

## Pole Stabilization Problem (Stabilizability)

* Last lecture we showed that we can place the poles of a closed-loop system arbitrarily if it is controllable; what if the system is not controllable? Can we make it stable?

\noteDefn{$(\bm A, \bm B)$ is \textit{stabilizable} if there exists some $\bm K$ such that all the eigenvalues of $(\bm A + \bm B\bm K)$ have negative real part, i.e. with control law $\bm u = \bm K\bm x$, the resulting system is asymptotically stable.}

* Stabilizability is a weaker condition than controllability, i.e. controllability implies stabilizability, but not the other way around
* Example: $\bm A = \mattwo{1}{1}{0}{-1}, \bm b = \cvec{1}{0}$
	* Notice this is already in the Kalman decomposition form, so we can tell that the system is not controllable
	* This has eigenvalues $\set{1, -1}$, where we cannot affect the $-1$ since it is in $\hat{\bm A}_{22}$; however we can affect the other eigenvalue of 1 to bring it into the open left half plane
	* Consider $\bm u = \rvec{k_1}{k_2}\bm x$, so the closed-loop system is $\bm A + \bm b\bm k = \mattwo{1 + k_1}{1 + k_2}{0}{-1}$
	* Therefore we can choose any $k_2$, and choose a $k_1$ such that $k_1 < -1$, so that $1 + k_1$ (the first eigenvalue) has negative real part
	* The speed of convergence is capped by the uncontrollable eigenvalue of $-1$, so regardless of our choice of $k_1$, the system cannot possibly converge faster than $e^{-t}$

\noteDefn{For a system $(\bm A, \bm B)$, in its Kalman decomposition, the eigenvalues of $\hat{\bm A}_{22}$ are the \textit{uncontrollable eigenvalues}; the other eigenvalues, i.e. the eigenvalues of $\hat{\bm A}_{11}$, are the \textit{controllable eigenvalues}. Note the eigenvalues of $\bm A$ (equivalently the eigenvalues of $\hat{\bm A}$) is the union of the eigenvalues of $\hat{\bm A}_{11}, \hat{\bm A}_{22}$.}

* An equivalent definition for stabilizability is to have all the uncontrollable eigenvalues have negative real part, or equivalently all the nonnegative eigenvalues are controllable

\noteThm{\textit{PBH Test for Stabilizability}: $\lambda$ is a controllable eigenvalue of $(\bm A, \bm B)$ (equivalently, $\lambda$ is not an eigenvalue of $\hat{\bm A}_{22}$) if and only if $$\rank(\rvec{\lambda\bm I - \bm A}{\bm B}) = n$$ Equivalently, $\lambda$ is an uncontrollable eigenvalue if and only if $\rank(\rvec{\lambda\bm I - \bm A}{\bm B}) < n$. Therefore a system is stabilizable if and only if this matrix has rank $n$ for all non-negative eigenvalues of $\bm A$.}

* Proof of forward direction ($\lambda$ not an eigenvalue of $\hat{\bm A}_{22} \implies \rank(\rvec{\lambda\bm I - \bm A}{\bm B}) = n$):
	* $\rank(\rvec{s\bm I - \hat{\bm A}}{\hat{\bm B}}) = \rank(\rvec{s\bm I - \bm A}{\bm B})$ because the two matrices are related through a matrix multiplication by a non-singular matrix
	* $\rvec{\lambda\bm I - \hat{\bm A}}{\hat{\bm B}} = \mat{\mrow{\lambda\bm I - \hat{\bm A}_{11}}{-\hat{\bm A}_{12}}{\hat{\bm B}_1}\mrow{0}{\lambda\bm I - \hat{\bm A}_{22}}{0}}$
	* If $\lambda$ is not an eigenvalue of $\hat{\bm A}_{22}$, then $\lambda\bm I - \hat{\bm A}_{22}$ is full-rank and therefore the bottom $n - k$ rows are linearly independent, so we only need to look at the top $k$ rows (where $k = \rank(\bm Q_c)$)
	* We showed in lecture that the subsystem $(\hat{\bm A}_{11}, \hat{\bm B}_1)$ is completely controllable, and therefore $\rank(\rvec{\lambda\bm I - \hat{\bm A}_{11}}{\hat{\bm B}_1}) = k$ by the PBH controllability test
	* Since adding the extra columns in $-\hat{\bm A}_{12}$ cannot possibly make the first $k$ rows dependent, we conclude that the first $k$ rows are linearly independent, so the overall matrix has rank $n$
* In general, if we have a system that is stabilizable but not controllable, we can find its Kalman decomposition, and design a controller to stabilize the controllable subsystem only, and then transform back
	* For the uncontrollable subsystem the gain would be arbitrary, so we usually just append zeros

