# Lecture 29, Mar 20, 2026

## The Adaptive Regulator Problem

* Consider a model $\begin{aligned}[t] x(k + 1) &= Ax(k) + Bu(k) + E\xi(k) \\ \xi(k + 1) &= S\xi(k) \\ e(k) &= Cx(k) + D\xi(k) \end{aligned}$ where $S$ is unknown (note $w$ is renamed to $\xi$)
	* In Lab 4, for the visuomotor adaptation problem, the disturbance enters the system via the error measurement only so $E = 0$
	* We don't know the frequency content of the possible disturbance, so $S$ is unknown
	* To regulate this system we will need adaptive control, but first we need to work this into an error model
* We use the same idea from the normal regulator problem to transform: $\twopiece{\Pi S = A\Pi + B\Gamma + E}{0 = C\Pi + D}$
	* We can impose conditions to guarantee the existence of $(\Pi, \Gamma)$, but we don't know what they are since we don't have $S$
	* Perform the same coordinate transform $z(k) = x(k) - \Pi\xi(k)$ (no longer measurable)
	* The resulting system is $\begin{aligned}[t] z(k + 1) &= Az(k) + Bu(k) - B\Gamma\xi(k) \\ e(k) &= Cz(k) \end{aligned}$
* To make this into a dynamic error model, we have 3 issues: stabilization of the system, $\Gamma$ is unknown, and $\xi(k)$ is unknown
* We have to figure out a suitable parametrization of the disturbance into a single parameter vector -- known as the *Nikiforov canonical representation*
	* Let $d(k) = \Gamma\xi(k)$, then we have a system $\begin{aligned}[t] \xi(k + 1) &= S\xi(k) \\ d(k) &= \Gamma\xi(k) \end{aligned}$ (note that $d(k)$ is scalar)
	* Pick $(F, G)$ controllable and $F$ Schur stable, then if $(\Gamma, S)$ is observable and $\sigma(S) \cap \sigma(F) = \emptyset$, then the *Sylvester equation* $MS = FM + G\Gamma$ has a unique, nonsingular solution $M \in \reals^{q \times q}$
		* Note we cannot actually compute $M$; we just know that it exists
		* As previously mentioned, if $(\Gamma, S)$ is not observable then we can get rid of the extra states
		* Note that if $F$ is Schur stable then it must have $\abs{\lambda} < 1$, but if $\xi(k)$ contains only persistent signals then it must have $\abs{\lambda} = 1$ (otherwise it would decay), so their spectra are naturally disjoint
	* Define a coordinate transformation $w(k) = M\xi(k)$, then $\alignedeqntwo[t]{w(k + 1)}{M\xi(k + 1)}{MS\xi(k)}{(FM + G\Gamma)\xi(k)}{Fw(k) + Gd(k)}$
	* Now $d(k) = \Gamma\xi(k) = \Gamma M^{-1}w(k)$ and let $d(k) = \psi^Tw(k)$
	* This gives us the new exosystem $\begin{aligned}[t] w(k + 1) &= Fw(k) + Gd(k) \\ d(k) &= \psi^Tw(k) \end{aligned}$
		* Note that if we substitute the second equation into the first, $w(k + 1) = (F + G\psi^T)w(k)$, so $\psi^T$ decides the frequency content of the disturbance
	* Now we substitute this back to get $\begin{aligned}[t] z(k + 1) &= Az(k) + Bu(k) - Bd(k) \\ e(k) &= Cz(k) \end{aligned}$
* Let $u(k) = \hat\psi^T(k)w(k)$, then $z(k + 1) = Az(k) + \tilde\psi^T(k)w(k)$ where $\tilde\psi(k) = \hat\psi(k) - \psi$, which is exactly the dynamic error model
* However, $w(k)$ is still not known, so we need to estimate it as well

