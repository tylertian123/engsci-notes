# Lecture 14, Oct 17, 2025

## Kalman Decomposition and Controllable Canonical Form

\noteThm{\textit{PBH Controllability Test}: The system $(\bm A, \bm B)$ is completely controllable if and only if $$\rank(\rvec{s\bm I - \bm A}{\bm B}) = n,\,\forall s \in \complex$$
\tcblower
Note if $s$ is not an eigenvalue of $\bm A$, this matrix always has rank $n$, so the condition only needs to be tested for eigenvalues of $\bm A$.}

* Proof:
	* Forward direction: $\rank(\bm Q_c) = n \implies \rank(\rvec{s\bm I - \bm A}{\bm B}) = n,\,\forall s \in \complex$
		* Take the contrapositive, $\exists s \in \complex$ s.t. $\rank(\rvec{s\bm I - \bm A}{\bm B}) < n \implies \rank(\bm Q_c) < n$
		* Since the matrix is not full rank, there exists $\bm v$ such that $\bm v^T\rvec{s\bm I - \bm A}{\bm B} = \bm 0$
		* Therefore $s\bm v^T = \bm v^T\bm A$ and $\bm v^T\bm B = \bm 0 \in \reals^{1 \times m}$
		* Multiply by $\bm B$, $s\bm v^T\bm B = \bm v^T\bm A\bm B$, but $\bm v^T\bm B = 0$ so $\bm v^T\bm A\bm B = 0$
			* We can repeat this for all powers of $\bm A$, e.g. $s\bm v^T\bm A\bm B = \bm v^T\bm A^2\bm B = 0$
		* Therefore $\bm v^T\rvec{\bm B}{\bm A\bm B}{\cdots}{\bm A^{n - 1}\bm B} = \bm v^T\bm Q_c = \bm 0$, and so $\bm Q_c$ is not full rank
* Note that since multiplying by a non-singular matrix does not change rank, we can show that the PBH test is coordinate invariant
* Suppose $\rank(\bm Q_c) < n$, i.e. $\mathcal R(\bm Q_c) \subsetneq \reals^n$; $\mathcal R(\bm Q_c)$ has the following properties:
	* $\mathcal R(\bm Q_c)$ is $\bm A$-invariant
	* $\mathcal R(\bm B) \subseteq \mathcal R(\bm Q_c)$
* As a consequence of the above and the representation theorem, there exists a nonsingular matrix $\bm P$ such that $\mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{12}} = \bm P^{-1}\bm A\bm P$ and $\cvec{\hat{\bm B}_1}{\bm 0} = \bm P^{-1}\bm B$, where $\hat{\bm A}_{11}, \hat{\bm B}_1$ have dimension $\dim(\mathcal R(\bm Q_c))$
* Let $\bm z = \bm P^{-1}\bm x = \cvec{\bm z^1}{\bm z^2}$ where $\bm z^1 \in \reals^{\dim(\mathcal R(\bm Q_c))}$ and $\bm z^2$ has the dimensions of its independent complement
	* $\dot{\bm z}^1 = \hat{\bm A}_{11}\bm z^1 + \hat{\bm A}_{12}\bm z^2 + \hat{\bm B}_1\bm u$
	* $\dot{\bm z}^2 = \hat{\bm A}_{22}\bm z^2$
	* This is the *Kalman decomposition for controllability*
* The Kalman decomposition separates the system into a part that we can control and a part we cannot, so if the eigenvalues of $\hat{\bm A}_{22}$ don't have negative real parts, our system cannot be controlled

\noteDefn{For a system $(\bm A, \bm B)$ where $\rank(\bm Q_c) = k < n$, let $$\mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{\bm 0}{\hat{\bm A}_{12}} = \bm P^{-1}\bm A\bm P, \cvec{\hat{\bm B}_1}{\bm 0} = \bm P^{-1}\bm B$$ for some nonsingular $\bm P$, where $\hat{\bm A}_{11}, \hat{\bm B}_1 \in \reals^{k \times k}, \hat{\bm A}_{12} \in \reals^{k \times (n - k)}, \hat{\bm A}_{22} \in \reals^{(n - k) \times (n - k)}$.
\\
The \textit{Kalman decomposition} defines $\bm z = \bm P^{-1}\bm x = \cvec{\bm z^1}{\bm z^2}$ where $\bm z^1 \in \reals^k, \bm z^2 \in \reals^{n - k}$, so the system is decomposed as $$\begin{aligned}\dot{\bm z}^1 &= \hat{\bm A}_{11}\bm z^1 + \hat{\bm A}_{12}\bm z^2 + \hat{\bm B}_1\bm u \\ \dot{\bm z}^2 &= \hat{\bm A}_{22}\bm z^2\end{aligned}$$}

