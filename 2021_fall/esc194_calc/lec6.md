# Lecture 6, Sep 21, 2021

* The minimum function lets us unambiguously prescribe multiple things about a variable
* Example: Prove $\lim _{x \to 5} x^2 = 25$
	1. $\varepsilon > 0$ is given
	2. Required $\abs{f(x) - L} = \abs{x^2 - 25} < \varepsilon$
	3. When $0 < \abs{x - c} = \abs{x - 5} < \delta$
	4. $\abs{x^2 - 25} = \abs{(x - 5)(x + 5)} = \abs{x - 5}\abs{x + 5} < \delta\abs{x + 5}$
		* Now we need to get rid of $\abs{x + 5}$ by specifying an additional feature of $\delta$
		* If we specify $\delta \leq 1 \implies \abs{x - 5} < \delta \leq 1 \implies 4 \leq x \leq 6 \implies 9 \leq x + 5 \leq 11 \implies \abs{x + 5} \leq 11$
		* $\abs{x + 5} \leq 11 \implies \delta\abs{x + 5} \leq 11\delta \implies \abs{x - 5}\abs{x + 5} < 11\delta$
	5. Now we can take $\delta = \frac{\varepsilon}{11} \implies \abs{f(x) - L} = \abs{x - 5}\abs{x + 5} < 11\delta = \varepsilon$
	6. Include constraint $\delta \leq 1$: Notice how anything smaller than $\frac{\varepsilon}{11}$ works, so we can say $\delta = \min\left(\frac{\varepsilon}{11}, 1\right)$

## Left and Right-Hand Limits

* Consider $f(x) = \twocond{1 + x^2}{x \geq 0}{x^2}{x < 0}$; in this case $\lim _{x \to 0} f(x)$ does not exist
* We can define the *left-hand limit*: $\lim _{x \to 0^-} f(x)$ and the *right-hand limit*: $\lim _{x \to 0^+} f(x)$
* The definition of the left and right hand limits are slight modifications to the normal limit:
	* Right-hand: $\lim _{x \to c^+} f(x) = L \iff \forall \varepsilon > 0, \exists \delta > 0$ such that $\forall c < x < c + \delta, \abs{f(x) - L} < \varepsilon$
	* Left-hand: $\lim _{x \to c^-} f(x) = L \iff \forall \varepsilon > 0, \exists \delta > 0$ such that $\forall c - \delta < x < c, \abs{f(x) - L} < \varepsilon$
	* We can then conclude that $\lim _{x \to c} f(x) = L \iff \lim _{x \to c^+} f(x) = \lim _{x \to c^-} f(x) = L$
* Example: Prove $\lim _{x \to 0^+} \sqrt{x} = 0$
	1. $\varepsilon > 0$ is given
	2. Required $\abs{f(x) - L} = \abs{\sqrt{x} - 0} = \sqrt{x} < \varepsilon$
	3. When $0 < x < \delta$
	4. $\sqrt{x} < \sqrt{\delta}$
	5. Take $\delta = \varepsilon^2 \implies \abs{f(x) - L} = \sqrt{x} < \sqrt{\delta} = \varepsilon$

## Vertical Asymptotes and Infinite Limits

* e.g. $f(x) = \frac{1}{x^4}$ goes to infinity at 0
* The definition of an infinite limit $\lim _{x \to c} f(x) = \infty \iff \forall M > 0, \exists \delta > 0$ such that $\forall 0 < \abs{x - c} < \delta, f(x) > M$
	* Note that this is not an equation since $\infty$ is not a number!
	* $\lim _{x \to 0} \frac{1}{x^4}$ does not exist, but writing $\lim _{x \to c} f(x) = \infty$ is valid and tells us more than just saying it does not exists
	* This is just a shorthand of saying "$f(x)$ increases without limit as $x$ approaches $c$"
* From this definition we can similarly construct definitions for limits of negative infinity and infinite one-handed limits
* Example: $\lim _{x \to 0} \frac{1}{x^4} = \infty$
	* $\frac{1}{x^4} > M$ when $0 < \abs{x} < \delta$
	* $\abs{x} < \delta \implies \frac{1}{\delta} < \frac{1}{\abs{x}} \implies \frac{1}{\delta^4} < \frac{1}{\abs{x}^4}$
	* Take $\delta = \frac{1}{M^{\frac{1}{4}}} \implies \frac{1}{x^4} = \frac{1}{\abs{x}^4} < \frac{1}{\delta^4} = M$

