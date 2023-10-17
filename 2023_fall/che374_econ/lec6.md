# Lecture 6, Oct 15, 2023

## Internal Rate of Return (IRR)

* A rate of return analysis starts by asking what is the rate of return on an investment
* The *internal rate of return* (IRR) is the interest rate (discount) that makes the present worth of benefits equal to the present worth of costs/investments
	* i.e. the IRR is the discount rate that make the total present worth of the project 0
	* A more profitable project has higher IRR, since higher benefits in the future need to be discounted more to match the same costs in the present
* IRR is often difficult to solve for analytically, so we will numerically solve or interpolate
	* If the cash flows near the present time are negative (simple investment), then increasing interest rate will lower the present worth
* In Excel this can be found using `NPV(i, cash flows)` to find the present worth, and using `IRR(cash flows, guess)` to find the IRR
	* Note that $NPV$ assumes the cash flow starts on year 1!
* For simple investments (i.e. negative cash flows occur before positive ones), we want IRR greater than MARR for the project to be worthwhile
	* IRR is a useful measurement of profitability in these scenarios
* For non-simple investments, where cash flow changes signs more than once, the present worth is no longer monotonically increasing/decreasing with respect to discount rate, so we may get multiple possible IRRs that cause the present worth to be zero
	* This is a limitation of using IRR
	* In these situations we can use multiple IRR

## Payback Period

* The *payback period* is the time it takes for an investment to be recouped
	* For the regular payback period, revenue is summed until it is equal to the initial investment
	* The *discounted payback period* also takes into account an interest rate
* If we reach the initial investment partway between years, we can interpolate
* Note that this is not a sound method -- it only pays attention to the time when costs are recovered, so benefits after the payback periods are ignored

### IRR for Mutually Exclusive Projects

* IRR ignores the size of the investments
* For an investment, the money not invested is assumed to be invested at MARR
* An investment with lower IRR can give you higher overall returns if the project is larger, so you can invest more money
* Incremental IRR compares incremental differences in present and annual worth between two projects
* Incremental analysis steps:
	1. Order investments by first cost in increasing order
	2. Start with the "do nothing" option
	3. Evaluate the current option against the previous best option based on IRR
		* e.g. if this project has a first cost that's \$100 more expensive but gives an annual worth of \$25 per year, then the incremental IRR can be obtained by $PW = -100 + 25(P/A, i^*, 10) \implies i^* = 21\%$
		* If the incremental IRR is lower than MARR, then it is not worth it to switch projects; this means that the extra money is best invested as MARR