* We can show that $(\hat{\bm A}_{11}, \hat{\bm B}_1)$ is completely controllable
	* $\bm P^{-1}\bm Q_c = \mattwo{\bm P^{-1}\bm B}{\cdots}{\bm P^{-1}\bm A^{n - 1}\bm B} = \mat{\mrow{\hat{\bm B}_1}{\hat{\bm A}_{11}\hat{\bm B}_1}{\cdots}{\hat{\bm A}_{11}^{n - 1}\hat{\bm B}_1}\mrow{0}{0}{\cdots}{0}}$
	* Note $k = \rank(\bm Q_c)$, and since $\bm P$ is invertible, $\rank(\bm P^{-1}Q_c) = k$
	* Since the zeros at the bottom don't affect rank, $\rank(\rvec{\hat{\bm B}_1}{\hat{\bm A}_{11}\hat{\bm B}_1}{\cdots}{\hat{\bm A}_{11}^{n - 1}\hat{\bm B}_1}) = k$
		* We're not done yet because we want the last power of $\hat{\bm A}_{11}$ to be $k - 1$
	* By Cayley-Hamilton, we know $\hat{\bm A}_{11}^k, \hat{\bm A}_{11}^{k + 1}, \dots, \hat{\bm A}_{11}^{n - 1}$ can all be written as a linear combination of $\hat{\bm A}_{11}, \dots, \hat{\bm A}_{11}^{k - 1}$, because $\hat{\bm A}_{11} \in \reals^{k \times k}$
	* This means $\rank(\rvec{\hat{\bm B}_1}{\hat{\bm A}_{11}\hat{\bm B}_1}{\cdots}{\hat{\bm A}_{11}^{n - 1}\hat{\bm B}_1}) = \rank(\rvec{\hat{\bm B}_1}{\hat{\bm A}_{11}\hat{\bm B}_1}{\cdots}{\hat{\bm A}_{11}^{k - 1}\hat{\bm B}_1}) = k$
		* This is a simple extension of what we proved in Assignment 3
* Because $\hat{\bm A}$ is a block-upper-triangular matrix, its eigenvalues are the union of eigenvalues of $\hat{\bm A}_{11}, \hat{\bm A}_{22}$; furthermore, the similarity transform by $\bm P$ does not affect eigenvalues, so the eigenvalues of $\bm A$ are also this same set
	* We can control the eigenvalues of the $\hat{\bm A}_{11}$ subsystem; these are known as the *controllable modes/eigenvalues*
	* However we can't control the eigenvalues of $\hat{\bm A}_{22}$, so these are the *uncontrollable modes/eigenvalues*
	* Intuitively we can see this because the control $\bm u$ applies to $\hat{\bm A}_{11}$ but not $\hat{\bm A}_{22}$
* Intuition: The rank of the controllability matrix is the number of states that are controllable; therefore if the rank is $n$, then all states are controllable, but if the rank is less than $n$, some states will not be controllable and so it might not be possible to stabilize the system
* Practically, to compute the Kalman decomposition, we need to select a basis for $\mathcal R(\bm Q_c)$ (e.g. by picking independent columns), and then select $n - k$ other linearly independent vectors that together form a basis for $\reals^n$; then we can form $\bm P$ and compute $\hat{\bm A}, \hat{\bm B}$
	* The choice of basis does affect the form of $\hat{\bm A}_{11}$ and $\hat{\bm A}_{22}$, however it does not change the controllable and uncontrollable eigenvalues

### Controllable Canonical Form

* Consider a single input system $\dot{\bm x} = \bm A\bm x + \bm bu$ where $(\bm A, \bm b)$ is completely controllable; by choosing a special basis, we can write this in a standard form known as the *controllable canonical form*
* Let $X_A(s) = \det(s\bm I - \bm A) = s^n + a_{n - 1}s^{n - 1} + \cdots + a_1s + a_0$, the characteristic polynomial of $\bm A$
* Define our series of basis vectors:
	* $\bm v^n = \bm b$
	* $\bm v^{n - 1} = \bm A\bm v^n + a_{n - 1}\bm v^n = \bm A\bm b + a_{n - 1}\bm b$
	* $\bm v^{n - 2} = \bm A\bm v^{n - 1} + a_{n - 2}\bm v^n = \bm A^2\bm b + a_{n - 1}\bm A\bm b + a_{n - 2}\bm b$
	* $\cdots$
	* $\bm v^1 = \bm A\bm v^2 + a_1\bm v^n = \bm A^{n - 1}\bm b + a_{n - 1}\bm A^{n - 2}\bm b + \cdots + a_1\bm b$
