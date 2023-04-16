# Lecture 11, Oct 3, 2022

## Procedure for a Minimum Cost Cover

1. Find prime implicants
2. Identify prime implicants and include in the cover
3. Choose other PIs as needed until we cover all the 1s:
	* Do this using the largest power of two size grouping of only 1s
	* Use fewest circles to cover all the 1s
	* 1s can be circled multiple times if this allows fewer/larger circles to be used
	* Remember circles can wrap around the edges!
	* Note instead of circling 1s (minterms) for a SOP expression, we can also circle 0s (maxterms) for a POS expression

## Don't Cares

* Sometimes we know specific inputs won't occur, or we don't care about what happens on an input combination
	* e.g. for a 7-segment display decoder if we only want to go from 0 to 9, we don't care when input is $1010$ or higher
* Each don't care ($d$) term can independently be 0 or 1
* In a K-Map we put a $d$; we can either include it or exclude it, depending on which lets us use fewer/larger circles

## Sequential Circuits

* As opposed to combinational circuits (outputs only determined by present inputs), sequential circuits' outputs depend on previous inputs/states as well
* The simplest way to do storage is with 2 inverters in sequence, with the final output feeding back into the input
	* Once the input is high, the 2 inverters store that high input and feed it back through, so that the output stays high
	* However this is missing a way to reset the storage state

## RS Latch

![NOR gate RS latch](imgs/lec11_3.png){width=33%}

* Another way is to use 2 NOR gates
	* (Assume $S = 0$ at the start)
	* Reset $Q$ to 0 by setting $R = 1$
		* When $R = 1$ it doesn't matter what the lower input to the NOR gate is, the output will always be a 0
		* Setting $R = 0$ again changes nothing, since the bottom NOR gate's output 1 drives the top NOR gate to output 0
	* Set $S$ to 1, then the bottom NOR gate will always output 0, which makes $Q$ a 1 (assuming $R = 0$)
	* Set $S$ to 0 doesn't change $Q$, since the previous $Q$ of 1 is still driving the output of the bottom NOR gate to 0
* $R$ stands for reset, $S$ stands for set
* This is built with what's known as *cross-coupled NOR gates*

