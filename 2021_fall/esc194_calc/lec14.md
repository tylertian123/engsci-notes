# Lecture 14, Oct 13, 2021

## Bounding Estimations Using the Mean Value Theorem

* From last lecture we used differentials to estimate values: $29^{\frac{1}{3}} \approx 3.074$ using $f(x) = \sqrt[3]{x}$ and $x = 27$, $\Delta x = 2$
* Now we can use the MVT to bracket our estimate
* If we apply MVT to $f(x) = \sqrt[3]{x}$ on $[27, 29]$:
	* There is some $c \in (27, 29)$ such that $f'(c) = \frac{\sqrt[3]{29} - 3}{2}$
	* Since $f'(c) = \frac{1}{3}c^{-\frac{2}{3}}$
	* Therefore $\sqrt[3]{29} = \frac{2}{3}c^{-\frac{2}{3}} + 3$
	* Since we know $27 < c < 29$, we now have bounds on $\sqrt[3]{29}$; when $c = 27$, $\frac{2}{3}c^{-\frac{2}{3}} + 3 = \frac{2}{3}\cdot\frac{1}{9} + 3 = \frac{2}{27} + 3$ so $c$ cannot exceed that
	* When $c = 29$ we can estimate $29^{-\frac{2}{3}}$, since $29 < 64 \implies 29^{\frac{2}{3}} < 64^{\frac{2}{3}} = 16 \implies 29^{-\frac{2}{3}} > \frac{1}{16}$ so $\sqrt[3]{29} < \frac{2}{3} \cdot \frac{1}{16} + 3$
	* Therefore $3.0416 < \sqrt[3]{29} < 3.074$

## Derivatives and Graphing: 4 Quick Tests

1. Increasing/decreasing test
	* Given $f$ is differentiable on $I$, if $f' > 0$ over $I$, $f$ is increasing; if $f' < 0$, $f$ is decreasing; else if $f' = 0$, $f$ is constant
	* Proof: Using the MVT
		* Consider any $x_1 < x_2 \in I$, since $f$ is differentiable, the MVT holds
		* Therefore there is some $c \in I$ such that $f(x_2) - f(x_1) = f'(c)(x_2 - x_1)$, but as $f'$ is positive over $I$, $f(x_2) > f(x_1)$, so by definition $f$ is increasing
		* Proof is similar for the two other cases
2. First Derivative Test
	* Since $f(c_{crit})$ includes maxima, minima, and other values, we want to be able to know what values to keep
	* Given $I$ contains a critical point $c$, $f$ continuous at $c$, and $f$ differentiable in $I$ but not necessarily at $c$:
		1. If $f' > 0$ just to the left of $c$ and $f' < 0$ just to the right of $c$, then $c$ is a local maximum
		2. If $f' < 0$ just to the left of $c$ and $f' > 0$ just to the right of $c$, then $c$ is a local minimum
		3. If $f'$ does not change sign, then $c$ is neither a maximum nor a minimum
	* Proof of (1):
		* The statement of (1) means that there is some $a$ such that $f' > 0$ for $x \in (a, c)$, so by quick test 1 $f$ is increasing on $(a, c)$
		* Therefore $f(c) \geq f(x)$ for all $x \in (a, c)$
		* By the same logic there is some $b$ such that $f(c) \geq f(b)$ for all $x \in (c, b)$
		* Therefore $f(c) \geq f(x)$ for $x \in (a, b)$, which by definition is a local maximum
	* (2) and (3) could be proven similarly
	* Note that continuity is strictly required
3. Concavity Test (for definition refer to next section)
	* Given $f(x)$ is twice differentiable on $I$, $f'' > 0 \implies f$ is concave up; $f'' < 0 \implies f$ is concave down
	* Proof: Textbook A46
		* Suppose $a$ is the point of interest and $f''(a) > 0$; we need to show that the function lies above the tangent, i.e. $f(x) > f(a) + f'(a)(x - a)$ for $x \in I$ and $x \neq a$
		* Suppose $x > a$:
			* Applying the MVT we have $f(x) - f(a) = f'(c)(x - a)$ where $c \in (a, x)$
			* Since $f'' > 0$ we know $f'$ is increasing on this interval, so $f'(a) < f'(c) \implies f'(a)(x - a) < f'(c)(x - a) \implies f(a) + f'(a)(x - a) < f(a) + f'(c)(x - a)$
			* But $f(x) = f(a) + f'(c)(x - a)$ because of the MVT, so $f(a) + f'(a)(x - a) < f(x)$, therefore the function lies above the tangent and it is concave up
			* Other cases can be proved similarly
4. Second Derivative Test
	* Given $f''$ exists and is continuous near $c$, and $f'(c) = 0$ then if $f''(c) > 0$ then $f(c)$ is a local minimum; if $f''(c) < 0$ then $f(c)$ is a local maximum; if $f''(c) = 0$ this test is inconclusive

## Concavity and Points of Inflection

* Definition: If the graph of $y = f(x)$ lies above all its tangents in $I$, then $f(x)$ is concave up in $I$; similarly if it lies below all its tangents then $f(x)$ is concave down
* Definition: $f(x)$ has a point of inflection at $c$ if $f(x)$ is continuous at $c$ and the sign of concavity (up/down) changes at $c$

