# Lecture 32, Dec 2, 2022

## Solving the Heat Equation

* We separated the system: $\twopiece{X'' + \lambda X = 0}{T' + \alpha^2\lambda T = 0}$
* In $X$: $X'' + \lambda X = 0$ with boundary conditions $X(0) = 0, X(L) = 0$
	* This gives us the general solution $X(x) = c_1\cos(\sqrt{\lambda}x) + c_2\sin(\sqrt{\lambda}x)$
	* Using boundary conditions we have $c_1 = 0, c_2\sin(\sqrt{\lambda}L) = 0$
	* This gives us solutions of $X_n(x) = \sin\left(\frac{n\pi x}{L}\right)$ for integers $n$, giving $\lambda _n = \frac{n^2\pi^2}{L^2}$
	* Note $X(x)$ is the eigenfunction and $\lambda$ is the eigenvalue of the $\pdiffn{2}{}{x}$ operator
* Substituting $\lambda$ into the time ODE, we get $T(t) \propto \exp\left(-\frac{n^2\pi^2\alpha^2}{L^2}t\right)$
* This gives us the set of fundamental solutions $u_n(x, t) = \sin\left(\frac{n\pi x}{L}\right)e^{-\frac{n^2\pi^2\alpha^2}{L^2}t}$
* The general solution is $u(x, t) = \sum _{n = 1}^\infty c_nu_n(x, t) = \sum _{n = 1}^\infty c_n\sin\left(\frac{n\pi x}{L}\right)e^{-\frac{n^2\pi^2\alpha^2}{L^2}t}$
* With the initial condition $f(x) = u(x, 0) = \sum _{n = 1}^\infty \sin\left(\frac{n\pi x}{L}\right)$
* Now we can get $c_n$ as the Fourier coefficients: $c_n = \frac{2}{L}\int _0^L f(x)\sin\left(\frac{n\pi x}{L}\right)\,\dx$

