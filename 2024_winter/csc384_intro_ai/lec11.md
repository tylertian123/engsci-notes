# Lecture 11, Mar 26, 2024

## First-Order Logic

* We generalize propositional logic to have the notion of variables
* *First-order logic* consists of the following components:
	* A set of *variables*, $V$
		* These can take values from a domain $D$
	* A set of *predicate/relation symbols* $P^k \colon D^k \mapsto \set{0, 1}$ where $k$ is the number of arguments
		* These take a set of arguments (variables) and can be true or false, depending on the value of the variables
		* $P^0$ is the set of predicates that don't take any arguments, which is the set of propositions
		* These define relations among variables
	* A set of *function symbols* $f^k \colon D^k \mapsto D$ where $k$ is the number of arguments
		* These define functions based on the variables, returning another variable
		* A special case of the relations
	* The *quantifiers* $\forall$ and $\exists$
* Define the set of all terms:
	* $\on{TERM}_{i + 1} = \on{TERM}_i \union \set{f_n^k(t_1, \dots, t_k) | t_1, \dots, t_k \in \on{TERM}_i, \forall n, k}$
	* $\on{TERM}_0 = V$
* Define the set of all well-formed formulas:
	* $\on{FORM}_{i + 1} = \alignedlines[t]{\union}{\on{FORM}_i}{\set{(\alpha \circ \beta) | \alpha, \beta \in \mathrm{FORM}_i}}{\set{(\lnot\alpha) | \alpha \in \mathrm{FORM}_i}}{\set{\forall x \varphi | x \in V, \varphi \in \on{FORM}_i}}{\set{\exists x \varphi | x \in V, \varphi \in \on{FORM}_i}}$
		* We augment our definition from propositional logic with the new quantifiers $\forall$ and $\exists$
	* $\on{FORM}_0 = \set{P_n^k(t_1, \dots, t_k) | t_1, \dots, t_k \in \on{TERM}, \forall n, k}$
		* This is the set of all predicates over all terms
* Consider the expression $\forall x \exists y (x + y > 3)$
	* Formally we express this as $\forall x \exists y (>(+(x, y), 3))$
	* $+$ is a function and $>$ is a predicate
	* We need to define the domain of all variables, and define the meaning of + and >
* A *context* or *structure* consists of $\mathcal A = (D, f_i^{k, \mathcal A}, \dots, P_i^{k, \mathcal A}, \dots)$, which is a domain and definition of all the functions and predicates
	* $f_i^{k, \mathcal A}$ defines the meaning of function $f_i^k$ in the context of $\mathcal A$
	* $P_i^{k, \mathcal A}$ defines the meaning of predicate $P_i^k$ in the context $\mathcal A$
	* The definitions assign $D^k \mapsto \set{0, 1}$ for every combination of the values of the variables
* A $k$-ary function can be converted into a predicate by adding an extra argument; so functions are syntactic sugar that's not needed to define first-order logic
* An *assignment* is $\sigma \colon V \mapsto D$ which gives a value to all variables
	* We need to assign values to variables before evaluating some expressions, e.g. $\forall x(x + y > 3)$
	* $\sigma(x \mapsto m)$ or equivalently $\sigma(x / m)$ denotes the value $m$ being assigned to $x$
* Similar to propositional logic $\mathcal A, \sigma \models \varphi$ if $\varphi$ is true under the structure $\mathcal A$ and assignment $\sigma$
	* Note that in $\phi$ we might have variables appearing in quantifiers that have been assigned a value by $\sigma$; in this case we don't care about the assignment in $\sigma$
	* $\exists x\psi$ iff there exists $m \in D$ such that $\mathcal A, \sigma(x \mapsto m) \models \psi$
	* $\forall x\psi$ iff for all $m \in D$ we have $\mathcal A, \sigma(x \mapsto m) \models \psi$
