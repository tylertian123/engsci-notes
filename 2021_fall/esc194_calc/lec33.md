# Lecture 33, Dec 3, 2021

## Second Order Linear Homogeneous ODEs With Constant Coefficients: Cases

* Depending on the discriminant of the auxiliary equation, 3 cases can occur:
	1. $a^2 - 4b > 0$ -- Two real and distinct roots, so the solutions are $e^{r_1x}$ and $e^{r_2x}$ and we have a general solution $y = c_1e^{r_1x} + c_2e^{r_2x}$
	2. $a^2 - 4b = 0$ -- Two equal roots, so one solution is $y_1 = e^{rx}$
		* The other solution turns out to be $y_2 = xe^{rx}$
		* Plugging in $y_2$ gets us $(xr^2e^{rx} + re^{rx} + re^{rx}) + a(xre^{rx} + e^{rx}) + bxe^{rx} = (r^2 + ar + b)xe^{rx} + (2r + a)e^{rx} = 0$
	3. $a^2 - 4b < 0$ -- Two complex roots $r_1 = \alpha + i\beta$, $r_2 = \alpha - i\beta$
		* $\alignedeqntwo[t]{y}{c_1e^{(\alpha + i\beta)x} + c_2e^{(\alpha - i\beta)x}}{c_1e^{\alpha x}(\cos(\beta x) + i\sin(\beta x)) + c_2e^{\alpha x}(\cos(\beta x) - i\sin(\beta x))}{e^{\alpha x}((c_1 + c_2)\cos(\beta x) + i(c_1 - c_2)\sin(\beta x))}{e^{\alpha x}(A\cos(\beta x) + B\sin(\beta x))}$
* To evaluate the constants we need known values
	* For an IVP this is the values of $y(0)$ and $y'(0)$, and for a boundary value problem this may be $y$ at two values, $y'$ at two values, or anything else
		* "You can't always fit a square peg into a round hole"
	* IVPs in this case always have unique solutions, while boundary value problems don't
* Example IVP: $y'' + y' - 2y = 0$, $y(0) = 2, y'(0) = 5$
	* Characteristic equation: $r^2 + r - 2 = 0 \implies r_1 = -2, r_2 = 1 \implies y = C_1e^x + C_2e^{-2x}$
		* $y' = C_1e^x - 2C_2e^{-2x}$
	* Plugging in initial values: $\twopiece{2 = C_1 + C_2}{5 = C_1 - 2C_2} \implies \twopiece{C_1 = 3}{C_2 = -1}$
	* $y = 3e^x - e^{-2x}$
* Example BVP: $y'' + 4y' + 5y = 0$, $y(0) = 1, y\left(\frac{\pi}{2}\right) = 0$
	* Characteristic equation: $r^2 + 4r + 5 = 0 \implies r = -2 \pm i \implies y = e^{-2x}\left(A\cos x + B\sin x\right)$
	* Apply boundary conditions: $\twopiece{1 = 1(A \cdot 1 + B \cdot 0) = A \implies A = 1}{0 = e^{-\pi}(A \cdot 0 + B \cdot 1) = Be^{-\pi} \implies B = 0}$
	* $y = e^{-2x}\cos x$
	* If we change the boundary conditions to $y(0) = 1, y(\pi) = 0$, then the second equation becomes $0 = e^{-2\pi}(-A + B \cdot 0) = -Ae^{-2\pi} \implies A = 0$, but from the first equation $A = 1$, therefore these boundary conditions make the equation unsolvable

## Nonhomogeneous Linear ODEs (Constant Coefficients)

* $y'' + ay' + by = \phi(x)$ is a nonhomogeneous linear ODE with constant coefficients
	* Its associated homogeneous linear ODE, the *complementary equation*, is $y'' + ay' + by = 0$
