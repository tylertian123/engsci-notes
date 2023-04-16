# Lecture 21, Dec 6, 2021

## $LU$ Decomposition

* Let $A$ be an invertible square $n \times n$ matrix
* We can write $A$ in a factored form as $A = LU$, where $L$ is a lower-triangular matrix (zeros above the diagonal), and $U$ is an upper-triangular matrix (zeros below the diagonal)
* To solve $A\vec{x} = \vec{b}$ using $LU$ decomposition:
	1. Rewrite $A\vec{x} = \vec{b} \implies LU\vec{x} = \vec{b}$, and let $\vec{y} = U\vec{x}$, then $LU\vec{x} = \vec{b} \implies L\vec{y} = \vec{b}$
	2. Solve for $\vec{y}$
	3. Substitute $\vec{y}$ in $U\vec{x} = \vec{y}$, and solve for $\vec{x}$
* We've separated the decomposition phase, which is computationally heavy, and the part where $\vec{b}$ is brought in, which is computationally light
	* $LU$ decomposition is better than computing the inverse, because if $A$ is sparse computing the inverse might lead to a lot of numerical errors
* Because $L$ and $U$ have special forms, solving $U\vec{x} = \vec{y}$ is much easier
* $LU$ factorizations aren't unique, but to solve the problem we can use any one
* Example: $\matthreeb{2}{6}{2}{-3}{-8}{0}{4}{9}{2}\cvec{x_1}{x_2}{x_3} = \cvec{2}{2}{3}$
	1. Factor $A = LU \implies \matthreeb{2}{6}{2}{-3}{-8}{0}{4}{9}{2} = \matthreeb{2}{0}{0}{-3}{1}{0}{4}{-3}{7}\matthreeb{1}{3}{1}{0}{1}{3}{0}{0}{1}$
	2. Let $\vec{y} = \cvec{y_1}{y_2}{y_3} = U\vec{x}$
	3. $L\vec{y} = \vec{b} \implies \matthreeb{2}{0}{0}{-3}{1}{0}{4}{-3}{7}\cvec{y_1}{y_2}{y_3} = \cvec{2}{2}{3} \implies \vec{y} = \cvec{1}{5}{2}$
		* By forward substitution $\threecond{2y_1 = 2}{\implies y_1 = 1}{-3y_1 + y_2 = 2}{\implies y_2 = 5}{4y_1 - 3y_2 + 7y_3 = 3}{\implies y_3 = 2}$
	4. $U\vec{x} = \vec{y} \implies \matthreeb{1}{3}{1}{0}{1}{3}{0}{0}{1}\vec{x} = \cvec{1}{5}{2} \implies \vec{x} = \cvec{2}{-1}{2}$
		* By back substitution $\threecond{x_3 = 2}{\implies x_3 = 2}{x_2 + 3x_3 = 5}{\implies x_2 = -1}{x_1 + 3x_2 + x_3 = 1}{\implies x_1 = 2}$
* To find $LU$:
	* During elimination we have $E_n\cdots E_1A = U$, so $L = E_1^{-1}\cdots E_n^{-1}$
	* As long as we don't do any back substitution, $E_1^{-1}\cdots E_n^{-1}$ is going to be lower-triangular

