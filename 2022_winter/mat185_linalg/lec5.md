# Lecture 5, Jan 24, 2022

## More Vector Space Properties

* Proposition V: Properties of zero: For all $\bm v \in \mathcal V$ and all $\alpha \in \Gamma$:
	1. $0\bm v = \bm 0$
		* $0\bm v = 0\bm v + \bm 0$ by $\mathcal{AIII}$
		* $0\bm v = (0 + 0)\bm v = 0\bm v + 0\bm v$ by $\mathcal{MIII}(a)$ and scalar addition properties
		* By the transitive property $0\bm v + \bm 0 = 0\bm v + 0\bm v$, then by the cancellation theorem $0\bm v = \bm 0$
	2. $\alpha\bm 0 = \bm 0$
		* $\alpha\bm 0 = \alpha(\bm 0 + \bm 0) = \alpha\bm 0 + \alpha\bm 0$
		* Rest of the proof follows like above
	3. If $\alpha\bm v = \bm 0$ then either $\alpha = 0$ or $\bm v = \bm 0$
		* Either $\alpha = 0$ or $\alpha \neq 0$; if $\alpha = 0$ then $0\bm v = \bm 0$ follows by 1, so we only need to consider $\alpha \neq 0$
		* $\alignedeqntwo[t]{\bm v}{1\bm v \Tag\mathcal{MIV}}{(\alpha^{-1}\alpha)\bm v \Ttag{Properties of scalars}}{\alpha^{-1}(\alpha\bm v) \Tag\mathcal{MII}}{\alpha^{-1}\bm 0 \Ttag{Given}}{\bm 0 \Ttag{Prop. V.2}}$
		* Therefore either $\alpha = 0$, or if $\alpha \neq 0$, then $\bm v = \bm 0$
* Proposition VI: For all $\bm v \in \mathcal V$ and $\alpha \in \Gamma$, $(-\alpha)\bm v = -(\alpha\bm v) = \alpha(-\bm v)$
	* $\alignedeqntwo[t]{\alpha\bm v + (-\alpha\bm v)}{(\alpha - \alpha)\bm v \Tag\mathcal{MIII}(a)}{0\bm v \Ttag{Properties of scalars}}{\bm 0 \Ttag{Prop. V.1}}$
	* Since $\alpha\bm v + (-(\alpha\bm v)) = \bm 0$ by $\mathcal{AIII}$, by the transitive property and cancellation $-(\alpha\bm v) = (-\alpha)\bm v$
	* $\alignedeqntwo[t]{\alpha\bm v + \alpha(-\bm v)}{\alpha(\bm v - \bm v) \Tag\mathcal{MIII}(b)}{\alpha\bm 0 \Tag\mathcal{AIV}}{\bm 0 \Ttag{Prop. V.2}}$
	* It follows then that $\alpha(-\bm v) = -(\alpha\bm v) = (-\alpha \bm v)$
	* Consider $\alpha = 1$, then $-(1\bm v) = -\bm v = (-1)\bm v$, so the additive inverse is always $-1$ times the vector!

