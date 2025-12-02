# Lecture 10, Oct 1, 2025

## Linear Algebra Concepts

\noteDefn{A \textit{vector space} $\mathcal X$ over a field $\mathbb F$ (can be e.g. $\reals$ or $\complex$) is a set of elements (vectors) with 2 operations: vector addition (between two elements of $\mathcal X$) and scalar multiplication (between an element of $\mathcal X$ and an element of the field $\mathbb F$), with the properties:
\begin{itemize}
	\item Closure: $v + w \in \mathcal X$ and $\lambda v \in \mathcal X$
	\item Commutativity: $v + w = w + v$
	\item Associativity: $(v + w) + z = v + (w + z)$ and $(\lambda\mu)v = \lambda(\mu v)$
	\item Additive identity: $\exists \bar{0} \in \mathcal X$ such that $v + \bar{0} = v$
	\item Multiplicative identity: $\exists 1 \in \mathbb F$ and $0 \in \mathbb F$ such that $1v = v$ and $0v = \bar{0}$
	\item Additive inverse: $\exists (-v) \in \mathcal X$ such that $v + (-v) = \bar{0}$
	\item Distributivity: $\lambda(v + w) = \lambda v + \lambda w$ and $(\lambda + \mu)v = \lambda v + \mu v$
\end{itemize}}

\noteDefn{Let $\mathcal X$ be a vector space over $\mathbb F$ and let $x_1, \dots, x_m \in \mathcal X$, then the \textit{span} of these vectors is $$\Span\set{x_1, \dots, x_m} = \Set{\sum _{i = 1}^m c_ix_i | c_i \in \mathbb F}$$ i.e. it is the set formed by all possible linear combinations of vectors in the set.}

\noteDefn{A vector space $\mathcal X$ is \textit{finite-dimensional} if it can be expressed as $$\mathcal X = \Span\set{x_1, \dots, x_m}$$ where $m \in \naturals$ is a finite integer. \tcblower The smallest $m$ that satisfies this relation is the \textit{dimension} of $\mathcal X$.}

* Some examples: $\reals^n, \reals^{m \times n}$, and the vector space of $n$-th degree polynomials $P^n$ are all finite dimensional; but the vector space of square-integrable functions in $[a, b]$, $L^2([a, b])$ is not finite dimensional

\noteDefn{A set of vectors $\set{x_1, \dots, x_n}$ is \textit{linearly independent} if $$\forall c_1, \dots, c_m \in \mathbb F,\, \sum _{i = 1}^m c_ix_i = \bar{0} \iff c_1 = \dots = c_m = 0$$ i.e. the only linear combination of the vectors to get the zero vector is all zeros.}

\noteDefn{A set of vectors $\set{x_1, \dots, x_m} \subseteq \mathcal X$ is a \textit{basis} for $\mathcal X$ if $\mathcal X = \Span\set{x_1, \dots, x_m}$ and all vectors in the set are linearly independent.}

\noteDefn{Let $\mathcal X$ be a vector space over $\mathbb F$ and let $\set{x_1, \dots, x_m}$ be a basis for $\mathcal X$; then any vector $v \in \mathcal X$ can be written as $v = c_1x_1 + \dots + c_mx_m$, where $$\cvec{c_1}{\vdots}{c_m} \in \mathbb F^m$$ is the \textit{coordinate representation} of $v$ under this basis.
It can be shown that the values of $c_1, \dots, c_m$ are uniquely determined by $v$ and the basis $\set{x_1, \dots, x_m}$.}

\noteDefn{A subset $\mathcal V \subseteq \mathcal X$ is a \textit{subspace} if it is closed, i.e. $x, y \in \mathcal V, \lambda \in \mathbb F \implies x + \lambda y \in \mathcal V$ and if it contains the zero vector, $\bar{0} \in \mathcal V$.
\tcblower
The \textit{direct sum} of two subspaces is $$\mathcal V \oplus \mathcal W = \set{v + w | v \in \mathcal V, w \in \mathcal W}$$ which can be shown to be another subspace.}

\noteDefn{Two subspaces $\mathcal V, \mathcal W$ of $\mathcal X$ are \textit{independent} if $\mathcal V \cap \mathcal W = \set{\bar{0} _\mathcal X}$, i.e. their intersection contains only zero.}

\noteThm{Let $\mathcal V$ be a subspace of the vector space $\mathcal X$, then $\mathcal V$ has an \textit{independent complement}, which is another subspace which is independent from $\mathcal V$ and sums with $\mathcal V$ to get the entirety of $\mathcal X$, i.e. $$\exists \mathcal W \subseteq \mathcal X \suchthat \mathcal V \cap \mathcal W = \set{\bar{0} _\mathcal X}, \mathcal V \oplus \mathcal W = \mathcal X$$ Not to be confused with an orthogonal complement.}

\noteDefn{Let $\mathcal X$ be a vector space over $\reals$. An \textit{inner product} on $\mathcal X$ is an operation $\langle\cdot, \cdot\rangle: \mathcal X \times \mathcal X \mapsto \reals$ with the following properties:
\begin{enumerate}
	\item $\langle x, y \rangle = \langle y, x \rangle$ (this property requires a conjugate for $\complex$)
	\item $\langle \lambda x_1 + x_2, y \rangle = \lambda\langle x_1, y \rangle + \langle x_2, y \rangle$
	\item $\langle x, x \rangle \geq 0$
	\item $\langle x, x \rangle = 0 \iff x = \bar{0}$
\end{enumerate}
If $\langle x, y \rangle = 0$, then $x$ and $y$ are \textit{orthogonal} under the inner product $\langle \cdot, \cdot \rangle$.
\tcblower
Combining a vector space with an inner product, $(\mathcal X, \langle \cdot, \cdot \rangle)$ is called an \textit{inner product space}.}

* For example, $\reals^n$ and $\inner{x}{y} = x^Ty$ is an inner product space
	* On $L^2([a, b])$ we can define an inner product $\inner{f}{g} = \int _a^b f(\tau)g(\tau)\,\dtau$

\noteDefn{Let $(\mathcal X, \inner{\cdot}{\cdot})$ be an inner product space and let $\mathcal V \subseteq \mathcal X$ be a subspace. Then the \textit{orthogonal complement} of $\mathcal V$ in $\mathcal X$ is the subspace $$\mathcal V^\perp = \set{w \in \mathcal X | \inner{w}{v} = 0,\,\forall v \in \mathcal V}$$ Note $\mathcal V \oplus \mathcal V^\perp = \mathcal X$.}

