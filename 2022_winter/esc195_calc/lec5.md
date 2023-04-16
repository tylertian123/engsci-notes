# Lecture 5, Jan 18, 2022

## Partial Fraction Decomposition

* For $f(x) = \frac{P(x)}{Q(x)}$ where the degree of $P$ is less than that of $Q$, we can write this as a sum of simpler polynomials
	* If the degree of $P$ is equal to or greater than $Q$ we must first perform long division and then decompose the remainder
* Factor $Q$ into factors of $ax + b$ and $ax^2 + bx + c$ (linear and irreducible quadratic factors) and then express it as a sum of partial fractions: $\frac{A}{(ax + b)^i)}$ or $\frac{Ax + B}{(ax^2 + bx + c)^i}$
* Cases below:
	1. $Q$ is a product of unique linear factors: $\frac{P(x)}{Q(x)} = \frac{A_1}{a_1x + b_1} + \frac{A_2}{a_2x + b_2} + \cdots$
		* Example: $\frac{x^2 + 2x + 1}{2x^3 + 3x^2 - 2x} \to \frac{x^2 + 2x + 1}{x(2x - 1)(x + 2)} = \frac{A}{x} + \frac{B}{2x - 1} + \frac{C}{x + 2}$
			* $x^2 + 2x - 1 = A(2x - 1)(x + 2) + Bx(x + 2) + Cx(2x - 1)$
			* We can now expand the right side and group terms to obtain a system of equations for $A, B, C$
			* Alternatively we can set $x$ to convenient values
				* $x = 0 \implies -1 = -2A \implies A = \frac{1}{2}$
				* $x = \frac{1}{2} \implies \frac{1}{4} = \frac{5}{4}B \implies B = \frac{1}{5}$
				* $x = -2 \implies -1 = 10C \implies C = -\frac{1}{10}$
	2. $Q$ is a product of non-unique linear factors: If $(ax + b)^r$ occurs, then instead of just $\frac{A}{ax + b}$, we have $\frac{A_1}{ax + b} + \frac{A_2}{(ax + b)^2} + \cdots + \frac{A_r}{(ax + b)^r}$
		* Example: $\frac{4x}{x^3 - x^2 - x + 1} \to \frac{4x}{(x - 1)^2(x + 1)} = \frac{A}{x - 1} + \frac{B}{(x - 1)^2} + \frac{C}{x + 1}$
			* $4x = A(x - 1)(x + 1) + B(x + 1) + C(x - 1)^2$
			* We can once again expand and get the equations for the coefficients
			* We can still set convenient values of $x$:
				* $x = 1 \implies 4 = 2B \implies B = 2$
				* $x = -1 \implies -4 = 4C \implies C = -1$
				* Can't find an $x$ that would cancel the other terms and leave $A$, but we can still obtain a relation for $A$
				* $x = 0 \implies 0 = -A + B + C \implies A = B + C = -1$
	3. $Q$ contains unique irreducible quadratic factors: Each quadratic factor corresponds to a term of $\frac{Ax + B}{ax^2 + bx + c}$ in the expansion
		* Example: $\frac{2x^2 - x + 4}{x^3 + 4x} \to \frac{2x^2 - x + 4}{x(x^2 + 4)} = \frac{A}{x} + \frac{Bx + C}{x^2 + 4}$
			* $2x^2 - x + 4 = A(x^2 + 4) + (Bx + C)x$
			* Expand: $2x^2 - x + 4 = (A + B)x^2 + Cx + 4A \implies \threepiece{A + B = 2}{C = -1}{4A = 4} \implies \threepiece{A = 1}{B = 1}{C = -1}$
			* Therefore $\frac{2x^2 - x + 4}{x^3 + 4x} = \frac{1}{x} + \frac{x - 1}{x^2 + 4}$
		* To integrate the quadratic terms: $\int \frac{1}{x^2 + a^2}\,\dx = \frac{1}{a}\tan^{-1}\left(\frac{x}{a}\right)$
		* In general to integrate $\frac{Ax + B}{ax^2 + bx + c}$, complete the square $\frac{Ax + B}{(ex + f)^2 + g}$ then make the substitution $u = ex + f$ so the fraction is now $\frac{Cu + D}{u^2 + g}$, which can be split into $\frac{Cu}{u^2 + g}$ (can use substitution) and $\frac{D}{u^2 + g}$ (can use the expression above)
		* $\alignedeqntwo[t]{\int \frac{2x}{x^2 + x + 1}\,\dx}{\int \frac{2x + 1}{x^2 + x + 1}\,\dx - \frac{1}{x^2 + x + 1}\,\dx}{\ln\abs{x^2 + x + 1} + \int \frac{1}{\left(x + \frac{1}{2}\right)^2 + \frac{3}{4}}\,\dx}{\ln\abs{x^2 + x + 1} + \frac{2}{\sqrt 3}\tan^{-1}\left(\frac{2}{\sqrt 3}\left(x + \frac{1}{2}\right)\right) + C}$
	4. $Q$ contains repeated irreducible quadratic factors: Similar to 2, each factor corresponds to terms of $\frac{A_1x + B_1}{ax^2 + bx + c} + \frac{A_2x + B_2}{(ax^2 + bx + c)^2} + \cdots + \frac{A_nx + B_n}{(ax^2 + bx + c)^n}$
		* $\frac{Ax + B}{(x^2 + \beta x + \gamma)^2} = \frac{A}{2}\left(\frac{2x + B}{(x^2 + \beta x + \gamma)^2} + \frac{2\frac{B}{A} - B}{(x^2 + \beta x + \gamma)^2}\right)$
			* The first can be directly solved using substitution, the second needs completing the square and then using trig substitution
