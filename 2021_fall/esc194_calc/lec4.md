# Lecture 4, Sep 17, 2021

## Review, Continued

* BAT2 (Basic Algebraic Theorem)
	* Note: $1 + 2 = 6 - 3$ is a *statement* and therefore can be true or false
	* $x + 3 = 7x - 1$ is **not** a statement (not meaningful to ask whether it is true or false); it is a *prescription* for the value of $x$; $x^2 - 4 = 0$ is a prescription for 2 values of $x$
	* Similarly $3 < 5$ is a statement (true/false); $x < 4$ is a prescription for a whole set of $x$ values
	* BAT2 is equal to BAT1 except the factor could now be algebraic; since the sign might be hidden inequalities require more work
	* e.g. Prove $f(x) = x^2 + 3$ is decreasing for $x < 0$
		* Pick any $x_1 < x_2 < 0$
		* $x_1 < x_2 \implies x_1^2 > x_1x_2$ **note the direction change because $x_1 < 0$!**
		* $x_1 < x_2 \implies x_1x_2 > x_2^2$ same direction change here because $x_2 < 0$
		* See definition of increasing/decreasing functions from Lecture 3 for rest of proof
	* $x^2 - x - 6 > 0 \implies (x - 3)(x + 2) > 0$
		* First subset: $x - 3 > 0$ and $x + 2 > 0$ **for the same $x$**
		* Second subset: $x - 3 < 0$ and $x + 2 < 0$ **for the same $x$**
	* Equalities prescribe a number of $x$ values; inequalities prescribe a set of $x$ values (or none at all if the inequality is impossible)
* Absolute value functions $\abs{a} = \twocond{a}{a \geq 0}{-a}{a < 0}$
	* Example: $f(x) = \abs{x + 3} = \twocond{x + 3}{x + 3 \geq 0}{-x - 3}{x + 3 < 0}$
	* Example: What values of $x$ satisfy $\abs{x + 3} = 5$?
		* Possibility 1: $x + 3 > 0 \implies x + 3 = 5$ so $x > -3$ and at the same time $x = 2$, which is possible
		* Possibility 2: $x + 3 < 0 \implies -x - 3  = 5$ so $x < -3$ and $x = -8$, which is also possible
	* Example: $\abs{x + 3} < 5$
		* Possibility 1: $x + 3 \geq 0 \implies x + 3 < 5$ so $x \geq -3$ and $x < 2$, so $-3 \leq x < 2$
		* Possibility 2: $x + 3 < 0 \implies -x - 3 < 5$ so $x < -3$ and $x > -8$, so $-8 < x < -3$
		* Combine the two sets: $-8 < x < 2$
		* $-3$ is halfway between $2$ and $-8$ with half-width $5$ (generalizes to other inequalities of the same form)
			* Example: $\abs{x - c} < \delta$ where $c$ can be positive or negative and $\delta > 0$; $+c$ is the center and $\delta$ is the half-width: $c - \delta < x < c + \delta$
	* The set $0 < \abs{x - c} < \delta$ excludes $x = c$; this is important in the context of limits since the function may be undefined at $c$
		* If $0 < \abs{f(x) - c} < \delta$ says that $f(x)$ can never go above or below $c \pm \delta$, so this bounds its range, useful for limits

