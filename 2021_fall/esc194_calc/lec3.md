# Lecture 3, Sep 15, 2021

## Review

1. Absolute value $\abs{a} = \twocond{a}{a \geq 0}{-a}{a < 0}$
	* Easier to work with: $\abs{a} = \sqrt{a^2}$
		* Note: Square roots are zero or positive or does not exist in the reals; e.g. $\sqrt{4}$ is **only** $2$, not $\pm 2$
		* Different question: What $x$ satisfies $x^2 - 4 = 0$? This is a *different question* and is $\pm 2$
2. Intervals of $x$ values
	1. $x \in [a, b]$ -- closed interval ($a \leq x \leq b$), which is a set of numbers; filled dots on the number line
	2. $x \in (a, b)$ -- open interval ($a < x < b$); open dots on the number line
	3. $x \in [a, b)$, $x \in (a, b]$ -- mixed open/close intervals
	4. $x \in (-\infty, b]$ -- all $x \leq b$
		* Infinity is only okay to use inside an expression when the whole expression is defined, because $\infty$ is not a number
		* Closed brackets on infinity, e.g. $[a, \infty]$, is undefined because there is no useful definition for it
3. Functions: Given two sets of numbers $x$-set and $y$-set, a function is a rule that we specify that relates each $x$ to *one* $y$ value (very general)
	* $x$ *independent* variable, $y$ *dependent* variable; $x$ could be anything as long as it produces a defined $y$
	* Note the asymmetry: each $x$ can only relate to one $y$, but this requirement does not exist for $y$
	* Example: A table of $x$ and $y$ values could be a function
	* The span of the set of $x$ values is the *domain*; the span of the set of $y$ values is the *range*
	* Functions do not have to be **well-behaved**: e.g. $f(x) = \twocond{10x + 5}{x \neq 0}{DNE}{x = 0}$ is a perfectly good function; so is $f(x) = \twocond{1}{x\text{ rational}}{0}{x\text{ irrational}}$
4. Trigonometric functions:
	* Prefer algebraic definitions over geometric definitions
	* Prefer angles to be in radians where $2\pi\si{rad}$ is a full revolution (geometric definition of $\pi$)
		* For radius $r$ the arc length corresponding to angle $x$ is just $rx$ (check: if $x = 2\pi$ then $rx = 2\pi r$)
5. Composition of functions: $f(g(x))$
	* e.g. if $f(x) = 3x^2 + 2$ and $g(x) = \sin x$ then $f(g(x)) = 3\sin^2 x + 2$ and $g(f(x)) = \sin(3x^2 + 2)$
6. Increasing/decreasing functions
	* Given $x_1 > x_2$ for any two values of $x_1$ and $x_2$ in some interval, if $f(x_1) > f(x_2)$, define $f(x)$ to be **increasing** on this interval; if $f(x_1) < f(x_2)$, define $f(x)$ to be **decreasing** on this interval
	* Example: Prove $x^2 + 2$ is increasing for $x > 0$
		* Take any $x_1 > x_2 > 0$
		* $0 < x_1^2 < x_1x_2$ and $0 < x_1x_2 < x_2^2 \implies x_1^2 < x_2^2 \implies x_1^2 + 2 < x_2^2 + 2 \implies f(x_1) < f(x_2)$
7. Even/odd functions
	* $f(x) = f(-x)$ is an even function; $f(x) = -f(-x)$ is an odd function
8. Basic Arithmetic Theorem (BAT1)
	* Prove a true equality: e.g. $1 + 2 = 6 - 3$
		* You can add, subtract, multiply, and divide both sides of an equality by the same factor and get another true equality
		* This is a theorem and can be proven
	* Prove a true inequality: e.g. $3 < 5$
		* Get another true inequality by applying the same operations, **except** if multiplication or division is involved *and* the factor is negative, then the direction of the inequality changes
		* Also a theorem that can be proved using axioms

