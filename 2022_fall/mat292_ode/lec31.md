# Lecture 31, Dec 1, 2022

## Example

* System: $y'' + 2y' + 5y = g(t)$
* Transfer function: $H(s) = \frac{1}{s^2 + 2s + 5} = \frac{1}{(s + 1)^2 + 4}$
* Impulse response: $h(s) = \ilaplace{H(s)} = \frac{1}{2}e^{-t}\sin(2t)$
* Homogeneous solution: $\lambda = -1 \pm 2i \implies y_g(t) = e^{-t}(c_1\cos(2t) + c_2\sin(2t))$
* Particular solution (forced response): $h * g = \int _0^t \frac{1}{2}e^{-(t - \tau)}\sin(2(t - \tau))g(\tau)\,\dtau$
* General solution: $y(t) = c_1e^{-t}\cos(2t) + c_2e^{-t}\sin(2t) + \int _0^t \frac{1}{2}e^{-(t - \tau)}\sin(2(t - \tau))g(\tau)\,\dtau$

## Partial Differential Equations (PDEs)

* Examples:
	* Heat equation $\pdiff{u}{t} = D\left(\pdiffn{2}{u}{x} + \pdiffn{2}{u}{y}\right)$
		* Heat dispersing in an object
	* Wave equation: $\pdiffn{2}{y}{t} = c^2\pdiffn{2}{y}{x}$
	* Laplace equation: $\pdiffn{2}{V}{x} + \pdiffn{2}{V}{y} = 0$
* PDEs have more than one variable, whereas ODEs only have one variable $x$ or $t$
* Consider 1D heat conduction along a cylinder, with temperature $u(x, t)$
* PDE: $u_t = a^2u_{xx}$, for $0 < x < L, t > 0$
	* $\alpha$ is the thermal diffusivity
	* Intuition: Points that are more "concentrated" in heat will have that heat spread out faster
	* Initial conditions: $u(x, 0) = f(x), 0 \leq x \leq L$
		* Initial temperature distribution
	* Boundary conditions: $u(0, t) = 0, u(L, t) = 0, t > 0$
		* Temperature at both ends of the rod is zero
* How would we approach something like this?
* Separation of variables: guess solution $u(x, t) = X(t)T(t)$
	* Substitution into ODE: $\frac{X''}{x} = \frac{1}{\alpha^2}\frac{T'}{T}$
	* Notice the left hand side is only a function of $x$ while the right hand side is only a function of $t$, so for both to equal each other for all $x$ and $t$, both must be constants
	* $\frac{X''}{X} = \frac{1}{\alpha^2}\frac{T'}{T} = -\lambda$
	* This gives us two ODEs: $\twopiece{X'' + \lambda X = 0}{T' + \alpha^2\lambda T = 0}$

