# Lecture 18, Oct 22, 2021

## Defining the Definite Integral

* Definition: If $f$ is a function defined on $[a, b]$, let $P$ be a partition of $[a, b]$ with partition points $a = x_0 < x_1 < \cdots < x_n = b$, choose points $x_i^* \in [x_{i - 1}, x_i]$ and let $\Delta x_i = x_i - x_{i - 1}$, and $\norm*{P} = \max\{\Delta x_i\}$, then the *definite integral* of $f$ from $a$ to $b$ is $\int _a^b f(x)\,\dx \equiv \lim _{\norm*{P} \to 0} \sum _{i = 1}^n f(x_i^*)\Delta x_i$ if the limit exists
	* This is called the *Riemann* definition of an integral, since $\sum _{i = 1}^n f(x_i^*)\Delta x_i$ is a *Riemann sum*
	* More precisely $\int _a^b f(x)\,\dx = I \iff \forall \varepsilon > 0, \exists \delta > 0$ such that $\norm*{P} < \delta \implies \abs*{I - \sum _{i = 1}^n f(x_i^*)\Delta x_i} < \varepsilon$ for all partitions $P$ of $[a, b]$ and all possible choices of $x_i^* \in [x_{i - 1}, x_i]$
	* An integral doesn't need to represent an area; it can also represent other things and is a very general process
	* If the integral does represent an area, then it is either the area under a curve if the function is always positive, or a difference of areas if the function becomes negative at some point
* If $\int _a^b f(x)\,\dx$ exists, then $f$ is *integrable* over the interval $[a, b]$
* Even though the limit might not be evaluable analytically, the definite integral can still be approximated to any degree of accuracy desired
* $\int _a^b f(x)\,\dx = -\int _b^a f(x)\,\dx$ and $\int _a^a f(x)\,\dx = 0$
* Theorem: Piecewise continuity implies integrability
	* Piecewise continuity means that there is only a finite number of jump discontinuities (this does not include infinite discontinuities)
	* Proof requires more background in series and sequences so comes later
	* If $f$ goes to infinity at some point in the interval then the integral may or may not exist
* Practically, for continuous functions, we assume:
	1. Regular partition $\Delta x = \Delta x_i = \frac{b - a}{n}$
	2. Right hand or left hand end point: $x_i^* = x_i = a + i\Delta x = a + i\frac{b - a}{n}$
* With these assumptions, $\int _a^b f(x)\,\dx = \lim _{n \to \infty} \sum _{i = 1}^n f\left(a + i\frac{b - a}{n}\right)\frac{b - a}{n}$

## Integral Properties

* Just like limits, we have theorems for integrals; in fact, because the definite integral is defined as a limit, many of these are just limit properties
* Properties of integrals:
	1. Constant: $\int _a^b c\,\dx = c(b - a)$
	2. Sum: $\int _a^b \left(f(x) + g(x)\right)\,\dx = \int _a^b f(x)\,\dx + \int _a^b g(x)\,\dx$
	3. Constant multiple: $\int _a^b cf(x)\,\dx = c\int _a^b f(x)\,\dx$
	4. Combining bounds: $\int _a^b f(x)\,\dx = \int _a^z f(x)\,\dx + \int _z^b f(x)\,\dx$, note that $z$ does not have to be between $a$ and $b$!
* Order properties:
	1. If $f(x) \geq 0$ for $a \leq x \leq b$, then $\int _a^b f(x)\,\dx \geq 0$
	2. If $f(x) \geq g(x)$ for $a \leq x \leq b$, then $\int _a^b f(x)\,\dx \geq \int _a^b g(x)\,\dx$
	3. If $m \leq f(x) \leq M$ for $a \leq x \leq b$, then $m(b - a) \leq \int _a^b f(x)\,\dx \leq M(b - a)$
	4. $\abs*{\int _a^b f(x)\,\dx} \leq \int _a^b \abs*{f(x)}\,\dx$

