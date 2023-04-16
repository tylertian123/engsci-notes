# Lecture 3, Jan 13, 2023

## Partitions

\noteDefn{A \textit{partition} is a way to divide a number of elements into groups of certain sizes, where we don't care about the order of elements in the groups \tcblower The number of partitions of $n$ distinct objects with $m$ bins of size $n_1, \cdots, n_m$ is $$\binom{n}{n_1, n_2, \cdots, n_m} = \frac{n!}{n_1!n_2!\cdots n_m!}$$}

* Example: Partitions of $\Set{a, b, c}$ with $n_1 = 2, n_2 = 1$
	* Possible partitions are $\set{ab, c}, \set{ac, b}$ or $\set{bc, a}$, so there are 3 partitions
	* Notice $3 = \frac{3!}{2!1!}$
* Formally, let there be $n$ distinct objects and $m$ bins which can hold $n_1, n_2, \cdots, n_m$ objects such that $\sum _{k = 1}^m n_k = n$, then the number of partitions is $\binom{n}{n_1, n_2, \cdots, n_m} = \frac{n!}{n_1!n_2!\cdots n_m!}$
	* This is the same calculation as permutations with identical objects
	* If $n_k = 1$, then the number of partitions is $n!$ as we just have a permutation; then we divide through by the number of possible permutations within each box since we don't care about the order of elements within boxes

## Combinations

* A combination is a permutation where we don't care about the order
* Given $n$ objects, the number of subsets of size $r$ we can make is $\binom{n}{r} = \binom{r}{r, n - r} = \frac{n!}{(n - r)!r!}$
	* This is known as "$n$ choose $r$"
* In terms of partitions, we have one box of size $r$ (the elements we're choosing), and another box of size $n - r$ (the elements we're not choosing)

## Probability

* Given a sample space $S$ and an event $A \subseteq S$, then the probability of event $A$ is $P(A) \in [0, 1]$
	* $P(S) = 1$
	* If $A \cap B = \emptyset$, then $P(A \cup B) = P(A) + P(B)$
* Example: What's the probability of getting 2 aces and 3 jacks in a hand?
	* Ways to get 2 aces: $\binom{4}{2} = 6$
		* Out of 4 aces in the deck we're picking 2 of them
	* Ways to get 3 jacks: $\binom{4}{3} = 4$
	* Therefore we have 24 such hands, so the probability is $\frac{24}{\binom{52}{5}} = \num{0.9e-5}$

