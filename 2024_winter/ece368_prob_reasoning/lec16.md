# Lecture 16, Mar 15, 2024

## Convergence of Markov Chains

* We would like to know the following:
	1. When does a Markov chain have steady-state probabilities?
	2. Are the steady-state probabilities unique?
	3. When does $P^n$ converge to the steady-state probabilities?
* Suppose that state $i$ is recurrent; let $T_i(k)$ be the number of steps between the $k$th visit and $k - 1$th visit
	* The proportion of time spent in $i$ is $\frac{k}{T_i(1) + \dots + T_i(k)}$
	* Note that this is the reciprocal of $\frac{1}{k} \sum _{j = 1}^k T_i(j) \to E[T_i]$
		* This is because the return times $T_i$ are IID
	* Therefore this converges to $\frac{1}{E[T_i]} = \pi _i$
		* This satisfies the global balance equations
* State $i$ is *positive recurrent* if $E[T_i] < \infty$; in this case all states in the class will have nonzero probability since $\pi _i > 0$
	* A positive recurrent, aperiodic state is *ergodic*
* State $i$ is *null recurrent* if $E[T_i] = \infty$; in this case $\pi _i = 0$ and states will have zero probability
	* This arises with infinite state Markov chains
	* Even though we always come back (the state is recurrent), if the chain is infinite, it is possible to have zero probability if we don't return often enough

\noteThm{For an irreducible (single class), aperiodic, and positive recurrent Markov chain, $$\lim _{n \to \infty} p_{jj}(n) = \pi _{j} \quad \forall j$$that is, there is a steady-state PMF, obtainable by solving the global balance equations.}

\noteThm{For an irreducible, periodic, and positive recurrent Markov chain with period $d$, $$\lim _{n \to \infty} p_{jj}(nd) = d\pi _j \quad \forall j$$where the "steady-state" probabilities exist over the period instead of individual steps.}

* The factor of $d$ comes in because there are only $\frac{1}{d}$ of the total states that can occur
* For a periodic Markov chain the transition probabilities form multiple sub-matrices

