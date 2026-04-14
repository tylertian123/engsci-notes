
| Name           | Identity                           | Dual                                               |
|------------|--------------------|----------------------------------------------------|
| Idempotent     | $xx = x$                           | $x + x = x$                                        |
| Complement     | $x\bar x = 0$                      | $x + \bar x = 1$                                   |
| Commutativity  | $xy = yx$                          | $x + y = y + x$                                    |
| Associativity  | $x(yz) = (xy)z$                    | $x + (y + z) = (x + y) + z$                        |
| Distributivity | $x(y + z) = xy + xz$               | $x + (yz) = (x + y)(x + z)$                        |
| Absorption     | $x + xy = x$                       | $x(x + y) = x$                                     |
| Redundancy     | $x + \bar xy = x + y$              | $x(\bar x + y) = xy$                               |
| Combination    | $xy + x\bar y = x$                 | $(x + y)(x + \bar y) = x$                          |
| DeMorgan's     | $\overline{xy} = \bar x + \bar y$  | $\overline{x + y} = \bar x\bar y$                  |
| Consensus      | $xy + \bar xz + yz = xy + \bar xz$ | $(x + y)(\bar x + z)(y + z) = (x + y)(\bar x + z)$ |

| \diagbox{$x_2$}{$x_1$} | 0     | 1     |
|:----------------------:|:-----:|:-----:|
| 0                      | $m_0$ | $m_2$ |
| 1                      | $m_1$ | $m_3$ |

| \diagbox{$x_3$}{$x_1x_2$} | 00    | 01    | 11    | 10    |
|:-------------------------:|:-----:|:-----:|:-----:|:-----:|
| 0                         | $m_0$ | $m_2$ | $m_6$ | $m_4$ |
| 1                         | $m_1$ | $m_3$ | $m_7$ | $m_5$ |


| \diagbox{$x_3x_4$}{$x_1x_2$} | 00    | 01    | 11       | 10       |
|:----------------------------:|:-----:|:-----:|:--------:|:--------:|
| 00                           | $m_0$ | $m_4$ | $m_{12}$ | $m_8$    |
| 01                           | $m_1$ | $m_5$ | $m_{13}$ | $m_9$    |
| 11                           | $m_3$ | $m_7$ | $m_{15}$ | $m_{11}$ |
| 10                           | $m_2$ | $m_6$ | $m_{14}$ | $m_{10}$ |

cost = # gates + # inputs (AND/OR take multiple inputs)

| Op | NAND | Circuit |
|---|---|---|
| $\bar x$ | $\overline{xx}$ | ![](nand_not.png){width=10%} |
| $xy$ | $\overline{\overline{xy}}$ | ![](nand_and.png){width=15%} |
| $x + y$ | $\overline{\bar x\bar y}$ | ![](nand_or.png){width=15%} |

\pagebreak

| Op | NOR | Circuit |
|---|---|---|
| $\bar x$ | $\overline{x + x}$ | ![](nor_not.png){width=10%} |
| $xy$ | $\overline{\bar x + \bar y}$ | ![](nor_and.png){width=15%} |
| $x + y$ | $\overline{\overline{x + y}}$ | ![](nor_or.png){width=15%} |


![](half_adder.png){width=40%}\
Half Adder: $\twopiece{s = a \xor b}{c_o = ab}$

![](full_adder.png){width=50%}\
Full Adder: $\twopiece{s = a \xor b \xor c_i}{c_o = c_ia + c_ib + ab}$

Notes:

* Use `<=` for assignment in `always_ff`.
* Mux: $m = \bar sx + sy$, $m = x$ when 0, $m = y$ when 1.
* Implicant: any product term covered by $f$.
* Prime Implicant: an implicant that can't have any literal removed without making it invalid.
* Essential PI: a PI that covers at least one minterm not covered by any other PI.
* RS latches oscillate when $R$ and $S$ are pulled high then low at the same time.

