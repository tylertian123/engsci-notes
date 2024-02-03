# Lecture 8, Feb 2, 2024

## Bayesian Hypothesis Testing

* We switch to using a MAP approach instead of ML if we have prior knowledge of the hypotheses
* Assume we know a priori that $P[H_0] = \pi _0$ and $P[H_1] = 1 - \pi _0 = \pi 1$
* MAP rule: compare $p(H_1 | x)$ with $p(H_0 | x)$
	* $P(H_j | x) = \frac{p_x(x | H_j)P[H_j]}{p_x(x | H_0)P[H_0] + p_x(x \ H_1)P[H_1]}$
	* Therefore this is equivalent to $p(x | H_1)\pi _1 \lessgtr^{H_1}_{H_0} p(x | H_0)\pi _0$
* Example: binary communications
	* If a 0 was sent then $X \sim \mathcal N(-1, \sigma^2)$; if a 1 was sent then $X \sim \mathcal N(1, \sigma^2)$
	* Compare $\frac{1}{\sqrt{2\pi}\sigma}e^{-(x - 1)^2}{2\sigma^2}\pi _1$ and $\frac{1}{\sqrt{2\pi}\sigma}e^{-(x + 1)^2}{2\sigma^2}\pi _0$
	* The threshold is $e^{\frac{4x}{2\sigma^2}} \lessgtr \frac{\pi _0}{\pi 1}$ or $x \lessgtr \frac{\sigma^2}{2}\log \frac{\pi _0}{\pi _1}$
	* If we assume that the bits are balanced, i.e. $\pi _0 = \pi _1$, then we're simply seeing if $x$ is positive or negative
* We can use different metrics, e.g. the probability of error, as a cost metric
	* Minimum probability of error $P_E = \int _R f_X(x | H_0)\pi _0\,\dx + \int _{R'} f_X(x | H_1)\pi _1\,\dx$
	* Or minimum cost detection $C_{00}P[\text{Accept }H_0 | H_0]\pi _0 + C_{01}P[\text{Reject }H_0 | H_0]\pi _0 + C_{10}P[\text{Accept }H_1 | H_1]\pi _1 + C_{11}P[\text{Reject }H_1 | H_1]\pi _1$
* Consider the Gaussian example with minimum error probability as the cost
	* $P_E = \int _R \frac{1}{\sqrt{2\pi}\sigma}e^\frac{-{(x + 1)^2}{2\sigma^2}}\pi _0\,\dx + \int _{R'} \frac{1}{\sqrt{2\pi}\sigma}e^\frac{-{(x - 1)^2}{2\sigma^2}}\pi _1\,\dx = 1 + \int _{R'} \frac{1}{\sqrt{2\pi}\sigma}\left(e^{-\frac{(x - 1)^2}{2\sigma^2}}\pi _1 - e^{-\frac{(x + 1)^2}{2\sigma^2}}\pi _0\right)\,\dx$
	* To minimize this we want to pick the expression inside brackets so it is always negative
	* Making the expression negative gives us back the MAP rule!
* Define the likelihood $\Lambda(x) = \frac{f_X(x | H_1)}{f_X(x | H_0)}$
	* The decision rule is to accept $H_0$ if $\Lambda(x) < \frac{\pi _0(C_{01} - C_{00})}{\pi _1(C_{10} - C_{11})}$
	* We can derive this using the same procedure as above
	* A special case is to minimize the probability of error in which case $C_{00} = C_{11} = 0, C_{01} = C_{10} = 1$
* For multiple hypotheses:
	* Probability of correct is $\sum _{k = 1}^K \int _{R_k} P[X = x, H_k]\,\dx$
	* Min cost: $\sum _j \int _{R_j} \sum _{k = 1}^K L_{kj}P[X = x, H_k]\,\dx$
		* We need a cost $L_{kj}$ between every pair of hypotheses
		* Pick $j$ to minimize the sum inside the integral
* Naive Bayes assumption: all measurements are independent given $\theta$

### Significance Testing

* Sometimes we know what $H_0$ is but we don't have a clear alternative hypothesis
* We want to bound $\alpha$, the probability of type I error
* Example: testing if a unit variance Gaussian is zero mean
	* Let $S = \frac{1}{\sqrt{n}}(X_1, \dots, X_n)$
	* Then if $H_0$ holds then $S \sim \mathcal N(0, 1)$
	* Suppose our decision rule is to accept $H_0$ if $S \in [-\gamma, \gamma]$
	* $\alpha = \intlinf{\gamma}\frac{1}{\sqrt{2\pi}}e^{-\frac{x^2}{2}}\,\dx + \intuinf{\gamma} \frac{1}{\sqrt{2\pi}}e^{-\frac{x^2}{2}}\,\dx = 2Q(\gamma)$
	* If we want to restrict the type I error probability to 5%, then $Q(\gamma) = 0.05 \implies \gamma = 1.96$

