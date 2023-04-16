# Lecture 19, Mar 2, 2022

## Norton Equivalent Circuit

* The Norton Equivalent Circuit is the dual of the Thevenin Equivalent Circuit; instead of a voltage source in series with a resistor, in a Norton Equivalent Circuit the elements are replaced by a current source in parallel with a resistor
	* Thevenin and Norton circuits can be transformed into each other via source transformation
	* The Norton resistance is the same as the Thevenin resistance: $R_N = R_{Th}$
	* The Norton current can be obtained by $I_N = \frac{V_{Th}}{R_{Th}}$ via source transformation
	* Alternatively, short the terminals, and then $I_N$ is the current flowing through this short
* If using a short circuit to find the Norton current, the direction of the current source must *complete the loop* with the short circuit current