* We can convert the irreducible quadratic terms into complex linear terms:
	* Example: $\int \frac{2x}{x^2 + 1}\,\dx$
		* Try $\frac{2x}{x^2 + 1} = \frac{A}{x + i} + \frac{B}{x - i}$
		* $2x = A(x - i) + B(x + i)$
		* $x = i \implies 2i = 2iB \implies B = 1$ similarly $A = 1$
		* Integrating we get $\ln\abs{x + i} + \ln\abs{x - i} + C$ and the arguments of $\ln$ multiply to get us $x^2 + 1$ back
	* $\ln(a + ib) = \ln\sqrt{a^2 + b^2} + i\tan^{-1}\left(\frac{b}{a}\right)$
		* Example: $\int \frac{1}{x^2 + 1}\,\dx$
* Nonrational functions can be made rational by an appropriate substitution
	* Example: $\int \frac{\sqrt{x + 4}}{x}\,\dx$
		* Let $u = \sqrt{x + 4}$ then $u^2 = x + 4 \implies x = u^2 - 4$ and $\dx = 2u\,\du$ so $\int \frac{\sqrt{x + 4}}{x}\,\dx = \int \frac{2u^2}{u^2 - 4}\,\du = 2\int\left(1 + \frac{4}{u^2 - 4}\right)\,\du$
* Weierstrass substitution: $t = \tan \frac{x}{2}$
	* This allows us to convert ratios of sines and cosines to rational functions
	* $\sin x = \frac{2t}{1 + t^2}, \cos x = \frac{1 - t^2}{1 + t^2}$
	* $\dx = \frac{2}{1 + t^2}\,\dt$
	* Example: $\alignedeqntwo[t]{\int \frac{1}{1 + \cos x}\,\dx}{\int \frac{1}{1 + \frac{1 - t^2}{1 + t^2}}\frac{2}{1 + t^2}\,\dt}{\int\frac{2}{(1 + t^2) + (1 - t^2)}\,\dt}{\int \,\dt}{t + C}{\tan \left(\frac{x}{2}\right) + C}$

