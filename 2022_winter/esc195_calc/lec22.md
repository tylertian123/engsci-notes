# Lecture 22, Mar 8, 2022

## Surfaces: Cylinders and Quadric Surfaces

* Quadric surfaces are in the form $Ax^2 + By^2 + Cz^2 + Dxy + Exz + Fyz + Gx + Hy + Iz + J = 0$
	* $Gx + Hy + Iz$ offsets the shape in the axial directions
	* $Dxy + Exz + Fyz$ terms rotate the shape
* Cylinders are 2D surfaces with no $z$ defined
* Properties of quadric surfaces:
	1. Domain/range
		* Typically domain involves $x$ and $y$, range involves $z$, but not always
	2. Intercepts with coordinate axes (all 3)
	3. Traces -- intersections with coordinate planes
	4. Sections -- intersections with other planes (typically a plane parallel to the coordinate planes)
	5. Centre
	6. Symmetry
	7. Bounded/unboundedness
* Example: Hyperboloid of two sheets: $\frac{x^2}{a^2} + \frac{y^2}{b^2} - \frac{z^2}{c^2} = -1 \implies z = \pm c\sqrt{1 + \frac{x^2}{a^2} + \frac{y^2}{b^2}}$
	1. Domain: $x, y \in (-\infty, \infty)$; range: $z \geq c$ or $z \leq -c$ (since the number in the root is always greater than 1)
	2. Intercepts: $z$ intercept at $z = \pm c$ (when $x = y = 0$) (we can't have $z = 0$ so it can't have other intercepts)
	3. Traces:
		* $xy$ plane ($z = 0$): nothing
		* $xz$ plane ($y = 0$): hyperbola $z = \pm c\sqrt{1 + \frac{x^2}{a^2}}$
		* $yz$ plane ($x = 0$): hyperbola $z = \pm c\sqrt{1 + \frac{y^2}{b^2}}$
	4. Sections: consider $z = z_0$ where $\abs{z_0} > c$: $\frac{x^2}{a^2} + \frac{y^2}{b^2} = \frac{z_0^2}{c^2} - 1$ where $\frac{z_0^2}{c^2} - 1 > 0$, which is an ellipse
	5. Centre: origin because there are no offset terms
	6. Symmetry: $x \to -x$, $y \to -y$, $z \to -z$ all give the same surface so symmetry about each axis
	7. Unbounded in all directions

## Projections

* For 2 intersecting surfaces, we will have a curve of intersection $C: (x, y, z)$ such that $z = f(x, y) = g(x, y)$
	* The relation $f(x, y) = g(x, y)$ is a vertical cylinder since there are no restrictions on $z$
* Fix $z = 0$ and have $f(x, y) = g(x, y) = 0$; this is a *projection* (like a shadow of the curve of intersection)
* Example: cone $x^2 + y^2 = 2z^2 \implies z = \pm \sqrt{\frac{x^2 + y^2}{2}}$ and a plane $y + 4z = 5 \implies z = \frac{5 - y}{4}$
	* Set $\alignedimp[t]{\sqrt{\frac{x^2 + y^2}{2}} = \frac{5 - y}{4}}{(5 - y)^2 = 8(x^2 + y^2)}{25 - 10y + y^2 = 8x^2 + 8y^2}{8x^2 + 7y^2 + 10y - 25 = 0}{\frac{x^2}{\frac{25}{7}} + \frac{\left(y + \frac{5}{7}\right)^2}{\frac{200}{49}} = 1}$
	* This is an offset ellipse

## Vector Functions and Limits

* A vector valued function or vector function is $\vec{f}(t) = f_1(t)\ihat + f_2(t)\jhat + f_3(t)\khat = (f_1(t), f_2(t), f_3(t))$
	* Like a parametric representation
* Definition: $\lim _{t \to t_0} \vec{f}(t) = \vec{L}$ if $\lim _{t \to t_0} \norm*{\vec{f}(t) - \vec{L}} = 0$
	* The norm turns the vector limit into an ordinary limit
* $\lim _{t \to t_0} \vec{f}(t) = \vec{L} \implies \lim _{t \to t_0} \norm*{\vec{f}(t)} = \norm*{\vec{L}}$ but the reverse is not true
* Limit rules: Given $\lim _{t \to t_0} \vec{f}(t) = \vec{L}, \lim _{t \to t_0} \vec{g}(t) = \vec{M}, \lim _{t \to t_0} u(t) = R$:
	1. $\lim _{t \to t_0} \vec f(t) + \vec g(t) = \vec{L} + \vec{M}$
	2. $\lim _{t \to t_0} \alpha\vec f(t) = \alpha\vec{L}$
	3. $\lim _{t \to t_0} u(t)\vec f(t) = R\vec{L}$
	4. $\lim _{t \to t_0} \vec f(t) \cdot \vec g(t) = \vec{L} \cdot \vec{M}$
	5. $\lim _{t \to t_0} \vec f(t) \times \vec g(t) = \vec{L} \times \vec{M}$
* $\lim _{t \to t_0} \vec f(t) = \vec{L}$ iff $\lim _{t \to t_0} f_1(t) = L_1, \lim _{t \to t_0} f_2(t) = L_2, \lim _{t \to t_0} f_3(t) = L_3$
* $\vec f(t)$ is continuous at $t_0$ if $\lim _{t \to t_0} \vec f(t) = \vec f(t_0)$
* Likewise the continuity of $\vec f$depends on the continuity of its component

