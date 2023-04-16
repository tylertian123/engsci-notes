# Lecture 14, Feb 10, 2023

## The Normal (Gaussian) Distribution

\noteDefn{Given a mean $\mu$ and variance $\sigma^2$, the \textit{normal distribution} is given by $$n(x; \mu, \sigma) = \frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{(x - \mu)^2}{2\sigma^2}}, x \in \reals$$}

* This gives a symmetric bell centered around the mean $\mu$, with width proportional to $\sigma$
	* $\mu$ is a translation
	* $\sigma$ gets larger as the curve gets wider and flatter
	* $\lim _{\sigma \to 0} n(x; \mu, \sigma) = \delta(x - \mu)$
* The Gaussian is important due to the central limit theorem: taking a large number of random variables and taking their average, it will give the normal distribution regardless of the distribution of the individual random variables
* $\alignedeqntwo[t]{\left(\intinf \frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{x^2}{2\sigma^2}}\,\dx\right)^2}{\frac{1}{2\pi\sigma^2}\intinf e^{-\frac{x^2}{2\sigma^2}}\,\dx\intinf e^{-\frac{y^2}{2\sigma^2}}\,\dy}{\frac{1}{2\pi\sigma^2}\intinf\intinf e^{-\frac{x^2 + y^2}{2\sigma^2}}\,\dx\,\dy}{\frac{1}{2\pi\sigma^2}\int _0^{2\pi} \int _0^\infty e^{-\frac{r^2}{2\sigma^2}}r\,\dr\,\dtheta}{\frac{1}{4\pi\sigma^2}\int _0^{2\pi}\int _0^\infty e^{-\frac{s}{2\sigma^2}}\,\ds\,\dtheta}{\frac{1}{2\sigma^2}\int _0^\infty e^{-\frac{s}{2\sigma^2}}\,\ds}{\frac{1}{2\sigma^2}\inteval{-2\sigma^2e^{-\frac{s}{2\sigma^2}}}{0}{\infty}}{1}$
* $\alignedeqntwo[t]{E[X]}{\intinf x\frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{(x - \mu)^2}{2\sigma^2}}\,\dx}{\frac{1}{\sqrt{2\pi}}\intinf (\sigma z + \mu)e^{-\frac{z^2}{2}}\sigma\,\dz}{\frac{\sigma}{\sqrt{2\pi}}\intinf ze^{-\frac{z^2}{2}}\,\dz + \frac{\mu}{\sqrt{2\pi}}\intinf e^{-\frac{z^2}{2}}\,\dz}{0 + \mu\intinf n(z; 0, 1)\,\dz}{\mu}$
	* Substitute $z = \frac{x - \mu}{\sigma}$
	* $\intinf ze^{-\frac{z^2}{2}}\,\dz = 0$ because the integrand is an odd function
* Using a similar argument we may show that the variance is $\sigma^2$

\noteDefn{$n(x; 0, 1)$ is referred to as the \textit{standard normal distribution} \tcblower $$\Phi(x) = \int _{-\infty}^x n(y; 0, 1)\,\dy$$ is the cumulative distribution function of the standard normal, so $$P(A \leq X \leq B) = \Phi(B) - \Phi(A)$$}

* Note $\Phi$ is not analytically evaluable, so there are usually tables of values for it
* Suppose $X$ has PDF $n(x; \mu, \sigma)$; let $Z = \frac{X - \mu}{\sigma}$, then $Z$ has PDF $n(x; 0, 1)$, which is the standard normal
	* $\alignedeqntwo[t]{P(X \leq x)}{\int _{-\infty}^x n(x; \mu, \sigma)\,\dx}{\int _{-\infty}^x \frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{(t - \mu)^2}{\sigma^2}}\,\dt}{\int _{-\infty}^\frac{x - \mu}{\sigma} \frac{1}{\sqrt{2\pi}\sigma}e^{-\frac{s^2}{2}}\sigma\,\ds}{\int _{-\infty}^\frac{x - \mu}{\sigma} n(s; 0, 1)\,\ds}{P\left(Z \leq \frac{x - \mu}{\sigma}\right)}{\Phi\left(\frac{x - \mu}{\sigma}\right)}$
* Therefore $P(A \leq X \leq B) = \Phi\left(\frac{A - \mu}{\sigma}\right) - \Phi\left(\frac{B - \mu}{\sigma}\right)$
* Example: Suppose $X$ is a random variable with distribution $n(x; 5, 2)$; find $P(-1 \leq X \leq 4)$
	* Need to transform this into the standard normal
	* Let $Z = \frac{X - 5}{2}$ then $Z$ has the standard normal distribution and CDF $\Phi$
	* $P(-1 \leq X \leq 4) = P\left(\frac{-1 - 5}{2} \leq \frac{X - 5}{2} \leq \frac{4 - 5}{2}\right) = P\left(-3 \leq Z \leq -\frac{1}{2}\right) = \Phi\left(-\frac{1}{2}\right) - \Phi(-3) = 0.3072$
	* $\Phi(x)$ is `normcdf` in MATLAB

