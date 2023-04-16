# Lecture 3, Sep 15, 2021

## Motion in 1D

### The Calculus of Motion

* The calculus hierarchy: $x(t) \xrightleftharpoons[\int\,\dt]{\diff{}{t}} v(t) \xrightleftharpoons[\int\,\dt]{\diff{}{t}} a(t)$
	* Integration only tells you how much the functions changed, not where they started
* Essential calculus: $\diff{}{t} t^n = nt^{n - 1} \implies \int nt^{n - 1}\,\dt = t^n + C \implies \int t^n\,\dt = \frac{1}{n + 1}t^{n + 1}$
* Example: $x(t) = 2[m] + 3\left[\si{m\per s^3}\right]t^3$ (square brackets denote units)
	* $v(t) = \diff{}{t}\left(2 + 3t^3\right) = 0 + 9t^2$
* Example: $v(t) = 3\left[\si{m/s}\right]$ find $x(t)$ for $x(0) = 2\left[\si{m}\right]$
	* $x(0)$ is the constant of integration
* When differentiating by time, a unit of time is introduced in the denominator; e.g. $\diff{}{t}\left[\si{m}\right] = \left[\si{m/s}\right]$

### Units of Motion

Quantity | Symbol | Units
--- | --- | ---
time | $t$ | $\mathrm{T}$
position | $x$ or $\vec{r}$ in multiple dimensions | $\mathrm{L}$
velocity | $v$ or $\vec{v}$ in multiple dimensions | $\mathrm{L/T}$
acceleration | $a$ or $\vec{a}$ in multiple dimensions | $\mathrm{L/T}^2$
speed | $\abs{v}$ or $\norm*{\vec{v}}$ in multiple dimensions | $\mathrm{L/T}$

