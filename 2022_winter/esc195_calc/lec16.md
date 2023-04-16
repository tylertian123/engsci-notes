# Lecture 16, Feb 15, 2022

## The Root and Ratio Tests

* The Root Test: Given $\sum a_k, a_k \geq 0$, if $\lim _{k \to \infty} a_k^\frac{1}{k} = \lim _{k \to \infty} \sqrt[k]{a_k} = p$, then
	1. If $p < 1$ then $\sum a_k$ converges
	2. If $p > 1$ then $\sum a_k$ diverges
	3. If $p = 1$ then the test is inconclusive
* Proof of part 1:
	* Given $p < 1$, choose $\mu$ such that $p < \mu < 1$
	* $a_k^\frac{1}{k} < \mu$ for sufficiently large $k$ since it approaches $p$
	* $a_k < \mu^k$ for sufficiently large $k$
	* $\sum \mu^k$ converges because it is a geometric series with $x < 1$, therefore by the comparison test $\sum a_k$ converges
* In effect the root test is a limit comparison test with a geometric series
* Example: $\sum \left(\frac{n^2 + 1}{2n^2 + 1}\right)^n$
	* $a_n^\frac{1}{n} = \frac{n^2 + 1}{2n^2 + 1}$
	* $\lim _{n \to \infty} a_n = \frac{1}{2} < 1$ so the series converges
* The Ratio Test: Given $\sum a_k, a_k > 0$, if $\lim _{n \to \infty} \frac{a_{n + 1}}{a_n} = \lambda$, then
	1. If $\lambda < 1$ then $\sum a_k$ converges
	2. If $\lambda > 1$ then $\sum a_k$ diverges
	3. If $\lambda = 1$ then the test is inconclusive
* Proof of part 1:
	* Given $\lambda < 1$ choose $\mu$ such that $\lambda < \mu < 1$
	* Then $\frac{a_{k + 1}}{a_k} < \mu$ for some sufficiently large $k > K$
	* $\frac{a_{K + 1}}{a_K} < \mu \implies a_{K + 1} < \mu a_K \implies a_{K + 2} < \mu a_{K + 1} < \mu^2 a_{K} \implies \cdots \implies a_{K + j} < \mu^j a_K$
	* Let $n = K + j \implies a_n < \mu^{n - K}a_K = \frac{a_K}{\mu^K}\mu^n$
	* $\sum a_n < \frac{a_K}{\mu^K}\sum \mu^n$, which is a convergent geometric series since $\mu < 1$, therefore $\sum a_n$ converges as well
* Example: $\sum \frac{k^2}{e^k}$
	* $\abs*{\frac{a_{k + 1}}{a_k}} = \frac{(k + 1)^2}{e^{k + 1}} \cdot \frac{e^k}{k^2} = \frac{(k + 1)^2}{k^2} \cdot \frac{1}{e}$
	* The ratio goes to $\frac{1}{e} < 1$ in the limit so the series is convergent
* Both tests give you absolute convergence

## Power Series

* Definition: A *power series* is a series of the form $\sum _{n = 0}^\infty C_nx^n$ where $C_n$ are the coefficients of the series
* Example: $C_n = 1$ for all $n$ gives the geometric series
* We can generalize the power series to $\sum _{n = 0}^\infty C_n(x - a)^n$, which is a power series *about* $a$
	* Note $x^0 = (x - a)^0 = 1$ even when $x = 0$ or $x = a$
	* Therefore $x = a \implies \sum _{n = 0}^\infty C_n(x - a)^n = C_0$ which always converges
* Example: $\sum _{n = 1}^\infty \frac{x^n}{n^2}$
	* Apply the ratio test: $\abs*{\frac{a_{n + 1}}{a_n}} = \abs*{\frac{x^{n + 1}}{(n + 1)^2} \cdot \frac{n^2}{x^n}} = \abs{x} \cdot \frac{n^2}{(n + 1)^2} \underset{n \to \infty}{\to} \abs{x}$
	* Therefore this series converges absolutely when $\abs{x} < 1$ and diverges $\abs{x} > 1$
	* Special case when $x = 1$: $\sum _{n = 1}^\infty \frac{1}{n^2}$ is a p-series with $p = 2$ which converges
	* When $x = -1$: $\sum _{n = 1}^\infty \frac{(-1)^n}{n^2}$ converges by the alternating series test
	* Therefore this series converges for $-1 \leq x \leq 1$
* Example: $\sum _{n = 0}^\infty \frac{(1 + 5^n)x^n}{n!}$
	* Apply the ratio test: $\abs*{\frac{a_{n + 1}}{a_n}} = \abs*{\frac{(1 + 5^{n + 1})x^{n + 1}}{(n + 1)!} \cdot \frac{n!}{(1 + 5^n)x^n}} = \frac{1 + 5^{n + 1}}{1 + 5^n}\abs*{\frac{x}{n + 1}} \underset{n \to \infty}{\to} 0$
	* Therefore this series converges absolutely for all value of $x$
* Example: $\sum _{n = 0}^\infty n!x^n$
	* Apply the ratio test: $\abs*{\frac{a_{n + 1}}{a_n}} = (n + 1)\abs{x} \underset{n \to \infty}{\to} \infty$
	* This diverges for all value of $x$, *except* $x = 0$
* Theorem: For a power series of the form $\sum _{n = 0}^\infty C_n(x - a)^n$ has 3 possibilities:
	1. The series converges only when $x = a$
	2. The series converges for all $x$
	3. The series converges for $\abs{x - a} < R$
		* $R$ is known as the *radius of convergence*
		* The *interval of convergence* is the interval of $x$ for which the series is convergent; this may or may not include end points
* Note the power series will always converge for $x = a$ no matter what the series is
* Typically the ratio test is used to determine the radius of convergence, but will not work for the end points (which are often considered as special cases)

