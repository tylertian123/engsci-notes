# Lecture 2, Jan 11, 2022

## Indeterminate Forms and L'Hopital's Rule

* Theorem: L'Hopital's Rule ($\frac{0}{0}$): if $f(x), g(x) \to 0$ as $x \to c$ (or a one sided or infinite limit) and $\frac{f'(x)}{g'(x)} \to L$, then $\frac{f(x)}{g(x)} = L$
	* We can apply it multiple times if the derivative limit ends up being 0/0 again, e.g. $\lim _{x \to 0} \frac{e^x - x - 1}{3x^2}$ requires using L'Hopital's Rule twice
* Only apply in the case of an indeterminate 0/0! If direct substitution gives us an answer, still using L'Hopital's Rule leads to an incorrect result; i.e. we can't use it to simplify limits

### Proof of L'Hopital's Rule

* Cauchy Mean Value Theorem: Given $f$ and $g$ differentiable over $(a, b)$ and continuous over $[a, b]$ and $g' \neq 0$ on $(a, b)$, then $\exists r \in (a, b)$ s.t. $\frac{f'(r)}{g'(r)} = \frac{f(b) - f(a)}{g(b) - g(a)}$
	* Form a special function to apply Rolle's Theorem on, similarly to how we previously proved the regular MVT
		* Recall Rolle's theorem: $g(a) = g(b) = 0 \implies \exists r \in (a, b)$ s.t. $g'(r) = 0$ (continuity and differentiability required)
	* Let $G(x) = [g(b) - g(a)][f(x) - f(a)] - [g(x) - g(a)][f(b) - f(a)] \implies G'(x) = [g(b) - g(a)]f'(x) - g'(x)[f(b) - f(a)]$
	* Note $G(a) = 0 = G(b)$, therefore by Rolle's theorem $\exists r$ s.t. $G'(r) = [g(b) - g(a)]f'(r) - g'(r)[f(b) - f(a)] = 0 \implies \frac{f'(r)}{g'(r)} = \frac{f(b) - f(a)}{g(b) - g(a)}$
		* Note we know $g(b) - g(a) \neq 0$ because by MVT, $g(b) - g(a) = 0 \implies \exists c \in (a, b)$ s.t. $g'(c) = 0$ but we said $g' \neq 0$ on this interval
* Given as $x \to c^+ \implies f(x), g(x) \to 0, \frac{f'(x)}{g'(x)} \to L$, we need to prove $\frac{f(x)}{g(x)} \to L$
	* Consider the interval $[c, c + h]$, apply the Cauchy MVT (note if we wanted to prove $x \to c^-$, we can change the bounds here)
	* By Cauchy MVT, $\exists c_2, \frac{f'(c_2)}{g'(c_2)} = \frac{f(c + h) - f(c)}{g(c + h) - g(c)} = \frac{f(c + h)}{g(c + h)}$ (since $f(c) = g(c) = 0$)
	* Take the limit $h \to 0$, LHS: $\lim _{h \to 0} \frac{f'(c_2)}{g'(c_2)} = \frac{f'(c)}{g'(c)} = L$, RHS: $\lim _{h \to 0} \frac{f(c + h)}{g(c + h)} = \lim _{x \to c^+} \frac{f(x)}{g(x)}$
	* Therefore $\lim _{x \to c^+} \frac{f(x)}{g(x)} = L$
	* We can make a similar argument for $x \to c^-$, which completes the two-sided limit
	* Note this proof relies on $f(c) = g(c) = 0$, i.e. 0/0 indeterminate form
	* To extend this to $x \to \pm \infty$, let $x = \frac{1}{t}$ and take $t \to 0$

### Other Indeterminate Forms

* Theorem: L'Hopital's Rule ($\frac{\infty}{\infty}$): if $f(x), g(x) \to \pm \infty$ as $x \to c$ (or a one sided or infinite limit) and $\frac{f'(x)}{g'(x)} \to L$, then $\frac{f(x)}{g(x)} = L$
	* Proof is a little more nuanced; not covered
	* Example: $\lim _{x \to \infty} \frac{\ln x}{x} = \frac{\infty}{\infty} \to \lim _{x \to \infty} \frac{\frac{1}{x}}{1} = 0 \implies \lim _{x \to \infty} \frac{\ln x}{x} = 0$
		* Any positive power of $x$ grows faster than the logarithm
		* Likewise $\lim _{x \to \infty} \frac{x^m}{e^x} = 0$ for any positive integer $m$ (keep applying L'Hopital's Rule)
	* Can also be applied multiple times
	* Notation: use $\stackrel{*}{=}$ to denote equality for the limits due to L'Hopital's Rule
* For $\infty \cdot 0$, we can rearrange this
	* Example: $\lim _{x \to 0} x\ln x = \lim _{x \to 0} \frac{\ln x}{\frac{1}{x}}$ now substitution gets us the $\frac{\infty}{\infty}$ form which we can use L'Hopital's Rule on
* For forms such as $0^0, \infty^0, 1^\infty$, we can take the exponential of the log of both sides
	* This relies on the exponential and logarithm being continuous functions; this means we can apply the function and bring the limit on the argument to the entire function
	* Example: $0^0$ indeterminate form: $\lim _{x \to 0} x^x$
		* $\lim _{x \to 0} x^x = \lim _{x \to 0} e^{\ln x^x} = \lim _{x \to 0} e^{x \ln x}$
		* Since $e^x$ is continuous, we bring the limit to $\lim _{x \to 0} x\ln x$
			* Direct substitution results in $0 \cdot \infty$, another indeterminate form, but $\frac{\ln x}{\frac{1}{x}}$ is an $\frac{\infty}{\infty}$ indeterminate type, so L'Hopital's Rule can be used
		* $\lim _{x \to 0} \frac{\ln x}{\frac{1}{x}} \stackrel{*}{=} \lim _{x \to 0} \frac{\frac{1}{x}}{-\frac{1}{x^2}} = 0$
		* Substituting back in, we get that $\lim _{x \to 0} x^x = e^0 = 1$
	* Example: $\infty^0$ form: $\lim _{x \to \infty} (x + 2)^{\frac{2}{\ln x}}$
		* $\lim _{x \to \infty} (x + 2)^{\frac{2}{\ln x}} = \lim _{x \to \infty} e^{\ln(x + 2)^{\frac{2}{\ln x}}} = \lim _{x \to \infty} \frac{2\ln(x + 2)}{\ln x}$
		* Apply L'Hopital's Rule twice to get 2

