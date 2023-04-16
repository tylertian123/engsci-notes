# Lecture 15, Feb 14, 2022

## Limit Comparison Test

* Limit Comparison Test: Given $\sum a_k, \sum b_k; a_k > 0, b_k > 0$, then
	1. If $\lim _{n \to \infty} \frac{a_n}{b_n} = c > 0$ then both series converge or diverge
	2. If $\lim _{n \to \infty} \frac{a_n}{b_n} = 0$ then convergence of $\sum b_n$ implies convergence of $\sum a_n$
	3. If $\lim _{n \to \infty} \frac{a_n}{b_n} = \infty$ then divergence of $\sum b_n$ implies divergence of $\sum a_n$
* Case 1 proof:
	* $\lim _{n \to \infty} \frac{a_n}{b_n} = c \implies \abs*{\frac{a_n}{b_n} - c} < \varepsilon$ for $n > N$
	* Choose $\varepsilon = \frac{c}{2} \implies \frac{c}{2} < \frac{a_n}{b_n} < \frac{3c}{2} \implies \frac{c}{2}b_n \leq a_n \leq \frac{3c}{2}b_n$ for $n \geq N$
	* If $\sum b_n$ converges then so does $\frac{3c}{2}\sum b_n$ so $\sum a_n$ converges by the comparison test
	* If $\sum b_n$ diverges then so does $\frac{c}{2}$ so $\sum a_n$ diverges by the comparison
* Example: $\frac{1}{n^3 - n}$
	* Limit comparison test to $\frac{1}{n^3}$
	* $\lim _{n \to \infty} \frac{a_n}{b_n} = \lim _{n \to \infty} \frac{n^3}{n^3 - n} = 1$ so by LCT, the series converges since $\sum \frac{1}{n^3}$ is convergent

## Alternating Series

* Sometimes series contain both positive and negative terms
* An *alternating series* alternates between positive and negative terms
	* Not all series with both positive and negative terms are alternating, e.g. $\frac{\cos n}{n^2}$
* Alternating series usually have a $(-1)^n$ term to make the alternating signs
* Alternating Series Test: Let $\Set{a_k}$ be a sequence of positive numbers; if $a_{k + 1} < a_k$ and $\lim _{k \to \infty} a_k = 0$, then $\sum _{k = 1}^\infty (-1)^{k - 1}a_k$ converges
	* Since the terms alternate between positive and negative and are decreasing we're always bouncing around in a range that's getting smaller
	* Any partial sum must lie between the two previous sums
	* Proof:
		* First look at the even terms: $S_2 = a_1 - a_2 > 0, S_4 = S_2 + (a_3 - a_4) > 0, \cdots, S_{2n} = S_{2n - 2} + (a_{2n - 1} - a_{2n}) > S_{2n - 2}$
			* By induction, $\Set{S_{2n}}$ is a monotonically increasing sequence
			* Also, $S_{2n} = a_1 - (a_2 - a_3) - (a_4 - a_5) - \cdots - (a_{2n - 2} - a_{2n - 1}) - a_{2n}$; since all the terms after $a_1$ are positive, $S_{2n} < a_1$ for all $n$
			* Since $\Set{S_{2n}}$ is monotonic and bounded by the monotonic sequence theorem it converges
			* Let $\lim _{n \to \infty} S_{2n} = L$
		* Now look at the odd terms: $S_{2n + 1} = S_{2n} + a_{2n + 1}$
			* $\lim _{n \to \infty} S_{2n + 1} = \lim _{n \to \infty} S_{2n} + \lim _{n \to \infty} a_{2n + 1}$
			* First limit is $L$ as above, second limit is 0 since we require that the sequence goes to 0, therefore $\lim _{n \to \infty} S_{2n} + \lim _{n \to \infty} a_{2n + 1} = L$
		* Since $\lim _{n \to \infty} S_{2n} = \lim _{n \to \infty} S_{2n + 1} = L$, $\lim _{n \to \infty} S_n = L$ so the series converges
	* If $a_n \to 0$ is *not* true, then the series *always* diverges, but the series being monotonically decreasing is *not* a strict requirement for convergence
* Example: Alternating harmonic series: $\sum _{n = 1}^\infty \frac{(-1)^{n + 1}}{n}$ converges because absolute value of terms decreases and magnitude goes to 0

## Alternating Series Error Bounds

* The properties of an alternating series give us that $L$ will always be between $S_n$ and $S_{n + 1}$: $\abs{L - S_n} \leq a_{n + 1}$
* The error in a partial sum is less than the next term in the series

## Absolute and Conditional Convergence

* Definition: If $\sum \abs{a_k}$ converges, then $\sum a_k$ is *absolutely convergent*; if $\sum a_k$ converges but not $\sum \abs{a_k}$, then $\sum a_k$ is *conditionally convergent*
* Theorem: If $\sum \abs{a_k}$ converges, then $\sum a_k$ also converges
	* Proof: $-\abs{a_n} \leq a_n \leq \abs{a_n} \implies 0 \leq a_n + \abs{a_n} \leq 2\abs{a_n}$
		* Let $a_n + \abs{a_n} = b_n \implies 0 \leq b_n \leq 2\abs{a_n}$
		* We know $2\sum\abs{a_n}$ converges, therefore $\sum b_n$ converges by the comparison test since $a_n + \abs{a_n} \leq 2\abs{a_n}$
		* Rearranging, $\sum a_n = \sum b_n - \sum \abs{a_n}$
		* Because both $\sum b_n$ and $\sum \abs{a_n}$ is convergent, $\sum a_n$ is convergent
* Example: The alternating harmonic series $\sum _{n = 1}^\infty \frac{(-1)^{n + 1}}{n}$ is conditionally convergent
* $\sum \frac{(-1)^{k + 1}}{k} = \sum \frac{1}{2k - 1} - \sum \frac{1}{2k}$, but for conditionally convergent series we have an $\infty - \infty$ situation
	* This means we must be careful when moving the terms around; depending on the rate that both sums approach infinity we can get a different value out of it

