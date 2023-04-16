# Lecture 6, Sep 20, 2022

## Functional Completeness of NAND and NOR

* DeMorgan's theorem allows us to implement any SOP circuit can be implemented using only NAND gates:
	* Example: $\alignedeqntwo[t]{f}{x_1x_2 + x_2x_3}{\overline{\overline{(x_1x_2)}} + \overline{\overline{(x_2x_3)}}}{\overline{\overline{x_1x_2} \cdot \overline{x_2x_3}}}$
	* For a POS circuit, convert to SOP first
* Any POS circuit can be implemented using NOR gates:
	* Example: $\alignedeqntwo[t]{f}{(x_1 + x_2)(x_2 + x_3)}{\overline{\overline{x_1 + x_2}} \cdot \overline{\overline{x_2 + x_3}}}{\overline{\overline{x_1 + x_2} + \overline{x_2 + x_3}}}$
	* Likely, for a SOP circuit, convert to POS first

## Example

* Gumball factory
* $s_2$ normally 0, but 1 if gumball is too large
* $s_1$ normally 0, but 1 if too small
* $s_0$ normally 0, but 1 if too light
* Desired behaviour: $f = 1$ when gumball is either (too large) or (too small and too light)
	* By inspection, $f = s_2 + s_1s_0$
* Truth table:

| $s_2s_1s_0$ | $f$ |
|:-----------:|:---:|
| 000         | 0   |
| 001         | 0   |
| 010         | 0   |
| 011         | 1   |
| 100         | 1   |
| 101         | 1   |
| 110         | 1   |
| 111         | 1   |

* Minterms are the last 5 rows:
	* $f = \bar s_1s_1s_0 + s_2\bar s_1\bar s_0 + s_2\bar s_1s_0 + s_2s_1\bar s_0 + s_2s_1s_0$
* Simplify: $\alignedeqntwo[t]{f}{\bar s_1s_1s_0 + s_2\bar s_1\bar s_0 + s_2\bar s_1s_0 + s_2s_1\bar s_0 + s_2s_1s_0}{s_1s_0(\bar s_2 + s_2) + s_2\bar s_1(s_0 + \bar s_0) + s_2\bar s_0(\bar s_1 + s_0) \Ttag{Rule 7 + Distributivity}}{s_1s_0 + s_2\bar s_1 + s_2\bar s_0 \Ttag{Combination}}{s_1s_0 + s_2(\bar s_1 + \bar s_0) \Ttag{Distributivity}}{s_1s_0 + s_2\overline{s_1s_0} \Ttag{DeMorgan's Theorem}}{s_1s_0 + s_2 \Ttag{Rule 16}}$


## Example 2

* Derive a minimal POS expression for $f(x_1, x_2, x_3) = \prod M(0, 2, 4)$

| $x_1x_2x_3$ | $f$ | $\bar f$ |
|:-----------:|:---:|:--------:|
| 000         | 0   | 1        |
| 001         | 1   | 0        |
| 010         | 0   | 1        |
| 011         | 1   | 0        |
| 100         | 0   | 1        |
| 101         | 1   | 0        |
| 110         | 1   | 0        |
| 111         | 1   | 0        |

* $\alignedeqntwo[t]{f}{(x_1 + x_2 + x_3)(x_1 \bar x_2 + x_3)(\bar x_1 + x_2 + x_3)}{(x_1 + x_3)(x_2 + x_3) \Ttag{Combination (dual)}}$
* Using the min terms of $\bar f$:
	* $\alignedeqntwo[t]{\bar f}{\bar x_1\bar x_2\bar x_3 + \bar x_1x_2\bar x_3 + x_1\bar x_2\bar x_3}{\bar x_1\bar x_3 + \bar x_2\bar x_3}$
	* Using DeMorgan's rule: $f = \bar{\bar f} = \overline{\bar x_1\bar x_3 + \bar x_2\bar x_3} = \overline{\bar x_1\bar x_2} \cdot \overline{\bar x_2\bar x_3} = (x_1 + x_2)(x_2 + x_3)$

