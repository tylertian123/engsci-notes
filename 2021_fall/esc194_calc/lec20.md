# Lecture 20, Oct 27, 2021

## The Substitution Rule

* We can use the chain rule in reverse, known as u-substitution
* Since $\diff{}{x}f(g(x))) = f'(g(x))g'(x)$, we can reverse this
* If we have $\int f(g(x))g'(x)\,\dx$, make the substitution that $\du = g'(x)\,\dx$, then $\alignedeqntwo[t]{\int f(g(x))g'(x)\,\dx}{\int f(u)\,\du}{F(u) + C}{F(g(x)) + C}$
* Example: $\int \frac{x}{\sqrt{x^2 - 4}}\,\dx$, let $u = x^2 - u$ and $\du = 2x\,\dx$, then $\alignedeqntwo[t]{\int \frac{x}{\sqrt{x^2 - 4}}\,\dx}{\frac{1}{2}\int \frac{1}{\sqrt{u}}\,\du}{\frac{1}{2} \cdot 2u^{\frac{1}{2}} + C}{\sqrt{x^2 - 4} + C}$
* Recognizing the appropriate substitution to make requires experience
* For definite integrals, we can eliminate the back substitution step by using a *change of variables formula*: $\int _a^b f(g(x))g'(x)\,\dx = \int _{g(a)}^{g(b)} f(u)\,\du$
	* Proof: Given $F' = f$, $\alignedeqn[t]{\int _a^b f(g(x))g'(x)\,\dx}{\int _a^b F'(g(x))g'(x)\,\dx}{\left[F(g(x))\right]_a^b}{F(g(b)) - F(g(a))}{\left[F(u)\right]_{g(a)}^{g(b)}}{\int _{g(a)}^{g(b)} f(u)\,\du}$
	* Example: $\int _0^1 x\sqrt{x^2 + 1}\,\dx$, let $u = x^2 + 1, \du = 2x\,\dx \implies u(0) = 1, u(1) = 2$, so $\alignedeqntwo[t]{\int _0^1 x\sqrt{x^2 + 1}\,\dx}{\int _1^2 \frac{1}{2}u^{\frac{1}{2}}\,\du}{\left[\frac{u^{\frac{3}{2}}}{3}\right]_1^2}{\frac{2\sqrt{2}}{3} - \frac{1}{3}}$
* Substitution can be used even in instances that aren't exactly $f(g(x))g'(x)$ to simplify things
	* Example: $\int x^2(2x + 1)^2\,\dx$, we can substitute $u = 2x + 1, \du = 2\,\dx$, and $x = \frac{1}{2}(u - 1)$, so the integral becomes $\frac{1}{2}\int \left(\frac{1}{2}(u - 1)\right)^2u^4\,\du$. This still needs to be expanded out, but now we only have to expand the quadratic instead of the quartic

## Using Symmetry to Evaluate Integrals

1. If $f$ is odd on $[-a, a]$ then $\int _{-a}^a f(x)\,\dx = 0$
2. If $f$ is even on $[-a, a]$ then $\int _{-a}^a f(x)\,\dx = 2\int _0^2 f(x)\,\dx$

