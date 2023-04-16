# Lecture 32, Apr 1, 2022

## Multivariable Optimization

* Definition: $f$ has a local maximum at $\vec x_0$ iff $f(\vec x_0) \geq f(\vec x)$ for $\vec x$ in some neighbourhood of $\vec x_0$; $f$ has a local minimum iff $f(\vec x_0) \leq f(\vec x)$ for $\vec x$ in some neighbourhood of $\vec x_0$
* Theorem: If $f$ has a local extreme value at $\vec x_0$ then $\nabla f(\vec x_0) = \vec 0$ or $\nabla f(\vec x_0)$ does not exist
	* Proof:
		* Let $g(x) = f(x, y_0)$, a single variable function; this function must have an extreme value at $\vec x_0$ if $f$ has an extreme value at $\vec x_0$
		* $\diff{g}{x}(x_0) = 0 = \pdiff{f}{x}(x_0, y_0)$
	* The tangent plane is horizontal when this happens: Consider the level surface $z = f(x, y)$, let $g(x, y, z) = z - f(x, y) = 0$, then $\nabla g = \khat$ for $f_x = f_y = 0$ so the normal is pointing straight up, which means the tangent plane is horizontal
	* However, this *doesn't* mean that the gradient equalling zero or DNE implies the existence of a local extreme
* Definition: Points where $\nabla f = \vec 0$ or DNE are *critical points*; where $\nabla f = \vec 0$ are stationary points; stationary points that are not extrema are *saddle points*
* Example: $f(x, y) = 2x^2 + y^2 - xy - 7y$
	* $\nabla f = (4x - y, 2y - x - 7) = \vec 0 \implies \twopiece{x = 1}{y = 4}$
	* $f(1, 4) = -14$
	* Look in the neighbourhood of $(1, 4)$: in all directions $f$ is a little larger, so this point is a local minimum
* Note the max/min could be an entire curve rather than a single point (e.g. a torus)
* Theorem: Second Derivatives Test: For $f(x, y)$ with continuous second order partials and $\nabla f(\vec x_0) = \vec 0$, set $\threepiece{A = \pdiffn{2}{f}{x}(x_0, y_0)}{B = \ppdiff{f}{x}{y}(x_0, y_0)}{C = \pdiffn{2}{f}{y}(x_0, y_0)}$ and form the discriminant $D = AC - B^2$, then:
	1. If $D < 0$, then $(x_0, y_0)$ is a saddle point
	2. If $D > 0$ and $A, C > 0$, then $(x_0, y_0)$ is a local minimum
		* Note this is only possible if $A$ and $C$ have the same sign
	3. If $D > 0$ and $A, C < 0$ then $(x_0, y_0)$ is a local maximum
	4. In all other cases, the result is indeterminate
* The second derivative test in 2D is a special case of the more general second derivative test, which looks at the Hessian matrix; if the Hessian is positive definite, then the point is a local minimum; if the Hessian is negative definite, it is a local maximum; if the eigenvalues are mixed positive and negative, then it is a saddle point; in all other cases (zero eigenvalues), it is indeterminate

