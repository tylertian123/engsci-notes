# Lecture 4, Sep 10, 2025

## The Matrix Exponential

\noteDefn{Let $\bm A \in \reals^{n \times n}$, then the \textit{matrix exponential} is defined as: $$e^{\bm A} = \sum _{k = 0}^\infty \frac{1}{k!}\bm A^k$$ Note $\bm A^0 = \bm I_n$.}

* To define the matrix exponential based on a series, we have to first define convergence for matrices, and then show that this series definition of the matrix exponential converges

\noteDefn{A series of matrices $\sum _{k = 0}^\infty \bm M_k$ \textit{converges} if every element $(\bm S_n)_{ij}$ of the partial sum $\bm S_n = \sum _{k = 0}^n \bm M_k$ converges to a number as $n \to \infty$, i.e. $\lim _{n \to \infty} (\bm S_n)_{ij} = a_{ij}$ for all $i, j$. \tcblower Formally, we require $$\forall \epsilon > 0, \exists N \in \naturals\text{ s.t. }n > N \implies \abs{(\bm S_n)_{ij} - a_{ij}} < \epsilon$$}

\noteDefn{A \textit{norm} on $\mathrm R^n$ is a function $\norm{\cdot}:\reals^n \to \reals$ with the following properties:
\begin{enumerate}
	\item $\norm{\bm x} \geq 0\ \forall x \in \reals^n$
	\item $\norm{\bm x} = 0 \iff \bm x = \bm 0 \in \reals^n$
	\item $\norm{\bm x + \bm y} \leq \norm{\bm x} + \norm{\bm y}\ \forall \bm x, \bm y \in \reals^n$
	\item $\norm{\lambda\bm x} = \abs{\lambda}\norm{\bm x}\ \forall \bm x \in \reals^n, \forall \lambda \in \reals$
\end{enumerate}}

\noteDefn{The \textit{induced norm} on $\reals^{n \times n}$ is a function $\norm{\cdot}: \reals^{n \times n} \to \reals$ defined as $$\norm{\bm A} = \max _{\set{\bm x \in \reals^n | \norm{\bm x} = 1}} \norm{\bm A\bm x}$$ i.e. max norm of $\bm A\bm x$ over all $\bm x$ in the unit sphere. Note that this matrix norm is defined in terms of (\textit{induced by}) the vector norm.}

* We can show that the induced norm is a valid norm, and it has property $\norm{\bm A^k} \leq \norm{\bm A}^k$

\noteThm{If the scalar series $\sum _{k = 0}^\infty \norm{\bm M_k}$ converges, then the matrix series $\sum _{k = 0}^\infty \bm M_k$ converges. Such a series is called \textit{absolutely convergent}.}

* We will now prove that $e^{\bm A} = \sum _{k = 0}^\infty \frac{1}{k!}\bm A^k$ is absolutely convergent:
	* We need to show that $\lim _{n \to \infty} S_n = \lim _{n \to \infty}\sum _{k = 0}^n \norm*{\frac{\bm A^k}{k!}}$ converges
	* We will rely on the fact that an increasing sequence that is bounded above always converges
	* $S_n$ is an increasing sequence, since $S_{n + 1} - S_n = \norm*{\frac{\bm A^{n + 1}}{(n + 1)!}} = \frac{1}{(n + 1)!}\norm{\bm A^{n + 1}} \geq 0$
	* To bound $S_n$ from above, we will show that $S_n \leq e^{\norm{\bm A}}$
		* $S_n = \sum _{k = 0}^n \norm*{\frac{\bm A^k}{k!}} \leq \sum _{k = 0}^\infty \frac{1}{k!}\norm{\bm A^k} \leq \sum _{k = 0}^\infty \frac{1}{k!}\norm{\bm A}^k = e^{\norm{\bm A}}$

\noteThm{The matrix exponential satisfies the following properties:
\begin{enumerate}
	\item For any invertible $\bm P \in \reals^{n \times n}, e^{\bm P\bm A\bm P^{-1}} = \bm Pe^{\bm A}\bm P^{-1}$
	\item For any $\bm A, \bm B \in \reals^{n \times n}$ such that $AB = BA$ (commutativity) $e^{\bm A + \bm B} = e^{\bm A}e^{\bm B} = e^{\bm B}e^{\bm A}$
	\item $(e^{\bm A})^{-1} = e^{-\bm A}$
	\item For $t \in \reals$, $\diff{}{t}e^{\bm At} = \bm Ae^{\bm At} = e^{\bm At}\bm A$
\end{enumerate}}

