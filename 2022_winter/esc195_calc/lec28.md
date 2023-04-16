# Lecture 28, Mar 22, 2022

## Continuity of Multivariable Functions

* Definition: A multivariable function $f$ is continuous at $\vec x_0$ if $\lim _{\vec x \to \vec x_0} f(\vec x) = f(\vec x_0)$
	* Example: $f(x, y) = \frac{x^2 + 3xy}{x^2 - 2y}$ is continuous everywhere except $x^2 - 2y = 0$, i.e. the curve $y = \frac{1}{2}x^2$ is excluded
* Theorem: Continuity of composite functions: If $g$ is continuous at $\vec x_0$ and $f$ is continuous at $g(\vec x_0)$ then $f(g(\vec x))$ is continuous at $\vec x_0$
	* As in a vector valued function case, the composition can only go in one direction
* If $f(\vec x)$ is continuous at $\vec x_0$, then it is continuous in both variables; however continuity in both variables does not imply continuity as a whole
	* $f(\vec x)$ is continuous at $\vec x_0 \implies \lim _{x \to x_0} f(x, y_0) = f(x_0, y_0)$ and $\lim _{y \to y_0} f(x_0, y) = f(x_0, y_0)$
	* Example: Consider $f(x, mx) = \frac{m^4x^6}{x^4 + m^8x^8}$ from last lecture; the limit exists if approaching from any direction in a straight line so it works for the $x$ and $y$ directions, but any other path yields a different limit
	* Example: $f(x, y) = \twocond{\frac{xy^2}{x^3 + y^3}}{(x, y) \neq (0, 0)}{0}{(x, y) = (0, 0)}$ is continuous along both axes, but along the line $y = 3x \implies f(x, 3x) = \frac{9x^3}{28x^3} = \frac{9}{28}$ so the function is not continuous

## Partial Derivatives

* Partial derivatives treat all variables except one as a constant and differentiate with respect to that variable
* Definition: Partial derivative of $f$ with respect to $x$ is $f_x(x, y) = \pdiff{}{x}f(x, y) = \lim _{h \to 0} \frac{f(x + h, y) - f(x, y)}{h}$
	* Similarly $f_y(x, y) = \pdiff{}{y}f(x, y) = \lim _{h \to 0} \frac{f(x, y + h) - f(x, y)}{h}$
* Interpret as slicing the graph with a plane, and then taking the slope of the tangent line of the curve on that plane
* Since partial derivatives are also functions of multiple variables, higher order partial derivatives can be taken, with respect to the same variable or different variables
	* We can mix partial derivatives, e.g. $\pdiff{}{y}\left(\pdiff{f}{x}\right) = \ppdiff{f}{y}{x}$
	* Note in the notation $\ppdiff{f}{y}{x}$, the derivative is first taken with respect to $x$ and then $y$, i.e. denominator is read right-to-left; in the notation $f_{xy}$, the subscript is read left-to-right, i.e. derivative is taken with respect to $x$ and then $y$
* Clairaut's Theorem (symmetry of second partial derivatives): $\ppdiff{f}{y}{x} = \ppdiff{f}{x}{y}$ on every open set for which $f, \pdiff{f}{x}, \pdiff{f}{y}, \ppdiff{f}{x}{y}, \ppdiff{f}{y}{x}$ are continuous
	* This applies to 3 variables as well for $\ppdiff{f}{z}{y} = \ppdiff{f}{y}{z}$, etc

## Partial Differential Equations

* When derivatives of more than one variable occur in a relation, it is a partial differential equation
* Example: Laplace's Equation: $\pdiffn{2}{f}{x} + \pdiffn{2}{f}{y} = 0$ (fluid flow)
* Example: 1D wave equation: $\pdiffn{2}{f}{t} = a^2\pdiffn{2}{f}{x}$

