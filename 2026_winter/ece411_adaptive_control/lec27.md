# Lecture 27, Mar 17, 2026

## The Regulator Problem -- Full Measurement

* To study this problem, we need to make an error model with states $z(k)$, such that $z(k) \to 0 \implies e(k) \to 0$
	* To do this, we try to find steady-state values $x_{ss}(k)$ and $u_{ss}(k)$, such that the error is zero when the system reaches these steady state values; then we can have $z(k) = x(k) - x_{ss}(k)$
	* The steady state is a solution, so $\threepiece{x_{ss}(k + 1) = Ax_{ss}(k) + Bu_{ss}(k) + Ew(k)}{w(k + 1) = Sw(k)}{0 = Cx_{ss}(k) + Dw(k)}$
		* Note that we assume $w(k)$ contains only persistent (i.e. non-transient) exogenous signals
* Because LTI systems cannot change the frequency of the input, the frequency content of $x_{ss}(k)$ must come from $w(k)$ (this can be proven)
	* Therefore $\exists (\Pi, \Gamma) \suchthat x_{ss}(t) = \Pi w(k)$ and $u_{ss}(k) = \Gamma w(k)$
	* Substituting, we get $\twopiece{\Pi Sw(k) = (A\Pi + B\Gamma + E)w(k)}{0 = (C\Pi + D)w(k)}$
	* Since $w(k)$ is arbitrary (as we have not fixed an exosystem), $\twopiece{\Pi S = A\Pi + B\Gamma + E}{0 = C\Pi + D}$
	* These are known as the *regulator equations*
* Now let $z(k) = x(k) - x_{ss}(k) = x(k) - \Pi w(k)$
	* $\alignedeqntwo[t]{z(k + 1)}{x(k + 1) - \Pi w(k + 1)}{Ax(k) + Bu(k) + Ew(k) - \Pi Sw(k)}{Az(k) + A\Pi w(k) + Bu(k) + Ew(k) - \Pi Sw(k)}{Az(k) + Bu(k) + (A\Pi + E - \Pi S)w(k)}{Az(k) + Bu(k) - B\Gamma w(k)}$
	* $\alignedeqntwo[t]{e(k)}{Cx(k) + Dw(k)}{C(z(k) + \Pi w(k)) + Dw(k)}{Cz(k) + (C\Pi + D)w(k)}{Cz(k)}$
	* $\Gamma w(k)$ is the *effective disturbance*
		* Notice that the channel that the effective disturbance enters through the same channels as $u(k)$, so now we can cancel it out
* Therefore we will use $u(k) = u_s(k) + u_{im}(k)$, where $u_s(k)$ gives us the desired steady-state, and $u_{im}(k)$ cancels the disturbance based on an internal model
	* $u_s(k) = Kz(k)$ such that $(A + BK)$ is Schur stable (pole placement)
		* If we had full measurements, we would have $u_s(k) = K(x(k) - \Pi w(k))$
	* $u_{im}(k) = \Gamma w(k)$
		* However this again requires full measurement, which we will address next time
	* The overall design will be $u(k) = K(x(k) - \Pi w(k)) + \Gamma w(k) = Kx(k) + (\Gamma - K\Pi)w(k)$, consisting of a state feedback and a feedforward controller

