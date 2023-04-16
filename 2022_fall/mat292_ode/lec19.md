# Lecture 19, Oct 21, 2022

## Second Order Linear Differential Equations

* A second order linear ODE can be expressed as $y'' = f(t, y, y')$
	* Initial conditions $y(t_0) = y_0, y'(t_0) = y_1$
	* Notice two initial conditions are needed because we have 2 integration constants
* A second order linear ODE can be expressed as $y'' + p(t)y' + q(t)y = g(t)$
* A second order ODE can be written in terms of two first order ODEs:
	* Define $x_1 = y, x_2 = y'$
	* $y'' = x_2' = f(t, x_1, x_2)$
	* $y' = x_2 = x_1' \implies x_1' = x_2$
* If we had a second order linear ODE $y'' + p(t)y' + q(t)y = g(t)$, we can write it as a system of linear ODEs:
	* $x_1' = x_2, x_2' = -q(t)x_1 - p(x)x_2 + g(t)$
	* $\vec{\bm x}' = \mattwo{0}{1}{-q(t)}{-p(t)}\vec{\bm x} + \cvec{0}{g(t)}$
	* Initial conditions can be added as $\vec{\bm x}(t_0) = \cvec{y_0}{y_1}$

\noteThm{Existence and Uniqueness Theorem: Given $$y'' + p(t)y' + q(t)y = g(t)$$ if $p(t), q(t), g(t)$ are continuous over $t_0 \in (\alpha, \beta)$, then there exists a unique solution over $(\alpha, \beta)$}

* Second order linear ODEs also obey the theorem of superposition

