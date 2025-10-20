# Lecture 3, Sep 5, 2025

## Linearization

* Consider a general nonlinear function $\dot{\bm x} = \bm f(\bm x, \bm u), \bm y = \bm h(\bm x, \bm u)$ where $\bm f, \bm h$ are differentiable; we want to approximate this system by an LTI model by linearization around an equilibrium point

\noteDefn{A pair $(\bm x^*, \bm u^*)$ is an \textit{equilibrium condition} if $\bm f(\bm x^*, \bm u^*) = \bm 0$. In this case $\bm x^*$ is an \textit{equilibrium point} with control $\bm u^*$.}

* Consider the example of an actuated pendulum affected by gravity $\bm x = \cvec{\theta}{\dot{\theta}}, y = x_1$
	* $\dot x_1 = x_2$
	* $\dot x_2 = -\frac{mgl}{J}\sin x_1 + \frac{u}{J}$ (torque balance) where $J$ is the moment of inertia
	* $\bm f(\bm x, \bm u) = \cvec{x_2}{-\frac{mgl}{J}\sin x_1 + \frac{u}{J}}$
	* With a control of $u^* = 0$, $\bm f(\bm x^*, 0) = \frac{x_2^*}{-\frac{mgl}{J}\sin x_1^*} = \cvec{0}{0} \implies \bm x^* = \cvec{k\pi}{0}, k \in \integers$
		* Physically this corresponds to the pendulum being perfectly up or down with zero velocity
	* With a control of $u^* = mgl, \frac{x_2}{-\frac{mgl}{J}\sin x_1^* + \frac{mgl}{J}} = \cvec{0}{0} \implies \bm x^* = \cvec{\frac{\pi}{2} + 2k\pi}{0}$
		* This corresponds to the applied torque being balanced by gravity
* Consider $\bm f(\bm x) = \bm f(\bm x^*) + \pdiff{\bm f}{\bm x}(\bm x^*)(\bm x - \bm x^*) + \bm R(\bm x)$ where $\bm R$ is a remainder term
	* $\pdiff{\bm f}{\bm x} = \matthreeb{\pdiff{f_1}{x_1}}{\cdots}{\pdiff{f_1}{x_{n_1}}}{\vdots}{\ddots}{\vdots}{\pdiff{f_{n_2}}{x_1}}{\cdots}{\pdiff{f_{n_2}}{n_1}} \in \reals^{n_2\times n_1}$ is the *Jacobian* of $\bm f$
	* For differentiable $\bm f$, $\lim _{\bm x \to \bm x^*} \frac{\bm R(\bm x)}{\norm{\bm x - \bm x^*}} = \bm 0$
* Let $\bm z^* = (\bm x^*, \bm u^*), \bm z = (\bm x, \bm u)$, then $\dot{\bm x} = \bm f(\bm z) = \bm f(\bm z^*) + \pdiff{\bm f}{\bm z}(\bm z^*)(\bm z - \bm z^*) + \bm R(\bm z)$ where $\pdiff{\bm f}{\bm z} = \rvec{\pdiff{\bm f}{\bm x}}{\pdiff{\bm x}{\bm u}}$
	* Therefore $\dot{\bm x} \approx \pdiff{\bm f}{\bm z}(\bm z^*)(\bm z - \bm z^*) = \pdiff{\bm f}{\bm x}(\bm x^*, \bm u^*)(\bm x - \bm x^*) + \pdiff{\bm f}{\bm u}(\bm x^*, \bm u^*)(\bm u - \bm u^*)$
		* Note we used the fact that $\bm z^*$ is an equilibrium condition
	* Let $\delta\bm x = \bm x - \bm x^*, \delta\bm u = \bm u - \bm u^*$ then $\dot{\delta\bm x} = \dot{\bm x} \approx \pdiff{\bm f}{\bm x}(\bm x^*, \bm u^*)\delta\bm x + \pdiff{\bm f}{\bm u}(\bm x^*, \bm u^*)\delta\bm u$
	* Similarly let $\delta\bm y = \bm y - \bm h(\bm x^*, \bm u^*)$ then $\delta\bm y \approx \pdiff{\bm h}{\bm x}(\bm x^*, \bm u^*)\delta\bm x + \pdiff{\bm h}{\bm u}(\bm x^*, \bm u^*)\delta\bm u$
	* Therefore: $\bm A = \pdiff{\bm f}{\bm x}(\bm x^*, \bm u^*), \bm B = \pdiff{\bm f}{\bm u}(\bm x^*, \bm u^*), \bm C = \pdiff{\bm h}{\bm x}(\bm x^*, \bm u^*), \bm D = \pdiff{\bm h}{\bm u}(\bm x^*, \bm u^*)$

\noteSummary{To linearize a general nonlinear system $\dot{\bm x} = \bm f(\bm x, \bm u), \bm y = \bm h(\bm x, \bm u)$ where $\bm f, \bm h$ are differentiable, let $(\bm x^*, \bm u^*)$ be an equilibrium condition, then a linear approximation is $$\alignedlines{}{\delta\dot{\bm x} = \bm A\delta\bm x + \bm B\delta\bm u}{\bm y = \bm C\delta\bm x + \bm D\delta\bm u}$$ where $\delta\bm x = \bm x - \bm x^*, \delta\bm u = \bm u - \bm u^*$ and $$\bm A = \pdiff{\bm f}{\bm x}(\bm x^*, \bm u^*), \bm B = \pdiff{\bm f}{\bm u}(\bm x^*, \bm u^*), \bm C = \pdiff{\bm h}{\bm x}(\bm x^*, \bm u^*), \bm D = \pdiff{\bm h}{\bm u}(\bm x^*, \bm u^*)$$}