* Theorem: The general solution to a nonhomogeneous second order linear ODE with constant coefficients is $y(x) = y_p(x) + y_c(x)$ where $y_p(x)$ is a particular solution and $y_c(x)$ is the solution of the complementary equation
	* Proof: Given $y_{p_1}(x)$ and $y_{p_2}(x)$, we can show that the latter is a linear combination of the first and $y_c(x)$
		* Let $z = y_{p_1} - y_{p_2}$, if we can show that $z$ is a solution to the complementary solution then we can prove this
		* Since $y_{p_2} = y_{p_1} - z \implies y_{p_2}' = y_{p_1}' - z'$ and $y_{p_2}'' = y_{p_1}'' - z''$
		* $\alignedimp[t]{y_{p_2}'' + ay_{p_2}' + by_{p_2} = \phi(x)}{(y_{p_1}'' - z'') + a(y_{p_1}' - z') + b(y_{p_1} - z) = \phi(x)}{(y_{p_1}'' + ay_{p_1}' + by_{p_1}) - (z'' + az' + bz) = \phi(x)}{z'' + az' + bz = (y_{p_1}'' + ay_{p_1}' + by_{p_1}) - \phi(x)}{z'' + az' + bz = 0}$
		* Therefore $z$ is a solution to the complementary equation; thus any solution is a linear combination of one particular solution and the complementary solution
	* Thus we only need to find one particular solution to the nonhomogeneous equation, and then add on the solution to the complementary equation to obtain all solutions
* To find $y_p$, we can use one of the methods below:

### Method of Undetermined Coefficients

* This method is easier to do but more limited
* Assume that $y_p$ has the same form as $\phi(x)$, take derivatives and substitute, and then solve for the undetermined coefficients
* Example: $y'' - 6y' + 8y = x^2 + 2x$
	* Complementary equation is $y'' - 6y' + 8y = 0$, solving the auxiliary equation gets us $r_1 = 2, r_2 = 4$ so $y_c = C_1e^{2x} + C_2e^{4x}$
	* Here $\phi(x)$ is a second order polynomial so try $y_p$ in the same form, so $y_p = Ax^2 + Bx + C$
		* $y_p' = 2Ax + B$, $y_p'' = 2A$
	* Substitute the trial solution: $2A - 6(2Ax + B) + 8(Ax^2 + Bx + C) = x^2 + 2x \implies 8Ax^2 + (-12A + 8B)x + (2A - 6B + 8C) = x^2 + 2x$
		* From this we know $\threepiece{8A = 1}{-12A + 8B = 2}{2A - 6B + 8C = 0}$
		* We can solve for $A = \frac{1}{8}, B = \frac{7}{16}, C = \frac{19}{64}$
	* $y_p = \frac{1}{8}x^2 + \frac{7}{16}x + \frac{19}{64}$
	* $y = \frac{1}{8}x^2 + \frac{7}{16}x + \frac{19}{64} + C_1e^{2x} + C_2e^{4x}$
* Examples of trial solutions:
	* $\phi(x) = e^{3x} \implies y_p = Ae^{3x}$
	* $\phi(x) = C\cos(kx)$ *or* $C\sin(kx)$ then $y_p = A\cos(kx) + B\sin(kx)$
	* $\phi(x) = x^2\sin(kx) \implies y_p = (Ax^2 + Bx + C)\cos(kx) + (Dx^2 + Ex + F)\sin(kx)$
* If $\phi(x)$ is a sum, then we can use the superposition principle: If $y'' + ay' + by = \phi _1(x) + \phi _2(x)$, then $\twopiece{y_{p_1}'' + ay_{p_1}' + by_{p_1} = \phi _1(x)}{y_{p_2}'' + ay_{p_2}' + by_{p_2} = \phi _2(x)} \implies y_p = y_{p_1} + y_{p_2}$
* If the obvious trial solution is a multiple of $y_c$, then multiply $y_p$ by $x$
	* Example: $y'' + y = \sin x$ has $y_c = C_1\cos x + C_2\sin x$, so try $y_p = Ax\cos x + Bx\sin x$
* Example: $y'' - y' - 6y = e^{-2x}$
	* $r^2 - r - 6 = 0 \implies r_1 = -2, r_2 = 3 \implies y_c = C_1e^{-2x} + C_2e^{3x}$
	* Try trial solution $y_p = Axe^{-2x} \implies y_p' = Ae^{-2x} - 2Axe^{-2x} \implies y_p'' = -2Ae^{-2x} - 2Ae^{-2x} + 4Axe^{-2x} = (4Ax - 4A)e^{-2x}$
	* $(4Ax - 4A)e^{-2x} - (A - 2Ax) - 6Axe^{-2x} = e^{-2x} \implies \twopiece{4A + 2A - 6A = 0}{-4A - A = 1} \implies A = -\frac{1}{5}$
	* Therefore the general solution is $y = C_1e^{-2x} + C_2e^{3x} - \frac{1}{5}xe^{-2x}$
* This method guesses for the answer so it's not always possible to solve for the coefficients

