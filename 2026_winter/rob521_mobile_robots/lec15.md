# Lecture 15, Feb 4, 2026

## Probability Concepts

* Bayes' rule underpins all of state estimation: $p(\bm x | \bm y) = \frac{p(\bm y | \bm x)p(\bm x)}{p(\bm y)}$
	* $p(\bm x)$ is the *prior density*
	* $p(\bm x | \bm y)$ is the *posterior density*
	* $p(\bm y | \bm x)$ is a *generative model/measurement likelihood*, e.g. a sensor model
	* $p(\bm y)$ is the *marginal likelihood*, which is a normalization
* We can define *moments* for probability functions
	* The zeroth moment is always 1 by the law of total probability
	* The first (raw) moment is the mean: $\bm \mu = E[\bm x]$
	* The second (central) moment is the covariance: $\bm\Sigma = E[(\bm x - \bm\mu)(\bm x - \bm\mu)^T]$
	* Third and fourth (central) moments are called *skewness* and *kurtosis*
* We denote $\bm x \sim \mathcal N(\bm\mu, \bm\Sigma)$ when $\bm x$ is Gaussian distributed; when $\bm\mu = \bm 0, \bm\Sigma = \bm 1$ we have a *standard Gaussian*
	* Gaussians are completely determined by their first and second moments
* A Gaussian can be factored for Bayesian inference:
	* $p(\bm x, \bm y) = \mathcal N\left(\cvec{\bm\mu _x}{\bm\mu _y}, \mattwo{\bm\Sigma _{xx}}{\bm\Sigma _{xy}}{\bm\Sigma{yx}}{\bm\Sigma _{yy}}\right) = p(\bm x | \bm y)p(\bm y)$
	* $p(\bm x | \bm y) = \mathcal N(\bm\mu _x + \bm\Sigma _{xy}\bm\Sigma^{-1}_{yy}(\bm y - \bm\mu _y), \bm\Sigma _{xx} - \bm\Sigma _{xy}\bm\Sigma _{yy}^{-1}\bm\Sigma _{yx})$
	* $p(\bm y) = \mathcal N(\mu _y, \bm\Sigma _{yy})$
* Statistical independence $p(\bm x, \bm y) = p(\bm x)p(\bm y)$ implies uncorrelated $E[\bm x\bm y^T] = E[\bm x]E[\bm y]$, but not vice versa in general
	* For Gaussians, these are equivalent, as uncorrelated means $\bm\Sigma _{xy} = \bm\Sigma _{yx}^T = 0$ and we just have $p(\bm x | \bm y) = \mathcal N(\bm\mu _x, \bm\Sigma _{xx})$ independent of $\bm y$
* The direct product of two Gaussian PDFs is also a Gaussian, where $\bm\Sigma^{-1} = \sum _{k = 1}^K\bm\Sigma _k^{-1}, \bm\mu = \bm\Sigma\sum _{k = 1}^K\bm\Sigma _k^{-1}\bm\mu _k$
* Given $p(\bm x) = \mathcal N(\bm\mu _x, \bm\Sigma _{xx})$ and a nonlinear map $\bm g(\bm x)$ such that $p(\bm y | \bm x) = \mathcal N(\bm g(\bm x), \bm R)$, we can linearize the nonlinear map using its Jacobian, and get an approximate posterior distribution as $p(\bm y) = \mathcal N(\bm g(\bm\mu _x), \bm R + \bm G\bm\Sigma _{xx}\bm G^T)$ where $\bm G = \eval{\pdiff{\bm g(\bm x)}{\bm x}}{\bm x = \bm\mu _x}$
* The *Sherman-Morrison-Woodbury* (SMW) identities (aka *matrix inversion lemma*) is often used to break up a matrix inversion in probabilistic estimation contexts
* To quantify the uncertainty, we can look at the *negative entropy* (aka *Shannon information*): $H(\bm x) = -E[\ln p(\bm x)] = -\int _a^b p(\bm x)\ln p(\bm x)\,\dd\bm x$
	* For a Gaussian, $H(\bm x) = \frac{1}{2}\ln((2\pi)^N\det\bm\Sigma) + \frac{1}{2}E[(\bm x - \bm\mu)^T\bm\Sigma^{-1}(\bm x - \bm\mu)] = \frac{1}{2}\ln((2\pi e)^N\det\bm\Sigma)$
		* The second term is a *Mahalanobis distance*, similar to Euclidean distance but weighted by the inverse covariance to account for uncertainty
		* We can rewrite it using trace, and using the linearity property we can derive that the second term is always $N$
* Geometrically, we can interpret $\sqrt{\det\bm\Sigma}$ as the volume of the *uncertainty ellipsoid* formed by the PDF
	* The ellipsoids are essentially level sets of the Gaussian PDF

