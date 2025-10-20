# Lecture 14, Oct 17, 2025

## Kalman Decomposition and Controllable Canonical Form

* Suppose $\rank(\bm Q_c) < n$, i.e. $\mathcal R(\bm Q_c) \subsetneq \reals^n$
* $\mathcal R(\bm Q_c)$ has the following properties:
	* $\mathcal R(\bm Q_c)$ is $\bm A$-invariant
	* $\mathcal R(\bm B) \subseteq \mathcal R(\bm Q_c)$
* As a consequence of the above and the representation theorem, there exists a nonsingular matrix $\bm P$ such that $\mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{12}} = \bm P^{-1}\bm A\bm P$ and $\cvec{\hat{\bm B}_1}{\bm 0} = \bm P^{-1}\bm B$, where $\hat{\bm A}_{11}, \hat{\bm B}_1$ have dimension $\dim(\mathcal R(\bm Q_c))$
* Let $\bm z = \bm P^{-1}\bm x = \cvec{\bm z^1}{\bm z^2}$ where $\bm z^1 \in \reals^{\dim(\mathcal R(\bm Q_c))}$ and $\bm z^2$ has the dimensions of its independent complement
	* $\dot{\bm z}^1 = \hat{\bm A}_{11}\bm z^1 + \hat{\bm A}_{12}\bm z^2 + \hat{\bm B}_1\bm u$
	* $\dot{\bm z}^2 = \hat{\bm A}_{22}\bm z^2$
	* This is the *Kalman decomposition for controllability*
* The Kalman decomposition separates the system into a part that we can control and a part we cannot, so if the eigenvalues of $\hat{\bm A}_{22}$ don't have negative real parts, our system cannot be controlled

\noteDefn{For a system $(\bm A, \bm b)$ where $\rank(\bm Q_c) = k < n$, let $$\mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{12}} = \bm P^{-1}\bm A\bm P, \cvec{\hat{\bm B}_1}{\bm 0} = \bm P^{-1}\bm B$$ for some nonsingular $\bm P$, where $\hat{\bm A}_{11}, \hat{\bm B}_1 \in \reals^{k \times k}, \hat{\bm A}_{12} \in \reals^{k \times (n - k)}, \hat{\bm A}_{22} \in \reals^{(n - k) \times (n - k)}$.
\\
The \textit{Kalman decomposition} defines $\bm z = \bm P^{-1}\bm x = \cvec{\bm z^1}{\bm z^2}^T$ where $\bm z^1 \in \reals^k, \bm z^2 \in \reals^{n - k}$, so the system is decomposed as $$\begin{aligned}\dot{\bm z}^1 &= \hat{\bm A}_{11}\bm z^1 + \hat{\bm A}_{12}\bm z^2 + \hat{\bm B}_1\bm u \\ \dot{\bm z}^2 &= \hat{\bm A}_{22}\bm z^2\end{aligned}$$}
\noteThm{The system $(\bm A, \bm B)$ is completely controllable if and only if $\rank(\rvec{s\bm I - \bm A}{\bm B}) = n,\,\forall s \in \complex$.}

* Proof:
	* Forward direction: $\rank(\bm Q_c) = n \implies \rank(\rvec{s\bm I - \bm A}{\bm B}) = n,\,\forall s \in \complex$
		* Take the contrapositive, $\exists s \in \complex$ s.t. $\rank(\rvec{s\bm I - \bm A}{\bm B}) < n \implies \rank(\bm Q_c) < n$
		* Since the matrix is not full rank, there exists $\bm v$ such that $\bm v^T\rvec{s\bm I - \bm A}{\bm B} = \bm 0$
		* Therefore $s\bm v^T = \bm v^T\bm A$ and $\bm v^T\bm B = \bm 0 \in \reals^{1 \times m}$
		* Multiply by $\bm B$, $s\bm v^T\bm B = \bm v^T\bm A\bm B$, but $\bm v^T\bm B = 0$ so $\bm v^T\bm A\bm B = 0$
			* We can repeat this for all powers of $\bm A$, e.g. $s\bm v^T\bm A\bm B = \bm v^T\bm A^2\bm B = 0$
		* Therefore $\bm v^T\rvec{\bm B}{\bm A\bm B}{\cdots}{\bm A^{n - 1}\bm B} = \bm v^T\bm Q_c = \bm 0$, and so $\bm Q_c$ is not full rank

