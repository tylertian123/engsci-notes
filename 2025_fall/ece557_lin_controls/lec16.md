# Lecture 16, Nov 7, 2025

## Pole Assignment for Multi-Input Systems

* Proof of Wonham's pole assignment theorem:
	* Assume $(\bm A, \bm B)$ controllable, show that we can assign the poles to $\Lambda = \set{\lambda _1, \dots, \lambda _n}$
		* Let some nonzero $\bm b = \bm B\bm g$, then by the helper lemma from the previous lecture, there exists an $\bm F$ such that $(\bm A + \bm B\bm F, \bm b)$ is controllable
		* Since this is a single-input system and controllable, we know pole assignment is solvable, i.e. $\exists \bm H \in \reals^{1 \times n}$ such that $(\bm A + \bm B\bm F + \bm b\bm H)$ has eigenvalues $\Lambda$
		* $\alignedeqntwo[t]{\bm A + \bm B\bm F + \bm b\bm H}{\bm A + \bm B\bm F + \bm B\bm g\bm H}{\bm A + \bm B(\bm F + \bm g\bm H)}{\bm A + \bm B\bm K}$
		* Therefore if we choose $\bm K = \bm F + \bm g\bm H$, then the closed-loop system will have eigenvalues $\Lambda$
	* To show the reverse direction, take the contrapositive, i.e. assume that $(\bm A, \bm B)$ is not controllable, show that the pole assignment problem is not solvable
		* Use the Kalman decomposition $\cvec{\dot{\bm z}^1}{\dot{\bm z}^2} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{0}{\hat{\bm A_{22}}}\cvec{\bm z^1}{\bm z^2} + \cvec{\hat{\bm B}_1}{0}\bm u$
		* Let $\hat{\bm K} = \rvec{\hat{\bm K}_1}{\hat{\bm K}_2}$ so that $\bm u = \hat{\bm K}\cvec{\bm z^1}{\bm z^2} = \hat{\bm K}_1\bm z^1 + \hat{\bm K}_2\bm z^2$
		* The closed-loop system is $\cvec{\dot{\bm z}^1}{\dot{\bm z}^2} = \mattwo{\hat{\bm A}_{11} + \hat{\bm B}_1\hat{\bm K}_1}{\hat{\bm A}_{12} + \hat{\bm B}_1\hat{\bm K}_2}{0}{\hat{\bm A_{22}}}\cvec{\bm z^1}{\bm z^2} = \hat{\bm M}\bm z$
		* Since $\hat{\bm M}$ is block-upper-triangular, its eigenvalues are the union of the eigenvalues of $\hat{\bm A}_{11} + \hat{\bm B}_1\hat{\bm K}_1$ and those of $\hat{\bm A}_{22}$
		* However, we cannot affect the eigenvalues of $\hat{\bm A}_{22}$ through $\hat{\bm K}$ at all, so in general pole assignment is not solvable
* Wonham's pole assignment theorem also leads to an eigenvalue assignment algorithm for multi-input systems, by converting it into a single-input system
	* Like in the proof, we convert the system to a single-input one, $(\bm A + \bm B\bm F, \bm b)$, then use the single-input pole assignment algorithm to find $\bm H$, and finally take $\bm K = \bm F + \bm g\bm H$

