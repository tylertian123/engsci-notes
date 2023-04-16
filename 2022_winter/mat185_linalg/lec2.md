# Lecture 2, Jan 14, 2022

## Vector Spaces

* A *vector space* is the generalized concept of a vector that satisfies the usual rules of vector arithmetic
* Fundamental abstract operations addition $+$ and scalar multiplication $\cdot$ can be defined in any way, not just the common component-wise way
	* If it can be defined in any way, what makes a definition meaningful? When does it make sense?
* Definition: A *vector space* $\mathcal{V}$ over a field $\Gamma$ of elements $\{\alpha, \beta, \gamma, \cdots\}$ called *scalars*, is a set of elements $\{u, v, w, \cdots\}$ such that the following *axioms* are satisfied:
	1. Vector addition denoted $u + v$ satisfies, for all $u, v, w \in \mathcal{V}$ (properties AI - AIV):
		1. Closure: $u + v \in \mathcal{V}$
		2. Associativity: $(u + v) + w = u + (v + w)$
		3. Existence of zero or null vector $0 \in \mathcal{V}$ such that $u + 0 = u$
		4. Existence of a negative or additive inverse $-u \in \mathcal{V}$ such that $u + (-u) = 0$
	2. Scalar multiplication denoted $\alpha u$, such that for all $u, v \in \mathcal{V}$ and $\alpha, \beta \in \Gamma$ (properties MI - MIV):
		1. Closure: $\alpha u \in \mathcal{V}$
		2. Associativity: $\alpha(\beta u) = (\alpha\beta)u$
		3. Distributivity: $(\alpha + \beta)u = \alpha u + \beta u$, and $\alpha(u + v) = \alpha u + \alpha v$
		4. Unitary: For the identity $1 \in \Gamma$, $1u = u$
* Note that these properties imply commutativity for vector addition (will prove in a following lecture)
* A field $\Gamma$ is a commutative group that has two operations, addition and multiplication (between scalars), and has a set of elements such that:
	1. $\Gamma$ is commutative under addition
	2. $\Gamma$ is commutative under multiplication excluding zero
	3. Multiplication is distributive over addition
* For us the field is almost always going to be $\mathbb{R}$; other examples of fields include the rationals, the complex numbers, etc
* A group is a set of elements $\{x, y, z, \cdots\}$ and a binary operation $xy$ such that the operation is closed, associative, and there exists an inverse and identity for this operation; commutative groups additionally have $xy = yx$
* Matrices are an example of a vector space since they satisfy all of the requirements, so we can think of matrices as vectors
* Formally we would say $\mathcal{V}$ is a vector space over the field $\Gamma$ under vector addition $+$ and scalar multiplication $\cdot$; as a shorthand we just say $\mathcal{V}$ is a vector space

