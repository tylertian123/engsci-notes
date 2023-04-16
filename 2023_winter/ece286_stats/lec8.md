# Lecture 8, Jan 25, 2023

## Joint Probability Distributions (Discrete)

* Often events are correlated, and we want to look at the probability of two events together 

\noteDefn{$f(x, y)$ is the \textit{joint probability mass function} of the discrete varaibles $X$ and $Y$ if:
\begin{itemize}
	\item $f(x, y) \geq 0, \forall (x, y) \in S$
	\item $\sum _{(x, y) \in S} f(x, y) = 1$
	\item $f(x, y) = P(X = x, Y = y)$
\end{itemize}
}

* Example: Drawing 5 cards from a deck of 52, $X$ is the number of queens and $Y$ is the number of kings, what is $f(x, y)$?
	* Total number of hands is $\binom{52}{5}$
	* Number of hands with $x$ queens and $y$ kings is $\binom{4}{x}\binom{4}{y}\binom{52 - 8}{5 - x - y}$ for $x, y \leq 4, x + y \leq 5$
	* Therefore $f(x, y) = \twocond{0}{x + y > 5, x > 4, y > 4}{\frac{\binom{4}{x}\binom{4}{y}\binom{44}{5 - x - y}}{\binom{52}{5}}}{x + y \leq 5, x \leq 4, y \leq 4}$
* Continued example: Consider $A = \set{(x + y) | x + y = 2}$; then $P((x, y) \in A) = \sum _{(x, y) \in A} f(x, y) = f(0, 2) + f(1, 1) + f(2, 0)$

## Joint Probability Distributions (Continuous)

\noteDefn{$f(x, y)$ is the \textit{joint probability density function} of the continuous variables $X$ and $Y$ if 
\begin{itemize}
	\item $f(x, y) \geq 0, \forall (x, y) \in S$
	\item $\int _{-\infty}^\infty \int _{-\infty}^\infty f(x, y)\,\dx\,\dy = 1$
	\item If $A \in S$, $P((x, y) \in A) = \int _{(x, y) \in A} f(x, y)\,\dx\,\dy$
\end{itemize}
}

* Example: Uniform distribution, $S = \set{(x, y) | 1 \leq x \leq 1, -1 \leq y \leq 1}$
	* A uniform distribution means the probability of any outcome is the same
	* $f(x, y) = \frac{1}{4}$ for $(x, y) \in S$, since the "area" is 4
	* Consider an event $A = {(x, y) | 0 \leq x \leq 1, 0 \leq y \leq 1}$, now $P((x, y) \in A) = \frac{1}{4}$ since $A$ takes up a quarter of $S$
		* We can also use $\int _0^1\int _0^1 \frac{1}{4}\,\dx\,\dy = \frac{1}{4}$

## Marginal Distributions

* Suppose we know $f(x, y)$ for $X, Y$; we can find the distribution for $X$ as $g(x) = \sum _y f(x, y)$ in the discrete case, and $g(x) = \int _{-\infty}^\infty f(x, y)\,\dy$ in the continuous case
	* This is known as a *marginal distribution*
* Example: Given a PDF $f(x, y) = \twopiece{1}{\abs{x} + \abs{y} \leq 1, y \geq 0}{0}{\text{otherwise}}$, find $g(x)$
	* This describes a triangle above the $x$ axis
	* $g(x) = \int _{-\infty}^\infty f(x, y)\,\dy \int _{0}^{1 - \abs{x}} 1\,\dy = 1 - \abs{x}$

