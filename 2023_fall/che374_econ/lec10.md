# Lecture 10, Nov 22, 2023

## Inflation

### Causes and Effects

* *Inflation* is a rise in the average prices of goods and services over time -- the purchasing power of the dollar declines
	* The opposite would be *deflation*, which is a lot less common
* Some common causes:
	* Demand pull: people having more money (or low interest rates/taxes encouraging people to spend more)
		* This generally results from the economy doing well and is a good thing
	* Cost push: higher cost to making goods and services
	* Expanding money supply: the government printing more money, while the amount of goods and services stays the same
		* This could also result from banks lending out more money, which also creates purchasing power out of nothing
	* Expectations: inflation exists simply because people expect it to
		* Employees expect there to be inflation, so they expect their wages to rise, which in turn makes companies raise prices of goods, and so on
		* This is one of the most common causes
* Important effects of inflation:
	* Inflation benefits borrowers -- we can borrow now and repay the same amount later, but the money will be worth less later
	* Inflation hurts lenders, savers, unemployed, retirees, etc
	* Menu costs (costs associated with updating prices)
	* Tax distortions (e.g. effect of tax brackets changing due to rising wages, selling assets for more than their book value because money is worth less, etc)
	* In the short run, higher inflation can lead to lower unemployment (but only in the short term)
		* Higher prices will cause businesses to hire more people, so they can make more goods to sell at the higher price
		* This happens until the business realizes that they're not making more money and this is simply a result of inflation
	* At low levels, inflation can stimulate the economy
		* The expectation of inflation pushes people to spend money now, which keeps the economy moving
	* At high levels, inflation can be disastrous
		* Hyperinflation can result in a vicious cycle, since the expectation of inflation causes people to spend money immediately, which drives up prices in turn
		* Money becomes worthless as a tool to facilitate trade, so the entire economic system collapses
* Large government banks have their primary mission as keeping inflation under control; e.g. the Bank of Canada's primary mission is to keep inflation at 2%
	* Part of the reason is some inflation can push people to spend money and stimulate the economy
	* We don't target 0% mostly because deflation is worse; if people expect prices to decline, they won't spend money, and low demand causes prices to go down and end up in a vicious cycle

### Measuring Inflation -- The Consumer Price Index

* Inflation is commonly measured using the Consumer Price Index (CPI)
	* This is a weighted average of the prices of some goods and services which are of primary consumer needs
	* Calculated by taking price changes for each item in a predetermined basket of goods and averaging them
* e.g. in Canada, the basket includes food, shelter, household goods, clothing, transportation, health and personal care, recreation, alcohol and tobacco
* The CPI for a given period relates the average price of the basket to the average of the base period; current base year is 2002, and the index for the base year is always set to 100

### Calculating With Inflation

* Inflation changes the value of dollars, so we define two different types of dollars to distinguish:
	* *Actual* (or *current/nominal*) dollars are expressed in the monetary units at the time the cash flows occur, i.e. this is the actual dollar amount
	* *Real* (or *constant*) dollars are expressed in the monetary units of constant purchasing power, and must always be associated with a particular date, i.e. this is how much purchasing power you actually have
* Similarly, we have two types of interest rates:
	* *Actual* interest rate ($i$ or $i_A$) is the observed interest rate based on actual dollars, i.e. this is the interest rate usually given
	* *Real* interest rate ($i'$ or $i_R$) is the interest rate based on constant dollars, i.e. this is the interest rate when you consider how much purchasing power you have
* Actual and real interest rates are related by $1 + i_R = \frac{1 + i_A}{1 + f}$, where $f$ is the inflation rate
	* In the same time period, your money will grow by a factor of $1 + i_A$ while the price of goods grows by $1 + f$, so the growth in purchasing power is $\frac{1 + i_A}{1 + f}$
	* Note that for continuous compounding, this reduces to $i_R = i_A - f$
* When calculating value of cash flows, if we use actual values, then we need to adjust for inflation and use the actual MARR; if we use real values, then no need to adjust for inflation and use the real MARR
	* Note most market value interest rates are based on actual rates, e.g. loan interest rates, bond yields, CAPM, etc., except when explicitly stated
	* This is because inflation rates are hard to determine and are only published after the time period (and may even be revised), so using real rates in contracts leads to ambiguity
* Example: A company is looking to invest \$100k for a new machine that will bring benefits of \$30k for 5 years; the company expects a real return of 6% and inflation is expected to be 3%
	* If the dollar values are actual, what is the present worth of this investment?
		* Since dollar values are actual, we need to use the actual interest rate: $i_A = (1 + f)(1 + r_R) - 1 = 9.18\%$
		* $PW = -100k + 30k(P/A, 9.18\%, 5) = 16.1k$
	* If the dollar values are real, what is the present worth of this investment?
		* Since dollar values are real, we can use the real interest rate
		* $PW = -100k + 30k(P/A, 6\%, 5) = 26.4k$
* Example: You are looking to borrow money from the bank; the bank has quoted an interest rate of 5% based on semi-annual compounding; if inflation is 2%, what is the real effective rate of interest?
	* Convert the semi-annually compounded real rate to get $r_{A,eff} = 5.063\%$
	* Therefore $r_R = \frac{1 + r_{A,eff}}{1 + f} - 1 = 3.002\%$
* Example: A 10 year bond with 5 years to maturity has a 4% coupon paid semi-annually; inflation is 3%; if you are targeting a real rate of 5%, how much should you pay for this bond?
	* Using the real rate we calculate the actual rate as $r_A = (1 + f)(1 + r_R) = 8.15\%$
	* Convert this to a semi-annual rate: $r_s = (1 + r_A)^\frac{1}{2} - 1 = 3.995\%$
	* Calculate value as $P = \frac{100 \cdot 4\%}{2}(P/A, r_s, 10) + 100(P/F, r_s, 10) = 83.81$
* In accounting, everything is recorded as actual dollars; depreciation is also in actual dollars so actual interest rates must be used in tax benefit factors
* Example: A machine costing \$20k has a lifetime of 7 years with a salvage value of \$6k in today's dollars; CCA rate is 20%, taxes are 25%. What is the present worth of the machine assuming a real MARR of 8% and expected inflation of 4%?
	* Convert the real MARR to an actual MARR of $r_A = (1 + f)(1 + r_R) - 1 = 12.32\%$
	* The salvage value is given in today's dollars (i.e. real dollars), so we need to estimate the salvage value in 7 years as $SV_A = 6000(1 + 4\%)^7$
	* Calculate CTF, CSF with actual MARR (not discounted by tax): $CTF = 0.8538, CSF = 0.8453$
	* $PW = -20k \cdot 0.8538 + 6000(1 + 4\%)^7 \cdot 0.8453 \cdot (P/F, 12.32\%, 7) = -13575$
	* Note we could also calculate this using real dollars; both present worth and salvage value are given in real dollars, and in the $P/F$ factor we use the real MARR of 8%, giving the same value
		* CTF, CSF still have to be calculated with the actual MARR, but we can use either actual or real dollars as long as we discount using the right rate
		* Note that the factor of $(1 + 4\%)^7(P/F, 12.32\%, 7)$ is equivalent to $(P/F, 8\%, 7)$ at the real interest rate

