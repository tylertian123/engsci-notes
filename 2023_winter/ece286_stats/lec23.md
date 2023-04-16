# Lecture 23, Mar 9, 2023

## Point Estimates

* So far we've worked with point estimates in our sampling
* We have IID measurements $X_1, \cdots, X_n$ with realizations $x_1, \cdots, x_n$
* In general we write $\theta$ is the true parameter, $\hat\theta$ is the observed value, and $\hat\Theta$ is the statistic
	* e.g. $\theta = \mu$ is the true parameter (true mean), $\hat\theta = \bar x$ is the observed value (observed mean), $\hat\Theta = \bar X$ is the statistic (sample mean RV)
* In general we want to estimate $\theta$ from $\hat\theta$

\noteDefn{$\hat\Theta$ is an \textit{unbiased estimator} if $E[\hat\Theta] = \theta$, that is, the expectation of the statistic is the true mean \tcblower Out of all unbiased estimators, the most \textit{efficient} estimator has the lowest variance}

* e.g. with the mean, $E[X_i] = \mu$ for all $i$, so any of the individual estimates is an unbiased estimator; however $\bar X$ has lower variance ($\sigma^2/n$ vs. $\sigma^2$), so $\bar X$ is the most efficient estimator of the sample mean

## Interval Estimates

* Instead of estimating an exact value, interval estimates give an interval $\theta _L \leq \theta \leq \theta _U$
	* The most well known example are confidence intervals
	* This gives us a sense of how good our estimate is
* $\theta _L, \theta _U$ should be the realization of some sampling statistic based on the data

\noteDefn{A \textit{confidence interval} is of the form $$P(\Theta _L \leq \theta \leq \Theta _U) = 1 - \alpha$$ where $\Theta _L, \Theta _U$ are statistics}

* e.g. a 95% confidence interval has $\alpha = 0.05$
* To calculate confidence intervals of the mean we can use the CLT
	* $Z = \frac{\bar X - \mu}{\frac{\sigma}{\sqrt{n}}}$
	* By the CLT the distribution of $Z$ approaches $n(z; 0, 1)$
	* Recall the CDF is $\intlinf{x} n(z; 0, 1)\,\dz$
	* Let $\beta < 0.5$, define $z_\beta$ such that $\Phi(-z_\beta) = \beta \implies z_\beta = -\Phi^{-1}(\beta)$, that is, the area under the normal PDF above $x = \beta$ is equal to $\alpha$
		* By symmetry $1 - \Phi(z_\beta) = \beta$
	* $1 - \alpha = P(-z_{\alpha/2} \leq Z \leq z_{\alpha/2})$
		* $z_{\alpha/2}$ has $\alpha$ area above it, and $\alpha$ area below $-z_{\alpha/2}$ by our previous definition
	* $1 - \alpha = P\left(-z_{\alpha/2} \leq \frac{\bar X - \mu}{\frac{\sigma}{\sqrt{n}}} \leq z_{\alpha/2}\right) = P\left(\bar X - z_{\alpha/2}\frac{\sigma}{\sqrt{n}} \leq \mu \leq \bar X + z_{\alpha/2}\frac{\sigma}{\sqrt{n}}\right)$
	* This gives us $\Theta _L = \bar X - z_{\alpha/2}\frac{\sigma}{\sqrt{n}}, \Theta _U = \bar X + z_{\alpha/2}\frac{\sigma}{\sqrt{n}}$

\noteDefn{Given data $x_1, \cdots, x_n$, let $$\alignedlines[t]{}{\theta _L = \bar x - z_{\alpha/2}\frac{\sigma}{\sqrt{n}}}{\theta _U = \bar x + z_{\alpha/2}\frac{\sigma}{\sqrt{n}}}$$ where $z_{\alpha/2} = -\Phi^{-1}\left(\frac{\alpha}{2}\right)$, such that $\alpha/2$ of the normal distribution is below $-z_{\alpha/2}$, then $[\theta _L, \theta _U]$ is the \textit{observed} (or realized) confidence interval for the mean for some confidence $1 - \alpha$}

* Example: $n = 20, \bar x = 4$, we know $\sigma = 2$, we want a 95% confidence interval
	* $\alpha = 0.05 \implies z_{\alpha/2} = -\Phi^{-1}(0.025) = 1.96 \approx 2$
	* $0.95 = P\left(\bar X - 2\frac{2}{\sqrt{20}} \leq \mu \leq \bar X - 2\frac{2}{\sqrt{20}}\right) = P(\bar X - 0.88 \leq \mu \leq \bar X + 0.88)$
	* Therefore our realized confidence interval is $[4 - 0.88, 4 + 0.88] = [3.12, 4.88]$
* This does **not** mean that there is a 95% chance that the true mean falls within $[3.12, 4.88]$ (this statement is not mathematically valid since the true mean is not a random variable)
	* It means that if we did this experiment a large number of times, each time collecting 20 samples, 95% of the time the realization $[\bar X - 0.88, \bar X + 0.88]$ contains the true mean
	* When a confidence interval is reported as a pair of numbers, as $[3.12, 4.88]$, it is only a particular realization of the confidence interval for that particular experiment

