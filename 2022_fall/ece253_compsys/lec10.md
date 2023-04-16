# Lecture 10, Sep 29, 2022

## 3-Variable K-Maps

| \diagbox{$x_3$}{$x_1x_2$} | 00    | 01    | 11    | 10    |
|:-------------------------:|:-----:|:-----:|:-----:|:-----:|
| 0                         | $m_0$ | $m_2$ | $m_6$ | $m_4$ |
| 1                         | $m_1$ | $m_3$ | $m_7$ | $m_5$ |

* Group sizes are 1, 2, 4, 8
* Note the inputs are not enumerated in ascending order
	* This is a *grey code*, a sequence of bits where when transitioning between consecutive terms, only 1 bit changes
	* This ensures that adjacent entries in the table only differ by 1 input bit
* The way the table is arranged shouldn't matter for the final result, as long as minterms are mapped properly
* Example: $f = \sum m(3, 7) = \bar x_1x_2x_3 + x_1x_2x_3 = x_2x_3(\bar x_1 + x_1) = x_2x_3$
	* In the K-Map these terms are adjacent, in the two where $x_3$ and $x_2$ are 1, and the value of $x_1$ does not matter, so this gives us $x_2x_3$ both non-inverted and no $x_1$
* Example: minterms $m_2, m_6, m_3, m_7$ simplifies to $x_2$
	* Notice that a product term that covers more adjacent cells is cheaper!
* The K-Map also wraps around, e.g. we can combine $m_0, m_4$ to $\bar x_2\bar x_3$

## Terminology

* Implicant: for a function $f$, an *implicant* is any product term covered/included by $f$
	* Can be a simplified or unsimplified term
* Prime Implicant: an implicant for which it is impossible to remove any literal and still have a valid implicant
* Cover: any set of implicants that includes all minterms of a function (every 1 in a K-Map needs to be covered)
* Example: $f(x_1, x_2, x_3) = \sum m(1, 4, 5, 6)$
	* Prime implicants are $x_1\bar x_3, x_1\bar x_2, \bar x_2x_3$
	* Minimal cost cover is $x_1\bar x_3 + \bar x_2x_3$ (notice $x_1\bar x_2$ is not included)

| \diagbox{$x_3$}{$x_1x_2$} | 00  | 01  | 11  | 10  |
|:-------------------------:|:---:|:---:|:---:|:---:|
| 0                         | 0   | 0   | 1   | 1   |
| 1                         | 1   | 0   | 0   | 1   |

* An essential prime implicant is a prime implicant that covers at least one minterm that is not covered by any other prime implicant
	* In the last example $x_1\bar x_2$ is not an essential prime implicant
* A minimal cost cover includes all essential prime implicants

## 4-Variable K-Maps

| \diagbox{$x_3x_4$}{$x_1x_2$} | 00    | 01    | 11       | 10       |
|:----------------------------:|:-----:|:-----:|:--------:|:--------:|
| 00                           | $m_0$ | $m_4$ | $m_{12}$ | $m_8$    |
| 01                           | $m_1$ | $m_5$ | $m_{13}$ | $m_9$    |
| 11                           | $m_3$ | $m_7$ | $m_{15}$ | $m_{11}$ |
| 10                           | $m_2$ | $m_6$ | $m_{14}$ | $m_{10}$ |

* Group sizes are 1, 2, 4, 8, 16
* Example: $f(x_1, x_2, x_3, x_4) = \sum m(2, 4, 5, 8, 10, 11, 12, 13, 15)$

| \diagbox{$x_3x_4$}{$x_1x_2$} | 00  | 01  | 11  | 10  |
|:----------------------------:|:---:|:---:|:---:|:---:|
| 00                           | 0   | 1   | 1   | 1   |
| 01                           | 0   | 1   | 1   | 0   |
| 11                           | 0   | 0   | 1   | 1   |
| 10                           | 1   | 0   | 0   | 1   |

* Prime implicants: $x_2\bar x_3, x_1\bar x_3\bar x_4, x_1x_2x_4, x_1x_3x_4, x_1\bar x_2x_3, \bar x_2x_3\bar x_4, x_1\bar x_2\bar x_4$
	* Note minterms 12 and 13 don't form a PI since it's completely inside the PI for minterms 4, 5, 12, 13
* Essential PIs: $x_2\bar x_3, \bar x_2x_3\bar x_4$
* Minimal cost cover: $f = x_2\bar x_3 + \bar x_2x_3\bar x_4 + x_2x_3x_4 + \twopiece{x_1\bar x_3\bar x_4}{x_2\bar x_3\bar x_4}$
	* This shows that there can be multiple minimal cost covers

