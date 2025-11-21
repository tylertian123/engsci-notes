# Lecture 18, Nov 14, 2025

## Observability and State Estimation

* Previously we discussed how to design controllers to stabilize a system given the full system state $\bm x$; however in practice we rarely have the full system state, so we have to estimate $\bm x$ using the system output $\bm y$
	* Given $\bm y(t), \bm u(t)$ for $0 \leq t \leq T$, we want to estimate $\bm x(t)$
* Recall that the solution is $\bm x(t) = e^{\bm At}\bm x_0 + \int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\dtau$
	* The output is then $\bm y(t) = \bm Ce^{\bm At}\bm x_0 + \int _0^t \bm Ce^{\bm A(t - \tau)}\bm B\bm u(\tau)\dtau + \bm D\bm u(t)$
	* Notice that we know every quantity except $\bm x_0$, so we can solve for $\bm Ce^{\bm At}\bm x_0$

\noteDefn{For an LTI system, given $\bm y(t), \bm u(t), 0 \leq t \leq T$, the \textit{State Estimation Problem} is to estimate $\bm x(t)$ for $0 \leq t \leq T$. Equivalently, given $\bm Ce^{\bm At}\bm x_0, 0 \leq t \leq T$, estimate $\bm x_0$.}

* Therefore an equivalent problem is: given $\bm Ce^{\bm At}\bm x_0$ for $0 \leq t \leq T$, estimate $\bm x_0$
	* Let $L_o: \reals^n \mapsto \mathcal C([0, \infty], \reals^p)$ such that $L_o(\bm x_0) = \bm Ce^{\bm At}\bm x_0$, i.e. a function mapping initial conditions to functions
		* This is a mapping that goes from $\reals^n$ to continuous functions of time outputting $\reals^p$
		* Note this is a linear map, but it does not have a matrix representation because the output space is infinite dimensional
	* Now given $L_o(\bm x_0)$, under what conditions on $L_o$ can we recover $\bm x_0$?
* Given vector spaces $\mathcal X, \mathcal Y$ over the field $\reals$, and let $f: \mathcal X \mapsto \mathcal Y$ be a linear map; $f(\bm x) = \bm y$ has a unique solution if and only if $\mathcal N(f)$ contains only the zero vector, i.e. $f$ is injective
	* Therefore, obtaining $\bm x_0$ is possible if and only if $L_o$ is injective ($\mathcal N(L_o)$ contains only the zero vector)
	* Note in this case, a function in $\mathcal N(L_o)$ needs to be zero for all time

\noteThm{Let $f: \mathcal X \mapsto \mathcal Y$ be a linear map and let $\bm y \in \mathcal R(f)$; then $f(\bm x) = \bm y$ has a unique solution if and only if $\mathcal N(f) = \set{\theta}$, i.e. the null space is trivial. This is equivalent to $f$ being injective.}

* Proof:
	* Forward direction: take contrapositive: $\mathcal N(f) \neq \set{\theta} \implies f(\bm x) = \bm y$ does not have a unique solution
		* Let $\bm x \in \mathcal X$ be a solution, i.e. $f(\bm x) = \bm y$
		* Let $\bm u \in \mathcal N(f)$ and $\bm u \neq \theta$, so that $f(\bm u) = \theta$
		* Then $f(\bm x + \bm u) = f(\bm x) + f(\bm u) = \bm y + \theta = \bm y$
		* Therefore both $\bm x$ and $\bm x + \bm u$ are solutions, and so the solution is not unique
	* Reverse direction: again take the contrapositive: $f(\bm x) = \bm y$ does not have a unique solution $\implies \mathcal N(f) \neq \set{\theta}$
		* Let $\bm x_1 \neq \bm x_2$ and $f(\bm x_1) = f(\bm x_2)$
		* Then $\theta = f(\bm x_1) = f(\bm x_2) = f(\bm x_1 - \bm x_2)$
		* Therefore $\bm x_1 - \bm x_2 \in \mathcal N(f)$, and $\bm x_1 - \bm x_2 \neq \theta$, so $\mathcal N(f)$ is nontrivial
