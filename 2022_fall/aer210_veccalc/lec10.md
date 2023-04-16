# Lecture 10, Sep 29, 2022

## Taylor Series and Approximations for Two Variable Functions

* For $f(x, y)$, define a parametric $F(t) = f(x_0 + t\Delta x, y_0 + t\Delta y)$ where $(x_0, y_0)$ is the point around which to approximate
	* $F(0) = f(x_0, y_0)$
	* We want to find $F(1) = f(x_0 + \Delta x, y_0 + \Delta y)$
* By the chain rule $F'(t) = \pdiff{f}{x}\diff{x}{t} + \pdiff{f}{y}\diff{y}{t} = \diff{f}{x}\Delta x + \pdiff{f}{y}\Delta y$
* The second derivative is $\diff{}{t}\left(\diff{f}{x}\Delta x + \pdiff{f}{y}\Delta y\right) = \diffn{2}{f}{x}\diff{x}{t}\Delta x + \ppdiff{f}{y}{x}\diff{y}{t}\Delta x + \ppdiff{f}{x}{y}\diff{x}{t}\Delta y + \pdiffn{2}{f}{y}\diff{y}{t}\Delta y = \pdiffn{2}{f}{x}\Delta x^2 + 2\ppdiff{f}{x}{y}\Delta x\Delta y + \pdiffn{2}{f}{y}\Delta y^2$
* This gives the approximations:
	* The first order approximation is then $f(x_0 + \Delta x, y_0 + \Delta y) + f(x_0, y_0) + f_x(x_0, y_0)\Delta x + f_y(x_0, y_0)\Delta y$ (tangent plane approximation)
	* The quadratic approximation is $f(x_0 + \Delta x, y_0 + \Delta y) + f(x_0, y_0) + f_x(x_0, y_0)\Delta x + f_y(x_0, y_0)\Delta y + \frac{1}{2!}\left(f_{xx}(x_0, y_0)\Delta x^2 + 2f_{xy}(x_0, y_0)\Delta x\Delta y + f_{yy}(x_0, y_0)\Delta y^2\right)$
* In general the nth order derivatives work like a binomial expansion

\noteDefn{The Taylor series expansion of $f(x_0 + \Delta x, y_0 + \Delta y)$ is $$f(x_0 + \Delta x, y_0 + \Delta y) = \sum _{n = 0}^\infty\left\{\frac{1}{n!}\sum _{k = 0}^n\binom{n}{k}\eval{\frac{\partial^n f}{\partial x^{n - k}\partial y^k}}{(x_0, y_0)}\Delta x^{n - k}\Delta y^k\right\}$$ where $$\binom{n}{k} = \frac{n!}{(n - k)!k!}$$}

\begin{note-important}
Third-degree Taylor series expansion of a two-variable function:

$$f(x_0 + \Delta x, y_0 + \Delta y) \approx \alignedlines[t]{+}{f(x_0, y_0)}{\pdiff{f}{x}\Delta x + \pdiff{f}{y}\Delta y}{\frac{1}{2!}\left(\pdiffn{2}{f}{x}\Delta x^2 + 2\ppdiff{f}{x}{y}\Delta x\Delta y + \pdiffn{2}{f}{y}\Delta y^2\right)}{\frac{1}{3!}\left(\pdiffn{3}{f}{x}\Delta x^3 + 3\frac{\partial^3 f}{\partial x^2\partial y}\Delta x^2\Delta y + 3\frac{\partial^3 f}{\partial x\partial y^2}\Delta x\Delta y^2 + \pdiffn{3}{f}{y}\Delta y^3\right)}$$

where all partials are evaluated at $(x_0, y_0)$
\end{note-important}

* The nth degree polynomial of $f(x, y)$ is a polynomial in $x - x_0$ and $y - y_0$ with terms up to the nth power
* Approximations become exact as $\sqrt{\Delta x^2 + \Delta y^2} \to 0$

