# Lecture 17 (Online)

## Moments and Moment-Generating Functions

\noteDefn{The $r$th \textit{moment} about the origin of the random variable $X$ is $$\mu _r' = E[X^r] = \twocond{\sum _x x^rf(x)}{X\text{ discrete}}{\intinf x^rf(x)\,\dx}{X\text{ continuous}}$$}

* The first moment is the mean: $\mu = \mu _1'$
* The second moment is related to variance: $\sigma^2 = E[X^2] - \mu^2 = \mu _2' - \mu^2$

\noteDefn{The \textit{moment-generating function} of the random variable $X$ is $$M_X(t) = E[e^{tX}] = \twocond{\sum _x e^{tx}f(x)}{X\text{ discrete}}{\intinf e^{tx}f(x)\,\dx}{X\text{ continuous}}$$}

* Consider the discrete case: $\alignedeqntwo[t]{\eval{\diffn{r}{M_X(t)}{t}}{t = 0}}{\eval{\diffn{r}{}{t}\sum _x e^{tx}f(x)}{t = 0}}{\sum _x f(x)\eval{\diffn{r}{}{t}}{t = 0}}{\sum _x f(x)x^r\eval{e^{tx}}{t = 0}}{\sum _xf(x)x^r}{E[X^r]}{\mu _r'}$
	* This works the same in the continuous case
* In general $\mu _r' = \eval{\diffn{r}{M_X(t)}{t}}{t = 0}$

## Linear Combinations of Random Variables

* Consider a discrete RV $X$ with distribution $f(x)$; let $Y = aX$, then the distribution $h(y) = f\left(\frac{y}{a}\right)$, using the formula we found before
* In the continuous case using the formula before $h(y) = \frac{1}{\abs{a}}f\left(\frac{y}{a}\right)$
* If we have the moment generating function of $X$ as $M_X(t)$, how do we find $M_Y(t)$?
	* $\alignedeqntwo[t]{M_Y(t) = \intinf e^{ty}h(y)\,\dy}{\frac{1}{\abs{a}}\intinf e^{ty}f\left(\frac{y}{a}\right)\,\dy}{\frac{1}{\abs{\alpha}}\intinf e^{taz}f(z)a\,\dz}{\intinf e^{taz}f(z)\,\dz}{M_X(at)}$
	* This is also true in the discrete case
* In general $M_{aX} = M_X(at)$
* What about a sum of independent RVs $Z = X + Y$?
	* $h(z) = P(X + Y = z) = \sum _w P(X = w)P(Y = z - w) = \sum _{w = -\infty}^\infty f(w)g(z - w)$
	* In the continuous case this is similar: $h(z) = \intinf f(w)g(z - w)\,\dw = (f * g)(z)$
		* This is a convolution
	* $M_Z(t) = \sum _z e^{tz}h(z) = \sum _z e^{tz}\sum _w f(w)g(z - w) = \sum _w f(w) \sum _z e^{tz}g(z - w)$
		* Let $k = z - w$
		* $M_Z(t) = \sum _w f(w) \sum _k e^{t(k + w)}g(k) = \sum _w e^{tw}f(w) \sum _k e^{tk}g(k) = M_X(t) + M_Y(t)$
* In general $M_{X + Y} = M_X(t)M_Y(t)$
* There is a connection between moment generating functions and Laplace/Fourier transforms

