# Lecture 21, Mar 7, 2022

## Vectors, Lines and Planes

* $\vec{a} = (x, y, z) = x\ihat + y\jhat + z\khat$
* In general vectors don't have a particular location in space where it starts (they represent displacement instead of a location)
* Radius vectors denoted $\vec{r}$ start at $(0, 0, 0)$
* A plane is described by $ax + by + cz = d$ or $a(x - x_0) + b(y - y_0) + c(z - z_0) = 0$
	* $(a, b, c)$ is the normal vector of the plane, $(x_0, y_0, z_0)$ is a point on the plane
* Planes are defined uniquely by a point on the plane and a normal vector
	* Let $\vec{n} = (n_1, n_2, n_3)$ be the normal vector and $\vec{r}_0 = (x_0, y_0, z_0)$ be the point on the plane
	* Let $p = (x, y, z)$ be on the plane connected to the origin by $\vec{r}$
	* We constrain the plane by noting that any $\vec{r} - \vec{r}_0$ is in the plane and thus normal to $\vec{n}$, therefore $\vec{n} \cdot (\vec{r} - \vec{r}_0) = 0$
		* $n(x - x_0) + n_2(y - y_0) + n_3(z - z_0) = 0$
* A line is described by $\vec{r} = \vec{r_0} + t\vec{v} \implies (x, y, z) = (x_0, y_0, z_0) + t(v_1, v_2, v_3)$ parametrically or $\frac{x - x_0}{v_1} = \frac{y - y_0}{v_2} = \frac{z - z_0}{v_3}$ (the 2-equation symmetric form)
* Lines are defined uniquely by a point on the line and a parallel vector
	* Let $\vec{v}$ be the direction vector and $\vec{r}_0$ be the point on the line
	* Any other point $\vec{r}$ on the line must have $\vec{r} - \vec{r}_0 \propto \vec{v} \implies \vec{r} = \vec{r}_0 + t\vec{v}$
* Parametric equations in 3D are often written as position vectors $\vec{r}(t)$

