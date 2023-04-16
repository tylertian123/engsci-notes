# Lecture 2 (Online)

## Defining Numbers

* Numbers are the most basic elements and math and thus can't be defined explicitly
* Numbers are defined implicitly by imposing the **axioms**, basic rules, that they have to satisfy
* Some axioms:
	1. Commutative law $x + y = y + x$
	2. Associative law $(x + y) + z = x + (y + z)$
	3. Distributive law $x(y + z) = xy + xz$
	4. Existence of additive identity $0$ and multiplicative identity $1$
	5. Existence of additive inverses $-x$ and multiplicative inverses $x^{-1}$ for $x \neq 0$
* There should be as few axioms as possible as axioms are unprovable; the more axioms, the more the risk of contradiction
* Theorems arise from definitions and axioms and are provable: Example: $4 = 2 + 2$; there is no limit to the number of theorems
* Some definitions:
	1. Positive integers ("natural numbers"): $1, 2, 3, \dots$; $2 \equiv 1 + 1$
	2. Rational numbers: $\frac{a}{b} \equiv a \cdot \frac{1}{b}$ where $a$ and $b$ are integers and $b \neq 0$
		* The axiom for the existence of inverses combined with this creates rational numbers
	3. Roots, other algebraic (root of a polynomial) irrational numbers; e.g. $q^2 - 2 = 0$
		* Axiom 5 only creates rational numbers, so a new one is needed for irrational numbers
	4. Transcendental irrationals; e.g. $\pi$ or $e$
* Axiom: *Completeness of the Reals Axiom* (CORA): Every non-empty set of real numbers that is bounded above has a least upper bound among the real numbers; this creates irrationals
	* A set of real numbers $S_1$ is bounded above iff there exists some $\mathrm{ubS}_1$ such that $x \leq \textrm{ubS}_1$ for all $x \in S_1$; the least upper bound $\textrm{lubS}_1$ is the least of the $\textrm{ubS}_1$
		* The least upper bound does not have to be in $S$
	* Example: $S_2 = \{x: x^2 < 2\}$
		* $\textrm{lubS}_2$ intuitively would satisfy $\textrm{lubS}_2^2 = 2$ and so $\textrm{lubS}_2 = \sqrt{2}$
		* By imposing CORA, $\sqrt{2}$ and all irrationals (including transcendental irrationals) have been created
		* However proving $\textrm{lubS}_2 = \sqrt{2}$ rigorously is very difficult

