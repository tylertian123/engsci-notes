# Lecture 23, Nov 3, 2021

## Volumes by Cylindrical Shells

* For volumes that may be difficult to integrate with the disk and washer method
* E.g. $y = f(a)$ rotated around the $y$ axis
* Each slice of the area under the curve of $f$ is going to be rotated and forms a hollow cylindrical shell
	* Height: $f(x_i^*)$, radius $x_i^*$, and thickness $\Delta x$; the volume of each shell is the area of the rectangle multiplied by the circumference at that location, $\Delta V = f(x_i^*)\Delta x_i \cdot 2\pi x_i^*$
	* Taking the limit as the number of shells approaches infinity, $V = \int _a^b 2\pi xf(x)\,\dx$
* If the region is defined by the area between two curves then $V = \int _a^b 2\pi x(f(x) - g(x))\,\dx$
* Similarly we can also rotate around the $x$ axis instead by replacing all the $x$ with $y$
	* Note that in the washer method, rotation around the $x$ axis leads to integration wrt $x$, but for the shell method it's the opposite; rotation around the $x$ axis leads to integration wrt $y$
* Example: Rotate the area between $y^2 - x^2 = 1$ and $y = 2$ about the $x$ axis
	* We can take advantage of symmetry
	* For a given $y$ value, $x = \sqrt{y^2 - 1}$; the minimum $y$ occurs when $x = 0 \implies y = 1$
	* This leads to the integral $V = 2\int _1^2 2\pi y(\sqrt{y^2 - 1})\,\dy$
	* To evaluate, substitute $u = y^2 - 1 \implies \du = 2y\,\dy \implies \alignedeqntwo[t]{V}{4\pi\int _0^3 \sqrt{u}\,\du}{2\pi\left[\frac{2}{3}u^{\frac{3}{2}}\right]_0^3}{4\sqrt{3}\pi}$
* If rotating about an axis that is parallel to one of the principle axes, subtract an offset $V = \int _a^b 2\pi x(f(x) - k)\,\dx$

## Average Value of a Function

* Since the average of a set of discrete numbers is $a_{avg} = \frac{a_1 + a_2 + \cdots + a_n}{n}$, the average of a function taken at discrete points is $f_{avg} = \frac{f(x_1^*) + f(x_2^*) + \cdots + f(x_n^*)}{n}$
* If we consider a uniform partition, then $\Delta x = \frac{b - a}{n} \implies n = \frac{b - a}{\Delta x}$
* If we substitute this into the equation above then $f_{avg} = \frac{f(x_1^*) + f(x_2^*) + \cdots + f(x_n^*)\Delta x}{b - a}$
* Take the limit $n \to \infty$, the sum turns into an integral $f_{avg} \equiv \frac{1}{b - a}\int _a^b f(x)\,\dx$ (note this is a definition of the average)
* This is defined as the average value of $f$
* This leads to the *Mean Value Theorem for Integrals*: For $f$ continuous on $[a, b]$, there exists $c \in [a, b]$ such that $f(c) = f_{avg} = \frac{1}{b - a}\int _a^b f(x)\,\dx$; a continuous function must equal its average value at some point
	* Proof: Let $F(x) = \int _a^x f(t)\,\dt$, then by the MVT there exists $c$ such that $F'(c) = \frac{F(b) - F(a)}{b - a}$ for $c \in [a, b]$; therefore $F'(c) \implies f(c) = \frac{\int _a^b f(t)\,\dt - \int _a^a f(t)\,\dt}{b - a} = \frac{1}{b - a}\int _a^b f(t)\,\dt$
	* This is also a special case of the second MVT for $g(x) = 1$
* The *Second Mean Value Theorem* for integrals: For nonnegative $g$, $\int _a^b f(x)g(x)\,\dx = f(c)\int _a^b g(x)\,\dx$ where $c \in [a, b]$
	* Proof: By the EVT $f$ has a maximum and minimum $m \leq f(x) \leq M$; since $g$ is nonnegative, $mg(x) \leq f(x)g(x) \leq Mg(x) \implies m\int _a^b g(x)\,\dx \leq \int _a^b f(x)g(x)\,\dx \leq M\int _a^b g(x)\,\dx$
		* If $g$ is everywhere zero then the theorem holds true since $0 = 0$
		* Otherwise we can divide by $\int _a^b g(x)\,\dx$ to get $m \leq \frac{\int _a^b f(x)g(x)\,\dx}{\int _a^b g(x)\,\dx} \leq M$
		* By the IVT, there exists a $c \in [a, b]$ such that $f(c) = \frac{\int _a^b f(x)g(x)\,\dx}{\int _a^b g(x)\,\dx}$, since this value is between $m$ and $M$ and $f$ takes on all values in that interval
		* Therefore there exists $c \in [a, b]$ such that $f(c)\int _a^b g(x)\,\dx = \int _a^b f(x)g(x)\,\dx$
	* Notes: $f(c)$ is *not* the average of $f$ as from the first MVT; this is a weighted average where $g(x)$ is the weight
	* Think of it like a centre of mass where $g(x)$ describes the density, so $\frac{\int _a^b f(x)g(x)\,\dx}{\int _a^b g(x)\,\dx}$ is the weighted average/centre of mass

