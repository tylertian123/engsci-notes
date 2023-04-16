# Lecture 16, Oct 13, 2022

## Fundamental Theorem for Line Integrals

* Recall that the fundamental theorem for single integrals is $\int _a^b f'(x)\,\dx = f(b) - f(a)$

\noteDefn{A vector field $\vec F$ is conservative if $\vec F = \del f$, i.e. it is the gradient of some scalar function $f$ \tcblower The scalar function $f$ is known as the potential function of $\vec F$}

* Suppose $\vec F$ is conservative and let $C$ be a smooth curve given by $\vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat, t \in [a, b]$
* $\int _C \vec F(x, y, z)\,\dd\vec r = \int _C \del f(x, y, z)\,\dd\vec r = \int _a^b \del f(\vec r(t)) \cdot \vec r'(t)\,\dt$
	* Notice $f(\vec r(t)) \cdot \vec r'(t) = \left(\pdiff{f}{x}\ihat + \pdiff{f}{y}\jhat + \pdiff{f}{z}\khat\right) \cdot \left(\diff{x}{t}\ihat + \diff{y}{t}\jhat + \diff{z}{t}\khat\right)$
	* From the chain rule, this is equal to $\diff{f}{t}$
	* Therefore $\int _C \vec F(x, y, z)\,\dd\vec r = \int _a^b \diff{}{t}f(\vec r(t))\,\dt = f(\vec r(b)) - f(\vec r(a))$

\noteThm{Fundamental theorem for line integrals: $$\int _C \vec F \cdot \dd\vec r = \int _C \del f \cdot \dd\vec r = f(\vec r(b)) - f(\vec r(a))$$ \tcblower As a consequence $\vec F = \del f \implies \oint _C \vec F \cdot \dd\vec r = \oint _C \del f \cdot \dd\vec r = 0$ where $C$ is any closed curve}

* For a conservative vector field, line integrals are path independent
* This also works in reverse; if $\oint _C \vec F \cdot \dd\vec r = 0$ for all piecewise smooth closed curves $C$, then $\vec F$ is conservative

## Determining Conservativeness

* If a vector field is conservative, then $\vec F(x, y) P(x, y)\ihat + Q(x, y)\jhat = \del f$
* Therefore $P = \pdiff{f}{x}, Q = \pdiff{f}{y}$, so by Clairaut's Theorem $\ppdiff{f}{y}{x} = \ppdiff{f}{x}{y} \implies \pdiff{P}{y} = \pdiff{Q}{x}$

\noteImportant{A two variable function $\vec F(x, y) = P(x, y)\ihat + Q(x, y)\jhat$ is conservative if $$\pdiff{P}{y} = \pdiff{Q}{x}$$ \tcblower For a three-variable function $\vec F(x, y, z) = P(x, y, z)\ihat + Q(x, y, z)\jhat + S(x, y, z)\khat$, the requirement is $$\pdiff{P}{y} = \pdiff{Q}{x}, \pdiff{Q}{z} = \pdiff{S}{y}, \pdiff{P}{z} = \pdiff{S}{x}$$}

* For multiple variables, all mixed partials have to be equal

