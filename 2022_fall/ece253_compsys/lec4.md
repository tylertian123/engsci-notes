# Lecture 4, Sep 15, 2022

## Logic Expressions: Sum of Products and Products of Sums

* Terminology:
	* Literal: any variable or its complement, e.g. $x, y, \bar x$
	* Product term: an AND operation (since AND is denoted with $\cdot$)
	* Sum term: an OR operation (since OR is denoted with $+$)
* SOP and POS are a way to convert any arbitrary truth table to a logic expression

### Sum of Products

\noteDefn{Sum of products: An expression written as an OR operation of AND operations, e.g. $xy + \bar x\bar y$}

* Minterm: A product term that evaluates to 1 for exactly one row of a truth table
	* Given a truth table, the min term is formed by including $x_i$ if $x_i = 1$, or $\bar x_i$ if $x_i = 0$
* SOP specifies the truth table based on its ones
* Canonical SOP (Sum-of-Products): SOP expression for a function that comprises its minterms
	* Canonical SOPs are not simplified
* Example:


| x   | y   | z   | minterm              |
|:---:|:---:|:---:|:--------------------:|
| 0   | 0   | 0   | $\bar x\bar y\bar z$ |
| 0   | 0   | 1   | $\bar x\bar yz$      |
| 0   | 1   | 0   | $\bar xy\bar z$      |
| 0   | 1   | 1   | $\bar xyz$           |
| 1   | 0   | 0   | $x\bar y\bar z$      |
| 1   | 0   | 1   | $x\bar yz$           |
| 1   | 1   | 0   | $xy\bar z$           |
| 1   | 1   | 1   | $xyz$                |

* Example: function comprised of minterms $f(x, y, z) = \sum m(0, 1, 2, 3, 6, 7)$
	* Canonical SOP: $f(x, y, z) = \bar x\bar y \bar z + \bar x\bar yz + \bar xy\bar z + \bar xyz + xy\bar z + xyz$

## Product of Sums

\noteDefn{Product of sums: An expression written as an AND operation of OR operations}

* Maxterm: A sum term that evaluates to 0 for exactly one row of a truth table
	* Given a truth table, include $x_i$ if $x_i = 0$ in that row, else include $\bar x_i$
* POS specifies the truth table based on its zeroes
* Canonical POS: POS expression for a function that comprises its maxterms
* Example:

| x   | y   | z   | maxterm                    |
|:---:|:---:|:---:|:--------------------------:|
| 0   | 0   | 0   | $x + y + z$                |
| 0   | 0   | 1   | $x + y + \bar z$           |
| 0   | 1   | 0   | $x + \bar y + z$           |
| 0   | 1   | 1   | $x + \bar y + \bar z$      |
| 1   | 0   | 0   | $\bar x + y + z$           |
| 1   | 0   | 1   | $\bar x + y + \bar z$      |
| 1   | 1   | 0   | $\bar x + \bar y + z$      |
| 1   | 1   | 1   | $\bar x + \bar y + \bar z$ |

* Example: $f(x, y, z) = \sum m(0, 1, 6, 7) = \prod M(2, 3, 4, 5)$
	* Canonical POS: $f(x, y, z) = (x + \bar y + z)(x + \bar y + \bar z)(\bar x + y + z)(\bar x + y + \bar z)$

* For any truth table, we can use its 1s to derive the SOP, or the 0s to derive the POS
* Example:

| x   | y   | f   |
|:---:|:---:|:---:|
| 0   | 0   | 0   |
| 0   | 1   | 1   |
| 1   | 0   | 1   |
| 1   | 1   | 1   |

* Equivalent representations:
	* POS: $f = (x + y)$
	* SOP: $f = \bar xy + x\bar y + xy$
* Generally if you have fewer 0s, use POS, if you have fewer 1s, use SOP