* Note the relation between controllability and observability:
	* In controllability:
		* $L_c(\bm u(\cdot)) = \int _0^T e^{\bm A(T - \tau)}\bm B\bm u(\tau)\,\dtau$
		* We want $L_c$ to be surjective, so that we can find an input to command the system to any state we want
		* We form $\bm Q_c$ from $(\bm A, \bm B)$ and use the rank of this matrix to test for controllability
	* In observability:
		* $L_o(\bm x_0) = \bm Ce^{\bm At}\bm x_0$
		* We want $L_o$ to be injective, so that for any output we want to be able to find a unique initial condition (and therefore system state)
		* Likewise, we will formulate a $\bm Q_o$ from $(\bm A, \bm C)$ and check its rank

\noteDefn{The system $(\bm A, \bm B, \bm C, \bm D)$ is observable if $L_o: \reals^n \mapsto \mathcal C([0, \infty], \reals^p)$ is injective, or equivalently $\mathcal N(L_o) = \set{\theta}$, where $L_o(\bm x_0) = \bm Ce^{\bm At}\bm x_0$.}

* Example: consider $\dot{\bm x} = \mattwo{1}{0}{1}{1}\bm x$ and $y = \rvec{1}{0}\bm x$
	* We have $\dot x_1(t) = x_1(t) \implies x_1(t) = e^tx_1(0)$
	* $y(t) = x_1(t) = e^tx_1(0)$
	* Intuitively we know this system is not observable since we don't have any information about $x_2$
	* Consider the case of $x_2(0) = 1$ and $x_2(0) = 2$; in both cases we have the exact same $y(t)$ as long as $x_1(0)$ is the same, so we can't recover $x_2(0)$ and therefore the system is not observable
	* In this case, $\cvec{0}{1}$ and $\cvec{0}{2}$ are both in $\mathcal N(L_o)$, since both of them result in a zero $\bm Ce^{\bm At}\bm x_0$ (which is equivalent to $y(t)$ in this case)
* Practically speaking, if we discover that our system is not observable or detectable, it means that we either need to add more sensors to measure more outputs, or reduce the model complexity, because this indicates that our model is overly complex and contains unuseful states that we cannot determine anyway

\noteThm{Let the \textit{observability matrix} be defined as $$\bm Q_o = \cvec{\bm C}{\bm C\bm A}{\vdots}{\bm C\bm A^{n - 1}}$$ The observability matrix has the same null space as $L_o$, i.e. $\mathcal N(L_o) = \mathcal N(\bm Q_o)$, therefore observability is equivalent to $\mathcal N(\bm Q_o) = \set{0}$, i.e. $\rank(\bm Q_o) = n$.}

* Proof:
	* $\mathcal N(\bm Q_o) \subseteq \mathcal N(L_o)$
		* Let $\bm x \in \mathcal N(\bm Q_o)$, then $\bm C\bm x = \bm C\bm A\bm x = \cdots = \bm C\bm A^{n - 1}\bm x = 0$
		* We want to show that $L_o(\bm x) = \bm Ce^{\bm At}\bm x = 0$
		* $\alignedeqntwo[t]{\bm Ce^{\bm A\bm t}\bm x}{\bm C\left(\sum _{k = 0}^\infty \frac{\bm A^k}{k!}\right)\bm x}{\sum _{k = 0}^\infty \frac{1}{k!}\bm C\bm A^k\bm x}$
		* We already know that $\bm C\bm A^k\bm x = 0$ for $k = 0, \dots, n - 1$ because $\bm x \in \mathcal N(\bm Q_o)$
		* By Cayley-Hamilton, any higher power of $\bm A$ can be expressed as a linear combination of $\bm A^i$ for $i = 0, \dots, n - 1$, so we can show that $\bm C\bm A^k\bm x = 0$ holds for all $k$ by an inductive proof
		* Therefore $\bm Ce^{\bm A\bm t}\bm x$ and $\bm x \in \mathcal N(L_o)$
	* $\mathcal N(L_o) \subseteq \mathcal N(\bm Q_o)$
		* Let $\bm x \in \mathcal(L_o)$, then $\bm Ce^{\bm At}\bm x = 0$ for all $t$
		* Set $t = 0$ to get $\bm C\bm x = 0$
		* Take the derivative, $\diff{}{t}(\bm Ce^{\bm At}\bm x) = \bm C\bm Ae^{\bm At}\bm x = 0$, and evaluate at $t = 0$ again to get $\bm C\bm A\bm x = 0$
		* Therefore we can show that $\bm C\bm A^i\bm x$ for $i = 0, \dots, n - 1$, and therefore $\cvec{\bm C}{\bm C\bm A}{\vdots}{\bm C\bm A^{n - 1}}\bm x = 0$

