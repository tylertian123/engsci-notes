# Lecture 5, Sep 19, 2022

## Boolean Algebra Basics

* Canonical SOP and POS representations can be large and inefficient; boolean algebra lets us simplify and optimize them
* Axioms of Boolean Algebra:
	1. $0 \cdot 0 = 0$
	2. $1 \cdot 1 = 1$
	3. $0 \cdot 1 = 1 \cdot 0 = 0$
	4. $x = 0 \implies \bar x = 1$
* Duality: given a logic expression, swapping all 0 with 1 and $\cdot$ with $+$ leaves the expression still valid; this gives every axiom a *dual form*:
	1. $1 + 1 = 1$
	2. $0 + 0 = 0$
	3. $1 + 0 = 0 + 1 = 1$
	4. $x = 1 \implies \bar x = 0$
* Derived rules: ($\forall x$:)
	5. $x \cdot 0 = 0$, dual: $x + 1 = 1$
	6. $x \cdot 1 = x$, dual: $x + 0 = x$
	7. $x \cdot x = x$, dual: $x + x = x$
	8. $x \cdot \bar x = 0$, dual: $x + \bar x = 1$
	9. $\bar{\bar x} = x$
* Derived identities: ($\forall x, y, z$:)
	10. Commutativity: $x \cdot y = y \cdot x$, dual: $x + y = y + x$
	11. Associativity: $x(yz) = (xy)z$, dual: $x + (y + z) = (x + y) + z$
	12. Distributivity: $x(y + z) = xy + xz$, dual: $x + (yz) = (x + y)(x + z)$
	13. Absorption: $x + xy = x$, dual: $x(x + y) = x$
	14. Combination: $xy + x\bar y = x$, dual: $(x + y)(x + \bar y) = x$
	15. DeMorgan's Theorem: $\overline{xy} = \bar x + \bar y$, dual: $\overline{(x + y)} = \bar x\bar y$
		* Proof: $\alignedeqntwo[t]{\overline{xy}}{\bar x\bar y + \bar xy + x\bar y \Ttag{Canonical SOP}}{\bar x\bar y + \bar xy + \bar x\bar y + x\bar y \Ttag{Rule 7}}{\bar x + \bar y \Ttag{Combination}}$
	16. $x + \bar xy = x + y$, dual: $x(\bar x + y) = xy$

## Proof by Perfect Induction

* Proving a statement by enumerating all the possible cases
* Example: proving $x + (yz) = (x + y)(x + z)$

| $x$   | $y$   | $z$   | $yz$  | $x + (yz)$ | $x + y$ | $x + z$ | $(x + y)(x + z)$ |
|:-----:|:-----:|:-----:|:-----:|:----------:|:-------:|:-------:|:----------------:|
| 0     | 0     | 0     | 0     | 0          | 0       | 0       | 0                |
| 0     | 0     | 1     | 0     | 0          | 0       | 1       | 0                |
| 0     | 1     | 0     | 0     | 0          | 1       | 0       | 0                |
| 0     | 1     | 1     | 1     | 1          | 1       | 1       | 1                |
| 1     | 0     | 0     | 0     | 1          | 1       | 1       | 1                |
| 1     | 0     | 1     | 0     | 1          | 1       | 1       | 1                |
| 1     | 1     | 0     | 0     | 1          | 1       | 1       | 1                |
| 1     | 1     | 1     | 1     | 1          | 1       | 1       | 1                |

