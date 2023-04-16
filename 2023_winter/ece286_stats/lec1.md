# Lecture 1, Jan 9, 2023

## Uncertainty

* Sources:
	* Limited measurements -- more measurements = less uncertainty, e.g. processes that are difficult to measure
	* Difficult-to-model scenarios, e.g. weather, dice roll
* Probability allows us to be systematic in the face of uncertainty ("be consistent about what we don't know")

## The Coin Flip

* Heads or tails
* A fair coin has $P(H) = 0.5 = P(T)$; unbalanced coins have different probabilities, but we must have $P(H) + P(T) = 1$ because *something* has to happen 100% of the time
* Example: $P(H) = 0.3, P(T) = 0.7$, then:
	* $P(HH) = P(H)P(H) = 0.09$
	* $P(HT) = P(H)P(T) = 0.21 = P(T)P(H) = P(TH)$
		* This is only true because of *independence*, as the two flips are uncorrelated
	* $P(HT\text{ or }TH) = P(HT) + P(TH) = 0.42$
	* $P(HT, TH, HH\text{ or }TT) = 1$
	* We can construct a fair coin by setting "heads" to $HT$ and "tails" to $TH$ and ignoring all other outcomes

## Core Concepts

\noteDefn{The \textit{sample space} $S$ is the set of all possible outcomes}

* e.g. for a single coin flip, $S = \Set{H, T}$; for two coin flips, $S = \Set{TH, TT, HH, HT}$

\noteDefn{An \textit{event} is a subset of a sample space, i.e. some subset of possible outcomes \tcblower The \textit{complement} of an event $A$ is $A' = \Set{a | a \in S, a \notin A}$, the set of everything in $S$ that is not in $A$}

* e.g. $\Set{1, 2, 3, 4, 5, 6}$ or $\Set{\text{even}, \text{odd}}$ could both be the set of all events for a die
* Example: $S = \Set{(x, y) | x^2 + y^2 \leq 1}$ (the unit circle), $A = \Set{(x, y) | (x, y) \in S, x \geq 0}$, then $A' = \Set{(x, y) | (x, y) \in S, x < 0}$

\noteDefn{The \textit{intersection} of 2 events $A$ and $B$, $A \cap B$, is everything in $S$ that is in both $A$ and $B$ \tcblower The \textit{union} of 2 events $A \cup B$ is everything in $A$ or $B$}

* e.g. for a die: $\Set{\text{even}} \cap \Set{n \leq 3} = \Set{2}$
* $A \cap A' = \emptyset, A \cup A' = S$

