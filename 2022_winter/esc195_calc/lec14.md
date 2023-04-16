# Lecture 14, Feb 11, 2022

## Infinite Series Theorems

* Limit laws apply for infinite series
	* Sum rule
	* Scalar multiplication
* Theorem: $\sum _{k = 0}^\infty a_k$ converges iff $\sum _{k = j}^\infty a_k$, i.e. convergence only depends on the behaviour of the part extending to infinity
	* Note by definition every term in $a_k$ has to be finite since all terms in a sequence have to be numbers, so we can't have anything infinite in the first $j$ terms
	* $\sum _{k = j}^\infty a_k = L - (a_0 + a_1 + \cdots + a_{j - 1})$
* Example: Given $\sum _{k = 4}^\infty \frac{3^{k - 1}}{4^{3k + 1}}$ converges, then we know $\sum _{k = 0}^\infty \frac{3^{k - 1}}{4^{3k + 1}} = \frac{1}{12} + \frac{1}{64} + \frac{3}{47} + \frac{9}{40} + \sum _{k = 4}^\infty \frac{3^{k - 1}}{4^{3k + 1}}$ also converges
* Theorem: If $\sum _{k = 0}^\infty a_k$ converges, then $\lim _{k \to \infty} a_k = 0$
	* Contrapositive: If $\lim _{k \to \infty} a_k \neq 0$ then $\sum _{k = 0}^\infty a_k$ diverges (Test for Divergence Theorem)

## The Integral Test

* One of the tests for convergence
* Integral test: If $f$ is continuous, decreasing, positive function on $[1, \infty)$ then $\sum _{k = 1}^\infty f(k)$ converges iff $\sum _1^\infty f(x)\,\dx$ converges
	* The infinite sum is basically a Riemann sum with width 1
		* For a right hand sum $\sum _{k = 2}^n f(k) \leq \int _1^n f(x)\,\dx$ since the function is decreasing
		* For a left hand sum $\int _1^n f(x)\,\dx \leq \sum _{k = 1}^{n - 1} f(k)$
	* If the integral converges then the right hand sum must also converge since it is less than the integral
	* If the integral diverges then the left hand sum must also diverge since it is greater than the integral
	* $\int _1^\infty f(x)\,\dx \leq \sum _{k = 1}^\infty f(k) \leq f(1) + \int _1^\infty f(x)\,\dx$
	* The left boundary doesn't have to be 1
	* Since this goes both ways we can also use it to prove the convergence of an improper integral
* Example: Harmonic series $\sum _{k = 1}^\infty \frac{1}{k}$
	* Positive decreasing series so we can apply the integral test
	* $\int _1^\infty \frac{1}{x}\,\dx$ diverges, so the harmonic series diverges
* Example: p-series: $\sum _{k = 1}^\infty \frac{1}{k^p}$
	* $\int _1^\infty \frac{1}{x^p}\,\dx$ converges iff $p > 1$
	* By the integral test this series converges iff $p > 1$
	* Note the lower bound does not have to be 1; only the part that goes to infinity matters for convergence/divergence

## Estimating Sums

* Define the *remainder* as $R_n = S - S_n = a_{n + 1} + a_{n + 2} + \cdots$
* By comparing the remainder to a Riemann sum we get $\int _{n + 1}^\infty f(x)\,\dx \leq R_n \leq \int _n^\infty f(x)\,\dx$
	* $S_n + \int _{n + 1}^\infty f(x)\,\dx \leq S \leq S_n + \int _n^\infty f(x)\,\dx$
* Example: $\sum _{n = 1}^\infty \frac{1}{n^2}$
	* $S_5 = 1.463611$
	* $R_5 \leq \int _5^\infty \frac{1}{x^2}\,\dx = \frac{1}{5}$
	* $R_5 \geq \int _6^\infty \frac{1}{x^2}\,\dx = \frac{1}{6}$
	* $S_5 + \frac{1}{6} \leq S \leq S_5 + \frac{1}{5}$
	* $1.63028 \leq S \leq 1.66361$

## Basic Comparison Test

* Basic Comparison Test: Given $\sum a_k, \sum b_k; a_k > 0, b_k > 0$, then
	1. If $\sum b_k$ is convergent and $a_k \leq b_k$ for all $k$ sufficiently large then $\sum a_k$ converges
		* Proof: Define $S_n = \sum _{k = 1}^n a_k, t_k = \sum _{k = 1}^n b_k$
			* $t = \sum _{k = 1}^\infty b_k$ exists
			* $\Set{S_n}$ is increasing since $a_k > 0$ as the sequences are both positive
			* $S_n \leq t_n \leq t$ so $\Set{S_n}$ is bounded above
			* By the monotonic sequence theorem $\sum a_k$ converges
	2. If $\sum b_k$ is divergent and $a_k \geq b_k$ for all $k$ sufficiently large then $\sum a_k$ diverges
* Example: $\sum _{n = 1}^\infty \frac{7}{17n^2 + 3n^\frac{1}{2} + 5}$
	* $17n^2 + 3n^\frac{1}{2} + 5 > 17n^2$ for $n \geq 1$ so $\frac{7}{17n^2 + 3n^\frac{1}{2} + 5} \leq \frac{7}{17n^2}$
	* $\frac{7}{17}\sum \frac{1}{n^2}$ is convergent so this series converges
* Example: $\sum _{n = 1}^\infty \frac{\ln\left(\frac{n}{1000}\right)}{n}$
	* Find $k$ such that $\frac{\ln\left(\frac{k}{1000}\right)}{k} \geq \frac{1}{k}$
	* For $k$ greater than this value we can do a comparison test to $\sum \frac{1}{n}$ to get that this series diverges

