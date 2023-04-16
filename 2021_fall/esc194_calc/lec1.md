# Lecture 1, Sep 13, 2021

## Defining the Derivative

* The start of this course involves defining the derivative *rigorously and logically*
* We can't simply define it as the slope of a tangent line or instantaneous speed because neither are well-defined
* Example: Consider a falling object with distance covered $d(t) = 5t^2$, which is an algebraic approximation that comes from experiments; what is the instantaneous speed at $t = 1$?
	* Consider the secant line between $d(t)$ and $d(t + x)$: $f(x) \equiv \frac{d(1 + x) - d(1)}{x} = \frac{5(1 + x)^2 - 5(1)}{x} = \frac{5 + 10x + 5x^2 - 5}{x} = \frac{10x + 5x^2}{x} = (10 + 5x)\left(\frac{x}{x}\right)$
	* If $\frac{x}{x} = 1$ for all $x$ then the instantaneous speed is $f(0) = 1$; however this is **not true** since division by zero is undefined

## Defining The Limit

* The limit is invented by mathematicians to get around division by zero
* Define $\frac{a}{b}$ as $a\frac{1}{b}$; define $\frac{1}{b}$ as the number where $b \cdot \frac{1}{b} = 1$
	* This definition excludes $b = 0$ because (theorem) $0$ times any number is 0
	* We could choose to include $b = 0$ but in that case $b \cdot \frac{1}{b} = 0$ and so $0 = 1$ and all numbers collapse to $0$, which is not very useful or fun
* Intuitive definition of $\lim _{x \to a} f(x)$: The number that $f(x)$ gets closer and closer to when $x$ gets closer and closer to $a$
	* From a rigorous point of view, this is not very useful
* Start by defining a simpler type of limit: e.g. $g(x) = 2 + \frac{1}{x^2}$ and $\lim _{x \to \infty} g(x)$
	* The limit exists if we can always find some $x$ large enough such that $g(x)$ is arbitrarily close to $2$, e.g. within $\pm 10^{-10}$; for all $x > x_0$, $g(x)$ is within $10^{-10}$ of $2$
	* We can try some big $x_0$, e.g. $10^{100}$, then $x > x_0 \implies \frac{1}{x^2} < 10^{-200} \implies g(x) = 3 + \frac{1}{x^2} < 3 + 10^{-10}$
		* The other side of the inequality is satisfied by $x^2 \geq 0 \implies \frac{1}{x^2} \geq 0 \implies g(x) > 3 > 3 - 10^{-10}$
	* $10^{-10}$ was arbitrary; we can generalize this: the limit is $2$ if for any small $\varepsilon > 0$ there exists an $x_0$ such that for all $x > x_0$, $g(x)$ is within $\varepsilon$ of $2$
		* Take $x_0 = \frac{1}{\sqrt{\varepsilon}} \implies x > \frac{1}{\sqrt{\varepsilon}} \implies x^2 > \frac{1}{\varepsilon} \implies \frac{1}{x^2} < \varepsilon \implies g(x) < 3 + \varepsilon$
	* This is the *guess-and-test* method: assume the limit exists, guess a value, and test it against $\varepsilon$