### Kalman Decomposition for Observability

* Similar to the controllability case, we can show that $\mathcal N(\bm Q_o)$ is $\bm A$-invariant, and $\mathcal N(\bm Q_o) \subseteq \mathcal N(\bm C)$
	* Let $\bm x \in \mathcal N(\bm Q_o)$, then $\bm C\bm x = \bm C\bm A\bm x = \cdots = \bm C\bm A^{n - 1}\bm x = 0$
	* Consider $\bm Q_o\bm A\bm x$, this has rows $\bm C\bm A\bm x, \dots, \bm C\bm A^n\bm x$; we already know that $\bm C\bm A^k\bm x = 0$ up to $k = n - 1$
	* For $\bm C\bm A^n\bm x$, use Cayley-Hamilton to expand $\bm A^n$ as a sum of lower powers, then we can show $\bm C\bm A^n\bm x = 0$
	* Therefore $\bm x \in \mathcal N(\bm Q_o) \implies \bm A\bm x \in \mathcal N(\bm Q_o)$ and so $\mathcal N(\bm Q_o)$ is $\bm A$-invariant
	* Also, since $\bm C\bm x = 0$ from the first row of $\bm Q_o\bm x = 0$, $\bm x \in \mathcal N(\bm C)$, so $\mathcal N(\bm Q_o) \subseteq \mathcal N(\bm C)$
* By the representation theorem, we can find a coordinate transformation $\bm P$ by taking the first $k = n - \rank(\bm Q_o)$ vectors as a basis for $\mathcal N(\bm Q_o)$, then the rest such that $\bm P$ is invertible, and let $\bm z = \bm P^{-1}\bm x$
* Then we get $\dot{\bm z} = \cvec{\dot{\bm z}^1}{\dot{\bm z}_2} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{0}{\hat{\bm A}_{22}}\bm z + \cvec{\hat{\bm B}_1}{\hat{\bm B}_2}, \bm y = \rvec{0}{\hat{\bm C}_1}\bm z + \bm D\bm u$
	* The subsystem $\dot{\bm z}^2 = \hat{\bm A}_{22}\bm z^2 + \hat{\bm B}_2\bm u, \bm y = \hat{\bm C}_1\bm z^2 + \bm D\bm u$ is observable, while the subsystem pertaining to $\bm z^1$ is unobservable

### Kalman Decomposition for Controllability and Observability

* Now we will combine what we know about observability and controllability
* Lemma: The intersection of two $\bm A$-invariant subspaces is also $\bm A$-invariant
* Consider a system that is neither controllable nor observable
	* Let $\mathcal V_{c\bar o} = \mathcal R(\bm Q_c) \cap \mathcal N(\bm Q_o)$ be the controllable but not observable subspace; let its dimension be $n_{c\bar o}$
		* This is $\bm A$-invariant because it's the intersection of two $\bm A$-invariant subspaces
	* Let $\mathcal V_{co} = \mathcal R(\bm Q_c) \setminus \mathcal V_{c\bar o}$ be the controllable and observable subspace; let its dimension be $n_{co}$
		* $\mathcal V_{c\bar o} \oplus \mathcal V_{co} = \mathcal R(\bm Q_c)$
	* Let $\mathcal V_{\bar c\bar o} = \mathcal N(\bm Q_o) \setminus \mathcal V_{c\bar o}$ be the not controllable and not observable subspace; let its dimension be $n_{\bar c\bar o}$
		* $\mathcal V_{c\bar o} \oplus \mathcal V_{\bar c\bar o} = \mathcal N(\bm Q_o)$
	* Let $\mathcal V_{\bar co} = \reals^n \setminus (\mathcal V_{c\bar o} \oplus \mathcal V_{co} \oplus \mathcal V_{\bar c\bar o})$ be the not controllable but observable subspace; let its dimension be $n_{\bar co}$
		* Note that the direct sum of all subspaces is $\reals^n$
