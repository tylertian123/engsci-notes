# Lecture 20, Oct 24, 2022

## Second Order Linear Homogeneous Autonomous ODE

* Consider the ODE: $ay'' + by' + cy = 0$
* Recall we can express this as $\bm x = \cvec{y}{y'}, \bm x = \bm A\bm x = \mattwo{0}{1}{-\frac{c}{a}}{-\frac{b}{a}}\bm x$
	* The eigenvalues are: $\det(\bm A - \lambda\bm I) = 0 \implies a\lambda^2 + b\lambda + c = 0 \implies \lambda = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}$
* The eigenvectors are $\bm v = \cvec{1}{\lambda}$
* 3 cases for these eigenvalues:
	* Real and distinct (overdamped)
		* General solution $\bm x = c_1e^{\lambda _1t}\cvec{1}{\lambda _1} + c_2e^{\lambda _2t}\cvec{1}{\lambda _2}$, which gives $y = c_1e^{\lambda _1t} + c_2e^{\lambda _2t}$ when $\lambda$ are distinct
	* Real and equal (critically damped)
		* $\lambda _1 = \lambda _2 = -\frac{b}{2a}$
		* We only have a single eigenvector $\cvec{1}{\lambda}$, so we need to find the generalized eigenvector
		* $(\bm A - \lambda\bm I)\bm w = \bm v \implies \bm w = \cvec{0}{1}$
		* This gives us $\bm x = c_1e^{\lambda _1t}\bm v_1 + c_2e^{\lambda _1t}(t\bm v_1 + \bm w_1) = c_1e^{\lambda t}\cvec{1}{\lambda _1} + c_2e^{\lambda t}\cvec{t}{\lambda t + 1}$
		* This gives $y = c_1e^{\lambda t} + c_2te^{\lambda t}$
	* Complex conjugates (underdamped)
		* $\lambda _1 = \mu + i\nu, \lambda _2 = \mu - i\nu$ where $\mu = -\frac{b}{2a}, \nu = \frac{\sqrt{4ac - b^2}}{2a}$
		* Construct the solution just like before and use Euler's identity: $\bm x = c_1e^{(\mu + i\nu)t}\cvec{1}{\mu + i\nu} + c_2e^{(\mu - i\nu)t}\cvec{1}{\mu - i\nu} = c_1e^{\mu t}\cvec{\cos\nu t}{\mu\cos\nu t - \nu\sin\nu t} + c_2e^{\mu t}\cvec{\sin\nu t}{\mu\sin\nu t + \nu\cos\nu t}$
		* This gives: $y = c_1e^{\mu t}\cos\nu t + c_2e^{\mu t}\sin\nu t$
* Example: $y'' + 5y' + 6y = 0$
	* Eigenvalues are $\lambda _1 = -2, \lambda _2 = -3$, real and distinct
	* Eigenvectors are then $\bm v_1 = \cvec{1}{-2}, \bm v_2 = \cvec{1}{-3}$
* Example: $y'' + y' + y = 0$
	* Eigenvalues are complex conjugates: $\lambda = -\frac{1}{2} \pm i\sqrt{\frac{3}{2}}$
* Example: $y'' - y' + \frac{1}{4}y = 0$
	* Eigenvalues are equal: $\lambda _1 = \lambda _2 = \frac{1}{2}$

\noteSummary{The ODE $ay'' + by' + cy = 0$ is solved by:
\begin{enumerate}
	\item When $\lambda$ are real and distinct: $$y = c_1e^{\lambda _1t} + c_2e^{\lambda _2t}$$
	\item When $\lambda$ are complex conjugates: $$y = c_1e^{\mu t}\cos\nu t + c_2e^{\mu t}\sin\nu t$$
	\item When $\lambda$s are real and equal: $$y = c_1e^{\lambda _1t} + c_2te^{\lambda _1t}$$
\end{enumerate}
where $$\lambda = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}$$ and $\lambda = \mu \pm i\nu$ when $\lambda$ are complex}