* The *extension* of $\sigma$ is $\bar\sigma \colon \on{TERM} \mapsto D$ which assigns a value to all terms
	* This can be defined recursively, since a term is either a variable or a function of terms
	* $\bar\sigma(t) = f_i^k(\bar\sigma(t_1), \dots, \bar\sigma(t_k))$ for $t \in \on{TERM}$
	* Base case is $\bar\sigma(t) = \sigma(t)$ for $t \in V$
* We are now interested in the analog of the relevance lemma from propositional logic
	* Not all variables in formulas are *free variables*, e.g. for $\exists x(x + y > 3)$, $x$ is not a free variable because of the $\exists$, and it doesn't matter what value $\sigma$ assigns to it
* $\on{FreeVars} \colon \on{FORM} \mapsto 2^{V}$, a mapping from formulas to sets of variables
	* $\on{FreeVars}(\forall x\varphi) = \on{FreeVars}(\varphi) \backslash \set{x}$
	* $\on{FreeVars}(\exists x\varphi) = \on{FreeVars}(\varphi) \backslash \set{x}$
	* $\on{FreeVars}(\lnot \varphi) = \on{FreeVars}(\varphi)$
	* $\on{FreeVars}(\varphi \circ \psi) = \on{FreeVars}(\varphi) \union \on{FreeVars}(\psi)$
	* $\on{FreeVars}(P_i^k(t_1, \dots, t_k)) = \on{FreeVars}(t_1) \union \dots \union \on{FreeVars}(t_k)$ for $t_n \in \on{TERM}$
	* $\on{FreeVars}(f_i^k(t_1, \dots, t_k)) = \on{FreeVars}(t_1) \union \dots \union \on{FreeVars}(t_k)$ for $t_n \in \on{TERM}$
	* $\on{FreeVars}(x) = \set{x}$ for $x \in V$
* *Relevance lemma*: if $\forall x \in \on{FreeVars}(x)$, $\sigma _1(x) = \sigma _2(x)$, then $\mathcal A, \sigma _1 \models \varphi$ iff $\mathcal A, \sigma _2 \models \varphi$
	* This has the same interpretation as the relevance lemma for propositional logic
* Define $\mathcal A \models \varphi$ iff $\forall \sigma (\mathcal A, \sigma \models \varphi)$, i.e. $\varphi$ is always satisfied in structure $\mathcal A$ (analog of valid formulas)
	* Likewise $\mathcal A \notmodels \varphi$ iff $\forall \sigma(\mathcal A, \sigma \notmodels \varphi)$ (analog of unsatisfiable formulas)
	* We only need to care about the free variables, since the non-free ones don't affect whether $\varphi$ is modelled
* If $\on{FreeVars}(\varphi) = \emptyset$, then $\varphi$ is a *sentence*
	* We can use sentences to store our knowledge in a knowledge base
* Define $\varphi \models \psi$ if the set of all assignments that model $\varphi$ is a subset of all assignments that model $\psi$ (so if $\varphi$ is modelled by an assignment, $\psi$ will also be)
	* $\on{models}(\varphi) \subseteq \on{models}(\psi)$
	* Alternatively $\on{models}(\varphi) \intersection \overline{\on{models}(\psi)} = \emptyset$
	* Equivalently $\on{models}(\varphi \land \lnot\psi) = \emptyset$
	* If $\varphi$ is a knowledge base of sentences, we use this to check if a formula is true
* $p \land (\lnot p)$ is an *empty clause*, denoted $()$, which is a contradiction
* $(\alpha \lor p) \land (\lnot p \lor \beta)$ gives $(\alpha \lor \beta)$
	* This is known as *resolution*
	* This is the transitivity of implication, since $\lnot x \lor y$ means $x \to y$
* Given some logical statement we can keep applying resolution, and eventually if we end up with an empty clause, we know the original statement was false because it leads to a contradiction
* Therefore if we want to check if our knowledge base models some formula $\alpha$, we can check if $KB \land (\lnot \alpha)$ leads to an empty clause

