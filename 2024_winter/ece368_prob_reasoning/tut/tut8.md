# Tutorial 8, Mar 22, 2024

# Markov Chains

* Markov property: $P[X_{t + 1} = y | X_t = x, X_{t - 1} = X_t - 1, \dots, X_0 = x_0] = P[X_{t + 1} = y | X_t = x]$
* Define $P(x, y) = P[X_{t + 1} = y | X_t = x]$, i.e. the probability of starting in $x$ and ending in $y$ after one step
* Define the *stochastic matrix* or *transition matrix* $\bm P$ such that $p_{ij} = P(i, j)$
	* Each row sums to 1
* If $X_t \sim \mathcal \bm\mu_t$, then the next distribution is $P[X_{t + 1} = y] = \sum _{x \in \mathcal X} \mu _t(x)\bm P(x, y)$ and so $\bm\mu _{t + 1} = \bm\mu _t\bm P = \bm\mu _0\bm P^t$
* The probability of transitioning from $x$ to $y$ in $t$ steps is $P^t(x, y)$
* $\bm\pi$ is *stationary* if $\bm\pi = \bm\pi\bm P$, so if we start in $\bm\pi$ as the initial distribution, the distribution stays constant
* If $\bm P$ is aperiodic and irreducible, then the Markov chain will have a stationary distribution given by $\bm\pi$ above

