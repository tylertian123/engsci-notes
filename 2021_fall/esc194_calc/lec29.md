# Lecture 29, Nov 24, 2021

## Solutions to Differential Equations

* Definition: A function is a solution of a DE if the substitution of the function and its derivatives lead to an identity.
	* Example: $\diff{y}{x} - \frac{y}{x} = 2x + \frac{4}{x}$ has solution $y(x) = 2x^2 + 7x - 4$
* The basic integration process is like a very simple differential equation; $\diff{y}{x} f(x) \implies y(x) = F(x) + C$
	* There is not one unique solution to a differential equation; generally the number of free parameters in the solution to a DE is equal to its order (e.g. first order DEs have 1 constant, second order DEs have 2)
	* The values of these constants can be determined by substituting in known values from initial conditions
* The *general solution* to an n-th order DE is an n-parameter family of solutions that include all the solutions to the DE.
* The *particular solution* is a member of the general solutions family for the DE and have specific values assigned to the constants from initial values
* An *initial value problem* consists of a DE and a number of initial values for the function; a *boundary value problem* is a DE and some known values not at 0

## Separable Differential Equations

* Not all differential equations can be solved analytically, but some are easier to solve than others
* A general first-order DE can be expressed as $\diff{y}{x} = F(x, y)$; if $F(x, y)$ can be separated into $F(x, y) = g(x)f(y)$ or $\frac{g(x)}{h(y)}$, then it is *separable* and can be solved easily
	* $\diff{y}{x} = \frac{g(x)}{h(y)} \implies \int h(y)\,\dy = \int g(x)\,\dx$
		* $\diff{y}{x} = \frac{g(x)}{h(y)} \implies h(y)\diff{y}{x} = g(x) \implies \int h(y)\diff{y}{x}\,\dx = \int g(x)\,\dx \implies \int h(y)\,\dy = \int g(x)\,\dx$
		* Note: Assume $\diff{}{y}H(y) = h(y)$ then $\diff{}{x}H(y) = h(y)\diff{y}{x}$ by the chain rule, which means that $\int h(y)\diff{y}{x}\,\dx = \int \diff{}{x}H(y)\,\dy = H(y) = \int h(y)\,\dy$
* Example: $\diff{y}{x} = \frac{1}{2}e^xy^2$ with $y(0) = -1$
	* $\frac{1}{2}e^xy^2 = \frac{e^x}{\frac{2}{y^2}} \implies \int \frac{2}{y^2}\,\dy = \int e^x\,\dx \implies -2y^{-1} = e^x + C \implies y = -\frac{2}{e^x + C}$ is the general solution
	* Use the initial condition gets us $y = -\frac{2}{1 + C} = -1 \implies C = 1$ so the particular solution is $y = -\frac{2}{e^x + 1}$
	* Note this equation is nonlinear
* Example: Resistor-Inductor (RL) circuits
	* Suppose there is a resistor $I$ and inductor $L$ connected in series to a supply voltage of $E(t)$, then by Ohm's law the voltage drop across the resistor is $V = RI$ and the voltage drop across the inductor is $V = L\diff{I}{t}$, so $E(t) = L\diff{I}{t} + RI$ models the current $I$
	* Rewrite as $\diff{I}{t} = \frac{V - RI}{L} \implies g(x) = 1, h(y) = \frac{L}{V - RI} \implies \int \frac{L}{V - RI}\,\dd I = \int \,\dt$
	* After substituting in the numbers we can easily integrate and find a solution

## Orthogonal Trajectories

* Given a family of curves, an *orthogonal trajectory* is a trajectory that passes through every one of these curves at 90 degrees
* The tangent of the trajectory is everywhere orthogonal to the tangent of the curves, so $f' = -\frac{1}{g'}$
* Example: $y^2 = kx^3$
	* Using implicit differentiation, $2yy' = 3kx^2 \implies y' = \frac{3kx^2}{2y}$
	* To get the general $y'$, substitute back $y^2 = kx^3 \implies k = \frac{y^2}{x^3} \implies y' = \frac{3\left(\frac{y^2}{x^3}\right)x^2}{2y} = \frac{3}{2}\frac{y}{x}$
	* Then the tangent to the curve we want is $y' = \frac{-2x}{3y}$ and this is a separable differential equation so $\int 3y\,\dy = -\frac{2x}\,\dx \implies \frac{3y^2}{2} = -x^2 + C \implies 3y^2 + 2x^2 = 2C$
	* This is a family of ellipses

