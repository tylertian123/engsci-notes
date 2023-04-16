# Lecture 21, Oct 29, 2021

## Area Between Curves

* Suppose $f(x) \geq g(x)$ and continuous on $x \in [a, b]$, then the area between them can be partitioned just like the area under a single curve into $A \approx \sum _{i = 1}^n \left[f(x_i^*) - g(x_i^*)\right]\Delta x_i$; taking the limit, $A = \lim _{\norm*{P} \to 0} \sum _{i = 0}^n \left[f(x_i^*) - g(x_i^*)\right]\Delta x_i = \int _a^b \left[f(x) - g(x)\right]\,\dx$
* For positive functions this can be interpreted as the difference between the areas under two curves
* Example: Find the area between $y = x + 2$ and $y = 4 - x^2$
	* Find the intersection: $4 - x^2 = x + 2 \implies x^2 + x - 2 = 0 \implies (x - 1)(x + 2) = 0$, so the intersections are at $(1, 3)$ and $(-2, 0)$
	* On this interval $x + 2 > 4 - x^2$
	* $\alignedeqntwo[t]{\int _{-2}^1 (4 - x^2 - (x + 2))\,\dx}{\int _{-2}^1 (-x^2 - x + 2)\,\dx}{\left[-\frac{x^3}{3} - \frac{x^2}{2} + 2x\right]_{-2}^1}{\frac{9}{2}}$
* Need to be careful when curves cross since the curve that's the upper bound may change; generally the area is $A = \int_a^b \abs{f(x) - g(x)}\,\dx$
* The independent variable does not have to be $x$

## Volumes

* To find volumes, we can break up the region into very small slices and add up all the little bits of area
* $V_i \approx A_i\Delta x_i \implies V \approx \sum _{i = 1}^n A(x_i^*)\Delta x_i$, and in the limit $V = \int _a^b A(x)\,\dx$
* Example: Rectangular pyramid on the x axis, $h$ units tall, with a base width of $r$
	* The radius at each x is $\frac{r}{2h}x$, since if you look at it from the side, the edge of the pyramid is $\frac{r}{2}$ units above the x axis and $h$ units from the y axis, so the slope is $\frac{r}{2h}$
	* Therefore $A(x) = \left(\frac{rx}{h}\right)^2 = \frac{r^2x^2}{h^2}$
	* $\alignedeqntwo[t]{V}{\int _0^h \frac{r^2x^2}{h^2}\,\dx}{\frac{r^2}{h^2}\left[\frac{x^3}{3}\right]_0^h}{\frac{1}{3}r^2h}$
* Example: Calculate the volume of a sphere of radius $r$, at the origin ($x^2 + y^2 = r^2$)
	* If we take a slice, the radius here would be $y = \sqrt{r^2 - x^2}$, so the area of the slice would be $A = \pi(r^2 - x^2)$
	* $\alignedeqntwo[t]{V}{\int _{-r}^r \pi(r^2 - x^2)\,\dx}{\pi\left[r^2x - \frac{x^3}{3}\right]_{-r}^r}$

