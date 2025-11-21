# Tutorial 7, Nov 10, 2025

## Lagrangian Dynamics

* Example: car on a planar roller coaster described by $y = f(x)$, with mass 1, with no applied forces
	* Using $x$ as the generalized coordinate, derive the Lagrangian
		* $r = \rvec{x}{f(x)}^T \implies \dot r = \rvec{1}{f'(x)}$
		* $\dot r = \pdiff{r}{q}\dot q = \cvec{1}{\dot f(x)}\dot x = \cvec{\dot x}{\dot x\dot f(x)}$
		* Kinetic energy: $\alignedeqntwo[t]{T(q, \dot q)}{\sum _{i = 1}^N \frac{1}{2}m_i\norm{\dot r_i}^2}{\frac{1}{2}\norm{\dot r}^2}{\frac{1}{2}(\dot x^2 + (\dot x\dot f(x))^2}$
		* Potential energy: $\mathcal U(r(q)) = mgh = gf(x)$
		* $\mathcal L = \frac{1}{2}\dot x^2(1 + \dot f^2(x)) - gf(x)$
	* Find the Euler-Lagrange equations expressed in terms of $x$, $f(x)$ and their time derivatives
		* With no applied force, $\diff{}{t}\left(\pdiff{\mathcal L}{\dot q}\right) - \pdiff{\mathcal L}{q} = 0$
		* $\pdiff{\mathcal L}{\dot q} = \dot x(1 + \dot f^2(x))$
		* $\diff{}{t}\left(\pdiff{\mathcal L}{\dot q}\right) = \ddot x(1 + \dot f^2(x)) + \dot x(2\dot f(x)\ddot f(x)\dot x)$
		* $\pdiff{\mathcal L}{q} = \dot x^2\dot f(x)\ddot f(x) - g\ddot f(x)$
		* Equation of motion: $\ddot x(1 + \dot f^2(x)) + \dot x^2\dot f(x)\ddot f(x) + g\dot f(x) = 0$
* Example: Consider 2 point masses on a plane with positions $r_1^0, r_2^0 \in \reals^2$, connected by a massless rod of length $l$
	* This is a holonomic constraint $\norm{r_1^0 - r_2^0}^2 = (r_1^0 - r_2^0)^T(r_1^0 - r_2^0) = l^2$
	* Consider virtual displacements $\delta r_1^0, \delta r_2^0$; write the relationship between $\delta r_1^0, \delta r_2^0, r_1^0, r_2^0$
		* First write the constraint in the form $g(r) = 0$: $g(r) = g(r_1^0, r_2^0) = (r_1^0 - r_2^0)^T(r_1^0 - r_2^0) - l^2 = 0$
		* Virtual displacements must satisfy $\pdiff{g}{r}\delta r = 0 \iff \rvec{\pdiff{g}{r_1^0}}{\pdiff{g}{r_2^0}}\cvec{\delta r_1^0}{\delta r_2^0} = 0$
		* $\pdiff{g}{r} = \rvec{2(r_1^0 - r_2^0)^T}{-2(r_1^0 - r_2^0)^T}$
		* Therefore we must have $(r_1^0 - r_2^0)^T(\delta r_1^0 - \delta r_2^0) = 0$
		* $r_1^0 - r_2^0$ is the direction of the rod; this expression is saying that the difference of the virtual displacements must be perpendicular to the direction of the rod, or the difference must be zero
	* What are valid cases of virtual displacements?
		* Two virtual displacements of the same magnitude pointing in the same direction on both point masses is valid since $\delta r_1^0 - \delta r_2^0 = 0$ (the direction does not have to be perpendicular to the rod)
		* Two virtual displacements pointing in different directions on the point masses is valid if and only if both virtual displacement vectors are perpendicular to the rod (i.e. one of them pointing up, the other one pointing down)

