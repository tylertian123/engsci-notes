# Lecture 19, Oct 25, 2021

## The Fundamental Theorem of Calculus

* Let $F(x) = \int _a^x f(t)\,\dt$
	* Example: $f(x) = x \implies \int _0^x t\,\dt = \frac{1}{2}x^2 = F(x)$
	* Notice that $F'(x) = x = f(x)$; is this true in general?
* $F$ is the area under $f(x)$ from $a$ to $x$, so for small $h$, $F(x + h) - F(x)$ is approximately the area of the small rectangle of width $h$ and height $f(x)$, so intuitively $\frac{F(x + h) - F(x)}{h} \approx f(x)$
* Theorem: Let $f$ be a continuous function on $[a, b]$, defined $F(x) = \int _a^x f(t)\,\dt$, then $F$ is continuous on $[a, b]$, differentiable on $(a, b)$ and has derivative $F'(x) = f(x)$ for all $x \in (a, b)$
	* Proof: For $x, x + h \in (a, b)$, $F(x + h) - F(x) = \int _a^{x + h} f(t)\,\dt - \int _a^x f(t)\,\dt = \int _x^{x + h} f(t)\,\dt$
	* Then $\frac{F(x + h) - F(x)}{h} = \frac{1}{h}\int _x^{x + h} f(t)\,\dt$
	* Consider $h > 0$:
		* By the EVT, there exists minimum $f(u) = m$ and maximum $f(v) = M$ for $u, v \in [x, x + h]$; then by the order theorems, $\alignedimp[t]{f(u)h \leq \int _x^{x + h} f(t)\,\dt \leq f(v)h}{f(u) \leq \frac{1}{h}\int _x^{x + h} f(t)\,\dt \leq f(v)}{f(u) \leq \frac{F(x + h) - F(x)}{h} \leq f(v)}$
		* As $x \leq u, v \leq x + h$, $\lim _{h \to 0} u = \lim _{h \to 0} v = x \implies \lim _{h \to 0} f(u) = \lim _{h \to 0} f(v) = f(x)$
		* Thus by the squeeze theorem $\lim _{h \to 0} \frac{F(x + h) - F(x)}{h} = f(x)$, i.e. $F'(x) = \diff{}{x}\int _a^x f(t)\,\dt = f(x)$
* The fundamental theorem of calculus: Let $f$ be continuous on $[a, b]$, then if $G$ is any antiderivative of $f$ on $[a, b]$ then $\int _a^b f(t)\,\dt = G(b) - G(a)$
	* Proof: $F(x) = \int _a^x f(t)\,\dt$ is an antiderivative of $f$ by the previous theorem; then $F'(x) = G'(x) \implies F(x) = G(x) + C$
	* $F(a) = \int _a^a f(t)\,\dt = 0 \implies G(a) + C = 0 \implies C = -G(a) \implies F(x) = G(x) - G(a)$
	* Then $\int _a^b f(t)\,\dt = F(b) = G(b) - G(a)$

## Net Change and Indefinite Integrals

* $\int _a^b F'(x)\,\dx = \int _a^b \diff{F}{x}\,\dx \approx \sum \dd F = \Delta F = F(b) - F(a)$
* By taking an integral, we are summing up very small pieces of change to get the net change
* Example: Integrating the velocity $v(t)$ to get a change in position
* We can leave out the bounds and get $\int f(x)\,\dx = F(x) + C$, which is an *indefinite integral*
* An indefinite integral is a family of curves since the value of $C$ can vary
* Example: $\alignedeqntwo[t]{\int (2 + \tan^2 \theta)\,\dtheta}{\int (1 + 1 + \tan^2 \theta)\,\dtheta}{\int (1 + \sec^2 \theta)\,\dtheta}{\theta + \tan \theta + C}$
* If we are given an initial condition, we can use that to determine a value for $C$
* Example: Suppose that a particle has an acceleration of $a(t) = 3 - t$, and $x(0) = 2, x(3) = -1$, where is the particle at $t = 6$? How far has the particle travelled in the 6 seconds?
	* $v(t) = \int a(t)\,\dt = 3t - \frac{1}{2}t^2 + C$
	* $x(t) = \int v(t)\,\dt = \frac{3}{2}t^2 - \frac{1}{6}t^3 + Ct + k$
	* From the known values of $x(t)$, we can find $C$ and $k$
	* $x(0) = k = 2 \implies k = 2$
	* $x(3) = \frac{3}{2}9 - \frac{1}{6}27 + 3C + 2 = -1 \implies C = -4$
	* Therefore $x(t) = \frac{3}{2}t^2 - \frac{1}{6}t^3 - 4t + 2$, thus at $t = 6$, the particle is at $x(t) = -4$
	* To find the distance travelled, we need to integrate the absolute velocity since the particle can have a negative velocity between $t = 0$ to 6
	* $s = \int _0^6 \abs{v(t)}\,\dt = \int _0^6 \abs*{-\frac{1}{2}(t - 2)(t - 4)}\,\dt$
	* The particle changes direction twice; for $t \in (0, 2)$, $v(t) < 0$; for $t \in (2, 4)$, $v(t) > 0$; for $t > 4$, $v(t) < 0$, so we can use this to break up the integral
	* $\alignedeqntwo[t]{\int _0^6 \abs{v(t)}\,\dt}{\int _0^2 -v(t)\,\dt + \int _2^4 v(t)\,\dt + \int _4^6 -v(t)\,\dt}{[-x(t)]_0^2 + [x(t)]_2^4 - [x(t)]_4^6}{x(0) - x(2) + x(4) - x(2) + x(4) - x(6)}{7 + \frac{1}{3}}$

