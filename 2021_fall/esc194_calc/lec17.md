# Lecture 17, Oct 20, 2021

## Summation Theorems

1. Constant multiple: $\sum \alpha a_i = \alpha \sum a_i$
2. Additivity/distributive: $\sum (a_i + b_i) = \sum a_i + \sum b_i$
3. $\sum _{i = 1}^n 1 = n$
4. $\sum _{i = 1}^n \alpha = \alpha n$
5. $\sum _{i = 1}^n i = \frac{n(n + 1)}{2}$
6. $\sum _{i = 1}^n i^2 = \frac{n(n + 1)(2n + 1)}{6}$
7. $\sum _{i = 1}^n i^3 = \left(\frac{n(n + 1)}{2}\right)^2$
8. $\sum _{i = 1}^n i^4 = \frac{n(n + 1)(2n + 1)(3n^2 + 3n - 1)}{30}$

## Limits of Sums

* If $f(n) = \sum _{i = 1}^n a_i$, then we can take $\lim _{n \to \infty} f(x) = \lim _{n \to \infty} \sum _{i = 1}^n a_i$
* Example: $\alignedeqn[t]{\lim _{n \to \infty}\frac{5}{n}\sum _{i = 1}^n \left(\frac{i}{n}\right)^2}{\lim _{n \to \infty} \frac{5}{n^3}\sum _{i = 1}^n i^2}{\lim _{n \to \infty} \frac{5}{n^3}\frac{n(n + 1)(2n + 1)}{6}}{\frac{5}{6}\lim _{n \to \infty}\frac{2n^3 + 3n^2 + n}{n^3}}{\frac{5}{6}\lim _{n \to \infty}\left(2 + \frac{3}{n} + \frac{1}{n^2}\right)}{\frac{5}{3}}$

## Area Under a Curve

* How do we define the area under a curve?
* Definition: A *partition* is a way to divide a closed interval $[a, b]$ into a finite number of subsets, including $a$ and $b$
	* e.g. $[x_0, x_1], [x_1, x_2], \cdots$
	* We can then define $\Delta x_i \equiv x_i - x_{i - 1}$
* Definition: The *norm* of a partition $P$ is $\norm*{P}$, defined as the length of the longest subinterval
* In every subinterval there is an $x_i^*$ which lies within the interval, which makes the area of each rectangle $A_i = f(x_i^*)\Delta x_i$
* The total area is $\lim _{\norm*{P} \to 0} \sum _{i = 1}^n f(x_i^*)\Delta x_i$
	* We can't simply make $n \to \infty$ because the partitions may not be equal in size
* In practice we usually work with equal sized intervals, but sometimes in numerical integration it might be useful to vary the size of the subintervals
* Example: $y = \cos x$, $0 \leq x \leq b \leq \frac{\pi}{2}$ with a regular partition $\Delta x_i = \frac{b}{n} = \norm*{P}$

