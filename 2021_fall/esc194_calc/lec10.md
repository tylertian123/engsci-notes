# Lecture 10, Oct 1, 2021

## Differentiability

* Definition: $f(x)$ is differentiable on $(a, b)$ if $f(x)$ is differentiable for all $x \in (a, b)$
* Definition: $f(x)$ is differentiable on $[a, b]$ if:
	1. $f(x)$ is differentiable on $(a, b)$
	2. The right hand derivative exists at $a$
	3. The left hand derivative exists at $b$
* The left hand derivative is defined as $f'(x^-) = \lim _{h \to 0^-} \frac{f(x + h) - f(x)}{h}$
* The right hand derivative is the same except the limit is now $h \to 0^+$
* Example: $f(x) = \abs{x}$ is not differentiable at $0$, but both the left and right hand derivative exist (but do not equal)
* $f(x)$ may be continuous at a point, but not differentiable; differentiability is "rarer" than continuity
* Differentiability implies continuity:
	* Since continuity guarantees integrability, differentiability guarantees integrability
	* $\alignedeqn[t]{\lim _{h \to 0} \left[f(a + h) - f(a)\right]}{\lim _{h \to 0}\frac{f(a + h) - f(a)}{h}h}{\lim _{h \to 0}\frac{f(a + h) - f(a)}{h}\lim _{h \to 0} h}{f'(a) \cdot 0}{0}$
	* $\alignedimp[t]{\lim _{h \to 0} \left[f(a + h) - f(a)\right] = 0}{\lim _{h \to 0} f(a + h) - \lim _{h \to 0} f(a) = 0}{\lim _{h \to 0} f(a + h) = f(a)}{\lim _{(x - a) \to 0} f(x) = f(a)\text{ substitute }x = a + h}{\lim _{x \to a} f(x) = f(a)}{f\text{ is continuous at }a}$
	* Note the reverse is not true! Not being differentiable does not imply discontinuity

## Vertical Tangent Lines

* Example: $f(x) = \sqrt[3]{x} \implies f'(x) = \frac{1}{3}x^{-\frac{2}{3}} \implies \lim _{x \to 0} \abs{f'(x)} = \infty$
	* Note that $f(x)$ is **not** differentiable at $c$
* $f(x)$ has a vertical tangent at $c$ if:
	1. $\lim _{x \to c} \abs{f'(x)} = \infty$
	2. $f(x)$ is continuous at $c$
		* Vertical tangents are different from vertical asymptotes and this separates them
		* e.g. $f(x) = \frac{1}{x^2} \implies f'(x) = -\frac{2}{x^3}$ which is infinite at 0, but this is not a vertical tangent since $f(x)$ is not continuous at this point

## Derivative Theorems

* Just like limit theorems, these allow us to compute derivatives without having to evaluate limits
* Some theorems are outlined here:
	1. Constant Derivative Theorem: $f(x) = C \implies f'(x) = 0$
		* Proof is trivial
	2. Additive Derivative Theorem: $(f + g)' = f' + g'$ **if both exist**
		* Proof is trivial
	3. Product Derivative Theorem: $(fg)' = f'g + fg'$
		* $\alignedeqn[t]{(fg)'}{\lim _{h \to 0}\frac{f(x + h)g(x + h) - f(x)g(x)}{h}}{\lim _{h \to 0}\frac{f(x + h)g(x + h) - f(x + h)g(x) + f(x + h)g(x) - f(x)g(x)}{h}}{\lim _{h \to 0}\frac{f(x + h)(g(x + h) - g(x)) + g(x)(f(x + h) - f(x))}{h}}{\lim _{h \to 0}f(x + h)\frac{g(x + h) - g(x)}{h} + \lim _{h \to 0}g(x)\frac{f(x + h) - f(x)}{h}}{f(x)g'(x) + g(x)f'(x)}$
	4. Power Derivative Theorem: $f(x) = Cx^n \implies f'(x) = nCx^{n - 1}$
	5. Polynomial Derivative Theorem
	6. Reciprocal function Derivative Theorem: $\left(\frac{1}{f(x)}\right)' = -\frac{f'(x)}{f^2(x)}$ for $f(x) \neq 0$
		* $\alignedeqn[t]{\left(\frac{1}{f(x)}\right)'}{\lim _{h \to 0}\frac{\frac{1}{f(x + h)} - \frac{1}{f(x)}}{h}}{\lim _{h \to 0}\frac{f(x) - f(x + h)}{hf(x)f(x + h}}{\lim _{h \to 0}\frac{f(x) - f(x + h)}{h}\lim _{h \to 0}\frac{1}{f(x)}\lim _{h \to 0}\frac{1}{f(x + h)}}{-f'(x)\frac{1}{f(x)}\frac{1}{f(x)}}{-\frac{f'(x)}{f^2(x)}}$
	7. Quotient Derivative Theorem: $\left(\frac{f}{g}\right)' = \frac{f'g - fg'}{g^2}$ for $g(x) \neq 0$
		* Use product and power derivative theorems to prove
* Using \textcircled{6} we can prove \textcircled{4} works for negative powers:
	* $f(x) \equiv x^{-n}$ where $n$ is a positive integer
	* $g(x) \equiv x^n \implies f(x) = \frac{1}{g(x)}$
	* $f'(x) = -\frac{g'(x)}{g^2(x)} = -\frac{nx^{n - 1}}{x^{2n}} = -nx^{n - 1 - 2n} = -nx^{-n - 1}$

