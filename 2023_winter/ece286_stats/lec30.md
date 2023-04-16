# Lecture 30, Mar 27, 2023

## Log-Likelihood

* With distributions such as the normal, exponential, or Poisson distributions, we can make them easier to work with if we instead maximize the log of the likelihood function, since $\diff{}{x}\ln x > 0$
* Example: normal distribution, find $\mu, \sigma^2$
	* $\alignedeqntwo[t]{L(x_1, \cdots, x_n)}{\prod _{i = 1}^n n(x_i; \mu, \sigma)}{\prod _{i = 1}^n \frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{1}{2}\left(\frac{x_i - \mu}{\sigma}\right)^2}}{\frac{1}{(2\pi\sigma^2)^\frac{n}{2}}e^{-\frac{1}{2}\sum _{i = 1}^n \left(\frac{x_i - \mu}{\sigma}\right)^2}}$
	* $\alignedeqntwo[t]{\ln L}{\ln\left(\frac{1}{(2\pi\sigma^2)^\frac{n}{2}}e^{-\frac{1}{2}\sum _{i = 1}^n \left(\frac{x_i - \mu}{\sigma}\right)^2}\right)}{-\frac{n}{2}\ln(2\pi\sigma^2) - \frac{1}{2}\sum _{i = 1}^n \left(\frac{x_i - \mu}{\sigma}\right)^2}$
	* $\alignedimp[t]{\pdiff{L}{\mu} = 0}{\frac{1}{2}\sum _{i = 1}^n 2\left(\frac{x_i - \mu}{\sigma}\right)^2 = 0}{\sum _{i = 1}^n x_i - \mu = 0}{\left(\sum _{i = 1}^n x_i\right) - n\mu = 0}{\mu = \frac{1}{n}\sum _{i = 1}^n x_i = \bar x}$
		* We just ended up getting $\bar x$, which makes sense
	* $\alignedimp[t]{\pdiff{L}{\sigma^2} = 0}{-\frac{n}{2}\frac{1}{\sigma^2} + \frac{1}{2\sigma^4}\sum _{i = 1}^n (x_i - \mu)^2 = 0}{\sigma^2 = \frac{1}{n}\sum _{i = 1}^n (x_i - \mu)^2}$
		* This is an unbiased estimator if we do know the true mean $\mu$, but if we use the optimal $\mu = \bar x$, this would be a biased estimator
		* In the limit as $n \to \infty$ the sample mean approaches the true mean, and the estimator becomes unbiased

\noteImportant{When we use maximum likelihood estimation for each parameter, it is assumed that we know the exact values of the other parameters; this means that in the case of multiple parameters, MLE can give a biased estimate}

\noteNote{There is often a tradeoff between bias and variance of an estimator. Sometimes it might be worth it to have an estimator that is a little biased if it significantly reduces the variance of the estimator, making it more efficient.}

