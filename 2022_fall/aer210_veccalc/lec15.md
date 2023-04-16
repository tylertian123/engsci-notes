# Lecture 15, Oct 7, 2022

## Line Integrals of Vector Fields

* A vector field is $\vec F(x, y, z) = P(x, y, z)\ihat + Q(x, y, z)\jhat + R(x, y, z)\khat$
	* For each $(x, y, z)$ in space the vector field associates it with a vector
	* We can also express this as $\vec F(x, y, z) = \vec F(\vec r)$
* Once again we assume $C$ is smooth
* Consider the example of computing the work done to a particle in a force field
	* Divide the curve into many segments of $\Delta s_i$
	* $W_i = \vec F(x_i^*, y_i^*, z_i^*) \cdot \vec T(x_i^*, y_i^*, z_i^*)\Delta s_i$
	* $\vec T$ is the unit tangent vector; taking the dot product gets us the amount of force in the direction of movement
	* $W = \int _C \vec F(x, y, z) \cdot \vec T(x, y, z)\,\ds$
* Parametrize $C: \vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat, t \in [a, b]$, then the unit tangent vector $\vec T(t) = \frac{\vec r'(t)}{\norm{\vec r'(t)}}$
* $W = \int _C \vec F(x, y, z) \cdot \vec T(x, y, z)\,\ds = \int _a^b \vec F(x(t), y(t), z(t)) \cdot \frac{\vec r'(t)}{\norm{\vec r'(t)}}\norm{\vec r'(t)}\,\dt = \int _a^b \vec F(\vec r(t)) \cdot \vec r'(t)\,\dt$

\noteImportant{To compute the line integral of a vector field $\vec F(\vec r)$ along $C$: $$\int _C \vec F \cdot \dd\vec r = \int _a^b \vec F(\vec r(t)) \cdot \vec r'(t)\,\dt$$ where $\dd \vec r = \diff{\vec r}{t}\,\dt = \vec T\,\ds$}

* Alternatively: $\alignedeqntwo[t]{\int _C \vec F \cdot \dd \vec r}{\int _a^b \vec F(\vec r(t)) \cdot \vec r'(t)\,\dt}{\int _a^b \left(P\ihat + Q\jhat + R\khat\right) \cdot \left(\diff{x}{t}\ihat + \diff{y}{t}\jhat + \diff{z}{t}\khat\right)\,\dt}{\int _C P\,\dx + \int _C Q\,\dy + \int _C R\,\dz}{\int _C P\,\dx + Q\,\dy + R\,\dz}$
* Note the result of a line integral through a vector field is a scalar

\noteImportant{Unlike a line integral through a scalar field, $\int _C \vec F \cdot \dd\vec r = -\int _C \vec F \cdot \dd\vec r$, i.e. the direction matters}

