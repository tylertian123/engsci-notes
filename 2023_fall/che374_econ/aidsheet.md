| Name | Factor | Expression | Notes |
|---|---|------|------|
| Future | $(P/F, i, N)$ | $(1 + i)^{-N}$ | |
| Annuity | $(P/A, i, N)$ | $\frac{1}{i} - \frac{1}{i(1 + i)^N}$ | First payment at end of year 1 |
| Arith. Grad. | $(P/G, i, N)$ | $\frac{1}{i^2}\left(1 - \frac{1 + iN}{(1 + i)^N}\right)$ | Starts at 0 at end of year 1; $P = A(P/A, i, N) + G(P/G, i, N)$ |
| Geom. Grad. | $(P/Geom, i, g, N)$ | $\frac{1 - \left(\frac{1 + g}{1 + i}\right)^N}{i - g}$ | Starts at $A$ at end of year 1; grows by $(1 + g)$ per year |

* Mortgage: $A = P(A/P, i, N)$ where $A$ is the monthly payment, $P$ is the principal, $i$ is the monthly interest rate
	* To recalculate monthly payment after a term: $P(F/P, i, n) - A(F/P, i, n)(P/A, i, n)$, then calculate new payment
* Bond: $P = C(P/A, i, N) + F(P/F, i, N)$ where $P$ is the sell price, $C$ is the coupon payment, $F$ is the face value, $i$ is the yield
	* Assumes first coupon paid in exactly 1 period
	* Higher yield makes bond sell for cheaper
	* If yield is higher than coupon, $P < F$; if yield is lower than coupon, $P > F$
	* When maturity period is not aligned with coupon payments, calculate price in the past and apply interest forward
* CAPM: $\mathbb E[R_i] = r_f + \beta _i(\mathbb E[R_{MP}] - r_f)$ where $r_f$ is the risk-free rate, $\beta _i = \frac{\sigma _{i,MP}}{\sigma _{MP}^2} = \frac{\rho _{i,MP}\sigma _i}{\sigma _{MP}}$
* Arbitrage: Equal risk should mean equal level of return

