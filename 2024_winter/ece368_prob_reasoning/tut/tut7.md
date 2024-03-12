# Tutorial 7, Mar 8, 2024

## Linear Regression

* Given data samples $(x_1, y_1), \dots, (x_n, y_n)$, we want to find a linear model with parameters $a, b$ such that $ax + b$ best fits the data
* Use the squared error, so $(a^*, b^*) = \argmin _{(a, b)} \sum _{i = 1}^n (y_i - (ax_i + b))^2$
* Let $\bm Y = \cvec{y_1}{\vdots}{y_n}$, $\bm H = \matthreetwo{x_1}{1}{\vdots}{\vdots}{x_n}{1}$, $\bm v = \cvec{a}{b}$, $\bm Z = \cvec{z_1}{\vdots}{z_n}$ then $\bm Y = \bm H\bm v + \bm Z$
* The optimization becomes $\bm v^* = \argmin _{\bm v} \norm{\bm Y - \bm H\bm v}^2$
	* The closed-form solution is $\bm v^* (\bm H^T\bm H)^{-1}\bm H^T\bm Y$
* If we assume that the noise $\bm Z$ is Gaussian with zero mean, then the least-squares solution is equivalent to the ML estimate of $\bm Y$ given $\bm X$
* What if $\bm Z$ is exponentially distributed according to $ce^{-z}$?
	* Now all the $Z_i$ are positive -- this means that instead of having the line of best fit passing through the data, it should now be completely below the data, since all the noise is positive
	* Optimize with the condition $y_i - (ax_i + b) \geq 0$ for all $i$
	* $\bm v^* = \argmax _{\bm v} \prod _{i = 1}^n f_z(y_i - (ax_i + b)) = \argmax _{\bm v} \exp\left(-\sum _{i = 1}^N \left(y_i - (ax_i + b)\right)\right)$
	* NLL: $\argmax _{\bm v} \sum _{i = 1}^N \left(y_i - (ax_i + b)\right)$
	* This has no closed-form solution, but it is a linear program that can be solved quickly using numerical methods

