# Lecture 9, Nov 15, 2023

## Taxation

* Companies are taxed based on taxable income, which revenues minus expenses
	* We will use a flat tax rate
* Revenues can include any income made by the company:
	* Sales revenues
	* Interest revenues
	* Capital gains (selling an asset above its book value)
		* In accounting, the true price of an asset is its book value, so the difference is counted as taxable income
* Expenses and deductions reduce the amount of taxable income:
	* Cost of goods sold
	* SG&A
	* Interest expenses
	* Depreciation expenses
	* Capital losses (selling an asset below its book value)
* Not all expenses are counted towards taxes, e.g. dividends, asset purchases and some others are not counted
	* Asset purchases are not counted because they still have value after you purchase them, so that money is not considered "consumed"
		* Therefore taxes don't affect first costs
	* However after purchase, depreciation and capital gains/losses do affect taxes
	* In general if something does not show up on the income statement (i.e. only balance sheet), it does not affect taxes
* Rate of returns are discounted by the tax rate for cash flows after tax, because we expect less profit
	* MARR and IRR after tax is the pre-tax rate multiplied by 1 minus the tax rate (as an approximation)
		* This gives the WACC
	* Note that equity rates (i.e. numbers from CAPM) are after-tax; so we don't need to adjust these
	* $R_{WACC} = \frac{E}{E + D}R_E + \frac{D}{E + D}R_D(1 - t)$
		* Only the debt rate is discounted by tax

### Capital Cost Allowance (CCA)

* Depreciation is not a real cash flow, but claiming depreciation saves on taxes
	* A company will want to depreciate as much as possible, as fast as possible due to time value of money
	* Government regulations exist to make sure companies can't arbitrarily depreciate
	* Note that on the actual balance sheet, a company might want to depreciate more slowly because this makes their income look better, but for tax purposes they must use CCA; this results in a discrepancy on the balance sheet
* CCA is the Canadian system for calculating depreciation and taxes
	* The capital cost allowance (CCA) is the amount of depreciation
	* The undepreciated capital cost (UCC) is the book value
	* The proceeds from disposition is the salvage value from selling the asset
* Assets are pooled into classes specified by the policy
	* All assets are pooled into classes, and the total value of all assets in each class is deprecated together at some specified rate
		* Assets are not depreciated individually
	* The depreciation method is similar to declining balance, but new assets purchased this year are only depreciated at half the rate
		* CCA = CCA rate times (new assets this year / 2 + UCC from last year)
		* This is known as the half-year rule
	* UCC this year is UCC from last year, plus new assets this year, minus CCA
* The amount of tax savings each year is the CCA from that year times the tax rate; this is recorded as a positive cash flow
* When selling the asset, the book value can be different from the salvage value
	* *Open book*: other items exit in the same CCA pool
		* Selling the asset does not close out the pool
		* Simply reduce the UCC of the pool by the salvage value
	* *Closed book*: no other items in the same pool; there are 3 cases:
		* *Terminal loss*: salvage value less than book value
			* Claim the loss, book value minus salvage value, which decreases taxable income
		* *Recapture*: salvage value greater than book value, but less than original price
			* Report the recapture, salvage value minus book value, which increases taxable income
		* *Capital gains*: salvage value greater than the original price
			* Report the recapture, original price minus book value, which increases taxable income
* Example: purchasing \$5000 worth of desks (class 8, CCA rate of 20%); what are the CCA and UCC for the first 4 years, assuming there is nothing in the same pool?
	* First year: \$5000 in purchases, no UCC from last year, CCA is 20% of \$5000 divided by 2 = \$500, so we're left with \$4500
	* Second year: \$0 in purchases, \$4500 from last year, CCA is 20% of \$4500 = \$900, so we're left with 3600
	* This gives us \$2304 at the end of the 4th year
	* In year 5, we sell the desks for \$1500; what is the gain/loss as a result of selling the desks, assuming open book?
		* CCA in year 5 is \$460
		* UCC after year 5 is \$2304, minus the CCA and minus the \$1500 sell value
		* Since this is open book, we have no direct gains or losses, so no direct tax implications
	* What if there are no other assets in class 8?
		* Since the UCC must go to 0, the book value for the desks would be \$2304 minus UCC, or \$1844
		* We sold it for a loss, so we can claim a loss of \$344, which is a tax saving
	* What if we sold it for \$2500?
		* This is greater than book value, so we have a recapture of \$2500 - \$1844 = \$656
		* This makes the taxes go up
	
### Calculating Present Worth

* Using the explicit method:
	* Use the WACC (after-tax discounted MARR)
	* Revenues are discounted by the tax rate
	* No changes to first costs
	* Take into account depreciation tax savings every year by calculating CCA every year
	* Account for terminal losses or gains by comparing the final UCC to the salvage value, in a closed-book scenario
* The *tax benefit factor* $\tau$ is defined as the ratio of the present worth of tax savings to the first cost of equipment
	* Assets have inherent value but also value associated with tax benefits
	* $\tau$ is how much every dollar spent will save in taxes
		* Note that this assumes we will keep the asset around forever, so we get the tax savings for the rest of time
	* This depends on the depreciation method, tax rate, WACC, etc
	* For regular declining balance, $\tau _{db} = \frac{td}{i + d}$ where $i$ is the after-tax WACC, $d$ is the depreciation rate and $t$ is the tax rate
		* This applies to asset disposition
	* For declining balance with half-year rule, $\tau _{1/2} = \frac{td}{i + d}\left(\frac{1 + \frac{i}{2}}{1 + i}\right)$
		* This applies to asset purchases
* Using tax benefit factors, the *effective first cost* is reduced because of tax savings
	* $PW(FC) = -FC + FC\tau _{1/2} = -FC(1 - \tau _{1/2})$
	* The term $(1 - \tau _{1/2})$ is known as the *capital tax factor* (CTF)
* The *effective salvage value* of selling an asset is reduced because of losing tax savings
	* Since the CTF assumes we keep the tax forever, when we actually sell the asset we need to correct for the tax savings that we lose
	* $PW(S) = (S - R\tau _{db})(P/F, i, N)$
	* $S$ is the salvage value, $R$ is the reduction in the pool due to selling the asset
	* The term $(1 - \tau _{db})$ is known as the *capital salvage factor* (CSF)
* Using tax benefit factors we can calculate present worth as:
	* Use the effective first cost
	* Discount revenues by the tax rate
	* Use the effective salvage value, which depends on whether we have an open or closed book scenario
		* For open-book, $R = S$, so $PW(S) = S(1 - \tau _{db})(P/F, i, N)$
		* For closed-book, $R = UCC$, and we also need to account for possible terminal loss/gain

