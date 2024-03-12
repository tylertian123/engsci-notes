# Lecture 14, Mar 8, 2024

## Logistic Regression

* Try to estimate $P[Y = i | \bm x, \bm w]$ where $\bm y \in C = \set{1, 2, \dots, c}$ are classes, $\bm x$ is a feature, and $\bm w$ are linear model weights
* Example: binary hypothesis ($c = 2$) with Bernoulli probabilities
	* Then $p(y = 1 | x) = \frac{p(x | y = 1)p(y = 1)}{p(x | y = 1)p(y = 1) + p(x | y = 0)p(y = 0)} = \frac{1}{1 + \frac{p(x | y = 0)p(y = 0)}{p(x | y = 1)p(y = 1)}}$
	* We can write this as $\frac{1}{1 + e^{-\alpha}}$ where $\alpha = \log \frac{p(x | y = 0)p(y = 0)}{p(x | y = 1)p(y = 1)}$
* $\sigma(\alpha) = \frac{1}{1 + e^{-\alpha}}$ is the *sigmoid function*, which maps $\reals \to (0, 1)$ which is useful for probabilities
	* Has an S shape with value of $\frac{1}{2}$ at 0
	* Note $\sigma(-\alpha) = 1 - \sigma(\alpha)$ and $\alpha = \log\frac{\sigma(\alpha)}{1 - \sigma(\alpha)}$
	* $\diff{\sigma}{\alpha} = \sigma(\alpha)(1 - \sigma(\alpha))$
	* We can classify $\hat y = 1$ if $\sigma(\alpha) > \frac{1}{2}$ or $\hat y = 0$ otherwise
* Our model is then $\hat p(y = 1 | \bm x) = \frac{1}{1 + e^{-\bm w^T\bm x}} = \sigma(\bm w^T\bm x)$, where we try to find the best weights $\bm w$
* Compared to Gaussian discriminant analysis, which has $2D$ for means and $D(D + 1)/2$ for covariances and priors, we only have $D$ parameters and a lot less computation overall
* Consider a Bernoulli trial with $\theta = P[y = 1]$, so $P[y] = \theta^y(1 - \theta)^{1 - y}$
	* Let $\theta = P[y = 1 | \bm x, \bm w] = \sigma(\bm w^T\bm x)$
	* For $n$ trials, the NLL is $-\log\prod _{i = 1}^n P[y_i | \bm x_i, \bm w] = -\sum _{i = 1}^n\log(\theta _i^y(1 - \theta _i)^{1 - y_i})) = -\sum _{i = 1}^n y_i\log\theta _i + (1 - y_i)\log(1 - \theta _i)$ where $\theta _i = \sigma(\bm w^T\bm x_i) = \sigma _i$
	* This is the *cross-entropy* loss function
	* $\diff{}{w}\text{NLL} = -\sum _{i = 1}^n \left(y_i\frac{1}{\theta _i}\theta _i' + (1 - y_0)\frac{1}{1 - \theta _i}(-\theta _i')\right) = -\sum _{i = 1}^n \left(y_i\frac{\theta _i'}{\theta _i} - (1 - y_0)\frac{\theta _i'}{1 - \theta _i}\right) = 0$
	* $\theta _i' = \sigma _i(1 - \sigma _i)\diff{}{w_j}\bm w^T\bm x_i = \sigma _i(1 - \sigma _i) x_{ij}$
	* $\frac{\theta _i'}{\theta _i} = (1 - \sigma _i)x_{ij} \implies \frac{\theta _i'}{1 - \theta _i'} = \sigma _i x_{ij}$
	* Therefore $\diff{}{w}\text{NLL} = \sum _{i = 1}^n (y_i - \sigma _i) x_{ij} = 0$
		* This can be interpret as the error multiplied by the observation
	* No closed-form solution; we can use methods such as gradient descent
		* The gradient vector is $\sum _{i = 1}^n (y_i - \sigma _i)\bm x_i$
* Just like in linear regression, we're not restricted to just a single basis; we can change to e.g. a polynomial basis
	* Change of basis can make the space more linearly separable
	* Sometimes the problem is unsolvable as-is due to the data not being linearly separable
* For multiple classes, $p(c_k | \bm x, \bm w) = \frac{e^{\alpha _k}}{\sum _i e^{-\alpha _i}}$ where $\alpha _k = \bm w_k^T\bm x$
	* This is a softmax
	* This reduces to the same sigmoid function if we only have 2 classes
* We can also replace the sigmoid with $\tanh$ (and rescale to between 0 and 1)

