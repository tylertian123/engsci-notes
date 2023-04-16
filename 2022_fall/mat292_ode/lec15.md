# Lecture 15, Oct 13, 2022

## Errors in Numerical Approximations

* Round-off errors
* Euler's method relies on successive linear approximations
* Global truncation error: $E_n = \phi(t_n) - y_n$, error accumulated across all steps
	* We use $y_n$ instead of $\phi(t_n)$ to determine $y_{n + 1}$ so errors can accumulate
* Local truncation error: Error due to the linear approximation only

### Local Truncation Error

* Consider a general ODE $y' = f(t, y)$ with solution $\phi(t)$, so $\phi'(t) = f(t, \phi(t))$
* With Euler's method, $y_{n + 1} = y_n + hf(t_n, y_n)$
* The error is $\abs{y_{n + 1} - \phi(t_{n + 1})}$
* Using a Taylor approximation: $\phi(t_{n + 1}) = \phi(t_n) + \phi'(t_n)h + \frac{1}{2}\phi''(\bar t_n)h^2$ where $t_n < \bar t_n < t_n + h$
	* This is an exact equality due to $\bar t_n$ (Taylor's Remainder Theorem)
	* Note we assumed that $\phi$ is twice-differentiable and continuous in its derivatives
* The error is $\abs{\phi(t_{n + 1} - y_{n + 1})} = (\phi(t_n) - y_n) + h(f(t_n, \phi(t_n)) - f(t_n, y_n)) + \frac{1}{2}\phi''(\bar t_n)h^2$
	* The term $\phi(t_n) - y_n = 0$ because this is a local error
	* Since $\phi(t_n) = y_n$ the middle term is also 0
	* Therefore the error is $\frac{1}{2}\phi''(\bar t_n)h^2$
* To bound $\frac{1}{2}\phi''(\bar t_n)h^2$, we assume $\abs{\phi''(t)} \leq M$ so $\abs{e_n} \leq \frac{Mh^2}{2}$

### Global Truncation Error

* The number of steps is $n = \frac{T - t_0}{h}$
* The global truncation error can be approximated as $n\frac{Mh^2}{2} = \frac{(t - t_0)Mh}{2}$
* Notice the global truncation error decreases linearly with $h$
	* Euler's method is a first-order method because the power of $h$ is 1

### Assumptions

* For $\phi''$  to be continuous to invoke the Taylor series, we need $\pdiff{f}{t}(t, \phi(t)) + \pdiff{f}{y}(t, \phi(t))f(t, \phi(t))$ continuous since $\phi' = f(t, \phi(t))$
	* This means we need $f, \pdiff{f}{x}$ and $\pdiff{f}{y}$ are continuous

