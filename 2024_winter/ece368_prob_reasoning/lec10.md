# Lecture 10, Feb 9, 2024

## Gaussian Random Vectors

\noteDefn{\textit{Gaussian Random Vector}: $\bm X \in \reals^n$ is Gaussian distributed with mean $\bm m_{\bm X}$ and covariance $\bm K_{\bm X}$ if it has distribution $$f_{\bm X}(\bm x) = \frac{1}{(2\pi)^\frac{n}{2}\det(\bm K_{\bm X})^\frac{1}{2}}\exp\left[-\frac{1}{2}(\bm x - \bm m_{\bm X})^T\bm K_{\bm X}^{-1}(\bm x - \bm m_{\bm X})\right]$$}

* The exponent is in quadratic form and specifies an ellipsoid in $\reals^n$
* Note that if $X_1, \dots, X_n$ are all uncorrelated then $\bm K_{\bm X}$ is diagonal
	* $\bm K_{\bm X} = \diagthree{\sigma _1^2}{\ddots}{\sigma _n^2}$
	* $\bm K_{\bm X}^{-1} = \diagthree{\frac{1}{\sigma _1^2}}{\ddots}{\frac{1}{\sigma _n^2}}$
	* Multiply this by $\bm x - \bm m_{\bm X}$ and we get $\left(\frac{x_1 - m_1}{\sigma _1}\right)^2 + \dots + \left(\frac{x_n - m_n}{\sigma _n}\right)^2$
	* This expression is in the exponent, so we can split it up into a product of exponentials
	* The resulting distribution is a product of distributions in each $X$, so they are all independent
* Consider some linear transformation $\bm A$ so that $\bm Y = \bm A\bm X$ is the transformed version of $\bm X$, which are jointly Gaussian
	* $f_{\bm Y}(\bm y_) = \frac{f_{\bm X}(\bm x)}{\det\bm A} = \frac{f_{\bm X}(\bm A^{-1}\bm y)}{\det\bm A}$
	* Substitute this into the Gaussian for $\bm X$, in the exponent we get $(\bm A^{-1}\bm y - \bm m_{\bm X})^T\bm K_{\bm X}^{-1}(\bm A^{-1}\bm y - \bm m_{\bm X})$
	* Factor out $\bm A$: $(\bm y - \bm A\bm m_{\bm X})^T\bm A^{-T}\bm K_{\bm X}^{-1}\bm A^{-1}(\bm y - \bm A\bm m_{\bm X}) = (\bm y - \bm A\bm m_{\bm X})^T(\bm A\bm K_{\bm X}\bm A^T)^{-1}(\bm y - \bm A\bm m_{\bm X})$
	* Therefore $\bm A\bm K_{\bm X}\bm A^T$ is the new covariance matrix and $\bm A\bm m_{\bm X}$ is the new mean; the result is still Gaussian
	* Since $\bm K_{\bm X}$ is real and symmetric we can find $\bm A$ such that $\bm A\bm K_{\bm X}\bm A^T = \bm\Lambda$, then the resulting Gaussian will be independent in its variables
* Suppose $\bm X$ is IID, can we find a linear transformation $\bm A$ such that the resulting $\bm Y = \bm A\bm X$ has covariance $\bm K_{\bm Y}$?
	* $\bm K_{\bm Y} = \bm P\bm\Lambda\bm P^T = \bm P\bm\Lambda^\frac{1}{2}\bm\Lambda^\frac{1}{2}\bm P^T$
	* Let $\bm A = \bm P\bm\Lambda^\frac{1}{2}$
	* Then $\bm K_{\bm Y} = \bm A\bm K_{\bm X}\bm A^T = \bm A\bm 1\bm A^T = \bm A\bm A^T = \bm P\bm\Lambda^\frac{1}{2}\bm\Lambda^\frac{1}{2}\bm P^T = \bm P\bm\Lambda\bm P^T$

