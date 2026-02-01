# Lecture 11, Jan 29, 2026

## Adaptive Control -- Static Error Model

* Consider the linear regression problem: given *measurements* $y(k) \in \reals$, *regressor* $w(k) \in \reals^q$, and a linear model $y(k) = \psi^Tw(k)$ where the *parameter vector* $\psi \in \reals^q$ is unknown, we want to recover $\psi$
	* Note that our measurements and regressor are functions of time, so we can't do this instantly
* We want to build an estimate of the parameters, $\hat\psi(k) \in \reals^q$ (note that this is a function of time)
	* Let the estimated output $\hat y(k) = \hat\psi^T(k)w(k)$ and prediction error $e(k) = \hat y(k) - y(k)$
	* Let the parameter estimation error $\tilde\psi(k) = \hat\psi(k) - \psi$
	* This lets us write $e(k) = \tilde\psi^T(k)w(k)$, which is known as the *static error model* of adaptive control
		* This is called "static" as the error depends instantaneously on the current values of the estimation error and regressor, instead of having a dynamics that depends on past values
* To update $\hat\psi(k)$, we use the *gradient law*: $\hat\psi(k + 1) = \hat\psi(k) - \gamma(k)e(k)w(k)$ where $\gamma(k)$ is a time-dependent learning rate
	* Let the cost $J(\hat\psi) = \frac{1}{2}\norm{e}^2$, where $e = \tilde\psi^Tw = w^T(\hat\psi - \psi)$
	* The gradient of the cost is $\nabla J(\hat\psi) = \left(\pdiff{J(\hat\psi)}{\hat\psi}\right)^T = \left(\pdiff{J(\hat\psi)}{e}\pdiff{e}{\hat\psi}\right)^T = (ew^T)^T = ew$, giving the $\gamma(k)e(k)w(k)$ term
	* For the learning rate, we take $\gamma(k) = \frac{\bar\gamma}{1 + \norm{w(k)}^2}$ where $\bar\gamma$ is some nominal learning rate
		* The term in the denominator normalizes by the regressor, so our step size stays bounded, which is necessary for stability
		* Note we will show later that convergence requires $\bar\gamma \in (0, 2)$
* However, this alone does not guarantee $\hat\psi(k) \to \psi$ (e.g. consider a constant $w(k) = 0$); intuitively, the regressor has to do something "interesting" -- this is the *persistence of excitation* (PE) condition

\noteDefn{A regressor $w(k) \in \reals^q$ is \textit{persistently exciting} (PE) if $$\exists \beta _0 > 0, N \in \naturals, N > 0 \suchthat \beta _0I \preccurlyeq W(k, N) = \frac{1}{N}\sum _{\tau = k}^{k + N - 1} w(\tau)w^T(\tau), \forall k \in \naturals _0$$ where $A \preccurlyeq B$ denotes $x^TAx \leq x^TBx, \forall x \in \reals^q$.}

* Note that the key difference between the adaptive control approach versus the least-squares approach is that least squares is a batch approach, i.e. it processes all the data at once, whereas adaptive control processes the data as it comes; consider the least squares approach:
	* We collect $\set{y(k)}_{k = 0}^{N - 1}, \set{w(k)}_{k = 0}^{N - 1}$
	* Let $Y(0, N) = \cvec{y(0)}{\vdots}{y(N - 1)}$ and $X(0, N) = \cvec{w^T(0)}{\vdots}{w^T(N - 1)}$, so $Y(0, N) = X(0, N)\psi$
	* We solve for $\min _{\hat\psi \in \reals^q} \norm{X(0, N)\hat\psi - Y(0, N)}^2$
		* This is only solvable if $X(0, N)$ has full column rank
		* It turns out that the full rank condition here is related to the persistence of excitation condition in adaptive control
	* If $X(0, N)$ has full column rank, then $\hat\psi = (X^T(0, N)X(0, N))^{-1}X^T(0, N)Y(0, N)$

