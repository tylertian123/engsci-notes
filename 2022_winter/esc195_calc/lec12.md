# Lecture 12, Feb 7, 2021

## Limits of a Sequence

* It's often easier to work with the ordinary continuous function than the sequence itself; but note not all features of a function carries over to the sequence, e.g. discontinuities can make an unbounded function produce a bounded sequence
* We're really only interested in $\lim _{n \to \infty} a_n$, because it makes no sense to consider the limit at any finite value since we only get discrete points and no values around those points for a limit to make any sense
* We also can't differentiate or integrate a sequence so often taking the limit at infinity is more or less the only thing we can do
* Definition: $\lim _{n \to \infty} a_n = L \iff \forall \varepsilon > 0, \exists k > 0 \in \integers \ni n \geq k \implies \abs{a_n - L} < \varepsilon$
* Example: Prove $\lim _{n \to \infty} \frac{n}{n + 1} = 1$
	* $\abs*{\frac{n}{n + 1} - 1} = \abs*{\frac{1}{n + 1}} < \varepsilon \implies \abs{n + 1} > \frac{1}{\varepsilon}$
	* Choose $k = \frac{1}{\varepsilon}$ then $\abs*{\frac{n}{n + 1}} < \abs*{\frac{1}{n}} < \frac{1}{k} = \varepsilon$
* Theorem: Limits of sequences are unique: $\lim _{n \to \infty} a_n = L \land \lim _{n \to \infty} a_n = M \implies L = M$
* Definition: If a sequence has a limit, then it is *convergent*, otherwise it is *divergent*
	* Convergent sequences are always bounded (but bounded sequences aren't always convergent, e.g. $a_n = \cos(\pi n) = \Set{-1, 1, -1, 1, \cdots}$ bounded above by $1$ and below by $-1$ but still divergent)
	* Contrapositive: Unbounded sequences are always divergent
* Monotonic Sequence Theorem: A bounded non-decreasing sequence converges to its least upper bound; a bounded non-increasing sequence converges to its greatest lower bound
	* Include non-increasing and non-decreasing since a constant sequence is convergent
	* Monotonic only required for large $n$; the sequence can bounce around before that
	* Proven in Stewart (Chapter 11.1, Theorem 12, page 772)
* Sequence limit laws/theorems:
	* Limits are unique
	* Limit of sum/product/quotient to sum/product/quotient of limits
	* Limit of constant times thing is equal to constant times limit of thing
	* Limit of reciprocal is equal to the reciprocal of the limit assuming the limit does not equal zero
	* Pinching theorem/squeeze theorem: $a_n \leq b_n \leq c_n$ for large $n$ and $\lim _{n \to \infty} a_n = L = \lim _{n \to \infty} c_n$ then $\lim _{n \to \infty} b_n = L$
		* Example: $\lim _{n \to \infty} \frac{\sin\left(\frac{n\pi}{6}\right)}{n}$ compare to $-\frac{1}{n}$ and $\frac{1}{n}$, since both go to 0 this sequence also goes to zero
* Theorem: Given $\lim _{n \to \infty} c_n = c$, if $f$ is continuous at $c$ then $\lim _{x \to \infty} f(c_n) = f(c)$
	* Example: $a_n = \sin\left(\frac{1}{n^2 + 1}\right)$: $\lim _{n \to \infty} \frac{1}{n^2 + 1} = 0$ and $\sin$ is continuous at 0 so $\lim _{n \to \infty} \sin\left(\frac{1}{n^2 + 1}\right) = \sin\left(\lim _{n \to \infty} \frac{1}{n^2 + 1}\right) = \sin 0 = 0$

## Important Infinite Sequence Limits

1. For $x > 0$, $\lim _{n \to \infty} x^{\frac{1}{n}} = 1$
	* $x^\frac{1}{n} = e^{\ln x^\frac{1}{n}} \to \ln x^\frac{1}{n} = \frac{1}{n}\ln x$ and $\lim _{n \to \infty} \frac{\ln x}{n} = 0$, so $\lim _{n \to \infty} e^{\ln x^{\frac{1}{n}}} = e^0 = 1$
	* this relies on the exponential being continuous at 0
2. $\abs{x} < 1 \implies \lim _{n \to \infty} x^n = 0$
	* $\abs{x}^{n + 1} < \abs{x}^n$ since $\abs{x} < 1$
	* Need to show $\abs{x^n} < \varepsilon$ for all $n > k$
		* $\abs{x^n} = \abs{x}^n < \varepsilon \implies \abs{x} < \varepsilon^\frac{1}{n}$
		* From 1, $\lim _{n \to \infty}\varepsilon^\frac{1}{n} = 1 > \abs{x}$, therefore for sufficiently large $k$ we will have $\abs{x} < \varepsilon^\frac{1}{k}$
		* Therefore $\abs{x^n} < \varepsilon$ for all $n > k$
3. $\lim _{n \to \infty} \frac{1}{n^\alpha} = 0$ for positive $\alpha$
	* $0 < \frac{1}{n^\alpha} = \left({\frac{1}{n}}\right)^\alpha$
	* Take odd positive integer $p$ such that $\frac{1}{p} < \alpha$ (e.g. $\alpha = 0.01$, $p$ can be 101)
	* $0 < \left({\frac{1}{n}}\right)^\alpha < \left({\frac{1}{n}}\right)^\frac{1}{p}$
	* Since $x^\frac{1}{p} = \sqrt[p]{x}$ is continuous when $p$ is an odd positive integer, $\lim _{n \to \infty} \left({\frac{1}{n}}\right)^\frac{1}{p} = \left(\lim _{n \to \infty}\frac{1}{n}\right)^\frac{1}{p} = 0^\frac{1}{p} = 0$
	* By the squeeze theorem the limit is 0
4. $\lim _{n \to \infty} \frac{x^n}{n!} = 0$ for $x \in \reals$ (i.e. factorials grow faster than exponentials) and $\lim _{n \to \infty} \frac{n!}{n^n} = 0$ (i.e. factorials grow slower than $n^n$)
5. $\lim _{n \to \infty} \frac{\ln n}{n} = 0$
	* Use l'Hopital's rule to get $\lim _{x \to \infty} \frac{\frac{1}{x}}{1} = 0$
	* The denominator can be to any power
6. $\lim _{n \to \infty} n^{\frac{1}{n}} = 1$
	* $\ln n^\frac{1}{n} = \frac{1}{n}\ln n \implies \lim _{n \to \infty} n^\frac{1}{n} = 0$
	* $\lim _{n \to \infty} e^{\ln n^\frac{1}{n}} = e^0 = 1$
7. $\lim _{n \to \infty} \left(1 + \frac{x}{n}\right)^n = e^x$
	* For $x = 0$ this is satisfied trivially
	* $\ln\left(1 + \frac{x}{n}\right)^n = n\ln\left(1 + \frac{x}{n}\right) = \frac{x\ln\left(1 + \frac{x}{n}\right)}{\frac{x}{n}} = x\left(\frac{\ln\left(1 + \frac{x}{n}\right) - \ln 1}{\frac{x}{n}}\right)$
	* $\lim _{n \to \infty}\frac{\ln\left(1 + \frac{x}{n}\right) - \ln 1}{\frac{x}{n}} = \lim _{h \to 0} \frac{\ln(1 + h) - \ln 1}{h} = 1$
	* Therefore $\lim _{x \to \infty} \ln\left(1 + \frac{x}{n}\right)^n = x \implies \lim _{n \to \infty} \left(1 + \frac{x}{n}\right)^n = e^x$

