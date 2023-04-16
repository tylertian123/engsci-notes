# Lecture 5, Jan 18, 2023

## Independence

\noteDefn{Two events $A$ and $B$ are \textit{independent} if $P(A | B) = P(A)$ or $P(B | A) = P(B)$}

* Note, $P(B | A) = P(B) = \frac{P(A \cap B)}{P(A)} \implies P(A \cap B) = P(A)P(B) \implies P(A | B) = \frac{P(A)P(B)}{P(B)} = P(A)$
* i.e. Two events are independent if one of them happening does not affect the probability of the other
* Note: Independence is not the same as mutual exclusion! e.g. for a coin flip, heads and tails are mutually exclusive, but they are not independent since $P(H | T) = 0 \neq P(H)$

## Bayes' Rule

* Suppose $P(A) > 0, P(B) > 0$; we know $P(A \cap B) = P(A | B)P(B)$ and $P(A \cap B) = P(B | A)P(A)$ so $P(A | B)P(B) = P(B | A)P(A)$
* Rearrange to get $\frac{P(A | B)}{P(A)} = \frac{P(B | A)}{P(B)}$

\noteDefn{Bayes' Rule: $$\frac{P(A | B)}{P(A)} = \frac{P(B | A)}{P(B)}$$ or $$P(A | B)P(B) = P(B | A)P(A)$$}

* Bayes' rule is useful for reversing causality; based on what we saw, we can make inferences about what caused it

## Partitions and Probability

* Recall $B_1, \cdots, B_k$ is a partition if $B_i \cap B_j = \emptyset$ whenever $i \neq j$ and $B_1 \cup B_2 \cdots \cup B_k = S$

\noteEqn{The law of total probability: Given a partition $B_1, \cdots, B_k$ and some event $A$, $$\alignedeqntwo[t]{P(A)}{\sum _{i = 1}^k P(A \cap B_i)}{\sum _{i = 1}^k P(A | B_i)P(B_i)}$$}

* Proof:
	* Observe $A = (A \cap B_1) \cup (A \cap B_2) \cup \cdots \cup (A \cap B_k)$
	* Then $P(A) = P((A \cap B_1) \cup \cdots \cup (A \cap B_k))$
	* Note when we partitioned the sample space, each $B_i$ is mutually exclusive, therefore $A \cap B_i$ are also mutually exclusive
	* Therefore $P(A) = P(A \cap B_1) + \cdots + P(A \cap B_k)$ by mutual exclusivity
	* $P(A) = \sum _{i = 1}^k P(A \cap B_i)$
* Example: Machines 1, 2, 3 make products 30%, 45%, and 25% of the time respectively (as a partition); the product is defective 2%, 3%, and 2% of the time for these machines respectively, what is the probability that the product is defective
	* $P(\text{defective}) = P(\text{defective} | \text{made by 1})P(\text{made by 1}) + P(\text{defective} | \text{made by 2})P(\text{made by 2}) + P(\text{defective} | \text{made by 3})P(\text{made by 3})$
	* $P(\text{defective}) = 0.30 \cdot 0.02 + 0.45 \cdot 0.03 + 0.25 \cdot 0.02 = 2.45\%$
* In general independence, partitions, and conditional probability show up in the problem statement and it's up to us to interpret them

