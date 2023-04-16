# Lecture 5, Sep 27, 2021

## Lines and Planes in 3D

* Lines in $\mathbb{R}^3$:
	* Line in $\mathbb{R}^3$ through the origin: $\cvec{x}{y}{z} = c\vec{d}$ where $\vec{d}$ is a direction vector on the line
	* General line in $\mathbb{R}^3$ not through the origin: $\cvec{x}{y}{z} = p_0 + c\vec{d}$ where $p_0$ is a known point on the line
	* Both have only one free parameter $c$, which corresponds with the fact that the line is 1-dimensional
	* To convert $y = mx + b$ to vector form: $\cvec{x}{y} = \cvec{0}{b} + c\cvec{1}{m}$
		* Our known point: $\cvec{0}{b}$
		* The direction vector: $\cvec{1}{m}$: as $x$ increases by $1$, $y$ increase by $m$
* Planes in $\mathbb{R}^3$:
	* Plane in $\mathbb{R}^3$ through the origin: $\cvec{x}{y}{z} = c\vec{d}_1 + d\vec{d}_2$ where $\vec{d}_1$ and $\vec{d}_2$ are two independent vectors parallel to the plane
	* General plane in $\mathbb{R}^3$ not through the origin: $\cvec{x}{y}{z} = p_0 + c\vec{d}_1 + d\vec{d}_2$ where $p_0$ is a known point on the plane
	* Another way to represent planes is with a normal vector $\vec{n} = \cvec{a}{b}{c}$; while there are many vectors parallel to the plane, there are only two directions that are normal to the plane
		* Since $\vec{n}$ is orthogonal, any vector $\vv{p_0p}$ that goes from a known point on the plane $p_0$ to another point on the plane $p_1$ is orthogonal to it
		* $0 = \vv{p_0p} \cdot \vec{n} = \cvec{x - x_0}{y - y_0}{z - z_0} \cdot \cvec{a}{b}{c} \implies a(x - x_0) + b(y - y_0) + c(z - z_0) = 0 \iff ax + by + cz = d$ where $d = ax_0 + by_0 + cz_0$
		* This equation is sometimes referred to as the scalar equation of the plane
	* To go from vector equation to scalar equation, take the cross product to get a normal vector, substitute in $a$, $b$, and $c$ and solve for $d$
	* To go from a scalar equation to a vector equation, find 3 non-collinear points and get two vectors and use any point as the known point

