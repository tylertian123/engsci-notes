# Lecture 2, Jan 11, 2023

## Counting

* Counting is the problem of finding the number of elements in some event $A$
	* e.g. for a coin flip, if $A = \Set{H}$, then we have one element; for a die, if $A = \Set{\text{even}}$, then we have 3 elements
* Two events $A$ and $B$ are *mutually exclusive* if $A \cap B = \emptyset$
	* For two events that are mutually exclusive, we can add up their number of elements when counting

## Multiplying Options

* Where we can choose 1 option from each category, we multiply the category sizes together
	* e.g. choosing a president and VP from $n$ people has $n(n - 1)$ possibilities
* Example: How many even 4-digit numbers can we make from $\Set{0, 1, 2, 5, 6, 9}$?
	* Consider events $A$ and $B$:
		* In $A$, $0$ is the last digit so $A$ has $1 \cdot 5 \cdot 4 \cdot 3 = 60$ elements
		* In $B$, $0$ is not the last digit ($A$ and $B$ are mutually exclusive); the last digit could be 2 or 6 and the first digit can be anything but zero or what we chose for the last digit, so we have $2 \cdot 4 \cdot 4 \cdot 3 = 96$ elements
		* Since $A \cap B = \emptyset$, the total count is $156$

## Permutations

* A *permutation* is an ordering of the elements in an event
* Given $n$ items, there are $n!$ permutations
* If we want to permute $r$ items out of $n$, there are $\frac{n!}{(n - r)!}$ permutations
* With $n$ slots to fill, where there are $m$ kinds of items and $n_k$ of each item, the number of permutations is $\binom{n}{n_1, n_2, \cdots, n_m} = \frac{n!}{n_1!n_2!\cdots n_m!}$
* Example: How many distinct ways can we order "ATLANTIC"?
	* $\binom{8}{2, 2, 1, 1, 1, 1} = \frac{8!}{2!2!1!1!1!1!} = 10080$
* Example: If we flip a coin 10 times, how many sequences have 4 heads?
	* We're looking at combinations of $HHHHTTTTTT$, so $\binom{n = 10}{n_1 = 4, n_2 = 6} = \frac{10!}{4!6!} = 210$
	* This gives us a probability of getting 4 heads of $\frac{210}{2^10} = \frac{210}{1024}$ (assuming a fair coin)

