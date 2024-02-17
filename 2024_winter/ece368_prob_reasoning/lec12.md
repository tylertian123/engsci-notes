# Lecture 12, Feb 16, 2024

## Gaussian Systems

* Let $\bm X$ be jointly Gaussian and let $\bm Y = \bm A\bm X + \bm b + \bm Z$, where $\bm Z \sim \mathcal N(\bm 0, \bm\Sigma _{\bm Z})$
	* Assume that $\bm A, \bm b$ are fixed and known, and $\bm Z, \bm X$ are independent (zero-mean, independent noise)
	* We would like to estimate $\bm X$ from $\bm Y$
* Again let $\bm W = \cvec{\bm X}{\bm Y} = \cvec{\bm X}{\bm A\bm X + \bm b + \bm Z} = \mattwo{\bm 1}{\bm 0}{\bm A}{\bm 1}\cvec{\bm X}{\bm Z} + \cvec{0}{\bm b}$
	* Since $\bm W$ is obtained through a linear transformation from $\cvec{\bm X}{\bm Z}$, we know it is jointly Gaussian
	* We've converted this to the conditional PDF problem we found last time
	* $\hat{\bm x}_\text{MAP/LMS}(\bm y) = \bm\mu _{\bm X} + \bm\Sigma _{\bm X\bm Y}\bm\Sigma _{\bm Y\bm Y}^{-1}(\bm y - \bm\mu _{\bm Y})$
* $\bm\mu _{\bm Y} = E[\bm A\bm X + \bm b + \bm Z] = \bm A\bm\mu _{\bm X} + \bm b$
* $\alignedeqntwo[t]{\bm\Sigma _{\bm X\bm Y}}{E[(\bm X - \bm\mu _{\bm X})(\bm A\bm X + \bm b + \bm Z - \bm A\bm\mu _{\bm X} - \bm b)^T]}{E[(\bm X - \bm\mu _{\bm X})(\bm X - \bm\mu _{\bm X})^T\bm A^T] + E[(\bm X - \bm\mu _{\bm X}) + \bm Z]}{\bm\Sigma _{\bm X}\bm A^T}$
* $\alignedeqntwo[t]{\bm \Sigma _{\bm Y\bm Y}}{E[(\bm A(\bm X - \bm \mu _{\bm X}) + \bm Z)(\bm A(\bm X - \bm \mu _{\bm X}) + \bm Z)^T]}{\bm A\bm\Sigma _{\bm X}\bm A^T + \bm\Sigma _{\bm Z}}$
* Substituting these in we get $\alignedeqntwo[t]{\hat{\bm x}_\text{MAP/LMS}}{\bm\mu _{\bm X} + \bm\Sigma _{\bm X}\bm A^T(\bm A\bm\Sigma _{\bm X}\bm A^T + \bm\Sigma _{\bm Z})^{-1}(\bm y - \bm A\bm\mu _{\bm X} - \bm b)}{(\bm\Sigma _{\bm X}^{-1} + \bm A^T\bm\Sigma _{\bm Z}^{-1}\bm A)^{-1}(\bm A^T\bm\Sigma _{\bm Z}^{-1}(\bm y - \bm b) + \bm\Sigma _{\bm X}^{-1}\bm\mu _{\bm X})^{-1}}$
	* Note the second form can be derived using the matrix inversion formula
		* It only uses the inverse covariance (precision) matrices
	* Also $\bm\Sigma _{X | y} = (\bm\Sigma _{\bm X}^{-1} + \bm A^T\bm\Sigma _{\bm Z}^{-1}\bm A)^{-1}$
* Example: consider $\cvec{Y_1}{\vdots}{Y_n} = \cvec{1}{\vdots}{1}\Theta + \cvec{W_1}{\vdots}{W_n} \iff \bm Y = \bm AX + \bm Z$
	* Let $\theta \sim \mathcal N(\bm x_0, \sigma _0^2)$ and $w_i \sim \mathcal N(0, \sigma _i^2)$
	* $\theta$ is some true value, plus zero-mean Gaussian noise $w_i$; we measure this $n$ times
	* Compute terms:
		* $\bm b = \bm 0$
		* $\bm\mu _{\bm X} = x_0$
		* $\bm\mu _{\bm Y} = \bm A\bm\mu _{\bm X} + \bm b = \cvec{x_0}{\vdots}{x_0}$
		* $\bm\Sigma _{\bm Y\bm Y} = \bm A\bm\Sigma _{\bm X}\bm A^T + \bm\Sigma _{\bm Z} = \cvec{1}{\vdots}{1}\sigma _0^2\rvec{1}{\dots}{1} + \diagthree{\sigma _1^2}{\vdots}{\sigma _n^2}$
		* $\bm\Sigma _{\bm X\bm Y} = \bm\Sigma _{\bm X}\bm A^T = \rvec{\sigma _0^2}{\dots}{\sigma _0^2}$
	* Substituting, we get $\frac{\frac{x_0}{\sigma _0^2} + \sum _{i = 1}^n \frac{x_i}{\sigma _i^2}}{\frac{1}{\sigma _0^2} + \sum _{i = 1}^n \frac{1}{\sigma _i^2}}$
		* This is the same result that we would get through regular MAP estimation

