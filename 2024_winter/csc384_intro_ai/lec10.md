# Lecture 10, Mar 19, 2024

## Knowledge Representation and Reasoning (KR&R)

* How do we represent the information that we know, and reason intelligently using this information?
* This is the problem of *knowledge representation and reasoning* (KR&R)
	* *Representation*: symbolic encoding of propositions believed by some agent
		* Assigning symbols, and relating them
	* *Reasoning*: manipulation of said symbolic encoding to produce new propositions believed by the agent, but were not initially explicitly stated
		* Making rules for manipulating the symbols
* *Boolean algebra* or *propositional logic* is a set of rules for how to manipulate these propositions
	* In propositional logic, propositions are restricted to true statements

### Propositional Logic

* For propositional logic, the set of operators are: $\lor$ (OR), $\land$ (AND), $\lnot$ (NOT) and the brackets ( and )
	* $\circ$ denotes any one of the binary operators
* Define PROP as the set of all propositions, OP as the set of all operators, and WDF (aka WFF) as the set of all well-defined (aka well-formed) formulas
	* Valid propositions follow a syntax; all propositions in the WDF is considered well-defined
	* If PROP is a finite set, then WDF is a countably infinite set
	* We construct WDF recursively as follows:
		* $\mathrm{FORM}_0 = \mathrm{PROP}$
		* $\mathrm{FORM}_{i + 1} = \mathrm{FORM}_i \union \set{(\alpha \circ \beta) | \alpha, \beta \in \mathrm{FORM}_i} \union \set{(\lnot\alpha) | \alpha \in \mathrm{FORM}_i}$
		* $\mathrm{FORM} = \bigcup _{i = 0}^\infty \mathrm{FORM}_i$
	* Note that this excludes things like $(\alpha \circ \beta \circ \gamma)$
* Every formula is either:
	1. Atomic formula: a member of PROP
	2. Composite formula: made of a *primary connective* and set of *subformulas*
		* e.g. in $(\lnot\alpha)$, $\lnot$ is the primary connective and $\set{\alpha}$ is the subformula; in $(\alpha \circ \beta)$, $\circ$ is the primary connective, and $\set{\alpha, \beta}$ are the subformulas

\noteThm{\textit{Unique Readability Theorem}: Every (well-formed) formula is either atomic, or has a unique primary connective and unique set of well-defined subformulas.}

* A *truth assignment* is a mapping $\tau \colon \mathrm{PROP} \mapsto \set{0, 1}$
	* This basically assigns a value to all the propositions, but not all well-defined formulas
* The *extension* of $\tau$ for a formula $\varphi$ is $\bar\tau(\varphi) = \threecond{\tau(p)}{\varphi = p \in \mathrm{PROP}}{\lnot(\bar\tau(\alpha))}{\varphi = (\lnot\alpha)}{\circ(\bar\tau(\alpha), \bar\tau(\beta))}{\varphi = (\alpha \circ \beta)}$
	* Sometimes we denote this as $\varphi(\tau)$
	* This assigns a value to all WDF
* We say that $\tau$ *models* $\varphi$, or $\tau \models \varphi$ iff $\bar\tau(\varphi) = 1$
* Let $\on{AP}(\varphi) = \threecond{\set{p}}{\varphi = p \in \mathrm{PROP}}{\on{AP}(\alpha)}{\varphi = (\lnot\alpha)}{\on{AP}(\alpha) \union \on{AP}(\beta)}{\varphi = (\alpha \circ \beta)}$
	* This defines the set of atomic propositions that appear in a formula

\noteThm{\textit{Relevance Lemma}: If for all propositions $p$ that appear in $\varphi$, both $\tau _1$ and $\tau _2$ assign it the same value, then $\tau _1$ models $\varphi$ iff $\tau _2$ models $\varphi$, i.e. $$\forall p \in \on{AP}(\varphi), \tau _1(p) = \tau_2(p) \quad\implies\quad \tau _1 \models \varphi \iff \tau _2 \models \varphi \text{ and }\varphi(\tau _1) = \varphi(\tau _2)$$}

* Define $\varphi \models\rmodels \psi$ iff $\forall \alpha \in 2^{\mathrm{PROP}}, \varphi(\tau) = \psi(\tau)$, i.e. they have the same value for all assignments
	* e.g. $((p \lor q) \lor p) \models\rmodels (p \lor q)$
* $\on{models}(\varphi) = \set{\varphi | \tau \models \varphi\text{ or }\tau(\varphi) = 1\text{ or }\bar\tau(\varphi) = 1}$
* *Valid* formulas, denoted $\models \varphi$, are formulas such that $\forall \tau, \tau \models \varphi$ -- they are always true
	* If $\forall \tau, \tau \notmodels \varphi$, then $\varphi$ is *unsatisfiable* -- they are always false
	* If $\exists\tau, \tau \models \varphi$, then $\varphi$ is *satisfiable* -- they are sometimes true
* Propositional logic is limited to only boolean variables, which makes cross-references between individuals in statements impossible
	* e.g. we can't model statements like "if $x$ likes $y$ and $y$ plays golf then $x$ watches golf", because we don't have variables or statements that are only sometimes true
* We also have no quantifiers; to state a property for all or some members of the domain, we have to explicitly list them

