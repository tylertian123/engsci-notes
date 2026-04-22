# Lecture 31, Mar 26, 2026

## Kreisselmeier Filters

* To construct an estimate of the effective disturbance, we can use a *Kreisselmeier filter*
* $\begin{aligned}[t] \eta _0(k + 1) &= F\eta _0(k) + FGe(k) \\ \eta _1(k + 1) &= F\eta _1(k) - Ge(k) \\ \eta _2(k + 1) &= F\eta _2(k) + Gu(k) \end{aligned}$
	* $(F, G)$ is controllable and $F$ is Schur stable, as we have used for the Nikiforov canonical forms
	* In this case $\eta _0, \eta _1, \eta _2$ are scalars, but they generalize to higher dimensions as well
* Consider the estimate: $\hat w(k) = \eta _0(k) + Ge(k) - A\eta _1(k) + B\eta _2(k)$
	* $\alignedeqntwo[t]{\hat w(k + 1)}{\eta _0(k + 1) + Ge(k + 1) - A\eta _1(k + 1) + B\eta _2(k + 1)}{F\eta _0(k) + FGe(k) + G(Ae(k) - Bu(k) + d_*) - A(F\eta _1(x) - Ge(k)) + B(F\eta _2(k) + Gu(k))}{F(\eta _0(k) + Ge(k) + A\eta _1(k) + B\eta _2(k)) + Gd_*}{F\hat w(k) + Gd_*}$
	* From the Nikiforov canonical representation, we know that a model for $d_*$ is $w(k + 1) = Fw(k) + Gd_*, d_* = \psi^Tw(k)$
	* Now the estimation error $\tilde w(k + 1) = \hat w(k + 1) - w(k + 1) = F\tilde w(k)$, and since $F$ is Schur stable our estimate converges to $w(k)$

