# Lecture 9, Sep 29, 2021

## The Derivative

* Define the derivative $f'(a) \equiv \lim _{h \to 0}\frac{f(a + h) - f(a)}{h}$ if it exists, where $a \in$ domain of $f(x)$
* Example: $f(x) = x^3$, $f'(1)$
	* $\alignedeqntwo[t]{f'(1)}{\lim _{h \to 0}\frac{f(1 + h) - f(1)}{h}}{\lim _{h \to 0} \frac{(1 + h)^3 - 1^2}{h}}{\lim _{h \to 0}\frac{1 + 3h + 3h^2 + h^3 - 1}{h}}{\lim _{h \to 0}\left[h^2 + 3h + 3\right]}{3\text{ by the Polynomial LT}}$
	* $h$ disappears here; it is a dummy variable and the derivative does not depend on it
* With the rigorous definition of the derivative, we can now define rigorously the slope of a tangent, velocity at an instant, etc

## Derivative as a Function

* $f'(a)$, the derivative of $a$, is just a number
* We can define a new function $f'(x) \equiv \lim _{h \to 0}\frac{f(x + h) - f(x)}{h}$; now both $x$ and $h$ are variables
* Just like before, $h$ will still disappear when the limit is evaluated, so $f'(x)$ is only a function of $x$
* In evaluating the limit, we treat $x$ as if it were a constant
* If $f'(a)$ exists at $a$, then we define $f(x)$ to be *differentiable* at $a$
	* If $f(x)$ is differentiable at all $x \in$ domain of $f(x)$, then we define $f(x)$ to be a *differentiable function*
* Example: Prove $f(x) = x^n \implies f'(x) = nx^{n - 1}$ for positive integer $n$
	* Note the binomial theorem: $\alignedeqn[t]{(a + b)^n}{\sum _{k = 0}^n \binom{n}{k}a^{n - k}b^k}{a^n + na^{n - 1}b + \frac{n(n - 1)}{2!}a^{n - 2}b^2 + \frac{n(n - 1)(n - 2)}{3!}a^{n - 3}b^3 + \cdots}$
	* $\alignedeqntwo[t]{f'(x)}{\lim _{h \to 0}\frac{f(x + h) - f(x)}{h}}{\lim _{h \to 0}\frac{(x + h)^n - x^n}{h}}{\lim _{h \to 0}\frac{x^n + nx^{n - 1}h + \frac{n(n - 1)}{2}x^{n - 2}h^2 + \cdots + h^n - x^n}{h}}{\lim _{h \to 0}\left[nx^{n - 1} + \frac{n(n - 1)}{2}x^{n - 2}h + \cdots + h^{n - 1}\right]}{nx^{n - 1}}$

