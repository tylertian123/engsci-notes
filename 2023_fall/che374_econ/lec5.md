# Lecture 5, Oct 8, 2023

## Project Comparisons

* In engineering economics we are concerned with the valuation of "projects", or investments; we want to evaluate and compare different options when there are multiple solutions or opportunities presented
* Projects can have 3 different types of relations:
	* Independent: expected costs and benefits of each project do not depend on whether or not the other project is chosen
		* In this case we consider each project entirely separately
	* Mutually exclusive: when selecting one project automatically exclusives all other projects, so you can only select one at a time
		* In this case we find the best option
	* Related but not mutually exclusive: when you can select more than one option, but selecting one may affect the selection of another option
		* In this case we form mutually exclusive combinations of projects, and then find the best option
* A cash flow for a typical project involves a initial cost at time zero, and then over the lifetime of the project we will have some income revenue and some maintenance costs, and then at the end of the lifetime we will get salvage value
* To find the present value for such a cash flow, we need the discount rate -- this is determined by the Minimum Acceptable Rate of Return (MARR)
	* MARR is based on risk and expected rate of return of the best alternative
	* Also known as the *hurdle rate*, because projects that earn less than MARR are not acceptable
	* We will assume that money can always be invested at MARR, i.e. doing nothing will earn money at MARR
* *Present Worth, PW* (also known as Net Present Value, NPV) is the present value of benefits minus costs, discounted at MARR
	* This is the amount by which this project is beating the best alternative expressed in today's value
	* Projects with a positive PW are acceptable, while a negative PW is unacceptable
	* Note a negative PW does not mean losing money, but that it's worse than doing nothing
	* Example: purchasing a Honda Civic with a life of 10 years, 5% MARR; annual benefits worth \$4000, annual costs worth \$1000, initial cost is \$20000, salvage cost is \$4000
		* $PW = -20000 + (4000 - 1000)(P/A, 5\%, 10) + 4000(P/F, 5\%, 10) = 5621$
* *Annual Worth, AW* is the equivalent annuity of the PW
	* With the same example as above, $AW = -20000(A/P, 5\%, 10) + 3000 + 4000(A/F, 5\%, 10) = 728$
* Example: Mutually exclusive projects: compare the Honda Civic above to a Tesla, costing \$100000 with \$12000 annual benefits, 10 years of life, \$14000 salvage value, and the same MARR
	* Since both cars have a 10 year life, we will choose this as the time horizon
	* For the Tesla this is $PW = -100000 + 12000(P/A, 5\%, 10) + 14000(P/F, 5\%, 10) = 1255$
	* Since the Honda has higher PW, we should choose it over the Tesla
* What if the two projects have different time horizons?
	* Repeated lives: assume that the project repeats itself, i.e. once the project ends, we can replicate it identically and do it again
		* Use the least common multiple of the individual projects; e.g. for a 4 year project and a 5 year project, use a 20-year time horizon
		* Example: compare the Honda to a Lexus costing \$40000, with \$8000 annual benefits and \$13000 salvage value, but only 5 years of life
			* For 5 years: $PW = -40000 + 8000(P/A, 5\%, 5) + 13000(P/F, 5\%, 5) = 4822$
			* For 10 years: $PW = 4822 + 4822(P/F, 5\%, 5) = 8600$
			* Therefore the Lexus is a better choice
	* Use annual worth
		* This is equivalent to comparing the present worth of repeated projects
		* Previous example with AW:
			* For Lexus, $AW = -40000(A/P, 5\%, 5) + 8000 + 13000(A/F, 5\%, 5) = 1114$
			* This is bigger than the \$728 of the Honda, so we make the same decision
	* Study period: adopt a specified time period for comparison; if a project terminates after the study period, assume we can terminate it early and adjust the salvage value as necessary
		* Previous example, but assume that at 5 years, the Honda has a salvage value of \$7000
			* For the Honda now, in 5 years $PW = -20000 + 3000(P/A, 5\%, 5) + 7000(P/F, 5\%, 5) = -1527$
			* Therefore we should choose the Lexus

