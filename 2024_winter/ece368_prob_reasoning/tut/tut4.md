# Tutorial 4, Feb 9, 2024

## Hypothesis Testing

\noteDefn{\textit{Hypothesis Testing}: Let $X$ be an RV with distribution $f_X(x; H_0)$ or $f_X(x; H_1)$, and we observe $x$; we would like to infer whether $H_0$ or $H_1$ is true by designing a decision rule $g(x)$.}

* Generally we partition $S$ into regions $A_0, A_1$, so $g(x) = \twocond{H_0}{x \in A_0}{H_1}{x \in A_1}$
* A good decision rule minimizes both the probability of type I errors $\alpha$ (false rejection of $H_0$/false acceptance of $H_1$) and type II errors $\beta$ (false acceptance of $H_0$/false rejection of $H_1$)
	* $\alpha = P[X \notin A_0; H_0] = \int _{A_0^c} f(x; H_0)\,\dx$
	* $\beta = P[X \in A_0; H_1] = \int _{A_0} f(x; H_1)\,\dx$

\noteDefn{\textit{Neyman-Pearson Lemma}: For a given target $\alpha$, the minimum $\beta$ is achieved by a decision rule of the form $$\frac{f(x; H_0)}{f(x; H_1)} \GtrLess_{H_1}^{H_0} \zeta$$}

* Setting $\zeta$ to 1 gives MLE, but in general we can set this to anything
* If we have priors $\pi _0 = P[H_0], \pi _1 = P[H_1]$ then $\frac{\pi _0f(x; H_0)}{\pi _1f(x; H_1)} \GtrLess _{H_1}^{H_0} \zeta$
* Example: Let $X$ be the number of coin tosses until the first heads
	* $H_0$: fair coin with $P[H] = \frac{1}{2}$
	* $H_1$: biased coin with $P[H] = \frac{1}{8}$
	* The number of tosses until first heads is given by a geometric distribution
	* With ML:
		* $p(x; H_0) = \left(\frac{1}{2}\right)^x$
		* $p(x; H_1) = \left(1 - \frac{1}{8}\right)^{x - 1}\left(\frac{1}{8}\right)$
		* Test: $\left(\frac{1}{2}\right)^x \GtrLess _{H_1}^{H_0} \left(1 - \frac{1}{8}\right)^{x - 1}\left(\frac{1}{8}\right)$
		* Log both sides: $-x \GtrLess_{H_1}^{H_0} (x - 1)\log\left(1 - \frac{1}{8}\right) + \log\left(\frac{1}{8}\right)$
		* $x \GtrLess _{H_0}^{H_1}\frac{3 + \log(7/8)}{1 + \log(7/8)} \approx 3.5$
		* Type I error: $\alpha = P[X \geq 4; H_0] = \sum _{x = 4}^\infty \left(\frac{1}{2}\right)^x = \frac{1}{8}$
		* Type I error: $\beta = P[X \leq 3; H_1] = \sum _{x = 1}^3 \left(1 - \frac{1}{8}\right)^{x - 1}\left(\frac{1}{8}\right)$
* Example: $f(x; H_0)$ is uniform on $[0, 1]$; $f(x; H_1)$ is uniform on $[-a, a]$
	* With ML:
		* If $a < \frac{1}{2}$ then select $H_1$ if $x \in [-a, a]$ and $H_0$ otherwise
			* This is because with $a < \frac{1}{2}$ the likelihood of $H_1$ is always greater, as long as $x$ falls within the interval
		* If $a \geq \frac{1}{2}$ then select $H_0$ if $x \in [0, 1]$ and $H_1$ otherwise
			* Again with $a \geq \frac{1}{2}$ the likelihood of $H_1$ is always less, as long as $x$ falls within the interval of $H_0$
		* Note this assumes we never see an $x$ outside these distributions

