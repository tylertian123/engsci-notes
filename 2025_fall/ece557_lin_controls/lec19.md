# Lecture 19, Nov 26, 2025

## Linear Quadratic Optimal Control

* Consider a spring-mass system with an input force, $u - kx_1 = m\ddot x_1$ and let $x_2 = \dot x_1$, so the system is described by $\dot{\bm x} = \mattwo{0}{1}{-k/m}{0}\bm x + \cvec{0}{1/m}\bm u$
	* The energy of the system is $E = \frac{1}{2}kx_1^2 + \frac{1}{2}mx_2^2$
	* We can try to minimize the energy over time, $J = \int _0^\infty \frac{1}{2}kx_1^2(\tau) + \frac{1}{2}mx_2^2(\tau)+ \frac{1}{2}u^2(\tau)\,\dtau$
	* Note we need to include the control input in the integral to make the problem well-defined, otherwise this will just cause infinite control inputs
* More generally, we can have any cost function quadratic in the system state and control input

\noteDefn{For a stabilizable system $\dot{\bm x} = \bm A\bm x + \bm B\bm u$, let $\mathcal U$ be the set of admissible control laws of the form $\bm u(t) = \bm\phi(t), t \geq 0$ such that $\bm\phi : [0, \infty) \mapsto \reals^m$ is continuous and asymptotically stabilizes the closed-loop system.

The \textit{Linear Quadratic Optimal Control} problem is to find some $\bm\phi \in \mathcal U$ which minimizes a quadratic cost function, $$J(\bm x, \bm\phi) = \int _0^\infty \bm x(t)^T\bm Q\bm x(t) + \bm\phi(t)^T\bm R\bm\phi(t)\,\dt$$ where $\bm Q$ is symmetric positive semidefinite, and $\bm R$ is symmetric positive definite.}

* Intuitively, the reason we choose this cost function is that it usually relates to the "energy" of the system, and penalizes the state being far from the origin and the control effort being large
* Let $L(\bm x, \bm u) = \bm x^T\bm Q\bm x + \bm u^T\bm R\bm u$ be the instantaneous cost for the current values of $\bm x, \bm u$
* Define the optimal value function $V(\bm x) = \inf _{\bm\phi \in \mathcal U} J(\bm x, \bm\phi) = \inf _{\bm\phi \in \mathcal U}\int _0^\infty \bm x(t)^T\bm Q\bm x(t) + \bm u(t)^T\bm R\bm u(t)\,\dt$ such that $\bm x(t) = \bm A\bm x(t) + \bm B\bm u(t), \bm x(0) = \bm x$, i.e. $V(\bm x)$ is the lowest possible cost if we start with an initial state of $\bm x$
	* Note the infimum $\inf$ denotes the greatest lower bound (we can't simply use $\min$ since we don't know if one exists yet), e.g. $\inf _{n \in \naturals} \frac{1}{n} = 0$, but 0 is not in the set
