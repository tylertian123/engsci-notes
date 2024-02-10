# Lecture 7, Jan 29, 2024

## Estimators for Multinomial RVs

* The multinomial distribution is a generalization of the binomial distribution
	* In binomial we had 2 outcomes 0 and 1, so $N_0 + N_1 = n$; in multinomial we have $k$ outcomes, $N_1, \dots, N_K = n$
	* The probability of outcome $k$ is $\theta _k$ and $\sum _{k = i}^K \theta _k = 1$
	* e.g. tossing a die
* The indicator function for multinomial is a $k$-tuple $\bm X$, with a 1 in the position that the outcome occurred and 0s everywhere else
	* e.g. $\bm X = (0, 0, 1, 0, \dots, 0)$ indicates outcome is 3
* The probability of $\bm X$ is then $P[\bm X = (b_1, \dots, b_K)] = \prod _{k = 1}^K \theta _k^{b_k}$ where $b_k$ is the number of occurrences of $k$
* Again consider $n$ independent trials $\bm X_1, \dots, \bm X_n$ and let $\bm\theta = (\theta _1, \dots, \theta _K)$
* $\alignedeqntwo[t]{P[\bm X_1 = \bm b_1, \bm X_2 = \bm b_2, \dots, \bm X_n = \bm b_n; \bm\theta]}{\prod _{j = 1}^n P[\bm X_j = \bm b_j]}{\prod _{j = 1}^n \theta _1^{b_{j_1}}\dots\theta _K^{b_{j_K}}}{\theta _1^{\sum b_{j_1}}\dots\theta _K^{\sum b_{j_K}}}{\theta _1^{N_1}\dots\theta _K^{N_K}}$
	* Where $N_k = \sum _j b_{j_k}$ is the number of times outcome $k$ occurred in $n$ trials
	* The vector $\bm N = (N_1, \dots, N_K)$ is a sufficient statistic for our estimators
* Note $E[\bm N; \bm\theta] = (E[N_1], \dots, E[N_K]) = (n\theta _1, n\theta _2, \dots, n\theta _K)$
	* The expected value of the $\bm N$ vector is simply the number of trials times the probability of each trial
* Consider the MLE estimator:
	* $\log P[\bm N; \bm\theta] = \log(\theta _1^{N_1}\dots\theta _K^{N_K}) = \sum _{k = 1}^K N_k\log\theta _k$
	* Now we need to optimize this sum with respect to $\bm\theta$, with the constraint that all $\theta _k$ are positive the sum of all $\theta _k$ is 1
	* Lagrangian: $\sum _{k = 1}^K N_k\log\theta _k + \lambda\left(\sum _{k = 1}^K\theta _k - 1\right)$
		* For a particular term $\theta _j$, the derivative is $\frac{N_j}{\theta _k} + \lambda = 0 \implies \frac{N_j}{\theta _j} = -\lambda$
		* Substituting this into the constraint for $\theta$ we get $\lambda = -n$
	* Therefore $\hat\theta _{j_\text{ML}} = -\frac{N_j}{\lambda} = \frac{N_j}{n}$
		* This is expected, since it's the relative frequency of $k$
* This is for a particular sequence of outcomes; if we only cared about number of occurrences, we have to add the multinomial coefficient
	* $\binom{n}{n_1, n_2, \dots, n_K} = \frac{n!}{n_1!n_2!\dots n_K!}$ where $n_1 + \dots + n_K = n$
	* For $K = 2$, this reduces to the binomial coefficient
* For the MAP estimate we use the Dirichlet prior, which is a generalization of the beta distribution
	* The Dirichlet distribution is $f_{\bm\Theta}(\bm\theta) = \frac{\Gamma(\alpha _0)}{\Gamma(\alpha _1)\dots\Gamma(\alpha _K)}\theta _1^{\alpha _1 - 1}\dots\theta _K^{\alpha _K - 1}$ where $\alpha _j > 0, \sum _j \alpha _j = \alpha _0$
		* This is the conjugate prior for the multinomial distribution since it has the same form
	* The posterior is $\alignedeqntwo[t]{f(\bm\Theta | n_1, \dots, n_K)}{\frac{p(n_1, \dots, n_K | \bm\theta)f(\bm\theta)}{p(n_1, \dots, n_K)}}{c\theta _1^{n_1 + \alpha _1 - 1}\dots\theta _K^{n_K + \alpha _K - 1}}{\frac{\Gamma(\alpha _0 + n)}{\Gamma(\alpha _1 + n)\dots\Gamma(\alpha _{K} + n_K)}\frac{\prod _{k = 1}^K \theta _k^{n_k + \alpha _k - 1}}{P(n_1, \dots, n_K)}}$
	* We again form the Lagrangian and take derivatives to obtain: $\frac{n_j + \alpha _j - 1}{\theta _j} = -\lambda, -\theta _j = \frac{n_j + \alpha _j - 1}{\lambda}$
	* Therefore $\hat\theta _{j_\text{MAP}} = \frac{n_j + \alpha _j - 1}{n + \alpha _0 - K}$
		* The $-K$ in the denominator gets rid of all the extra 1s in the $\alpha$s when summed up
		* We can interpret this as a relative frequency, where prior to doing the experiment we did $\alpha _0 - K$ experiments and outcome $j$ occurred $\alpha _j - 1$ times