* Let the matrix $\bm P$ contain the basis for $\mathcal V_{c\bar o}, \mathcal V_{co}, \mathcal V_{\bar c\bar o}, \mathcal V_{\bar co}$ in this exact order
	* The first $n_{c\bar o} + n_{co}$ columns form a basis for $\mathcal R(\bm Q_c)$
* Let $\bm z = \cvec{\bm z^1}{\bm z^2}{\bm z^3}{\bm z^4} = \bm P^{-1}\bm x$, where each of the 4 components corresponds to the 4 subspaces in the order above
* Applying the representation theorem, $\alignedlines[t]{}{\dot{\bm z} = \mat{\mrow{\hat{\bm A}_{c\bar o}}{*}{*}{*}\mrow{0}{\hat{\bm A}_{co}}{0}{*}\mrow{0}{0}{\hat{\bm A}_{\bar c\bar o}}{*}\mrow{0}{0}{0}{\hat{\bm A}_{\bar co}}}\cvec{\bm z^1}{\bm z^2}{\bm z^3}{\bm z^4} + \cvec{\hat{\bm B}_{c\bar o}}{\hat{\bm B}_{co}}{0}{0}\bm u}{\bm y = \rvec{0}{\hat{\bm C}_{co}}{0}{\hat{\bm C}_{\bar co}}\bm z + \bm D\bm u}$
	* The entries marked with $*$ are nonzero in general, which don't affect our analysis
	* We first apply the Kalman Decomposition for controllability, which gives us $\hat{\bm A}_{11} \in \reals^{(n_{c\bar o} + n_{co}) \times (n_{c\bar o} + n_{co})}$ and so on
	* We can verify the zero entries by checking which subspace is contained in the others
* If we start in the controllable subspace, i.e. $\bm x(0) \in \mathcal R(\bm Q_c)$, then $\bm z^3(t) = \bm z^4(t) = 0$ for all $t$
	* $\bm x(0)$ is a linear combination of the basis vectors of $\mathcal V_{c\bar o}$ and $\mathcal V_{co}$, since those two subspaces together make up $\mathcal R(\bm Q_c)$; it doesn't have any component in the basis vectors of the other two subspaces, since those do not intersect $\mathcal R(\bm Q_c)$
	* From $\bm x(0) = \bm P\bm z(0)$ we see that $\bm z^3(0) = \bm z^4(0) = 0$ as a result, and this gives $\dot{\bm z}^3 = \dot{\bm z}^4 = 0$ for all time
	* Then $\alignedlines[t]{}{\cvec{\dot{\bm z}^1}{\dot{\bm z}^2} = \mattwo{\hat{\bm A}_{c\bar o}}{*}{0}{\hat{\bm A}_{co}}\cvec{\bm z^1}{\bm z^2} + \cvec{\hat{\bm B}_{c\bar o}}{\hat{\bm B}_{co}}\bm u}{\bm y = \rvec{0}{\hat{\bm C}_{co}}\cvec{\bm z^1}{\bm z^2} + \bm D\bm u}$
		* This subsystem is controllable (since we get it from the Kalman decomposition for controllability) but not observable
		* From this we can extract the controllable and observable subsystem $\alignedlines[t]{}{\dot{\bm z}^2 = \hat{\bm A}_{co}\bm z^2 + \hat{\bm B}_{co}\bm u}{\bm y = \hat{\bm C}_{co}\bm z^2 + \bm D\bm u}$
* The observable subsystem is $\alignedlines[t]{}{\cvec{\dot{\bm z}^2}{\dot{\bm z}^4} = \mattwo{\hat{\bm A}_{co}}{*}{0}{\hat{\bm A}_{\bar co}}\cvec{\bm z^2}{\bm z^4} + \hat{\bm B}_{co}\bm u}{\bm y = \rvec{\hat{\bm C}_{co}}{\hat{\bm C}_{\bar co}}\cvec{\bm z^2}{\bm z^4} + \bm D\bm u}$

