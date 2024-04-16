# Propositional Logic

**Operators**: $\lnot A$ (negation), $A \land B$ (conjunction/and), $A \lor B$ (disjunction/or), $A \rightarrow B$ (implication; $\lnot A \lor B$), $A \leftrightarrow B$ (bi-implication).

$\tau$ **satisfies** $A$ iff $\bar\tau(A)$ is true. $\tau$ satisfies $\Phi$ iff $\tau$ satisfies all formulas in $\Phi$.

$A$ is a **logical consequence** of $\Phi$ ($\Phi \models A$) iff for all $\tau$, if $\tau$ satisfies $\Phi$, then it satisfies $A$.

Limited by boolean variables (cannot cross reference between individuals in a statement) and the lack of quantifiers (having to list all members to specify a property).

# First-Order Logic

Defined by: Variables $V$, functions $F$, predicates $P$.
**Terms**: variables or functions of terms. 0-ary functions are constant terms (cannot be quantified).
**Vocabulary**: $\mathcal L$, a set of function and predicate symbols.
**Formula**: *atomic* ($P(t_1, \dots, t_n)$ where $t_i$ are terms), or formulas combined with propositional operators, or $\exists$ and $\forall$ quantifiers.

Converting from English: things become constants, types/properties become unary predicates, relationships become binary (or more) predicates, associations become functions.

**Structure**: an $\mathcal L$-structure $\mathcal M$ contains the **universe** $M \neq \emptyset$, function extensions $f^{\mathcal M} \colon M^n \mapsto M$ for each $f \in \mathcal L$ (specified as individual mappings), predicate extensions $P^{\mathcal M} \subseteq M^n$ for each $P \in \mathcal L$ (specified as sets of $n$-tuples $\langle A, B, \dots \rangle$ for which the predicate is true).
**Object assignment**: an object assignment $\sigma$ for $\mathcal M$ is a mapping from a set of variables to the universe of $M$. Note $\sigma(m / x)$ is an assignment mapping $x$ to $m \in M$ (for quantifiers).

**Satisfaction**: $\mathcal M$ is a model of $C$ under $\sigma$ (denoted $\mathcal M \models C[\sigma]$) if $C$ is true, under the definitions and variable mappings of $\mathcal M$ and $\sigma$.

$x$ is **bounded** in $A$ if it only exists in $A$ under a quantifier; otherwise it is **free**.
If $\sigma$ and $\sigma'$ have the same assignment for all free variables of $A$, then $\mathcal M \models A[\sigma] \iff \mathcal M \models A[\sigma']$.
$A$ is a **sentence** if it is **closed** (no free variables). For sentences, $\sigma$ is irrelevant and can be dropped.
$\mathcal M$ is a **model** of $\Phi$ ($\mathcal M \models \Phi$) if it satisfies all sentences in $\Phi$.
$\Phi$ is **satisfiable** if there exists $\mathcal M$ that models $\Phi$.

$A$ is a **logical consequence** of $\Phi$ ($\Phi \models A$) iff for every $\mathcal M$, $\mathcal M \models \Phi \implies \mathcal M \models A$.
If $\Phi \models A$, then $\not\exists\mathcal M$ s.t. $\mathcal M \models \Phi \union \set{\lnot A}$.

**Knowledge base**: a collection of sentences representing the agent's beliefs, can be used for inference about implicit knowledge through proof procedures.
Procedures are **sound** if it only produces logical consequences of the KB, and **complete** if it can produce all logical consequences of the KB.

**Resolution by refutation**: a sound and complete proof procedure; first assume $\lnot A$ (refutation), then convert $\lnot A$ and KB to a clausal theory $C$, and resolve clauses in $C$ until the empty clause is reached, where we conclude $A$ is true.

**Clausal theory**: a set (conjunction) of **clauses** that must all be true; each clause is a disjunction of **literals** (at least one is true); each literal is either an atomic formula or a negated atomic formula.

**Resolution**: $\frac{a_1 \lor \dots \lor a_n \lor c \qquad b_1 \lor \dots \lor b_m \lor \lnot c}{a_1 \lor \dots \lor a_n \lor b_1 \lor \dots \lor b_m}$

**Conversion to clausal form**:

1. Convert implications: $A \rightarrow B$ to $\lnot A \lor B$.
2. Move negations inward and simplify double negations: $\lnot (A \land B) \iff \lnot A \lor \lnot B$, $\lnot (A \lor B) \iff \lnot A \land \lnot B$, $\lnot \forall x A \iff \exists x \lnot A$, $\lnot\exists xA \iff \forall x \lnot A$.
3. Variable standardization: rename so that each quantified variable is unique.
4. Skolemization: remove $\exists$ by replacing the variable quantified with a new unique constant $\exists xP(x) \iff P(\bm a)$, or unique function which mentions every variable that scopes the existential $\forall x\exists y P(x, y) \iff \forall x P(x, g(x))$.
6. Prenex form: take all quantifiers (only $\forall$ at this point) to the front: $\forall x P \land Q \iff \forall x(P \land Q)$, $\forall x P \lor Q \iff \forall x(P \lor Q)$.
7. Distribute $\lor$ over $\land$: $A \lor (B \land C) \iff (A \lor B) \land (A \lor C)$.
8. Convert to clauses: remove all $\forall$ quantifiers (implicit) and break apart $\land$.

Resolution is **refutation complete**: it can eventually prove that a clausal theory is unsatisfiable, but may not terminate when it is.
In general first-order unsatisfiability is semi-decidable (there exists an algorithm that correctly gives positive answers), but not decidable.

