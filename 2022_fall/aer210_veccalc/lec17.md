# Lecture 17, Oct 14, 2022

## Green's Theorem

* Green's theorem connects a line integral over a closed curve $C$ to a double integral over the region $R$ it encloses
* Simple curve: a curve that does not intersect itself except at the endpoints
* Curves can have orientation; a positive oriented curve has the inside of the curve to the left as you go around it (think unit circle)

\noteThm{For a positively oriented, piecewise smooth, simple closed curve $C$ in 2D bounding the region $R$, if $P(x, y), Q(x, y)$ and their first partials are continuous over $R$, then $$\ointctrclockwise P(x, y)\,\dx + Q(x, y)\,\dy = \ointctrclockwise _C \vec F \cdot \dd\vec r = \iint _R\left(\pdiff{Q}{x} - \pdiff{P}{y}\right)\,\dx\,\dy$$}

## Green's Theorem: Proof of Special Case

* Consider a region that can be expressed as both type 1 and 2: $R = \twopiece{\Set{(x, y) | a \leq x \leq b, y_1(x) \leq y \leq y_2(x)}}{\Set{(x, y) | x_1(y) \leq x \leq x_2(y), c \leq y \leq d}}$
* For the type 1 form, $\alignedeqntwo[t]{\ointctrclockwise P(x, y)\,\dx}{\int _{C_1}P(x, y)\,\dx + \int _{C_2}P(x, y)\,\dx}{\int _a^b P(x, y_1(x))\,\dx - \int _a^b P(x, y_2(x))\,\dx}{-\int _a^b \left(P(x, y_2(x)) - P(x, y_1(x))\right)\,\dx}{-\int _a^b \inteval{P(x, y)}{y = y_1(x)}{y = y_2(x)}\,\dx}{-\int _a^b\int _{y_1(x)}^{y_2(x)} \pdiff{P(x, y)}{y}\,\dy\,\dx}{-\iint _R \pdiff{P}{y}\,\dA}$
	* $C_1$ is the bottom path $y = y_1(x)$, $C_2$ is the top path $y = y_2(x)$
* For the type 2 form, $\alignedeqntwo[t]{\ointctrclockwise Q(x, y)\,\dy}{\int _{C_3} Q(x, y)\,\dy + \int _{C_4} Q(x, y)\,\dy}{-\int _c^d Q(x_1(y), y)\,\dy + \int _c^d Q(x_2(y), y)\,\dy}{\int _c^d \left(Q(x_2(y), y) - Q(x_1(y), y)\right)\,\dy}{\int _c^d \inteval{Q(x, y)}{x = x_2(y)}{x = x_1(y)}\,\dy}{\int _c^d\int _{x_1(y)}^{x_2(y)}\pdiff{Q(x, y)}{x}\,\dx\,\dy}{\iint _R \pdiff{Q}{x}\,\dA}$
	* $C_3$ is the left path $x = x_1(y)$, $C_4$ is the right path $x = x_2(y)$
* If we combine the two, we get: $\ointctrclockwise _C P(x, y)\,\dx + Q(x, y)\,\dy = \iint _R\left(\pdiff{Q}{x} - \pdiff{P}{y}\right)\,\dA$

