# Lecture 22, Nov 1, 2021

## Solids of Revolution

* A solid of revolution is a solid obtained by revolving a region about an axis, usually (but doesn't have to be) the $x$ axis
* The area of each slice is then $A_i = \pi(f(x))^2$ so $V = \int _a^b \pi(f(x))^2\,\dx$, known as the disk method
	* Example: Volume of cone with height $h$ and radius $r$
		* $y = \frac{r}{h}x \implies V = \int _0^h \pi\left(\frac{rx}{h}\right)^2\,\dx = \frac{1}{3}\pi r^2h$
* Sometimes the curve might go below the $x$ axis, but this is fixed by the square
* If the region is bounded by two curves, when rotated about an axis, each slice would be a ring (washer), with area equal to the difference of two circles
* $A_i = \pi\left[(f(x))^2 - (g(x))^2\right] \implies V = \int _a^b \pi\left[(f(x))^2 - (g(x))^2\right]\,\dx$, known as the washer method
* If the axis is parallel but not equal to the $x$ axis, then we need to subtract an offset $V = \int _a^b \pi(f(x) - k)^2\,\dx$ for the disk method, or $V = \int _a^b \pi\abs*{(f(x) - k)^2 - (g(x) - k)^2}\,\dx$ for the washer method (note the added absolute value)
	* Note the constraint $k > f, g$ or $k < f, g$; the line cannot cross the region itself because then the region would be rotating into itself
* Example: The region between $y = x^2$ and $y = x$ about $y = -2$
	* The two curves intersect at 0 and 1
	* $V = \int _0^1 \pi\left[(x + 2)^2 - (x^2 + 2)^2\right]\,\dx$

