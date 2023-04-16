# Lecture 13, Feb 8, 2022

## Poisson Distribution

* Given a sequence of independent intervals, how many times will a given event occur within an interval?
* Example: number of goals in a soccer game, number of snow days in a year, number of arrivals per minute at an internet router
* A *Poisson process* is a process where the number of arrivals in an interval is a random variable independent of the other intervals
	* The number of arrivals is proportional to the length of the interval
	* The number of arrivals in a given interval follows a Poisson PMF

\noteDefn{The \textit{Poisson PMF} is given by $$p(x; \lambda) = \frac{e^{-\lambda}\lambda^x}{x!}, x = 0, 1, 2, \cdots$$ where $\lambda$ is the Poisson parameter and $x$ is the number of arrivals in the interval described by the distribution \tcblower The Possion parameter $\lambda$ is both the mean and the variance of the Possion distribution; we have $$\lambda = rt$$ where $r$ is the rate of arrivals, and $t$ is the length of the interval}

* Statistics of the Poisson PMF:
	* $\mu = \sum _{x = 0}^\infty x\frac{e^{-\lambda}\lambda^x}{x!} = e^{-\lambda}\sum _{x = 1}^\infty \frac{\lambda^x}{(x - 1)!} = e^{-\lambda}\lambda \sum _{x = 1}^\infty \frac{\lambda^{x - 1}}{(x - 1)!} = e^{-\lambda}\lambda e^{\lambda} = \lambda$
	* We can also show $\sigma^2 = \lambda$ through a similar calculation
* We can think of the Poisson distribution as the binomial distribution, in the limit where $n \to \infty, p \to 0$ and $np \to \lambda$
	* $\alignedeqntwo[t]{\lim _{n \to \infty, p \to 0} \binom{n}{x}p^x(1 - p)^{n - x}}{\lim _{n \to \infty, p \to 0} \frac{n(n - 1)\cdots(n - x + 1)}{x!}\left(\frac{\lambda}{n}\right)^x\left(1 - \frac{\lambda}{n}\right)^{n - x}}{\lim _{n \to \infty, p \to 0} \frac{n^x}{x!}\left(\frac{\lambda}{n}\right)^x\left(1 - \frac{\lambda}{n}\right)^{n - x}}{\frac{\lambda^x}{x!}\lim _{n \to \infty, p \to 0}\left(1 - \frac{\lambda}{n}\right)^{n - x}}{\lim _{n \to \infty, p \to 0} \left(1 - \frac{\lambda}{n}\right)^n\left(1 - \frac{\lambda}{n}\right)^{-x}}{\lim _{n \to \infty, p \to 0} e^{-\lambda} \cdot 1}{\frac{e^{-\lambda}\lambda^x}{x!}}{p(x; \lambda)}$

