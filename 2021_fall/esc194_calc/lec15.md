# Lecture 15, Oct 15, 2021

## Horizontal Asymptotes/Limits at Infinity

* Definition: $\lim _{x \to \infty} f(x) = L$ means that $\forall \varepsilon > 0, \exists A$ such that $x > A \implies \abs{f(x) - L} < \varepsilon$; this is a *horizontal asymptote* of $f(x)$
	* i.e. we can find $f$ values as close to $L$ as possible by going to large enough $x$ values
* Limit theorems also exists for limits at infinity just like regular limits
* Theorem: $\lim _{x \to \infty} \frac{1}{x^r} = 0$ for $r > 0$
	* Proof: For all $\varepsilon > 0$, choose $A = \varepsilon^{-\frac{1}{r}}$
		* $\alignedimp[t]{x > A = \varepsilon^{-\frac{1}{r}}}{x^r > \varepsilon^{-1}}{\frac{1}{x^r} < \varepsilon}{\abs*{\frac{1}{x^r}} < \varepsilon}$
		* Thus $x > A \implies \abs*{\frac{1}{x^r} - 0} < \varepsilon$, so $\lim _{x \to \infty} \frac{1}{x^r} = 0$

## Slant Asymptotes

* Definition: If $\lim _{x \to \infty} \left[f(x) - (mx + b)\right] = 0$, then the line $y = mx = b$ is a slant asymptote to $f(x)$ at $+\infty$
	* As always this does not mean that the limit at infinity exists, but it gives us more information than simply saying that $\lim _{x \to \infty} f(x)$ DNE

## Max/Min Problems

* General checklist for max/min problems:
	1. Critical points
		* Find derivative, second derivative, determine concavity if it helps
	2. Endpoints
		* Find the domain, as constrained by the question statement
		* Find value at end points
	3. Check interior points
		* Find value at internal local extrema
	4. Check limit at $\pm\infty$ if the question allows it
	5. Compare values and decide the max/min
		* Make sure to state the answer!
* Example: A string 28cm long is to be cut into 2 parts to make a square and a circle. Where should the cut be made to get a) the maximum area and b) the minimum area?
	* Let the square have side $x$ and the circle have radius $y$
	* We know that $28 = 4x + 2\pi y$ therefore we can relate $x$ and $y$ by $y = 7 - \frac{\pi}{2}x$, which allows us to eliminate one of the variables
	* The total area is then $A(x, y) = x^2 + \pi y^2 \implies A(y) = \left(7 - \frac{\pi}{2}y\right)^2 + \pi y^2$
	* At this point we need to **establish the domain** since the max/min can be at an endpoint
		* $y \geq 0$ and $x \geq 0$ due to physical constraints, so the domain is $\left[0, \frac{14}{\pi}\right]$
	* $A(0) = 49$, $A\left(\frac{14}{\pi}\right) = \pi\frac{14^2}{\pi^2} \approx 60$
	* Note $A$ is a polynomial of $y$ and therefore is continuous by the polynomial continuity theorem; therefore by the EVT for this *closed* interval there is an absolute max/min
		* Sometimes there is not an absolute max/min!
		* Note the importance of establishing the domain right away, so we know the function is continuous over the closed interval
	* $A'(y) = -\pi\left(7 - \frac{pi}{2}y\right) + 2\pi y = -7\pi + y\left(\frac{\pi^2}{2} + 2\pi\right)$
	* $A''(y) = \frac{\pi^2}{2} + 2\pi > 0$ therefore $A(y)$ is concave up
	* $A'(y) = 0 \implies y_{crit} = \frac{7}{2 + \frac{\pi}{2}} \approx 2$
	* $x_{crit} \approx 7 - \pi \approx 4$
	* $A(y_{crit}) \approx 28$
	* Since $A\left(\frac{14}{\pi}\right) > A(0) > A(y_{crit})$, the absolute max is $A\left(\frac{14}{\pi}\right)$ and the absolute min is $A\left(\frac{14}{\pi}\right)$
		* i.e. the max occurs when not cutting the string and using it all for the circle; the min occurs when cutting the string at $\frac{14}{\pi}$ (about 12 and 16cm lengths) for the square and circle respectively
	* Since $A'$ is a polynomial it always exists

