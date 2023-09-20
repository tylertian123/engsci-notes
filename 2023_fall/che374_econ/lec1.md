# Lecture 1, Sep 13, 2023

## Interest Rates

* "Time Value of Money": borrowing money has a cost for the borrower; lending money should create value for the lender (investor/creditor)
* Factors impacting interest rates:
	* *Inflation*: higher expected inflation leads to increase in interest rates
	* *Credit (default) risk*: higher risk of the borrower not being able to pay back leads to higher interest rates
	* *Liquidity risk*: higher liquidity risk (not being able to access the invested funds during the investment) leads to higher interest rate
	* *Maturity risk*: longer term investments (longer maturity) increase other risks, leading to higher interest rates
* The interest might only be paid yearly, but the money is being made in real time!
* Two types of interest (assume compound unless stated otherwise):
	* *Simple*: interest applies only to original principal, e.g. GICs (Guaranteed Investment Certificates)
		* After $N$ periods, amount owed is $P(1 + Ni)$ where $P$ is the principal, $i$ is the interest rate
	* *Compound*: interest applies to principal and all interest, e.g. mortgages, credit card debt
		* After $N$ periods, amount owed is $P(1 + i)^N$
* We can also compound multiple times a year with a fraction of the interest; for $m$ subperiods a year, the subperiod interest rate is $i_s = \frac{r}{m}$
	* At the end of the year we would have $F = P\left(1 + \frac{r}{m}\right)^m$ after all $m$ subperiods
	* The more frequently you compound, the more interest you will earn, so to compare investments with different compound periods, we need an *effective interest rate*
* *Effective interest rate* ($i_e$): the equivalent interest rate of an account that is compounded just once over the stated time periods
	* $i_e = \left(1 + \frac{r}{m}\right)^m - 1$
	* As $m$ increases, $i_e$ increases and approaches a finite limit (known as *continuous compounding*)
	* For continuous compounding, $i_e = \lim _{m \to \infty} \left(1 + \frac{r}{m}\right)^m = e^r - 1$
		* Note that the continuous interest rate has units of percent per time, while every other rate has units of percent (i.e. unitless)
* Example: given a mortgage rate of 5% (compounded semi-annually), how much interest will you pay on a \$100k mortgage in the first month?
	* $r_{s/s} = 2.5\%$ (semi-annual interest compounded semi-annually)
	* $(1 + 2.5\%) = (1 + r_{m/m})^6$ solve to get an $r_{m/m} = 0.4124\%$
	* Therefore the interest per month is $\$100000 \times 0.4124\% = \$412.4$

## Present Value and Factor Notation

* The formulas can be reversed to calculate the present value: $PV = \frac{FV}{(1 + i)^N}$
	* Money in the future is worth less, because you can't invest it; instead we calculate how much we would invest to get that amount in the future given some interest rate
	* In factor notation: $PV = FV(P/F, i, N) \implies (P/F, i, N) = \frac{1}{(1 + i)^N}$
	* To calculate future value: $FV = PV(F/P, i, N) \implies (F/P, i, N) = (1 + i)^N$

