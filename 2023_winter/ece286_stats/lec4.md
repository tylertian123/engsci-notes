# Lecture 4, Jan 16, 2023

## Probability of Unions

\noteEqn{The probability of the union of two events $P(A \cup B)$ is $$P(A \cup B) = P(A) + P(B) - P(A \cap B)$$}

* In general $P(A \cup B) = P(A) + P(B) - P(A \cap B)$
	* $P(A \cup B)$ is the overlap of $A$ and $B$, which is counted twice by $P(A) + P(B)$
* Example: Probability of rolling a 7 or having at least one 2
	* Probability of rolling a 7 is $\frac{1}{6}$
	* Probability of rolling at least one 2 is $\frac{11}{36}$
	* Probability of rolling a 7 and having at least one 2 is $\frac{2}{36}$ (2 and 5, or 5 and 2)
	* Final probability is $\frac{15}{36} = \frac{5}{12}$
* For the union of more than 2 events, we can expand the rule:
	* $\alignedeqntwo[t]{P(A \cup B \cup C)}{P(A) + P(B \cup C) + P(A \cap (B \cup C))}{P(A) + P(B) + P(C) - P(B \cap C) - P((A \cap B) \cup (A \cap C))}{P(A) + P(B) + P(C) - P(B \cap C) - P(A \cap B) - P(A \cap C) + P(A \cap B \cap C)}$
	* Note intersection distributes over union

## Conditional Probability

\noteDefn{If $A$ and $B$ are both events, the probability of $B$ \textit{conditioned} on $A$ (or probability of $B$ given $A$), $P(B | A)$ is the probability of $B$ given that $A$ occurs \tcblower $$P(B | A) = \frac{P(A \cap B)}{P(A)}$$}

* This formula arose due to $P(A \cap B) = P(A)P(B | A)$, i.e. the probability of both $A$ and $B$ happening is the probability of $A$ happening times the probability of $B$ happening given that $A$ happens

