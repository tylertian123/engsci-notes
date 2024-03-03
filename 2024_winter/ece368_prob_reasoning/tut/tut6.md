# Tutorial 6, Mar 1, 2024

## Gaussian Parameter Estimation

* Let $\bm W = \rvec{X_1}{\dots}{X_n}{Y_1}{\dots}{Y_n}^T \sim \mathcal N(\bm\mu _W, \bm\Sigma _W)$; suppose we observe $\bm Y = \rvec{Y_1}{\dots}{Y_n}^T$, we wish to estimate $\bm X = \rvec{X_1}{\dots}{X_n}^T$
* Claim: $f(\bm x | \bm y) \sim \mathcal N(\bm\mu _{X|Y}, \bm\Sigma _{X|Y})$; if this is true, since the max of a Gaussian is at its mean, the MAP estimate of $\bm x$ given $\bm y$ is simply the mean of the Gaussian, i.e. $\bm\mu _{X|Y}$
	* Proof in course notes
	* $\bm\mu _{X|Y} = \bm\mu _X + \bm\Sigma _{XY}\bm\Sigma _{YY}(\bm y - \bm\mu _Y)$
	* $\bm\Sigma _{X|Y} = \bm\Sigma _{XX} - \bm\Sigma _{XY}\bm\Sigma _{YY}^{-1}\bm\Sigma _{YX}$
	* Where $\bm\Sigma _W = \mattwo{\bm\Sigma _{\bm X\bm X}}{\bm\Sigma _{\bm X\bm Y}}{\bm\Sigma _{\bm Y\bm X}}{\bm\Sigma _{\bm Y\bm Y}}$
* Example: let $\bm X \sim \mathcal N(\bm\mu _X, \bm\Sigma _X), \bm Z \sim \mathcal N(\bm 0, \bm\Sigma _Z), \bm A \in \reals^{n \times n}, \bm b \in \reals^n$ and consider $\bm Y = \bm A\bm X + \bm Z + \bm b$; given an observation of $\bm Y$, we wish to estimate $\bm X$
	* Let $\bm W = \cvec{\bm X}{\bm Y} = \cvec{\bm X}{\bm A\bm X + \bm Z + \bm b} = \mattwo{\bm 1_{n \times n}}{\bm 0}{\bm A}{\bm 1_{n \times n}}\cvec{\bm X}{\bm Z} + \cvec{\bm 0}{\bm b}$
	* Notice that $\cvec{\bm X}{\bm Z}$ is Gaussian, and $\cvec{\bm X}{\bm Z} \to \cvec{\bm X}{\bm Y}$ by a linear transformation, so it is also Gaussian
	* We can use the parameter estimation formula shown above once we find the mean and covariance matrix of $\bm W = \cvec{\bm X}{\bm Y}$
* Example: suppose $X, W_1, W_2 \sim \mathcal N(0, 1)$ and independent; let $Y_1 = X + W_1, Y_2 = X + W_2, Y_3 = W_1 + W_2$; find the MAP estimate of $X$ given $Y_1, Y_2, Y_3$
	* We get two noisy observation of $X$ and an observation of the noise
	* $\bm W = \cvec{X}{Y_1}{X_2}{Y_3} = \cvec{X}{X + W_1}{X + W_2}{W_1 + W_2}$
		* Note this is Gaussian since all the terms are Gaussian, so their sum will also be
	* $\bm\Sigma _W = \begin{bmatrix} 1 & 1 & 1 & 0 \\ 1 & 2 & 1 & 1 \\ 1 & 1 & 2 & 1 \\ 0 & 1 & 1 & 2 \end{bmatrix}$
		* For diagonal entries: variance of $X$ is 1; variance of the sum of two unit variance variables is 2
		* For off-diagonal entries use the bilinearity of covariance and note that $X, W_1, W_2$ are all independent
	* Partition the above into sub-matrices for the covariances and use the formulas

