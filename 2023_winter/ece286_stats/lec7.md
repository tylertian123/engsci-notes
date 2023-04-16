# Lecture 7, Jan 23, 2023

## Probabilities of Discrete Random Variables

\noteDefn{$f(x)$ is the \textit{probability mass function} (PMF) of a discrete random variable $X$ if:
\begin{itemize}
	\item $f(x) = P(X = x), \forall x \in S$
	\item $\sum _{x \in S} f(x) = 1$
	\item $f(x) \geq 0, \forall x \in S$
\end{itemize}
}

\noteDefn{The \textit{cumulative distribution function} (CDF) of a discrete random variable $X$ with PMF $f(x)$ is $$F(x) = \sum _{t \leq x} f(t)$$ or equivalently $$F(x) = P(X \leq x)$$}

* e.g. flipping a coin 3 times:
	* $f(x) = \twocond{\frac{1}{8}}{x = 0, x = 3}{\frac{3}{8}}{x = 1, x = 2}$
	* $F(-1) = 0, F(0) = \frac{1}{8}, F(1) = \frac{1}{2}, F(2) = \frac{7}{8}, F(3) = 1$
	* $P(X \geq 2) = 1 - P(X \leq 1) = 1 - F(1) = \frac{1}{2}$
* Properties of CDFs:
	* $F(-\infty) = 0$
	* $F(\infty) = 1$
	* All CDFs are nondecreasing

## Probabilities of Continuous Random Variables

* In the continuous case, the probability of the random variable equalling any specific value is zero, since there are an uncountably infinite number of outcomes in every interval
* For a continuous random variable we can only talk about probabilities of the variable being in some interval

\noteDefn{$f(x)$ is the \textit{probability distribution/density function} (PDF) of a continuous random variable $X$ if:
\begin{itemize}
	\item $\int _a^b f(x)\,\dx = P(a \leq X \leq B), \forall a \leq b \in \reals$
	\item $\int _{-\infty}^\infty f(x)\,\dx = 1$
	\item $f(x) \geq 0, \forall x \in S$
\end{itemize}
}

\noteDefn{The \textit{cumulative distribution function} (CDF) of a continuous random varaible $X$ with PDF $f(x)$ is $$F(x) = \int _{-\infty}^x f(t)\,\dt$$ or equivalently $$F(x) = P(X \leq x)$$}

* This gives $P(a \leq X \leq b) = F(b) - F(a)$
* The properties of CDFs from the discrete case carry over

