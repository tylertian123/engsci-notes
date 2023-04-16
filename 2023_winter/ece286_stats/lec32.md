# Lecture 32, Mar 31, 2023

## Hypothesis Testing Continued

* Continuing the example from the last lecture:
	* To find $\beta$, i.e. the chance of concluding $\mu \in [990, 1010]$ when this is not the case, we first have to assume some value of $\mu$ outside this interval; this becomes somewhat arbitrary
		* Unlike in the case of $\alpha$ where we have a single set value of $\mu$, now $\mu$ can be in a range and the choice of $\mu$ will affect the result
	* Assume $\mu = 1020$ then $z_U = \frac{1010 - 1020}{10} = -1, z_L = \frac{990 - 1020}{10} = -3$
	* $\beta = P(-3 \leq Z \leq -1) = \Phi(-1) - \Phi(-3) \approx 0.15$
	* To decrease $\beta$, we can again increase $n$, move our assumption of $\mu$, or shrinking the interval
	* There is a fundamental tradeoff between $\alpha$ and $\beta$ -- changing the interval will decrease one but increase the other
	* Again, the choice of assumption of $\mu$ is very ad-hoc, but the important thing is consistency; do many tests with the same critical region and assumption of $\mu$, then the results can be compared

