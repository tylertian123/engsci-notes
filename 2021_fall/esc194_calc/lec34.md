# Lecture 34, Dec 6, 2021

## Variation of Parameters

* A more robust method of finding the particular solution
* The complementary solution is $y_c = C_1y_1(x) + C_2y_2(x)$; to begin this method, we try allowing these constants $C_1$ and $C_2$ to vary
* Let the particular solution $y_p = u_1(x)y_1(x) + u_2(x)y_2(x)$, now we solve for $u_1$ and $u_2$
	* To fully specify these functions we need 2 conditions; the first one will be the differential equation, and the second one will be chosen to make things convenient
* $y_p' = u_1y_1' + u_1'y_1 + u_2y_2' + u_2'y_2$, choose $u_1'y_1 + u_2'y_2 = 0 \implies y_p' = u_1y_1' + u_2y_2' \implies y_p'' = u_1y_1'' + u_1'y_1' + u_2y_2'' + u_2'y_2'$
* Subbing it back into the DE: $\alignedimp[t]{(u_1y_1'' + u_1'y_1' + u_2y_2'' + u_2'y_2') + a(u_1y_1' + u_2y_2') + b(u_1y_1 + u_2y_2) = \phi(x)}{(y_1'' + ay_1' + by_1)u_1 + (y_2'' + ay_2' + by_2)u_2 + u_1'y_1' + u_2'y_2' = \phi(x)}{u_1'y_1' + u_2'y_2' = \phi(x)}$
	* $\twopiece{u_1'y_1' + u_2'y_2' = \phi(x)}{u_1'y_1 + u_2'y_2 = 0}$ has 2 equations and 2 unknowns and allows us to solve for $u_1$ and $u_2$
	* To solve this in general: $u_1' = -\frac{y_2\phi}{y_1y_2' - y_2y_1'}, u_2' = \frac{y_1\phi}{y_1y_2' - y_2y_1'}$
* Example: $y'' + y' - 2y = e^x$
	* $r^2 + r - 2 = 0 \implies r_1 = -2, r_2 = 1 \implies y_c = C_1e^x + C_2e^{-2x} \implies y_1 = e^x, y_2 = e^{-2x}$
	* Impose $\twopiece{u_1'e^x - 2u_2'e^{-2x} = e^x}{u_1'e^x + u_2'e^{-2x} = 0}$
	* $u_2'e^{-2x} = -u_1'e^x \implies u_1'e^x + 2u_1'e^x = e^x \implies 3u_1' = 1 \implies u_1 = \frac{1}{3}x$
		* Note that we don't need to worry about the constant of integration since this would simply become a part of the constant in $y_c$
	* $u_2'e^{-2x} = -\frac{1}{3}e^{x} \implies u_2' = -\frac{1}{3}e^{3x} \implies u_2 = -\frac{1}{9}e^{3x}$
	* $y_p = \frac{1}{3}xe^x - \frac{1}{9}e^x \implies y = C_1e^x + C_2e^{-2x} + \frac{1}{3}xe^x - \frac{1}{9}e^x = C_1e^x + C_2e^{-2x} + \frac{1}{3}xe^x$
* Example: $y'' + y = 3\sin x\sin(2x)$
	* $\phi$ does not lead to an obvious trial solution, so using the method of undetermined coefficients is hard in this case
	* $r^2 + 1 = 0 \implies r = \pm i \implies y_c = A\cos x + B\sin x$
	* Let $y_p = u_1(x)\cos x + u_2(x)\sin x$
	* $\twopiece{u_1'\cos x + u_2\sin x = 0}{-u_1'\sin x + u_2'\cos x = 3\sin x\sin(2x)}$
	* $\alignedeqntwo[t]{u_1'}{-\frac{y_2\phi}{y_1y_2' - y_2y_1'}}{-\frac{-3\sin^2x\sin(2x)}{\cos^2x + \sin^2x}}{-3\sin^2x\sin(2x)}$
	* $\alignedeqntwo[t]{u_1}{\int -3\sin^2x\sin(2x)\,\dx}{-3\int \sin^2x(2\sin x\cos x)\,\dx}{-6\int \sin^3x\cos x\,\dx}{-6\int v^3\,\dv}{\frac{-3}{2}v^4}{\frac{-3}{2}\sin^4x}$
	* $u_2' = 3\cos x\sin x\sin(2x)$
	* $\alignedeqntwo[t]{u_2}{\int 3\cos x\sin x\sin(2x)\,\dx}{3\int \left(\frac{1}{2}\sin(2x)\right)\sin(2x)\,\dx}{\frac{3}{2}\int \sin^2(2x)\,\dx}{\frac{3}{2}\int \frac{1}{2}(1 - \cos(4x))\,\dx}{\frac{3}{4}\left(x - \frac{1}{4}\sin(4x)\right)}$
	* $y_p = -\frac{3}{2}\cos x\sin^4x + \frac{3}{16}(4x - \sin(4x))\sin x \implies y = -\frac{3}{2}\cos x\sin^4x + \frac{3}{16}(4x - \sin(4x))\sin x + A\cos x + B\sin x$