\noteThm{The system $(\bm A, \bm B, \bm C, \bm D)$ has the same transfer function as the controllable and observable subsystem, $(\hat{\bm A}_{co}, \hat{\bm B}_{co}, \hat{\bm C}_{co}, \hat{\bm D})$, which is known as the \textit{minimal realization} of the transfer function, as it is the smallest (lowest number of states) system that results in this transfer function.}

* Let $\bm G: \complex \mapsto \reals^{p \times m}$ be a transfer function matrix, and let $(\bm A, \bm B, \bm C, \bm D)$ be any state space realization of the same system and $(\hat{\bm A}_{co}, \hat{\bm B}_{co}, \hat{\bm C}_{co}, \hat{\bm D})$ be the controllable and observable subsystem
	* If $(\bm A, \bm B, \bm C, \bm D)$ is uncontrollable or unobservable, then the minimal realization has $k < n$ states, and so it will have $k$ poles
	* The transfer function $\bm G$ will also have $k$ poles, and therefore there are $n - k$ pole-zero cancellations

\noteNote{Key insight: If a transfer function has one or more pole-zero cancellations, then its state space realization is either uncontrollable or unobservable.}

* Example: Consider $G(s) = \frac{s + 1}{(s + 1)(s + 3)}$, which has one pole-zero cancellation
	* Using the uncancelled transfer function, one choice of states is $\bm x = \cvec{y}{\dot y - u}$, we get the realization $\bm A = \mattwo{0}{1}{-3}{-4}, \bm B = \cvec{1}{-3}, \bm C = \rvec{1}{0}$
		* $\bm Q_c = \mattwo{1}{-3}{-3}{9}$, which has rank 1, so the system is not controllable
	* Using $G(s) = \frac{1}{s + 3}$, choose $x = y$, which results in $A = -3, B = 1, C = 1$
		* This is now the minimal realization of the system
		* $Q_c = B = 1$ so clearly this system is controllable
		* $Q_o = C = 1$ so the system is observable as well

### State Observers

* Given a control system $(\bm A, \bm B, \bm C, \bm D)$, we want to design an *observer*, which estimates ("observes") the state $\bm x(t)$, given the known $\bm y(t)$ and $\bm u(t)$
* The observer predicts a state estimate $\hat{\bm x}$ as $\alignedlines[t]{}{\dot{\hat{\bm x}} = \bm A\hat{\bm x} + \bm B\bm u + \bm L(\bm y - \hat{\bm y})}{\hat{\bm y} = \bm C\hat{\bm x} + \bm D\bm u}$
	* The observer is an LTI system itself which tries to simulate the system dynamics and corrects its estimate based on observations
	* $\bm L$ is a matrix to be designed, which corrects the estimated state based on the difference of the predicted output versus the actual measured output
* Define the *estimation error* $\bm e = \bm x - \hat{\bm x}$, which we can show to have dynamics $\dot{\bm e} = (\bm A - \bm L\bm C)\bm e$
	* Therefore we just need to choose $\bm L$ such that this system is asymptotically stable, i.e. make the eigenvalues of $\bm A - \bm L\bm C$ have negative real part

\noteDefn{The \textit{state estimation problem} is to find a matrix $\bm L$ for a system $(\bm A, \bm B, \bm C, \bm D)$ such that the eigenvalues of $\bm A - \bm L\bm C$ all have real part less than zero, so the estimation error is asymptotically stable. \tcblower A system is called \textit{detectable} if the state estimation problem is solvable.}

\noteThm{A system $(\bm C, \bm A)$ is detectable if and only if $(\bm A^T, \bm C^T)$ is stabilizable.}

* This is because the eigenvalues of $\bm A - \bm L\bm C$ is the same as $(\bm A - \bm L\bm C)^T = \bm A^T - \bm C^T\bm L^T$, so if we can find $\bm K$ to stabilize $(\bm A^T, \bm C^T)$, then taking $\bm L = \bm K^T$ solves the state estimation problem

\noteThm{\textit{Duality Theorem}: Controllability and detectability are duals, i.e.
\begin{enumerate}
	\item $(\bm C, \bm A)$ is observable if and only if $(\bm A^T, \bm C^T)$ is controllable.
	\item $(\bm C, \bm A)$ is detectable if and only if $(\bm A^T, \bm C^T)$ is stabilizable.
\end{enumerate}
$(\bm A^T, \bm C^T)$ is known as the \textit{dual system} of $(\bm C, \bm A)$.}

