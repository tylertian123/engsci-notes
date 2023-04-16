# Lecture 26, Nov 14, 2022

## Solving ODEs With Laplace Transforms

* Apply the Laplace transform to both sides of an ODE and we can turn the differential equation into an algebraic equation in the Laplace domain
* Instead of solving the ODE in time domain directly, we apply the Laplace transform, solve the algebraic equation in the Laplace domain, and then use the inverse Laplace transform to turn it back into the time domain
* When we rearrange for $Y(s)$ we usually get a rational function, the ratio of one polynomial to another

## Inverse Laplace Transform

* $f(t) = \ilaplace{F}(t) = \frac{1}{2\pi i}\lim _{T \to \infty}\int _{\gamma - iT}^{\gamma + iT} e^{st}F(s)\,\ds$
	* Problem: We don't know how to do this integral!

\noteThm{Given two piecewise continuous, exponential order functions $f(t), g(t)$ such that $$\laplace{f} = \laplace{g}$$ Then $f(t) = g(t)$ at all points where both $f$ and $g$ are continuous}

* This theorem guarantees us that when we apply the inverse transform, we actually get the solution provided we have continuity
* Note the inverse Laplace transform is linear like the forward transform
* Example: $\frac{s + 1}{s^2 + 2s + 5}$
	* Complete the square: $\frac{s + 1}{(s + 1)^2 + 4}$
	* Note $e^{at}\cos(bt) = \frac{s - a}{(s - a)^2 + b^2}$
	* Using the table, $\ilaplace{\frac{s + 1}{s^2 + 2s + 5}} = e^{-t}\cos(2t)$
* Often we get something that's not in the table; in general if we get $F(s) = \frac{P(s)}{Q(s)}$, then we need to do partial fractions
* Let $Q(s) = (s - s_1)(s - s_2)\cdots(s - s_n)$ then we can rewrite $F(s) = \frac{a_1}{s - s_1} + \frac{a_2}{s - s_2} + \cdots + \frac{a_n}{s - s_n}$
	* With repeated roots, if $Q(s) = (s - s_0)^k$ then $F(s) = \frac{a_1}{s - s_0} + \frac{a_2}{(s - s_0)^2} + \cdots + \frac{a_k}{(s - s_0)^k}$
	* With complex roots, $Q(s) = (s - (\mu + i\nu))^k(s - (\mu - i\nu))^k$ then $F(s) = \frac{a_1(s - \mu) + b_1\nu}{(s - \mu)^2 + \nu ^2} + \cdots + \frac{a_k(s - \mu) + b_k\nu}{((s - \mu)^2 + \nu^2)^k}$
* Example: $\frac{s - 2}{s^2 - 4s - 5}$
	* $Q = (s - 5)(s + 1)$
	* $\frac{s - 2}{(s - 5)(s + 1)} = \frac{A}{(s - 5)} + \frac{B}{(s + 1)}$
	* $s - 2 = (s + 1)A + (s - 5)B \implies s - 2 = s(A + B) + (A - 5B) \implies \twopiece{A + B = 1}{A - 5B = -2}$
	* $A = \frac{1}{2}, B = \frac{1}{2}$
	* $\frac{s - 2}{s^2 - 4s - 5} = \frac{1}{2(s - 5)} + \frac{1}{2(s + 1)}$
	* From the table, $\ilaplace{\frac{s - 2}{s^2 - 4s - 5}} = \frac{1}{2}e^{5t} + \frac{1}{2}e^{-t}$

