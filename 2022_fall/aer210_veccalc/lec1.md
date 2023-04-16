# Lecture 1, Sep 8, 2022

## Partial Integration

\noteDefn{A variable which is kept constant during integration is called a \textit{parameter}}

* The result of integration is a function of the parameter
* This type of integration is called a *partial integral*, since other variables other than the variable of integration are held constant
	* Opposite of partial differentiation
	* $\int _a^b f(x, y)\,\dx$ is a partial integral wrt $x$

## Iterated Integrals

\noteThm{Fubini's Theorem: $\int _a^b\int _c^d f(x, y)\,\dy\,\dx = \int _c^d\int _a^b f(x, y)\,\dx\,\dy$}

* The order of integration for a double integral can be switched ("you can slice a region either way")
	* The counterpart is Clairaut's Theorem (symmetry of second partial derivatives)

\noteNote{In the special case where $f(x, y) = g(x)h(y)$, $$\int _c^d \int _a^b f(x, y)\,\dx\,\dy = \int _a^b g(x)\,\dx\int _c^d h(y)\,\dy$$}

