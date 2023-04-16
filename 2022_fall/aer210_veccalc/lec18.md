# Lecture 18, Oct 14, 2022

## Parametric Surfaces

* We can parametrize a surface as $\vec r(u, v) = x(u, v)\ihat + y(u, v)\jhat + z(u, v)\khat, (u, v) \in D$
	* We need 2 parameters since a surface is a 2-dimensional construct
* The simplest way of doing so is to find $z = f(x, y)$, then parameterize $x = u, y = v \implies S = u\ihat + v\jhat + f(u, v)\khat$
	* This is not always easy or possible to do
* A surface can have multiple parameterizations
* If we fix one parameter, we get a function of the other parameter which is a 1D curve slice of the surface
	* Let $P = (u_0, v_0)$
	* $\eval{\pdiff{\vec r(u, v)}{v}}{(u_0, v_0)} = \vec r_v(u_0, v_0)$ is a tangent vector in the direction of $v$ at $P$
	* $\eval{\pdiff{\vec r(u, v)}{u}}{(u_0, v_0)} = \vec r_u(u_0, v_0)$ is a tangent vector in the direction of $u$ at $P$
	* If we assume $\vec r_u(u_0, v_0) \times \vec r_v(u_0, v_0) \neq \vec 0$ at this point, then this cross product is normal to the surface

\noteDefn{A surface is smooth if for every point on $S$, $\vec r_u \times \vec r_v \neq \vec 0$}

* The local tangent plane will be normal to $\vec r_u \times \vec r_v$ and contains the point $P$; using this we can obtain a tangent plane

\noteDefn{The surface area of a parametric surface can be found by $$S = \iint _D \norm{\vec r_u \times \vec r_v}\,\du\,\dv$$ where $S: \vec r(u, v), (u, v) \in D$}

* Note that in the special case where $\threepiece{x = x}{y = y}{z = f(x, y)}$, this just reduces to $\iint _D \sqrt{\left(\pdiff{f}{x}\right)^2 + \left(\pdiff{f}{y}\right)^2 + 1}\,\dx\,\dy$, which we have seen before

## Surface Integrals

* We can extend integration over planar surfaces to any general surface with a surface integral

\noteDefn{The surface integral of a continuous scalar function $f(x, y, z)$ over a smooth, parametrized surface $S: \vec r(u, v), (u, v) \in D$ is given by $$\iint _S f(x, y, z)\,\dS = \iint _D f(x(u, v), y(u, v), z(u, v))\norm{\vec r_u \times \vec r_v}\,\du\,\dv$$}

* We can also sum together multiple piecewise smooth surfaces