* We can show that if an optimal control $\bm\phi^* \in \mathcal U$ exists, i.e. $V(x) = \min _{\bm\phi^* \in \mathcal U} J(\bm x, \bm\phi) = J(\bm x, \bm\phi^*)$, then $(V, \bm\phi^*)$ satisfies the *Hamilton-Jacobi-Bellman* (HJB) equation, $\min _{\bm u \in \reals^m} \pdiff{V}{\bm x}(\bm x) \cdot (\bm A\bm x + \bm B\bm u) + \bm L(\bm x, \bm u) = 0$
	* Intuitively, since the first term is essentially $\pdiff{V}{t}$, this means that the cost does not change instantaneously
	* Let $\tau > 0$ and suppose $\bm\phi^*$ exists, then $\alignedeqntwo[t]{V(\bm x)}{\int _0^\tau L(\bm x(t), \bm\phi^*(t))\,\dt + \int _\tau^\infty L(\bm x(t), \bm\phi^*(t))\,\dt}$
	* The second term must minimize the cost on $[\tau, \infty)$, i.e. $\int _\tau^\infty L(\bm x(t), \bm\phi^*(t))\,\dt = \min _{\bm u \in \mathcal U}\int _\tau^\infty L(\bm x(t), \bm u(t))\,\dt$, since if this is not the case, then if we decrease $\tau$, then $V(x)$ will decrease, violating our assumption that it is optimal
		* This means that the control law must be optimal at each point in time, so we can consider only a very small initial $\tau$ (i.e. the initial step) and ignore the rest
		* This is known as *Bellman's principle of optimality*: an optimal policy has the property that, whatever the initial state and decisions so far are, the remaining decisions must constitute and optimal policy with regard to the state resulting from the decisions so far
	* Therefore $V(\bm x) = \min _{\bm u \in \mathcal U} \int _0^\tau L(\bm x(t), \bm u(t))\,\dt + V(\bm x(\tau))$, where $V(\bm x(\tau))$ is the cost from time $\tau$ onwards and known as the *cost-to-go*
	* For small $\tau$, $\int _0^\tau L(\bm x(t), \bm u(t))\,\dt = \tau L(\bm x, \bm u) + O(\tau)$ where $O$ has the property that $\lim _{s \to 0} \frac{O(s)}{s} = 0$
	* Using a first-order Taylor series at $\tau = 0$, $V(\bm x(\tau)) = V(\bm x) + \eval{\diff{}{t}V(\bm x(t))}{t = 0}\tau + O(\tau)$
		* Note $\diff{}{t}V(\bm x(t)) = \rvec{\pdiff{V}{x_1}(x)}{\cdots}{\pdiff{V}{x_{n}}(x)} \cdot \diff{\bm x}{t} = \pdiff{V}{\bm x}(\bm x) \cdot (\bm A\bm x + \bm B\bm u)$
	* Substituting both expansions into the expression earlier and some manipulation later we get the HJB equation
* The HJB equation is quadratic in $\bm u$, and since $\bm R$ is positive definite there is a unique minimum, i.e. the problem is convex, with the unique solution given by $\bm u^* = -\frac{1}{2}\bm R^{-1}\bm B^T\left(\pdiff{V}{\bm x}(\bm x)\right)^T$
* Propose a trial solution $V(\bm x) = \bm x^T\bm P\bm x$, where $\bm P^T = \bm P$ is positive semidefinite, so $\pdiff{V}{\bm x}(\bm x) = 2\bm x^T\bm P$ and $\bm u^* = -\bm R^{-1}\bm B^T\bm P\bm x$
	* Substitute into the HJB equation to get $\bm x^T(-\bm P\bm B\bm R^{-1}\bm B^T\bm P + \bm P\bm A + \bm A^T\bm P + \bm Q)\bm x = 0$
	* Since this holds for any arbitrary $\bm x \in \reals^n$, this means that $-\bm P\bm B\bm R^{-1}\bm B^T\bm P + \bm P\bm A + \bm A^T\bm P + \bm Q = 0$
	* $-\bm P\bm B\bm R^{-1}\bm B^T\bm P + \bm P\bm A + \bm A^T\bm P + \bm Q = 0$ is known as the *algebraic Ricatti equation*
* Now we need to show that our candidate optimal control law $\bm\phi(t) = -\bm R^{-1}\bm B^T\bm P\bm x(t)$ does lead to the lowest cost, and stabilizes the system so it is admissible
* We will use the result that if $\bm Q$ is symmetric positive semidefinite, then there exists a matrix square root $\bm Q^\frac{1}{2}$ such that $(\bm Q^\frac{1}{2})^T\bm Q^\frac{1}{2} = \bm Q$
	* Since $\bm Q$ is PSD, $\bm Q = \bm M^T\bm\Lambda\bm M$ where $\bm M$ is an orthogonal matrix, so $\bm Q^\frac{1}{2} = \bm\Lambda^\frac{1}{2}\bm M$ where $\bm\Lambda^\frac{1}{2}$ has square roots on the diagonal
