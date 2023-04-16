# Lecture 13, Feb 8, 2022

## Recursive Sequences

* How do we find the limit of a recursive sequence?
* First prove that it exists
* Example: $a_1 = 1, a_n = \sqrt{6 + a_{n - 1}}$
	* We can show that it is increasing and has an upper bound of 3 using induction, so by the monotonic sequence theorem it converges
	* Knowing that the limit exists we can treat $\lim _{n \to \infty} a_n = L$ as a number, and $\lim _{n \to \infty} a_{n - 1} = L$ also holds
	* Taking the limit of both sides $a_n = \sqrt{6 + a_{n - 1}} \implies L = \sqrt{6 + L}$, solving for $L$ yields $3$ and $-2$ but the latter can't be a solution because all terms are positive

## Series

* Infinite sums can lead to finite answers; e.g. $\frac{1}{2} + \frac{1}{4} + \frac{1}{8} + \cdots = 1$
* Define a partial sum as: $S_n = \sum _{k = 0}^n a_k$
* We can form a sequence of partial sums $\Set{S_n} = \Set{a_0, a_0 + a_1, a_0 + a_1 + a_2, \cdots}$
	* If this sequence does converge $\lim _{n \to \infty} S_n = L$ then we *define* $\sum _{k = 0}^\infty a_k = L$
* Example: $\sum _{k = 0}^\infty \frac{1}{(k + 2)(k + 3)} = \sum _{k = 0}^\infty \left(\frac{1}{k + 2} - \frac{1}{k + 3}\right) = \frac{1}{2} - \frac{1}{3} + \frac{1}{3} - \frac{1}{4} + \frac{1}{4} - \frac{1}{5} + \cdots = \frac{1}{2} - \frac{1}{n + 3} \implies \lim _{n \to \infty} S_n = \frac{1}{2}$
	* Telescoping series
* Geometric series: $\sum _{k = 0}^\infty x^n$
	* Note $x^0$ is usually written as 1 even if $x = 0$
	* Sum is given by $\frac{1}{1 - x}$ for $\abs{x} < 1$ (diverges for $\abs{x} \geq 1$)
	* Proof:
		* $S_n = 1 + x + \cdots + x^n$
		* $xS_n = x + x^2 + \cdots + x^{n + 1}$
		* $S_n - xS_n = S_n(1 - x) = 1 - x^{n + 1}$
		* Assume $x \neq 1$, then $S_n = \frac{1 - x^{n + 1}}{1 - x} \implies \lim _{n \to \infty} S_n = \frac{1}{1 - x}$
			* Convergence requirement $\abs{x} \geq 1$ comes from the limit of $x^n$
		* When $x = 1$, $S_n = 1 + 1 + \cdots = n + 1$ which diverges
		* When $x = -1$, $S_n = 1 - 1 + 1 - \cdots$ which is 1 for odd $n$ and 0 for even $n$ so it diverges
	* Example: $x = \frac{1}{2} \implies 1 + \frac{1}{2} + \frac{1}{4} + \cdots = \frac{1}{1 - \frac{1}{2}} = 2$
* Example: Repeating decimal $0.\overline{285714}$
	* $0.\overline{285714} = \frac{285714}{10^6} + \frac{285714}{10^{12}} + \cdots = \frac{285714}{10^6}\left(1 + \frac{1}{10^6} + \cdots\right) = \frac{285714}{10^6}\left(\frac{1}{1 - \frac{1}{10^6}}\right) = \frac{285714}{999999} = \frac{2}{7}$
* Example: $\frac{x}{4 - x^2}$ for $\abs{x} < 2$, convert to geometric series
	* $\frac{x}{4 - x^2} = \frac{x}{4}\left(\frac{1}{1 - \frac{x^2}{4}}\right) = \frac{x}{4}\sum _{k = 0}^\infty \left(\frac{x^2}{4}\right)^k = \frac{1}{2}\sum _{k = 0}^\infty \left(\frac{x}{2}\right)^{2k + 1} = \frac{1}{2}\left(\frac{x}{2} + \left(\frac{x}{2}\right)^3 + \cdots\right)$

