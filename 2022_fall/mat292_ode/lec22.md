# Lecture 22, Oct 28, 2022

## Method of Variation of Parameters

* Consider a nonhomogeneous system: $\vec{\bm x}' = \bm P(t)\vec{\bm x} + \vec{\bm g}(t)$
	* We solve the homogeneous system $\vec{\bm x}' = \bm P(t)\vec{\bm x}$
	* To do this we need a fundamental set $\Set{\vec{\bm x}_1(t), \vec{\bm x}_2(t)}$
		* This means $\vec{\bm x}_1' = \bm P(t)\vec{\bm x}_1, \vec{\bm x}_2' = \bm P(t)\vec{\bm x}_2$
	* We can write $\bm X' = \bm P(t)\bm X$, where $\bm X = \rvec{\vec{\bm x}_1}{\vec{\bm x}_2}$
	* From this we can construct a general solution of the homogeneous system: $\vec{\bm x} = c_1\vec{\bm x}_1(t) + c_2\vec{\bm x}_2(t)$
* Guess solution: $u_1(t)\vec{\bm x}_1(t) + u_2(t)\vec{\bm x}_2(t) = \bm X(t)\vec{\bm u}(t)$ where $\vec{\bm u} = \cvec{u_1(t)}{u_2(t)}$
* Substitute into nonhomogeneous equation: $(\bm X(t)\vec{\bm u}(t))' = \bm X'(t)\vec{\bm u}(t) + \bm X(t)\vec{\bm u}'(t) = \bm P(t)\bm X(t)\vec{\bm u}(t) + \vec{\bm g}(t)$
	* Since $\bm X'(t) = \bm P(t)\bm X(t)$ this simplifies to just $\bm X(t)\vec{\bm u}'(t) = \vec{\bm g}(t)$
* Therefore $\bv u'(t) = \bm X(t)^{-1}\bv g(t)$
	* We know $\bm X(t)$ is invertible since the fundamental matrix always has a nonzero Wronskian
* Now we can integrate: $\bv u(t) = \bv c + \int \bm X(t)^{-1}\bv g(t)\,\dt$
* $\bv x = \bm X(t)\bv u(t) = \bm X(t)\bv c + \bm X(t)\int \bm X(t)^{-1}\bv g(t)\,\dt$
	* Notice this consists of $\bm X(t)\bv c$, which is the general solution to the homogeneous equation, plus a particular solution to the nonhomogeneous equation
* Note: For a 2x2 problem, $\bm X(t)^{-1} = \frac{1}{W[\bv x_1(t), \bv x_2(t)]}\mattwo{x_{22}(t)}{-x_{12}(t)}{-x_{21}(t)}{x_{11}(t)}$

\noteThm{The general linear nonhomogeneous system $$\bv x' = \bm P(t)\bv x + \bv g(t)$$ is solved by $$\bv x = \bm X(t)\bv u(t) = \bm X(t)\bv c + \bm X(t)\int \bm X(t)^{-1}\bv g(t)\,\dt$$ where $\bm X(t)$ is the fundamental matrix of the system, and $\bv c$ is a vector of constants determined by initial conditions}

## Second Order Nonhomogeneous ODE

* Consider the ODE $y'' + p(t)y' + q(t)y = g(t)$
	* We can use variation of parameters to solve this
* Convert to system: $\bv x = \mattwo{0}{1}{-q(t)}{-p(t)}\bv x + \cvec{0}{g(t)}$
* Notice the fundamental matrix has the structure $\bm X(t) = \mattwo{y_1(t)}{y_2(t)}{y_1'(t)}{y_2'(t)}$
* The particular solution: $\alignedeqntwo[t]{\bm X(t)\int \bm X(t)^{-1}\bv g(t)\,\dt}{\frac{1}{W[\bv y_1(t), \bv y_2(t)]}\mattwo{y_2'(t)}{-y_2(t)}{-y_1'(t)}{y_1(t)}\cvec{0}{g(t)}\,\dt}{\bm X(t)\int\frac{1}{W[\bv y_1(t), \bv y_2(t)]}\cvec{-g(t)y_2(t)}{g(t)y_1(t)}\,\dt}{-\cvec{y_1(t)}{y_1'(t)}\int \frac{1}{W}g(t)y_2(t)\,\dt + \cvec{y_2(t)}{y_2'(t)}\int \frac{1}{W}g(t)y_1(t)\,\dt}$
* We can now extract a particular solution for $y$: $y_p = -y_1(t)\int \frac{1}{W}g(t)y_2(t)\,\dt + y_2(t)\int \frac{1}{W}g(t)y_1(t)\,\dt$

\noteThm{A particular solution to the general second order linear nonhomogeneous ODE $$y'' + p(t)y' + q(t)y = g(t)$$ is $$y_p = -y_1(t)\int \frac{1}{W}g(t)y_2(t)\,\dt + y_2(t)\int \frac{1}{W}g(t)y_1(t)\,\dt$$ where $\Set{y_1, y_2}$ is the fundamental set of the homogeneous solution and $$W = \mattwo[v]{y_1}{y_2}{y_1'}{y_2'}$$}

## Example

* $y'' + 4y = \frac{3}{\sin t}$
* Homogeneous solution:
	* $\lambda = \pm 2i$
	* Use the formula for the complex case: $y = c_1e^{\mu t}\cos(\nu t) + c_2e^{\mu t}\sin(\nu t)$
	* $y_1 = \cos(2t), y_2 = \sin(2t)$
* By variation of parameters, $y = c_1\cos(2t) + c_2\sin(2t) - \frac{\cos(2t)}{2}\int \frac{3}{\sin t}\sin(2t)\,\dt + \frac{\sin(2t)}{2}\int \frac{3}{\sin t}\cos(2t)\,\dt$