* Consider the LMS estimator:
	* $\alignedeqntwo[t]{E[\bm\Theta | \bm N]}{\int \dots \int (\theta _1, \dots, \theta _K)c\theta _1^{n_1 + \alpha _1 - 1} \dots \theta _K^{n_K + \alpha _K - 1}\,\dd\theta _1\dots\dd\theta _k}{(E[\Theta _1 | n_1 + \alpha _1 - 1], \dots, E[\Theta _K | n_K + \alpha _K - 1]}{\left(\frac{n_1 + \alpha _1}{n + \alpha _0}, \dots, \frac{n_K + \alpha _K}{n + \alpha _0}\right)}$
		* Note $E[\Theta _j | n_j + \alpha _j - 1] = c\int _0^1\theta _j\theta _j^{n _j + \alpha _j - 1}\,\dd\theta _j = \frac{n_j + \alpha _j}{n + \alpha _0}$
	* Therefore $\hat\theta _{j_\text{LMS}} = \frac{n_j + \alpha _j}{n + \alpha _0}$
* Again notice that as $n \to \infty$, all 3 of these estimators converge to the ML estimator

## Binary Hypothesis Testing

* Hypothesis testing is like a more constrained version of parameter estimation; instead of estimating the value of $\theta$, we are testing whether $\theta _0$ or $\theta _1$ is more likely
* Given two hypotheses $H_0$ (the *null hypothesis*, or the "default" to be proved or disproved) and $H_1$ (the *alternative hypothesis*), we want to know which one is more likely
* We would like to find $g \colon S_{\bm X} \mapsto \set{H_0, H_1}$ mapping from observations to hypotheses based on $P[\bm X \in A; H_j]$
	* $g$ divides the sample space into 2 parts, the *acceptance region* $R^c$ where $H_0$ is accepted and *rejection region* $R$ where $H_0$ is rejected
* If $g$ is not perfect, then 2 types of error can occur:
	* *Type I error*: $H_0$ is rejected when it is true
		* Also known as the *significance level* of a test
		* $\alpha(R) = P[\bm X \in R; H_0]$
		* We typically pick this to be 10%, 5%, 1%, etc
	* *Type II error*: $H_0$ is accepted when $H_1$ is true (i.e. $H_0$ is false)
		* $\beta(R) = P[\bm X \in R^c; H_1]$
* We can do this partitioning using our 3 estimators
* Using MLE, we simply pick the $H$ that gives us the maximum likelihood
	* We just need to test $p_{\bm X}(\bm x | H_0)$ and $p_{\bm X}(\bm x | H_1)$
	* The *likelihood ratio* is $L(\bm x) = \frac{p_{\bm X}(\bm x | H_1)}{p_{\bm X}(\bm x | H_0)}$ (alternative divided by null)
	* With the maximum likelihood rule we reject $H_0$ when $L(\bm x) > 1$
	* This can be generalized to rejecting when $L(\bm x) > \xi$ where $\xi$ is the *critical value*
		* Use this when we know one hypothesis is more likely (i.e. a prior)
		* As we increase $\xi$, $\alpha$ decreases while $\beta$ increases
* Example: $H_0: X \sim \mathcal N(0, 1), H_1 : X \sim \mathcal N(1, 1)$
	* The hypothesis changes the mean of the Gaussian
	* $L(x) = \frac{f_X(x; H_1)}{f_X(x; H_2)} = \frac{e^{-(x - 1)^2/2}}{e^{-x^2 / 2}} = e^{-\frac{1}{2}(-2x + 1)}$
	* In this case the threshold rule is $x \LessGtr \gamma = \ln\xi + \frac{1}{2}$
	* Type I error: $\alpha(\gamma) = \int _\gamma^\infty \frac{1}{\sqrt{2\pi}}e^{-{x'}^2/2}\,\dx' = Q(\gamma)$
		* This decreases with $\gamma$
	* Type II error: $\beta(\gamma) = \int _{-\infty}^\gamma = \frac{1}{\sqrt{2\pi}}e^{-(x' - 1)^2/2}\,\dx' = Q(1 - \gamma)$
		* This increases with $\gamma$
	* Note $Q(x) = 1 - \Phi(x)$ where $\Phi(x)$ is the standard normal CDF
* So far we've only divided the region into 2, where one side is accept and the other is reject; we could also do a more complex division where we have pockets of accept in the rejection region, etc; is this better?

\noteThm{\textit{Neyman Pearson Lemma}: Given the likelihood ratio test $L(X), \xi$ such that $$P[L(x) > \xi; H_0] = \alpha \quad\text{and}\quad P[L(X) \leq \xi; H_1] = \beta$$then for any other test (region $R$) with $P[X \in R; H_0] \leq \alpha$ it must be that $P[X \notin R; H_1] \geq \beta$ and $$P[X \in R; H_0] < \alpha \implies P[X \notin R; H_1] > \beta$$That is, the LRT achieves the best possible tradeoff between $\alpha$ and $\beta$.}

* The Neyman Pearson lemma states that given any value of $\alpha$, the likelihood ratio test gives the smallest possible $\beta$ to achieve that $\alpha$
	* This is a constrained minimization problem of minimizing $\beta$ subject to a certain $\alpha$
		* Lagrangian: $\int _A f_X(x; H_1)\,\dx + \lambda\left(\int _R f_X(x; H_0)\,\dx - \alpha\right) = \lambda(1 - \alpha) + \int _A \left(f_X(x; H_1) - \lambda f_X(x; H_0)\right)\,\dx$
		* To minimize this we include $x$ in $A$ if $\frac{f_X(x; H_1)}{f_X(x; H_0)} < \lambda$ to make the term in the integral always negative, which is the LRT