* Also, all principal sub-matrices of $\bm Q$, i.e. any sub-matrix on the diagonal of $\bm Q$, must also be positive semidefinite (this can be shown by noting $\bm x^T\bm Q\bm x \geq 0$ and we can choose $\bm x$ to isolate any sub-matrix)

\noteThm{If $(\bm A, \bm B)$ is stabilizable and $(\bm Q^\frac{1}{2}, \bm A)$ is detectable, then the algebraic Ricatti equation $$-\bm P\bm B\bm R^{-1}\bm B^T\bm P + \bm P\bm A + \bm A^T\bm P + \bm Q = 0$$ has a unique symmetric positive semidefinite solution $\bm P$, and the control policy $$\bm\phi^*(t) = -\bm R^{-1}\bm B^T\bm P\bm x(t)$$ is the optimal controller for the linear quadratic optimal control problem, and the optimal cost is given by $V(\bm x) = J(\bm x, \bm\phi^*) = \bm x^T\bm P\bm x$.}

* Proof: Let $\bm\phi \in \mathcal U$ and $\bm x(0) = \bm x$, we substitute the algebraic Ricatti equation for $\bm Q$ into the cost, then complete the square and use $\dot{\bm x}(t) = \bm A\bm x(t) + \bm B\bm\phi(t)$
	* $\alignedeqntwo[t]{J(\bm x, \bm\phi)}{\int _0^\infty \bm x(t)^T\bm Q\bm x(t) + \bm\phi(t)^T\bm R\bm\phi(t)\,\dt}{\int _0^\infty \bm x(t)^T(\bm P\bm B\bm R^{-1}\bm B^T\bm P - \bm P\bm A - \bm A^T\bm P)\bm x(t) + \bm\phi(t)^T\bm R\bm\phi(t)\,\dt}{\int _0^\infty (\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t))^T\bm R(\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t)) - \left(\dot{\bm x}(t)^T\bm P\bm x(t) + \bm x(t)\bm P\dot{\bm x}(t)\right)\,\dt}{\int _0^\infty (\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t))^T\bm R(\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t))\,\dt - \int _0^\infty \diff{}{t}(\bm x(t)^T\bm P\bm x(t))\,\dt}{\bm x^T\bm P\bm x + \int _0^\infty (\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t))^T\bm R(\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t))\,\dt}$
	* By the positive semidefiniteness of $\bm R$, the term inside the integral is always nonnegative, and it is minimized when $\bm\phi(t) + \bm R^{-1}\bm B^T\bm P\bm x(t)$, i.e. $\bm\phi^*(t) = -\bm R^{-1}\bm B^T\bm P\bm x(t)$, which gives us the optimal cost $\bm x^T\bm P\bm x$

\noteSummary{For a system $\dot{\bm x} = \bm A\bm x + \bm B\bm u$, linear quadratic optimal control seeks to optimize a cost functional $$J(\bm x, \bm\phi) = \int _0^\infty \bm x(t)^T\bm Q\bm x(t) + \bm\phi(t)^T\bm R\bm\phi(t)\dt$$ where $\bm u = \bm\phi, \bm x(0) = \bm x$, assuming that $(\bm A, \bm B)$ is stabilizable and $(\bm Q^\frac{1}{2}, \bm A)$ is detectable. Then the optimal control law is given by $$\bm\phi^*(t) = -\bm R^{-1}\bm B^T\bm P\bm x(t)$$ where $\bm P$ is the unique positive semidefinite solution to the algebraic Ricatti equation, $$-\bm P\bm B\bm R^{-1}\bm B^T\bm P + \bm P\bm A + \bm A^T\bm P + \bm Q = 0$$}

