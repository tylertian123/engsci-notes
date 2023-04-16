# Lecture 9, Jan 30, 2023

## Independence of Random Variables

\noteDefn{Let $X$ and $Y$ be two random variables with joint probability distribution $f(x, y)$ and marginal distributions $g(x), h(y)$; these random variables are \textit{independent} if $f(x, y) = g(x)h(y)$}

* This definition applies to both continuous and discrete cases

## Expectation

\noteDefn{Let $X$ be a random variable with distribution $f(x)$; the expectation value of $X$ is, in the discrete case: $$E[x] = \sum _x xf(x)$$ in the continuous case: $$E[x] = \int _{-\infty}^\infty xf(x)\,\dx$$}

* Also known as expected value or the mean, denoted by $\mu$
* We may replace $x$ with a function of the random variable $g(x)$ to find its expectation

\noteDefn{Let $X$ and $Y$ be random variables with joint distribution function $f(x, y)$; the expectation value of the function $g(X, Y)$ is, in the discrete case: $$E[g(X, Y)] = \sum _x\sum _y g(x, y)f(x, y)$$ in the continuous case: $$E[g(X, Y)] = \int _{-\infty}^\infty \int _{-\infty}^\infty g(x, y)f(x, y)\,\dx\,\dy$$}

* Expectation values easily generalize to multiple variables

