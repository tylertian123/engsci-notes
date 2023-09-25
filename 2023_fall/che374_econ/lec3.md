# Lecture 3, Sep 27, 2023

## Mortgages and Bonds

### Mortgage Loans

* *Mortgages* are loans secured by real property -- the money is borrowed with real property as collateral; upon default, the lender has the right to take the property
* Mortgage terminology:
	* Principal: the amount of money borrowed
	* Loan-to-value ratio (LTV): ratio of the mortgage loan to the value of the property
	* Mortgage rate: interest rate of the mortgage loan
	* Amortization period: agreed time horizon for payment
	* Term: an amount of time when the interest rate is fixed, usually shorter than the amortization period
		* After a term, the monthly payments may change as a result of interest rate changes
		* Note that even though the term is the length of the agreement, monthly payments are calculated based on the amortization period
* Example: \$500,000 home with a 20% down payment, 5% mortgage rate, 5 year payment, 25 year amortization period
	* What is your monthly payment for the first term?
		* $i = \frac{5\%}{12}, N = 25 \cdot 12$
		* $A = 400,000(A/P, i, N) = 2338$
	* At the end of the term, the interest changes to 6%, what is the new monthly payment?
		* First we need to calculate the amount owing:
			* With interest the principal would have grown to: $400,000(F/P, i, 5 \cdot 12)$
			* We paid: $2338(F/A, i, 5 \cdot 12)$
			* Therefore we still owe $354,320$
		* Now we can calculate the monthly payment as $A = 354,320(A/P, \frac{6\%}{12}, 20 \cdot 12) = 2538$
		* Note that this amount is higher than the first set because of the increase in interest rate
* In real life the interest can vary within a term, you can make additional payments, etc

### Bonds

* Bonds are financial instruments issued by firms and governments to raise funds to finance projects, as a special form of long-term loan
* The creditor promises to pay a stated amount at specified intervals for a defined period (*coupon payments*) and the final amount at a specific date (*face value* at the *date of maturity*)
	* Bonds are often tradeable at any given time, so the payment may not always go to the person who initially held the bond
* Bonds have a *coupon rate* which is used to calculate coupon payments (i.e. interest)
	* e.g. a \$1000 bond at 9.25% interest with 2 payments per year pays $9.25\% \cdot 1000 \cdot \frac{1}{2} = 46.25$ per payment
* Example: What is the present worth of a \$1000 bond that matures in 10 years, with 9.25% coupon rate paid every 6 months?
	* Suppose the bank is paying 10% interest; how much do we need to put into the bank now to get this cash flow?
	* $P = 46.25(P/A, \frac{10\%}{2}, 10 \cdot 2) + 1000(P/F, \frac{10\%}{2}, 10 \cdot 2) = 953$
* Since there is a risk of default, the creditor must demand a lower price on the bond to compensate for the risk; this equates to a higher interest rate
	* Example: if we are only willing to pay \$700 for the aforementioned bond, what is the interest rate?
		* $700 = 46.25(P/A, \frac{i}{2}, 20) + 1000(P/F, \frac{i}{2}, 20)$
		* We can solve this to get $i = 15.2\%$
	* This new higher interest rate is called the *yield*
	* The higher the yield, the cheaper the bond will be at the present moment
	* Another way to interpret the yield is how much you prefer getting paid at the present moment than in the future
	* Yield rates are expressed as annual rates based on compounding equivalent to the coupon payment frequency
		* If the compounding period is less than a year, the interest is simply multiplied to get the annual interest (unless effective interest is stated)
* Yield is determined by the market expectation of risk and inflation
	* The more stable a country's economy, the higher the yield
* Longer time to maturity also increases the yield, since the risk increases as we have to wait longer to get the money
* Example: A \$10000 bond was bought that will mature in 8 years, with 12% coupon payments paid quarterly; if the yield is 10%, how much is the present value of the bond?
	* Coupon payment is $10000 \cdot \frac{12\%}{4} = 300$
	* $P = 300(P/A, \frac{10\%}{4}, 4 \cdot 8) + 10000(P/F, \frac{10\%}{4}, 4 \cdot 8) = 11092$
* Example: A \$880 bond maturing in 2 years pays \$45 coupon every 6 months was bought for \$1000; what is the effective annual yield?
	* $1000 = 45(P/A, i^*, 4) + 880(P/F, i^*, 4)$
	* To solve this we can guess and interpolate; we will get $1.57\%$ yield per 6 months
	* Therefore $i_e = (1 + i^*)^2 - 1 = 3.17\%$
* Note that calculating the yield rate usually involves solving an equation that is not analytically solvable
	* We can use a computer or guess-and-interpolate by hand
	* To guess an appropriate yield rate, note that if the bond sells for less than its face value, then the yield rate is higher than the coupon rate; if the bond sells for higher than its face value, then the yield rate is lower than the coupon rate
	* Try finding a yield rate that gives a present value higher than the actual price, and another one that is lower than the actual price, so to find the actual yield rate we can interpolate
	* Extrapolation is acceptable in a test

