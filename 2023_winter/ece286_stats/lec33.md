# Lecture 33, Apr 3, 2023

## One vs. Two-Tailed Tests

* *Two-tailed tests* are for hypotheses for an exact value (or two-sided range) of a variable; *one-tailed tests* are for hypotheses with one-sided ranges
* So far we've only considered two-tailed tests (e.g. temperature tomorrow is $10\si{\degree C}$; $H_0$ is temperature is 10 degrees, $H_1$ is temperature is not)
* A one-tailed test would be e.g. hypothesis is eating something would cause you to live past 80, then $H_0: \theta \leq 80, H_1: \theta > 80$, we can set critical region $\theta > 82$

## Relation of Hypothesis Testing to Confidence Intervals

* Consider a scenario where $H_0: \mu = \mu _0, H_1: \mu \neq \mu _0$, for a sample of size $n$ with known variance $\sigma^2$
* Let $Z = \frac{\bar X - \mu}{\frac{\sigma}{\sqrt n}}$ as usual
* Before, we set the critical region and then calculated the probability of a type I error; what happens if we set $\alpha$ first and then calculate the critical region?
* $\alpha = P(\text{Type I}) = P(Z \leq -z_{\alpha/2} \union Z \geq z_{\alpha/2}) \implies 1 - \alpha = P\left(-z_{\alpha/2} \leq \frac{\bar X - \mu _0}{\frac{\sigma}{\sqrt n}} \leq z_{\alpha/2}\right)$
* The critical region would be $\frac{\bar X - \mu}{\frac{\sigma}{\sqrt n}} \notin [-z_{\alpha/2}, z_{\alpha/2}]$
* This is the exact same as a confidence interval

## $p$-Values

\noteDefn{Given a sample $X_1, \cdots, X_n$ with variance $\sigma^2$, and the null hypothesis $H_0: \mu = \mu _0$, then the $p$-value is defined as $$\alignedeqntwo[t]{p}{P\left(\abs*{\frac{\bar X - \mu _0}{\frac{\sigma}{\sqrt n}}} > \abs{z}\right)}{P(\abs{Z} \geq \abs{z})}{2P(Z > \abs{z})}{2(1 - \Phi(\abs{z}))}$$ where $Z = \frac{\bar X - \mu}{\frac{\sigma}{\sqrt n}}$ has distribution $n(z; 0, 1)$ and $z$ is the observed value of $Z$}

* The $p$ value is the probability that, given $H_0$ is true, an even more extreme observation will be made
	* If $p \approx 0$, that means $z$ is very far from 0 and therefore $\bar x$ is very far from $\mu _0$, so $H_0$ is highly unlikely
	* If $p \approx 1$, then $z$ is close to 0 so $\bar x \approx \mu$, so $H_0$ cannot be rejected
* We still need to assume $H_0$, but unlike the other methods of hypothesis testing, to compute a $p$-value we don't need to make an ad-hoc critical region
* Example: $H_0: \mu = 5, H_1: \mu \neq 5$, with $n = 40, \bar x = 5.5, s = \sigma = 1$
	* $z = \frac{5.5 - 5}{\frac{1}{\sqrt{40}}} \approx 3.16$
		* If we choose $\alpha = 0.05$ so the critical region for $Z$ is outside $[-1.96, 1.96]$, then $z$ is outside the critical region so we reject $H_0$
	* $p = 2P(Z > \abs{z}) = 2(1 - \Phi(3.16)) = 0.0016 \approx 0$
		* The very low $p$-value means $H_0$ is highly unlikely
	* Note to compute the $p$-value we didn't need to specify a critical region

