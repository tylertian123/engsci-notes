# Lecture 4, Jan 19, 2024

## Maximum Likelihood Estimation

* Let $\bm X = (X_1, \dots, X_n)$ and $\bm x = (x_1, \dots, x_n) \in \reals^n$ be our samples
* Given the distribution $p_{\bm X}(\bm x; \theta)$ that depends on $\theta$, and suppose we don't know the distribution of $\theta$ (denoted by the semicolon)
	* This is known as the *likelihood function*
* The *maximum likelihood* estimate of $\theta$ maximizes the likelihood, $\hat\Theta _n = \argmax _\theta p_{\bm X}(\bm x; \theta)$
* Sometimes instead of likelihood directly we maximize its log instead
	* If $X_1, \dots, X_n$ are IID, then $p_{\bm X}(\bm x; \theta) = \prod _{i = 1}^n p_{X_i}(x_i; \theta)$
	* Therefore $\log(p_{\bm X}(\bm x; \theta)) = \sum _{i = 1}^n \log(p_{X_i}(x_i; \theta))$
	* Instead of maximize the total likelihood we can maximize the sum of the logs of the marginals
* Example: Bernoulli RV, $p_X(0; \theta) = 1 - \theta, p_X(1; \theta) = \theta$
	* If we do this $n$ times, then $p_{\bm X}(x_1, \dots, x_n; \theta) = \theta^k(1 - \theta)^{n - k}$ where $k$ is the number of 1s we got
	* The log likelihood is then $k\log\theta + (n - k)\log(1 - \theta)$
	* Differentiate wrt $\theta$ and set to zero: $\diff{}{\theta}\log p_X(\bm x; \theta) = \frac{k}{\theta} - \frac{n - k}{1 - \theta} = 0$
	* The MLE estimation is then $\hat\Theta _n = \frac{k}{n}$
	* We say that $k$ is a *sufficient statistic* for this ML estimator of $\theta$; instead of holding onto all the data we only need to keep track of $k$
	* We can take the expected value to see that this goes to $\theta$, so the estimator is unbiased
	* Since this is the sample mean, weak law convergence applies, so the estimator is consistent

### Laplace: Will the Sun Rise Tomorrow?

* Suppose the sun has risen $n$ consecutive days, $X_1 = 1, \dots, X_n = 1$
* What is the probability that the sun will rise tomorrow?
* A frequentist approach would use the MLE estimate $\hat\Theta _n = \frac{n}{n} = 1$, so the sun surely rises and this estimate does not change as the number of days increases
* What about a Bayesian approach?
	* Suppose $\theta$ is a uniform random variable in the interval $[0, 1]$
	* Now we can find the posterior distribution of $\theta$
	* $f_{\theta|\bm X_n}(\theta|x_1, \dots, x_n) = \frac{p_{\bm X_n}(x_1, \dots, x_n | \theta)f_\theta(\theta)}{p_{\bm X_n}(x_1, \dots, x_n)}$
	* $p_{\bm X_n}(x_1, \dots, x_n | \theta) = \theta^n$ if $x_1, \dots, x_n = 1$
	* So the probability of $n$ consecutive 1s is $p _{\bm X}(1, \dots, 1) = \int _0^1 \theta^n f_\theta(\theta)\,\dtheta = \int _0^1 \theta^n\,\dtheta = \frac{1}{n + 1}$
	* Therefore $P[X_{n + 1} = 1 | X_1 = 1, \dots, X_n = 1] = \frac{P[X_1 = 1, \dots, X_n = 1 \cap X_{n + 1} = 1]}{P[X_1 = 1, \dots, X_n = 1]} = \frac{\frac{1}{n + 2}}{\frac{1}{n + 1}} = \frac{n + 1}{n + 2}$
* Another way is to use the conditional expectation $\hat\Theta _n(x) = E[\Theta | \bm X = \bm x]$
	* $\alignedeqntwo[t]{P[X_{n = 1} = 1 | X_1 = 1, \dots, X_n = 1]}{E[\Theta | \bm X_n = \bm 1]}{\int _0^1 \theta f_{\theta|\bm X_n}(\theta | 1, \dots, 1)\,\dtheta}{\int _0^1 \theta\frac{\theta^n}{\frac{1}{n + 1}}\,\dtheta}{\frac{n + 1}{n + 2}}$

