# Tutorial 8, Nov 17, 2025

* Example: point mass with mass $m$ with position $r = (r_x, r_y, r_z)$ on a saddle surface $r_z = r_x^2 - r_y^2$, with gravity acting in $-z$
	* Verify $g(r) = r_z - (r_x^2 - r_y^2)$ is a holonomic constraint and determine the degrees of freedom of this constraint
		* $g(r)$ is scalar, so the number of constraints is $l = 1$
		* To check for holonomic constraint, we check $\rank\left(\pdiff{g}{r}\right) = l$ for all values of $r_x, r_y, r_z$, i.e. the constraints need to be linearly independent
			* $\pdiff{g}{r} = \rvec{-2r_x}{2r_y}{1}$
			* Since we have 1 in the final component, this has rank 1 for all possible values of the coordinates, so the rank condition is always satisfied
		* The number of degrees of freedom is $3N - 1 = 3 - 1 = 2$ (since $r$ is 3-dimensional and there is only 1 position)
	* Find a set of generalized coordinates and $r = r(q)$
		* Pick $(q_1, q_2) = (r_x, r_y)$
		* This is the best choice since we can easily express $r_z$ in terms of the generalized coordinates; if we chose e.g. $r_x, r_z$ we would need a square root to get $r_y$
		* $r = r(q) = \cvec{q_1}{q_2}{q_1^2 - q_2^2}$
	* Given an applied force $f_a = \rvec{f_x}{f_y}{0}^T$, find the generalized force $\tau$
		* $\tau = \left(\pdiff{r}{q}\right)^Tf_a = \matthreetwo{1}{0}{0}{1}{2q_1}{-2q_2}^T\cvec{f_x}{f_y}{0} = \cvec{f_x}{f_y}$
		* This makes sense since our generalized coordinates are just the normal coordinates but without the $z$ component, so the generalized force is the normal force but truncated
	* Find expressions for the kinetic and potential energy and the Lagrangian
		* $T = \frac{1}{2}m\norm{\dot r}^2 = \frac{1}{2}m(\dot q_1^2 + \dot q_2^2 + (2q_1\dot q_1 - 2q_2\dot q_2))^2 = \frac{1}{2}m(\dot q_1^2(1 + 4q_1^2) + \dot q_2^2(1 + 4q_2^2) - 8q_1q_2\dot q_1\dot q_2)$
		* $\mathcal U = mgr_z = mg(q_1^2 - q_2^2)$
	* Find all possible virtual displacements on the constraint surface for a mass at $r = \rvec{-1}{1}{0}^T$
		* $\delta r = \pdiff{r}{q}\,\dd q = \matthreetwo{1}{0}{0}{1}{2q_1}{-2q_2}\cvec{\dd q_1}{\dd q_2} = \cvec{1}{0}{-2}\dd q_1 + \cvec{0}{1}{-2}\dd q_2$

