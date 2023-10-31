# Lecture 7, Oct 25, 2023

## Depreciation

* Assets starts to lose value as soon as they're purchased -- this is the process of *depreciation*:
	* Use-related physical loss (wear and tear)
	* Time-related physical loss (things deteriorate over time even without use)
	* Functionality related loss (assets become obsolete over time, even without any physical changes)
* Depreciation can refer to the loss in value of the actual asset, or in our bookkeeping of the value of that asset (accounting)
* Assets are purchased for some price and at a later time, sold for a salvage value; the difference between these two is the depreciation
	* In accounting, we want to distribute this loss in value over time in a sensible manner
	* Depreciation is not an actual cash flow -- it is an "accounting fiction" which does not directly enter into our cash flow calculations
	* However, depreciation is important to account for because it allows us to keep track of the price of assets at any time
* We can define value in a number of ways:
	* Cost basis: the value against which depreciation is measured (based on first costs)
	* Market value: the actual value of an asset if it were sold (usually hard to measure)
	* Book value: the value calculated for accounting purposes according to an agreed upon model
* Define $B$ as the basis (original cost), $BV_t$ as the book value at time $t$, $N$ as the depreciable life of the asset, $SA$ as the salvage value and $D_t$ as the loss of value assigned to accounting period $t$
	* $BV_0 = B$, i.e. book value in the beginning is the basis
	* $BV_t = BV_{t - 1} - D_t = B - \sum _{k = 1}^t D_k$
* A number of methods can be used to calculate depreciation:
	* Straight line: simple linear decrease in value, i.e. constant loss in value each year
		* $D_t = \frac{B - S}{N}$ for all $t$
		* $BV_t = B - t\frac{B - S}{N}$
	* Declining balance: asset loses a fixed proportion of its value each year, i.e. exponential decay
		* $D_t = BV_{t - 1}d$ where $d$ is some proportion of depreciation
		* $BV_t = BV_{t - 1}(1 - d) = B(1 - d)^t$
		* Given salvage value, we can calculate $d = 1 - \left(\frac{S}{B}\right)^\frac{1}{N}$
	* Double declining balance: setting $d = \frac{2}{N}$ and using the declining balance method as usual
	* Sum of the years' digits (SOYD): splits up depreciation so that year 1 depreciates $N$ times some amount, year 2 depreciates $N - 1$ times some amount, and so on until year $N$ depreciating 1 times that amount
		* $SOYD = \sum _{k = 1}^N k = \frac{N(N + 1)}{2}$
		* $D_t = \frac{N - t + 1}{SOYD}(B - S)$
		* Faster than straight line during later years, slower than straight line during later years
		* This basically gives $\frac{N}{SOYD}(B - S)$ depreciation in the first year, $\frac{N - 1}{SOYD}(B - S)$ in the second year, and so on, until $\frac{1}{SOYD}(B - S)$ depreciation in the final year
	* Units of production: assumes depreciation is a function of equipment use, rather than time
		* Depreciation is proportional to how much we use the asset
		* $D_t = \frac{\text{Production in year }t}{\text{Lifetime production}}(B - S)$
		* This requires us to know how many units we will be using each year
* Firms can use whatever method they choose to account for depreciation internally, while for tax purposes a model is specified by the government (usually declining balance)
* When the asset is sold at end of life, the market value may turn out to be different than the book value, in which case we need to make some adjustment
	* If the market value is lower, we have a *loss on disposal*, i.e. a one-time depreciation
	* If the market value is higher, we have a *recaptured depreciation*, i.e. a one-time negative deprecation
	* If the market value is higher than the cost basis, we have both a recaptured depreciation (difference between cost basis and book value, which brings us back to cost basis), and a *capital gain* (difference between market value and cost basis, which is the amount of money we make)
* We may also need to adjust the depreciation model partway through the asset's life; in this case we start at the current year and use the book value as the cost basis (but we do not change what we've already recorded)
* Example: asset purchased for \$900 and a declining balance depreciation of 40%; however at year 5 we find that it has no salvage value
	* We can reconcile this by setting the depreciation for year 5 only to match the salvage value
		* At year 4 the book value was \$116.64, so we would record the year 5 depreciation as \$116.64
* Example: asset purchased for \$1500 expected to last 15 years with no salvage value, but after 6 years we realize it will only last 4 more years (i.e. 10 years total); using straight line depreciation, what is the book value at the end of year 8?
	* $D_t = 100$ initially, so by year 6 we will have a book value of \$900
	* At this point we re-evaluate, $D_t = \frac{900 - 0}{4} = 225$
	* $BV_8 = 900 - 2 \cdot 225 = 450$

## Accounting

* Assets, liabilities (book debt), and equity make up a company
	* Note even though book debt and market debt are similar, market equity and book equity can be very different
* To get from one year's balance sheet to the next, we have an income statement -- the balance sheets and the income statement describes everything that the company did
	* The income statement is revenue minus expenses, which gives net income
	* The net income minus dividends is added to the equity -- note that this is in money per time period, i.e. a rate
* A *debit* is a positive transaction on the left hand side (assets, expenses); a *credit* is a positive transaction on the right hand side (liabilities, equity, revenue)
	* For every credit there is a debit and vice versa -- the balance sheet is always balanced
* For every transaction we typically have a date and some amount
	* For cash transactions, we can directly determine one of the accounts to be our cash account
	* Examples:
		* If someone put \$10 into the business, we debit cash \$10 (assets, left hand side), and credit this person \$10 in equity (right hand side)
		* If we sold something for \$500, we debit cash \$500 and credit revenue \$500, but we might also have to debit some expenses and credit some wages payable

