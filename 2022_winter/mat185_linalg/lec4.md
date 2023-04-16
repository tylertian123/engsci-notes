# Lecture 4, Jan 18, 2022

## Commutativity and Other Properties of Vector Spaces

* What about the associative property $\bm u + \bm v = \bm v + \bm u$?
	* This can be proven from the other properties, but first we will start with some other axioms
* There are some axioms that are one sided such as $\mathcal{AIII}$ and $\mathcal{AIV}$ (additive identity and inverse); we will prove that these are two sided under the other axioms
* Proposition I: For every $\bm u, -\bm u \in \mathcal V, -\bm u + \bm u = \bm 0$ (i.e. property $\mathcal{AIV}$ but commutative)
	* Proof: $\alignedeqntwo[t]{-\bm u + \bm u}{(-\bm u + \bm u) + \bm 0 \Tag\mathcal{AIII}}{(-\bm u + \bm u) + (-\bm u + (-(-\bm u))) \Tag\mathcal{AIV}}{-\bm u + (\bm u + (-\bm u)) + (-(-\bm u)) \Tag\mathcal{AII}}{-\bm u + \bm 0 + (-(-\bm u)) \Tag\mathcal{AIV}}{-\bm u + (-(-\bm u)) \Tag\mathcal{AIII}}{\bm 0 \Tag\mathcal{AIV}}$
	* Thus $\mathcal{AIV}$ is commutative, and we can say that the additive inverse of $-\bm u$ is just $\bm u$
* Proposition II: For every $u \in \mathcal V, \bm 0 + \bm u = \bm u$ (i.e. property $\mathcal{AIII}$ but commutative)
	* Proof: $\alignedeqntwo[t]{\bm 0 + \bm u}{(\bm u + (-\bm u)) + \bm u \Tag\mathcal{AIV}}{\bm u + (-\bm u + \bm u) \Tag\mathcal{AII}}{\bm u + \bm 0 \Ttag{Prop. I}}{\bm u \Tag\mathcal{AIII}}$
* Theorem I: Cancellation theorem: If $\bm u + \bm w = \bm v + \bm w$ then $\bm u + \bm v$ for any $\bm u, \bm v, \bm w \in \mathcal V$ (this also applies for $\bm w + \bm u = \bm w + \bm v$)
	* Proof: $\alignedeqntwo[t]{\bm u}{\bm u + \bm 0 \Tag\mathcal{AIII}}{\bm u + (\bm w + -\bm w) \Tag\mathcal{AIV}}{(\bm u + \bm w) + (-\bm w) \Tag\mathcal{AII}}{(\bm v + \bm w) + (-\bm w) \Ttag{given}}{\bm v + (\bm w + (-\bm w)) \Tag\mathcal{AII}}{\bm v + \bm 0 \Tag\mathcal{AIV}}{\bm v \Tag\mathcal{AIII}}$
* Note: a *theorem* and *proposition* are basically the same thing here, but typically theorem is used for bigger results
* Define subtraction: $\bm u - \bm v = \bm u + (-\bm v)$
* Proposition III:
	1. The zero $\bm 0 \in \mathcal V$ is unique
		* Proof: Let $\bm 0'$ be another zero, then $\bm u + \bm 0' = \bm u = \bm u + \bm 0$ so by the cancellation theorem, $\bm 0' = \bm 0$
	2. The inverse is unique
	3. $-(-\bm u) = \bm u$
* Proposition IV: For $\bm u, \bm v \in \mathcal V, \bm u + \bm v = \bm v + \bm u$
	* Proof: $\alignedeqntwo[t]{\bm u + \bm v}{\bm 0 + (\bm u + \bm v) + \bm 0 \Tag\text{Prop. II and }\mathcal{AIII}}{(-\bm v + \bm v) + (\bm u + \bm v) + (\bm u + (-\bm u)) \Tag\text{Prop. I and }\mathcal{AIV}}{-\bm v + ((\bm v + \bm u) + (\bm v + \bm u)) + (-\bm u) \Tag\mathcal{AII}}{-\bm v + (1(\bm v + \bm u) + 1(\bm v + \bm u)) + (-\bm u) \Tagcal{MIV}}{-\bm v + (1 + 1)(\bm v + \bm u) + (-\bm u) \Tagcal{MIII}}{-\bm v + ((1 + 1)\bm v + (1 + 1)\bm u) + (-\bm u) \Tagcal{MIII}}{-\bm v + (1\bm v + 1\bm v + 1\bm u + 1\bm u) + (-\bm u) \Tagcal{MIII}}{-\bm v + (\bm v + \bm v + \bm u + \bm u) + (-\bm u) \Tagcal{MIV}}{(-\bm v + \bm v) + \bm v + \bm u + (\bm u + (-\bm u)) \Tagcal{AII}}{\bm 0 + \bm v + \bm u + \bm 0 \Tag\text{Prop. I and }\mathcal{AIV}}{\bm v + \bm u \Tag\text{Prop. II and }\mathcal{AIII}}$

