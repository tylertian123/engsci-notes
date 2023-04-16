# Lecture 6, Jan 24, 2022

## Improper Integrals

* Remember: Infinity is NaN, so we must define any expression that contains it
* Definition: If $\lim _{b \to \infty} = \int _a^b f(x)\,\dx = L$, define $\int _0^\infty f(x)\,\dx = L$; these are called *improper integrals*
	* We can also have the lower limit go to infinity in the same way, or both bounds be infinite
	* Also define $\inteval{f(x)}{a}{\infty}$ as $\lim _{b \to \infty} \inteval{f(x)}{a}{b}$ if the limit exists/converges
	* If the limit doesn't exist then we say that the integral *diverges*
* Example: $\alignedeqntwo[t]{\int _0^\infty e^{-x}\,\dx}{\lim _{b \to \infty} \int _0^b e^{-x}\,\dx}{\lim _{b \to \infty} \inteval{-e^{-x}}{0}{b}}{\lim _{b \to \infty} (1 - e^{-b})}{1}$
* Not all improper integrals converge! Example: $\alignedeqntwo[t]{\int _3^\infty \frac{1}{x}\,\dx}{\lim _{b \to \infty}\inteval{\ln x}{3}{b}}{\lim _{b \to \infty}(\ln b - \ln 3)}{\infty}$
* Integrals can diverge for other reasons: $\alignedeqntwo[t]{\int _{-\infty}^{2\pi} \sin x\,\dx}{\lim _{a \to \infty} \int _a^{2\pi} \sin x\,\dx}{\lim _{a \to \infty} \inteval{-\cos x}{a}{2\pi}}{\lim _{a \to \infty} (-1 + \cos a)}$
	* Since $\cos a$ does not approach any value for $a \to \infty$ this integral is undefined
* General example: $\int _a^{\infty} \frac{1}{x^p}\,\dx$ for $p > 0, p \neq 1$ and $a > 0$
	* $\alignedeqntwo[t]{\int _a^{\infty} \frac{1}{x^p}\,\dx}{\lim _{b \to \infty} \int _a^b \frac{1}{x^p}\,\dx}{\lim _{b \to \infty} \inteval{\frac{1}{1 - p}x^{-p + 1}}{a}{b}}{\lim _{b \to \infty} \left(\frac{b^{-p + 1}}{1 - p} - \frac{a^{-p + 1}}{1 - p}\right)}{\frac{a^{1 - p}}{p - 1}\Tag\text{for }p > 1}$
	* If $p < 1$ then this will diverge
* Technique to demonstrate convergence: given $f, g$ continuous and $0 \leq f(x) \leq g(x)$ for $x \in [a, \infty]$, then if $\int _a^\infty g\,\dx$ converges so does $\int _a^{\infty} f\,\dx$; similarly if $\int _a^\infty f\,\dx$ diverges then so does $\int _0^\infty g\,\dx$
	* Example: $\int _2^\infty \frac{1}{\sqrt{1 + x^{\frac{44}{17}}}}\,\dx$
		* We note $\frac{1}{\sqrt{1 + x^{\frac{44}{17}}}} < \frac{1}{\sqrt{x^{\frac{44}{17}}}} = \frac{1}{x^{\frac{22}{17}}}$
		* Since $\frac{22}{17} > 1$, $\int _2^\infty \frac{1}{x^{\frac{22}{17}}}\,\dx$ converges
		* Since this is larger than our integrand, our integral will also converge
	* Example: $\int _3^\infty \frac{1}{(7 + x^2)^\frac{1}{2}}\,\dx$
		* Note $(7 + x^2)^\frac{1}{2} < \sqrt 7 + x$ for $x \geq 3$
		* Therefore $\frac{1}{(7 + x^2)^\frac{1}{2}} > \frac{1}{\sqrt 7 + x}$
		* Since $\int _3^\infty \frac{1}{\sqrt 7 + x}\,\dx$ diverges and our integrand is always greater than this integrand, our integral also diverges
* When we have both bounds infinite we can break it up: $\int _{-\infty}^\infty f(x)\,\dx = \int _{-\infty}^a f(x)\,\dx + \int _a^\infty f(x)\,\dx$
	* $a$ can be anything here but we can usually choose it to be something convenient
	* Note $\int _{-\infty}^\infty \neq \lim _{b \to \infty} \int _{-b}^b f(x)\,\dx$
		* This works if the integral converges because in that case it doesn't matter how fast we approach infinity; however if the integral diverges this will give us the wrong answer
		* Example: $\int _{-\infty}^\infty x\,\dx$
			* If we break this up we can see this integral obviously doesn't converge
			* But if $\alignedeqntwo[t]{\int _{-\infty}^\infty x\,\dx}{\lim _{b \to \infty}\int _{-b}^b x\,\dx}{\lim _{b \to \infty}\left(\frac{b^2}{2} - \frac{b^2}{2}\right)}{0}$
			* We get zero because we happen to approach the two limits at the same rate
			* If instead $\alignedeqntwo[t]{\lim _{b \to \infty}\int _{-b}^{2b} x\,\dx}{\lim _{b \to \infty}\left(\frac{4b^2}{2} - \frac{b^2}{2}\right)}{\infty}$
				* If this integral was one-sided it wouldn't matter at what rate we approach infinity
* We can also have improper integrals where the interval contains a discontinuity
	* Suppose $\lim _{x \to b^-} f(x) = \infty$ then we can still define $\int _a^b f(x)\,\dx = \lim _{c \to b^-} \int _a^c f(x)\,\dx$
* When the discontinuity is in the middle, break up the integral at the discontinuity; both pieces need to converge for the improper integral to converge
	* If we have a discontinuity at $z$, then $\int _a^b f(x)\,\dx = \lim _{c \to z^-} \int _a^c f(x)\,\dx + \lim _{c \to z^+} \int _c^b f(x)\,\dx$
	* We need to be careful because if we just plugged in the numbers as if there was no discontinuity we would get the wrong answer
	* Example: $\int _{-1}^3 \frac{1}{x^2}\,\dx$
		* If we evaluate it as $\inteval{-\frac{1}{x}}{-1}{3} = -\frac{1}{3} - 1 = -\frac{4}{3}$, which makes no sense as this integral should diverge and the function is always positive so we should never get a negative area
	* When we have an integral we need to make sure the integrand has no discontinuity over the region; if it does then we need to treat it as an improper integral
* For the interval 0 to 1, the $\frac{1}{x^p}$ rule is the reverse; if $p < 1$ then the integral converges, otherwise it diverges

