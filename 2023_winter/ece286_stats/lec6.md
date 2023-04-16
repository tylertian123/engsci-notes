# Lecture 6, Jan 20, 2023

## Bayes' Rule and Total Probability

* Given a partition of $A$ into $C_1, \cdots, C_k$
* $\alignedeqntwo[t]{P(B | A)}{\frac{P(B)P(A | B)}{P(A)}}{\frac{P(B)P(A | B)}{\sum _{i = 1}^k P(A \intersect C_i)}}{\frac{P(B)P(A | B)}{\sum _{i = 1}^k P(A | C_i)P(C_i)}}$
	* Often $B = C_n$ for some $n = 1, \cdots, k$

## Random Variables

\noteDefn{A \textit{random variable} is a function that maps each element of a sample space to a real number}

* We denote a random variable with capital letters, e.g. $X$, $Y$
* In the discrete case, the random variable can only take on a finite (or countably infinite) set of values
* In the continuous case the random variable can take any value in the real numbers
* We write $X = x$, with the lowercase $x$ to denote values that the random variable can take on
* Example: coin flips
	* $S = \set{H, T}$; our random variable can be $X = \twocond{0}{H}{10}{T}$
	* If we do 3 coin flips, $X$ can be the number of heads

