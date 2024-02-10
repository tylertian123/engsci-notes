# Tutorial 3, Feb 9, 2024

## Probability Review

\noteDefn{\textit{Exponential Distribution Family}: The exponential family of distributions over $x$, a vector or scalar that can be discrete or continuous, is$$p(x | \bm\eta) = h(x)g(\bm\eta)e^{\bm\eta^Tu(x)}$$where $\bm\eta$ is a parameter of the distribution, $u(x)$ is a sufficient statistic, and $g(\bm\eta)$ is a normalization term.}

* Exponential distribution family includes many standard distributions
	* e.g. Bernoulli, bi/multinomial, Poisson, Gaussian, beta/Dirichlet, etc
	* Distributions in this family share important properties such as having conjugate priors
* e.g. Bernoulli: $p(x | \mu) = \mu^x(1 - \mu)^{1 - x}$
	* In this case, $h(x) = 1, u(x) = x, \eta = \ln\frac{\mu}{1 - \mu}$

