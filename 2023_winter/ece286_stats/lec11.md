# Lecture 11 (Recorded)

## Expectations of Linear Combinations of Random Variables

\noteDefn{A function $p(x)$ is linear if $p(ax + y) = ap(x) + p(y)$}

* Because integration and summation are linear, expectation $E[X]$ is linear: $E[aX + Y] = aE[X] + E[Y]$
* Useful implications:
	* $E[aX + b] = aE[X] + b$
	* $E[g(X, Y) + h(X, Y)] = E[g(X, Y)] + E[h(X, Y)]$

## Variance and Independence

* If $X$ and $Y$ are independent: $\alignedeqntwo[t]{E[XY]}{\int _{-\infty}^\infty\int _{-\infty}^\infty xyf(x, y)\,\dx\,\dy}{\int _{-\infty}^\infty \int _{-\infty}^\infty xyg(x)h(y)\,\dx\,\dy}{\int _{-\infty}^\infty xg(x)\,\dx\int _{-\infty}^\infty yh(y)\,\dy}{E[X]E[Y]}$
	* Therefore because $\sigma _{XY} = E[XY] - E[X]E[Y]$, this means independence implies uncorrelated
	* But uncorrelated does not imply independence!
* Note $\sigma^2 _{aX + bY + c} = a^2\sigma _X^2 + b^2\sigma _Y^2 + 2ab\sigma _{XY}^2$
	* The constant does not affect the variance
	* There is a cross term
	* The cross term $\sigma_{XY}$ disappears if $X$ and $Y$ are independent variables

## Uniform Distribution

* Every element in the sample space has the same probability
* For $S = {1, \cdots, n}$, then $f(k) = \frac{1}{n}$ for $k \in S$

## Binomial Distribution

* A Bernoulli random variable has 2 outcomes $S = {0, 1}$, and each has a probability (e.g. a coin flip)

\noteDefn{A \textit{Bernoulli process} is a process involving $n$ repeated, independent, identical trials where the only outcomes possible are 1 and 0, with $P(1) = p$; let $X$ be the number of 1's that occur, then the \textit{Binomial distribution} is the probability mass function for $X$: $$P(X = x) = f(x) = b(x; n, p) = \binom{n}{x}p^x(1 - p)^{n - x}$$}

* Example: when sending a string of 0s and 1s, how many errors will occur?
* $p^x(1 - p)^{n - x}$ is the probability of having $x$ 1's and $n - x$ 0's in some order; $\binom{n}{x}$ is all the ways to have that many 1's and 0's
* $E[X] = np$ is the expectation value of a binomial distribution
	* We can think of the Bernoulli process as a sum of $n$ trials, $X = Y_1 + \cdots + Y_n$, so since expectation is linear, we can just add up the probabilities
* Similarly $\sigma _X^2 = np(1 - p)$

## Multinomial Distribution

* An extension of the binomial distribution where each trial can have $m$ outcomes instead of just 2
* The chance of each outcome $E_i$ is $p_i$
* $x_i$ is the number of times we get outcome $E_i$; $\sum _i x_i = n$

\noteDefn{The \textit{multinomial distribution} is $$f(x_1, \cdots, x_n; p_1, \cdots, p_m, n) = \binom{n}{x_1, x_2, \cdots, x_m}p_1^{x_1}p_2^{x_2}\cdots p_m^{x_m}$$}