* Note that $\bm A\bm v^i = \bm v^{i - 1} - a_{i - 1}\bm v^n$ and $\bm A\bm v^1 + a_0\bm v^n = 0$
	* By Cayley-Hamilton, $\alignedimp[t]{\bm A(\bm A^{n - 1} + a_{n - 1}\bm A^{n - 2} + \cdots + a_1\bm I) + a_0\bm I = 0}{\bm A(\bm A^{n - 1} + a_{n - 1}\bm A^{n - 2} + \cdots + a_1\bm I)\bm b + a_0\bm b = 0}$
	* Notice that $\alignedeqntwo[t]{\bm A\bm v^1 + a_0\bm v^n}{\bm A(\bm A^{n - 1}\bm b + a_{n - 1}\bm A^{n - 2}\bm b + \cdots + a_1\bm b) + a_0\bm b}{\bm A(\bm A^{n - 1} + a_{n - 1}\bm A^{n - 2} + \cdots + a_1\bm I)\bm b + a_0\bm b}{0}$
* To show that $\set{\bm v^1, \dots, \bm v^n}$ is linearly independent:
	* $\rvec{\bm v^1}{\cdots}{\bm v^n} = \rvec{\bm b}{\bm A\bm b}{\cdots}{\bm A^{n - 1}\bm b}\mat{\mrow{a_1}{a_2}{a_3}{\cdots}{a_{n - 1}}{1}\mrow{a_2}{a_3}{\cdots}{a_{n - 1}}{1}{0}\mrow{a_3}{\vdots}{\ddots}\mrow{\vdots}{a_{n - 1}}\mrow{a_{n - 1}}{1}\mrow{1}{0}} = \bm Q_c\bm T$
	* Due to this structure, $\det(\bm T) = (-1)^{n - 1}$; since the system is controllable, we know $\bm Q_c$ is invertible, and therefore $\rvec{v^1}{\cdots}{v^n}$ is also invertible
* Let $\bm P = \rvec{\bm v^1}{\cdots}{\bm v^n}$ and $\bm z = \bm P^{-1}\bm x \implies \dot{\bm z} = \bm P^{-1}\bm A\bm P\bm z + \bm P^{-1}\bm b\bm u = \tilde{\bm A}\bm z + \tilde{\bm b}\bm u$
	* $\tilde{\bm b} = \bm P^{-1}\bm b \implies \bm P\tilde{\bm b} = \bm b = \bm v^n$, so $\tilde{\bm b} = \cvec{0}{\vdots}{0}{1}$
	* $\tilde{\bm A} = \bm P^{-1}\bm A\bm P \implies \bm A\bm P = \bm P\tilde{\bm A}$
	* $\alignedeqntwo[t]{\bm A\bm P}{\rvec{\bm A\bm v^1}{\bm A\bm v^2}{\cdots}{\bm A\bm v^n}}{\rvec{-a_0\bm v^n}{\bm v^1 - a_1\bm v^n}{\bm v^2 - a_2\bm v^n}{\cdots}{\bm v^{n - 1} - a_{n - 1}\bm v^n}}{\rvec{\bm v^1}{\cdots}{\bm v^n}\mat{\mrow{0}{1}{0}{\cdots}{0}\mrow{0}{0}{1}{\cdots}{0}\mrow{\vdots}{\vdots}{\vdots}{\ddots}{\vdots}\mrow{0}{0}{0}{\cdots}{1}\mrow{-a_0}{-a_1}{-a_2}{\cdots}{-a_{n - 1}}}}{\bm P\tilde{\bm A}}$
* We have just proven that a completely controllable system can be written in controllable canonical form; it turns out that the reverse is also true, i.e. if a system can be written in controllable canonical form, it is always controllable

\noteThm{A single-input system $(\bm A, \bm b)$ is completely controllable if and only if there exists a nonsingular matrix $\bm P$, such that $$\dot{\bm z} = \bm P^{-1}\bm A\bm P\bm z + \bm P^{-1}\bm b\bm u = \tilde{\bm A}\bm z + \tilde{\bm b}\bm u$$ where $$\tilde{\bm A} = \mat{\mrow{0}{1}{0}{\cdots}{0}\mrow{0}{0}{1}{\cdots}{0}\mrow{\vdots}{\vdots}{\vdots}{\ddots}{\vdots}\mrow{0}{0}{0}{\cdots}{1}\mrow{-a_0}{-a_1}{-a_2}{\cdots}{-a_{n - 1}}} \qquad \tilde{\bm b} = \cvec{0}{\vdots}{0}{1}$$ This is known as the \textit{controllable canonical form}.}

