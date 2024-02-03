# Tutorial 3, Feb 2, 2024

## Bayesian Estimation

### Maximum a Posteriori (MAP) Estimation

* Consider random variables $\Theta, X_1, \dots, X_n$ where $X_1, \dots, X_n$ are conditionally independent given $\Theta$
	* Our likelihood function is then $f(x_1, \dots, x_n | \theta) = \prod _{i = 1}^n f(x_i | \theta)$
* Let the prior distribution for $\Theta$ be $f(\theta)$
* $\hat\theta _\text{MAP} = \argmax _\theta f(\theta | x_1, \dots, x_n) = \argmax _\theta \frac{f(\theta)f(x_1, \dots, x_n | \theta)}{f(x_1, \dots, x_n)} = \argmax _\theta f(\theta)\prod _{i = 1}^n f(x_i | \theta)$
	* Just like MLE we can take the log to turn this into a sum
* Example: Let $W_1, \dots, W_n$ be independent RVs each $W_i \sim \mathcal N(0, \sigma _i^2)$ and let $X_i = \Theta + W_i$; find the MAP and LMS estimates of $\Theta$ given a prior $\Theta \sim \mathcal N(\mu, \sigma^2)$
	* Given $\Theta = \theta$, $X_i \sim \mathcal N(\theta, \sigma _i^2)$
	* $\alignedeqntwo[t]{\hat\theta _\text{MAP}}{\argmax _\theta \left[\log f(\theta) + \sum _{i = 1}^n \log(f(x_i | \theta))\right]}{\argmin _\theta \left[\frac{(\theta - \mu)^2}{2\sigma} + \sum _{i = 1}^n \frac{(x_i - \theta)^2}{2\sigma _i^2}\right]}{\frac{\frac{\mu}{\sigma^2} + \sum _{i = 1}^n \frac{x_i}{\sigma _i^2}}{\frac{1}{\sigma^2} + \sum _{i = 1}^n \frac{1}{\sigma^2}}}$
	* Note if we did MLE instead we would not have the $\sigma^2$ and $\mu$ terms in the expression
		* Using the prior for MAP is like having an additional measurement
	* As $n \to \infty$ this converges to the MLE estimate

### Least Mean Square (LMS) Estimation

* Let the estimate for $\Theta$ be $g(X_1, \dots, X_n)$, then we seek to minimize the expectation of the squared error of this estimate from the true parameter
	* $g^* = \argmin _g E[(g(X_1, \dots, X_n) - \Theta)^2]$
* We can show that this is equal to the conditional expectation $g^*(\bm X) = E[\Theta | X_1 = x_1, \dots, X_n = x_n]$
* $\hat\theta _\text{LMS} = E[\Theta | X_1 = x_1, \dots, X_n = x_n] = \int \theta f(\theta | x_1, \dots, x_n)\,\dtheta$
	* $f(\theta | x_1, \dots, x_n)$ can be found using Bayes' rule
* The LMS estimator is always unbiased
* Note that for a Gaussian prior with Gaussian likelihood, the posterior $f(\theta | x_1, \dots, x_n)$ will also be Gaussian, which means its max and its mean are at the same location
	* This means that the LMS (which is the expectation/mean) and the MAP (which is the max/mode) estimators are the same

