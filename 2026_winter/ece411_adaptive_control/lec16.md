# Lecture 16, Feb 10, 2026

## Observability and Observers

* Consider the LTI system $\twopiece{x(k + 1) = Ax(k) + Bu(k)}{y(k) = Cx(k) + Du(k)}$ where $x(k) \in \reals^n, u(k) \in \reals^m, y(k) \in \reals^p$
	* To stabilize this system via pole placement, we can use a controller $u(k) = Kx(k)$, but we usually don't have access to the state $x(k)$ and instead must estimate them from the measurements $y(k)$ and inputs $u(k)$
* Given measurements and inputs, can we find the state and initial conditions?
	* $y(k) = C\left(A^kx(0) + \sum _{j = 0}^{k - 1} (A^{k - 1 - j}Bu(j))\right) + Du(k)$
	* $\cvec{y(0)}{y(1)}{\vdots}{y(n - 1)} = \cvec{C}{CA}{\vdots}{CA^{n - 1}}x(0) + \cvec{Du(0)}{CBu(0) + Du(1)}{\vdots}{Du(n - 1) + C\sum _{j = 0}^{n - 2} A^{n - 2 - j} Bu(j)}$
	* Notice that the only unknown is $x(0)$, so we can solve this as a linear system
	* Rearranging, we get $Q_ox(0) = Y$, where $Q_o = \cvec{C}{CA}{\vdots}{CA^{n - 1}} \in \reals^{(np) \times n}$ is the *observability matrix*
	* Therefore we can solve for a unique initial condition if and only if $Q_o$ has full column rank

\noteDefn{$(C, A)$ is \textit{observable} if $\rank(Q_o) = n$, where the observability matrix is $$Q_o = \cvec{C}{CA}{\vdots}{CA^{n - 1}}$$}

* Using $Q_o$ we we can solve for the initial conditions using a batch algorithm, but we need an online estimate of $x(k)$, which requires an *observer*
	* The observer is an LTI system $\twopiece{\hat x(k + 1) = A\hat x(k) + Bu(k) + L(y(k) - \hat y(k))}{\hat y(k) = C\hat x(k)}$
		* Note that we dropped the $Du(k)$ term but it could be easily added
	* Let the estimation error $\tilde x(k) = \hat x(k) - x(k)$
	* $\alignedeqntwo[t]{\tilde x(k + 1)}{\hat x(k + 1) - x(k + 1)}{A\hat x(k) + Bu(k) + L(Cx(k) - C\hat x(k)) - Ax(k) - Bu(k)}{A\tilde x(k) - LC\tilde x(k)}{(A - LC)\tilde x(k)}$
	* Therefore if we can select $L \in \reals^{n \times p}$ such that $A - LC$ is Schur stable, $\hat x(k)$ exponentially converges to the true $x(k)$
* Suppose $(A, B)$ is stabilizable and $u(k) = Kx(k)$ stabilizes the system, then we can implement $u(k) = K\hat x(k)$ where $\hat x(k)$ is the estimate from the observer
	* Consider the extended state $\cvec{x(k)}{\tilde x(k)}$
	* $\alignedeqntwo[t]{x(k + 1)}{Ax(k) + Bu(k)}{Ax(k) + BK\hat x(k)}{Ax(k) + BK(\tilde x(k) + x(k))}{(A + BK)x(k) + BK\tilde x(k)}$
	* Therefore $\cvec{x(k + 1)}{\tilde x(k + 1)} = \mattwo{A + BK}{BK}{0}{A - LC}\cvec{x(k)}{\tilde x(k)}$
	* If the eigenvalues of $A + BK$ and $A - LC$ are both stable, then the overall system is stable since the eigenvalues of the larger matrix is the union of the two
	* This is known as the *separation principle*

\noteDefn{$(C, A)$ is \textit{detectable} if there exists $L \in \reals^{n \times p}$ such that $\abs{\lambda} < 1, \forall\lambda \in \sigma(A - LC)$.}

### Duality

* Notice that we have $\sigma(A - LC) = \sigma((A - LC)^T) = \sigma(A^T - C^TL^T) = \sigma(A^T + C^T(-L^T))$, which looks exactly like the controllability case
	* We can use the normal pole assignment techniques for $A + BK$, and take $L = -K^T$ to place the poles of the observer
* The controllability matrix of $(A^T, C^T)$ is the same as the observability matrix of $(C, A)$, so we can reuse results from controllability

\noteDefn{\textit{Duality Theory:}
\begin{itemize}
	\item $(C, A)$ is observable if and only if $(A^T, C^T)$ is controllable.
	\item $(C, A)$ is detectable if and only if $(A^T, C^T)$ is stabilizable.
	\item $(C, A)$ is observable if and only if $\rank\left(\cvec{A - \lambda I}{C}\right) = n, \forall\lambda \in \sigma(A)$.
	\item $(C, A)$ is detectable if and only if $\rank\left(\cvec{A - \lambda I}{C}\right) = n, \forall\lambda \in \sigma(A)$ where $\abs{\lambda} \geq 1$.
\end{itemize}}

