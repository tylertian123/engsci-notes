# Tutorial 5, Feb 16, 2024

## Vector Random Variables and Joint Gaussians

* Let $\bm X = (X_1, \dots, X_n)^T \in \reals^n$ represented by a column vector
* The expectation is $\bm\mu = E[\bm X] = (E[X_1], \dots, E[X_n])^T$
* The covariance matrix is $\bm\Sigma = E[(\bm X - \bm\mu)(\bm X - \bm\mu)^T]$
	* $\bm u^T\bm\Sigma\bm u = \bm u^TE[(\bm X - \bm\mu)(\bm X - \bm\mu)^T]\bm u = E[\bm u^T(\bm X - \bm\mu)(\bm X - \bm\mu)^T\bm u] = E[(\bm u^T(\bm X - \bm\mu))^2] > 0$
	* Therefore $\bm\Sigma$ is symmetric positive definite
* Consider a linear transformation $\bm Y = \bm A\bm X$
	* $\bm\mu _{\bm Y} = \bm A\bm\mu _{\bm X}$
	* $\bm\Sigma _{\bm Y} = \bm A\bm\Sigma _{\bm X}\bm A^T$
* $\bm X$ is jointly Gaussian if $f_{\bm X}(\bm x) = \frac{1}{(2\pi)^\frac{n}{2}\det(\bm \Sigma_{\bm X})^\frac{1}{2}}\exp\left[-\frac{1}{2}(\bm x - \bm \mu_{\bm X})^T\bm\Sigma _{\bm X}^{-1}(\bm x - \bm \mu_{\bm X})\right]$
* For any linear transformation $\bm A$, if $\bm X$ is jointly Gaussian then $\bm A\bm X$ is also jointly Gaussian
	* This is because the sum of Gaussians is also Gaussian
* If $\bm X \sim \mathcal N(\bm\mu _{\bm X}, \bm\Sigma _{\bm X})$ and $\bm\Sigma _{\bm X} = \bm Q\bm D\bm Q^T$, then $\bm Z = \bm Q^T\bm X$ would have a diagonal covariance matrix $\bm\Sigma _{\bm Z} = \bm D$, i.e. it will consist of all independent Gaussians
	* Using this we can find a transformation of the original variables that makes them independent

