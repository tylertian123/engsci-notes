# Lecture 10, Feb 1, 2023

## Variance

\noteDefn{Let $X$ be a random variable with distribution $f(x)$, then the \textit{variance} of $X$ is $$\sigma^2 = \var(X) = E[(X - \mu)^2]$$ which is in the discrete case: $$\sum _x (x - \mu)^2f(x)$$ in the continuous case: $$\int _{-\infty}^\infty (x - \mu)^2f(x)\,\dx$$ \tcblower $\sigma = \sqrt{\sigma^2} = \sqrt{\var(X)}$ is known as the \textit{standard deviation} of $X$}

* Variance is a measure of variability, or spread -- how wide a range we're going to see values from a distribution
* Example: uniform distribution $f(x) = \twocond{\frac{1}{a}}{0 \leq x \leq a}{0}{\text{elsewhere}}$
	* $\sigma^2 = \int _0^a \left(x - \frac{a}{2}\right)^2\frac{1}{a}\,\dx = \frac{1}{a}\inteval{\frac{x^3}{a} - a\frac{x^2}{2} + a^2\frac{x^2}{4}}{0}{a} = \frac{a^2}{12}$
	* Note $\sigma^2 \to 0$ as $a \to 0$, which would give us a delta function
* $\alignedeqntwo[t]{\sigma^2}{\int _{-\infty}^\infty (x - \mu)^2f(x)\,\dx}{\int _{-\infty}^\infty (x^2 - 2\mu x + \mu^2)f(x)\,\dx}{\int _{-\infty}^\infty x^2f(x)\,\dx - 2\mu\int _{-\infty}^\infty xf(x)\,\dx + \mu^2\int _{-\infty}^\infty f(x)\,\dx}{E[X^2] - 2\mu^2 + \mu^2}{E[X^2] - \mu^2}{E[X^2] - (E[X])^2}$
	* This also applies to the discrete case since sums can be split exactly in the same way

## Covariance and Correlation

\noteDefn{Let $X$ and $Y$ be random variables with joint distribution $f(x, y)$ and means $\mu _x, \mu _y$, then the \textit{covariance} of $X$ and $Y$ is $$\sigma _{xy} = \cov(X, Y) = E[(X - \mu _x)(Y - \mu _y)]$$ which is in the discrete case $$\sum _x \sum _y (x - \mu _x)(y - \mu _y)f(x, y)$$ in the continuous case $$\int _{-\infty}^\infty \int _{-\infty}^\infty (x - \mu _x)(y - \mu _y)f(x, y)\,\dx\,\dy$$}

* Note that $\sigma _{xx} = E[(X - \mu _x)(X - \mu _x)] = E[(X - \mu _x)^2] = \sigma^2$, i.e. the variance is the covariance of a random variable with itself
* The covariance is a measure of correlation
	* If the covariance is positive, then both variables tend to be above their means or below their means at the same time; the two variables would be *positively correlated*
	* If the covariance is negative, then when one is above its mean the other would tend to be below its mean; the two variables would be *negatively correlated*
* $\sigma _{xy} = E[XY] - \mu _x\mu _y$

\noteDefn{Let $X$ and $Y$ be random varaibles with covariance $\sigma _{xy}$ and standard deviations $\sigma _x$ and $\sigma _y$, then the \textit{correlation coefficient} of $X$ and $Y$ is $$\rho _{xy} = \frac{\sigma _{xy}}{\sigma _x\sigma _y}$$}

* The correlation coefficient is a normalized, dimensionless version of the covariance; we always have $\rho _{xy} \in [-1, 1]$
	* Two variables are *uncorrelated* if $\rho _{xy} = 0$
	* Note independence implies correlation 0, but correlation 0 does not imply independence