* We can prove this by noticing the similarity between $\bm Q_o$ and $\bm Q_c^T$; if we take $(\bm A^T, \bm C^T)$ and form its controllability matrix, we get $\bm Q_o^T$, which has the same rank as $\bm Q_o$, so the system is observable if and only if its dual system is controllable

\noteThm{\textit{PBH Test for Detectability}: $(\bm C, \bm A)$ is detectable if and only if for all eigenvalues $\lambda$ of $\bm A$, $$\Re(\lambda) \geq 0 \implies \rank\left(\cvec{\lambda\bm I - \bm A}{\bm C}\right) = n$$}

* This is analogous to applying the PBH test for stabilizability to the dual system
* Proof:
	* $(\bm C, \bm A)$ is detectable if and only if $(\bm A^T, \bm C^T)$ is stabilizable, which is true if and only if for all eigenvalues of $\bm A^T$, $\Re(\lambda) \geq 0 \implies \rank(\rvec{\lambda\bm I - \bm A^T}{\bm C^T}) = n$ (PBH stabilizability test)
	* Since transpose does not change rank or eigenvalues, this is the same as $\rank\left(\cvec{\lambda\bm I - \bm A}{\bm C}\right) = n$
* Suppose $(\bm C, \bm A)$ is not observable, then by applying the Kalman decomposition we get $\dot{\bm z} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12}}{0}{\hat{\bm A}_{22}}\bm z + \cvec{\hat{\bm B}_1}{\hat{\bm B}_2}\bm u$ and $\bm y = \rvec{0}{\hat{\bm C}_{1}}\bm z + \bm D\bm u$ where $(\hat{\bm C}_1, \hat{\bm A}_{22})$ is the observable subsystem
* Let $\hat{\bm L} = \cvec{\hat{\bm L}_1}{\hat{\bm L}_2}$ then $\hat{\bm A} - \hat{\bm L}\hat{\bm C} = \mattwo{\hat{\bm A}_{11}}{\hat{\bm A}_{12} - \hat{\bm L}_1\hat{\bm C}_1}{0}{\hat{\bm A}_{22} - \hat{\bm L_2}\hat{\bm C}_1}$
	* This shows that we can affect the eigenvalues of the $\hat{\bm A}_{22}$ subsystem but not the $\hat{\bm A}_{11}$ subsystem
	* The eigenvalues of $\hat{\bm A}_{11}$ are the *unobservable eigenvalues*, and the eigenvalues of $\hat{\bm A}_{22}$ are the *observable eigenvalues*; together these make up all eigenvalues of $\bm A$
	* Just like the controllability case, by the PBH test, an eigenvalue is unobservable if and only if $\rank\left(\cvec{\lambda\bm I - \bm A}{C}\right) < n$, and observable if and only if $\rank\left(\cvec{\lambda\bm I - \bm A}{C}\right) = n$

### Output Feedback Stabilization

* Putting it all together, how do we stabilize a system if we only know the output $\bm y(t)$ and input $\bm u(t)$ but not the state?
* Given a stabilizable and detectable system, our goal is to design $\bm K$ and $\bm L$ such that the eigenvalues of $(\bm A + \bm B\bm K)$ and $(\bm A - \bm L\bm C)$ have real part less than zero, then we can implement the control law $\bm u = \bm K\hat{\bm x}$ and observer $\alignedlines[t]{}{\dot{\hat{\bm x}} = \bm A\hat{\bm x} + \bm B\bm u + \bm L(\bm y - \hat{\bm y})}{\hat{\bm y} = \bm C\hat{\bm x} + \bm D\bm u}$
* We can show that this results in the dynamics $\cvec{\dot{\bm x}}{\dot{\bm e}} = \mattwo{\bm A + \bm B\bm K}{-\bm B\bm K}{0}{\bm A - \bm L\bm C}\cvec{\bm x}{\bm e}$, so if we have the eigenvalues of $(\bm A + \bm B\bm K)$ and $(\bm A - \bm L\bm C)$ both negative, then the overall system is stable

