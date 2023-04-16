# Lecture 12, Oct 6, 2021

## Applications of Derivatives

* Definition: $f(x)$ has an *absolute* maximum at $c$ if $f(c) \geq f(x)$ for all $x \in$ domain $f(x)$
	* **Note $f(x)$ must exist!**
* $f(x)$ has an absolute maximum at $c$ in $[a, b]$ if $f(c) \geq f(x)$ for all $x \in [a, b]$
* $f(x)$ has a local maximum at $c$ if $f(c) \geq f(x)$ for some open interval containing $c$
	* This interval may be very small but it has to exist on both sides of $c$

## Extreme Value Theorem

* Given $f(x)$ continuous on $[a, b]$, $f(x)$ has an absolute maximum $f(c)$ and an absolute minimum $f(d)$ for some $c, d \in [a, b]$
	* Knowing whether there exists a maximum/minimum is very important because finding maxima/minima is hard!
	* Proof: Supplement pages 52-56
	* Being defined does not imply boundedness; e.g. $\twocond{\frac{1}{x}}{x \neq 0}{1}{x = 0}$ is defined everywhere but unbounded
		* Only continuity implies boundedness
	* Part 1: Continuity on an interval implies boundedness
		* Lemma 1: Given $f(x)$ is defined and continuous on $[a, b]$ and $a < c < b$, there exists some interval $(c - \delta, c + \delta)$ with $\delta > 0$, in $[a, b]$ for which $f(x)$ is bounded
			* This can be easily proven using continuity and epsilon delta; taking $\varepsilon = 1$ implies that on some interval $c - \delta < x < c + \delta$, $\abs{f(x) - f(c)} < 1$
		* Lemma 2: Given $f(x)$ is defined and continuous on $[a, b]$, $f(x)$ is bounded on $[a, b]$
			* Let $S$ be the set of all $u$ for which $f(x)$ is bounded on $[a, u]$
			* Using Lemma 1, $f(x)$ is bounded on some interval $[a, u]$ with $u > a$, so $S$ is nonempty; as $u < b$, $S$ is bounded above by $b$ and so by CORA has a least upper bound $c$
			* Suppose $c < b$, then by Lemma 1 there exists $\delta > 0$ such that $f(x)$ is bounded on $(c - \delta, c + \delta)$; therefore, $f(x)$ is bounded on $[a, c + \delta)$, which contradicts the statement that $c$ is the least upper bound of $S$ (since if this were true, the least upper bound of $S$ would be $c + \delta$); therefore $c = b$
			* Now we know that $f(x)$ is bounded on $[a, b)$ ($b$ is not closed because the least upper bound is not necessarily a member of the set)
			* Since $f$ is continuous at $b$, it is bounded at $b$; then by adapting Lemma 1 to an endpoint we know $f$ is bounded on $(b - \delta, b]$; since $f(x)$ is bounded on both $[a, b)$ and $(b - \delta, b]$, $f(x)$ is bounded on $[a, b]$
	* Part 2: Continuity on an interval implies the existence of a maximum and minimum
		* Consider the set $S = \{f(x): a \leq x \leq b\}$; then $S$ is bounded above since $f(x)$ is bounded and therefore by CORA it has a least upper bound $M$, so $f(x) \leq M$ for all $x \in [a, b]$
		* Now we need to prove that $f(c) = M$ since a maximum requires that the function takes on that value
		* Suppose $f(x)$ never equals $M$, then we can define $g(x) \equiv \frac{1}{M - f(x)}$, so $g(x)$ is always positive and defined on $[a, b]$, so $g(x)$ is continuous by the additivity and quotient continuity theorems
			* Therefore, $g(x)$ is also bounded on $[a, b]$ by part 1, so there exists some number $K$ such that $0 < g(x) \leq K$, and $K > 0$
			* $\frac{1}{K} \leq \frac{1}{g(x)} = M - f(x) \implies f(x) \leq M - \frac{1}{K}$, but this violates the fact that $M$ is the least upper bound of $S$ since $M - \frac{1}{K}$ is smaller
		* Therefore, by contradiction, there is some $c \in [a, b]$ such that $f(c) = M$
* Note that being bounded is not the same as having an absolute maximum/minimum; e.g. $\frac{\sin x}{x}$ is bounded but does not have a maximum
	* $\frac{\sin x}{x}$ is bounded by 1, but we cannot say that the maximum is 1, because it is undefined at 0 and so never takes on the value of 1

## Fermat's Theorem

* Definition: $c$ is a critical point of $f(x)$ if $f'(c) = 0$ or DNE
* Fermat's Theorem: Given $f(x)$ has a local maximum or minimum at $c$, then $c$ is a critical point
	* The reverse is not true! $f'(c) = 0$ or DNE does not always imply that $c$ is a local minimum or maximum
	* Note: This does not apply for maximum or minimum at end points of a range
	* Proof: textbook page 212
		* Suppose $f(c)$ is a local maximum; then $f(c) \geq f(x)$ or $f(c) \geq f(c + h)$ for some small $h$, positive or negative, so $f(c + h) - f(c) \leq 0$
		* Suppose $h$ is positive, then:
			* $\frac{f(c + h) - f(c)}{h} \leq 0 \implies \lim _{h \to 0}\frac{f(c + h) - f(c)}{h} \leq 0 \implies f'(c) \leq 0$
		* Suppose $h$ is negative, then:
			* $\frac{f(c + h) - f(c)}{h} \geq 0 \implies \lim _{h \to 0}\frac{f(c + h) - f(c)}{h} \geq 0 \implies f'(c) \geq 0$
			* Note here the direction of the inequality is flipped since we divided by $h$, a negative quantity
		* Since both $f'(c) \geq 0$ and $f'(c) \leq 0$, $f'(c) = 0$ must be true if it exists; alternatively it may be undefined
* Given a continuous $f(x)$ on $[a, b]$, by the extreme value theorem an absolute maximum/minimum of the range must exist; to test for the absolute maximum/minimum:
	1. Find all critical points $c$ and $f(c)$
	2. Find the endpoints $f(a)$, $f(b)$
	3. The largest $f$ value is the absolute maximum, the minimum $f$ value is the absolute minimum

