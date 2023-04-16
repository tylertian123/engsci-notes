# Lecture 27, Nov 29, 2021

## Approximation of $e^{x}$

* Example: Show $e^x > 1 + x$ for $x > 0$
	* First show that $e^x > 1$ using integrals, and then take this back into the integral and show that $e^x > 1 + x$, then repeat this more to get $e^x > 1 + \frac{1}{2}x^2 + \frac{1}{6}x^3 + \cdots$
	* Key identity: $e^x = 1 + \int _0^x e^t\,\dt$
	* Note that $e^0 = 1$ and $\diff{}{x}e^x = e^x > 0$ so it is always positive and increasing, and $e^x > 1$ for $x > 0$
	* $\int _0^x e^t\,\dt > \int _0^x \,\dt \implies 1 + \int _0^x e^t\,\dt > \int _0^x \,\dt + 1 \implies e^x > 1 + x$
	* We can continue this process making use of $e^x > 1 + x$, so $e^x = 1 + \int _0^x e^t\,\dt > 1 + \int _0^x (1 + t)\,\dt = 1 + x + \frac{x^2}{2}$
	* We can do this again one more time: $e^x = 1 + \int _0^x e^t\,\dt > 1 + \int _0^x (1 + t + \frac{t^2}{2})\,\dt = 1 + x + \frac{x^2}{2} + \frac{x^3}{6}$
	* Using induction we can show $e^x > 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \cdots + \frac{x^n}{n!}$
		* Note we don't yet know that this infinite series converges to $e$

## General Exponential Function

* Definition: An irrational power $x^z = e^{z\ln x}$
	* Thus with this extended definition we have $x^{r + x} = x^rx^s$, $x^{r - s} = \frac{x^r}{x^s}$, $(x^r)^s = x^{rs}$ for $r, s \in \mathbb{R}$ provided $x > 0$
* We can extend the power rule to irrational powers
* Proof: $\diff{}{x}x^r = \diff{}{x}e^{r\ln x} = e^{r\ln x} \cdot \frac{r}{x} = \frac{x^r \cdot r}{x} = rx^{r - 1}$, and with this we can also extend the reverse power rule for integrals
* Since $x^z$ is defined using the natural exponential, it has the same properties
* Example: $\diff{}{x}x^x$
	* $x^x = e^{x\ln x} \implies \diff{}{x}x^x = e^{x\ln x}\left(x \cdot \frac{1}{x} + \ln x\right) = x^x(1 + \ln x)$
* Exponentials with bases other than $p$: $\diff{}{x} p^x$
	* $\diff{}{x}p^x = \diff{}{x}e^{x\ln p} = \ln(p)e^{x\ln p} = \ln(p)p^x$
* In general $\diff{}{x}p^u = p^u\ln(p)\diff{u}{x}$
* The integral form is $\int p^x\,\dx = \frac{1}{\ln p}p^x + C$ where $p > 0, p \neq 1$

## Logarithm With Other Bases

* Define $f(x) = \frac{\ln x}{\ln p}$ and $g(x) = p^x$, then $f(g(x)) = \frac{\ln p^x}{\ln p} = x\frac{\ln p}{\ln p} = x$ and $g(f(x)) = p^{\left(\frac{\ln x}{\ln p}\right)} = e^{\frac{\ln x}{\ln p} \cdot \ln p} = e^{\ln x} = x$, so they are inverses
* Define $\log _p(x) = \frac{\ln x}{\ln p}$ for $p > 0, p \neq 1$, note $\log _p(p^x) = x$ as they are inverses of each other
* $\diff{}{x}\log _p(u) = \diff{}{x}\frac{\ln u}{\ln p} = \frac{1}{\ln p} \cdot \frac{1}{u} \cdot \diff{u}{x}$

## Estimating $e$

* $\ln x = \int _1^x \frac{\dt}{t} \implies \ln\left(1 + \frac{1}{n}\right) = \int _1^{1 + \frac{1}{n}}\frac{\dt}{t} < \int _1^{1 + \frac{1}{n}} = 1 + \frac{1}{n} - 1 = \frac{1}{n}$
* $\ln\left(1 + \frac{1}{n}\right) < \frac{1}{n} \implies 1 + \frac{1}{n} < e^\frac{1}{n} \implies \left(1 + \frac{1}{n}\right)^n < e$
* To find an upper bound, $\ln\left(1 + \frac{1}{n}\right) = \int _1^{1 + \frac{1}{n}} \frac{1}{t}\,\dt > \int _1^{1 + \frac{1}{n}} \frac{1}{1 + \frac{1}{n}}\,\dt$, since $1 < t < \frac{1}{1 + \frac{1}{n}}$
* Therefore $\ln\left(1 + \frac{1}{n}\right) > \left(\frac{1}{1 + \frac{1}{n}}\right)\left(1 + \frac{1}{n} - 1\right) = \frac{1}{n + 1} \implies \left(1 + \frac{1}{n}\right)^{n + 1} > e$
* Combining these two we get $\left(1 + \frac{1}{n}\right)^n < e < \left(1 + \frac{1}{n}\right)^{n + 1}$
* As $n$ tends to infinity, the difference between $n$ and $n + 1$ becomes small and the two bounds close in on each other to converge to the true value of $e$
* $e = \lim _{n \to \infty}\left(1 + \frac{1}{n}\right)^n$ by a squeeze-theorem like argument

