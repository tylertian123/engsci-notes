# Lecture 14, Feb 29, 2024

## Control System Type

* The reference input $R(s)$ can often be approximated by a time domain polynomial $r(t) = Ct^k1(t)$
	* e.g. for position $k = 0$, for velocity $k = 1$ and for acceleration $k = 2$
* The *type* of a closed-loop controller is the maximum order of the polynomial that the controller can follow with a constant error
	* e.g. if the system can follow a ramp with constant error, then it is a type 1 system
	* Any inputs of a higher order will lead to increasing error
	* Any inputs of a lower order will lead to zero error
* For unity feedback (i.e. $H(s) = 1$ or perfect sensors) and no disturbance ($W = V = 0$), the type of a system depends on the number of poles that its open loop transfer function, $HGD_{cl} = GD_{cl}$, has at the origin
	* $E_{cl}(s) = R(s) - Y(s) = \frac{1}{1 + GD_{cl}}R = \mathcal S(s)R(s)$
	* Let the reference input $r(t) = \frac{1}{k!}t^k1(s) \implies R(s) = \frac{1}{s^{k + 1}}$
	* $e_{ss} = \lim _{t \to \infty} e(t) = \lim _{s \to 0} sE_{cl}(s) = \lim _{s \to 0} s\frac{1}{1 + GD_{cl}}\frac{1}{s^{k + 1}}$
	* First consider if $GD_{cl}$ has no pole at the origin
		* With $k = 0$, $e_{ss} = \lim _{s \to 0} s\frac{1}{1 + GD_{cl}}\frac{1}{s} = \frac{1}{1 + GD_{cl}(0)} = \frac{1}{1 + K_0}$
			* Therefore for a step input we get a constant steady state error
		* For $k > 0$, $e_{ss} = \lim _{s \to 0} s\frac{1}{1 + GD_{cl}}\frac{1}{s^{k + 1}} = \frac{1}{1 + GD_{cl}(0)}\lim _{s \to 0}\frac{1}{s^k} = \infty$
			* For any higher degree input, the error goes to infinity
	* Now consider $GD_{cl}(s) = \frac{\overline{GD}_{c}(s)}{s^n}$
		* $\overline{GD}_{c}(s)$ contains all terms of $GD_{cl}(s)$ except for poles at the origin, so $K_n = \overline{GD}_{c}(0)$ is a finite value
		* For $n = k = 0$ (type 0) we've shown above that $e_{ss} \to 0$
		* For $n = k \neq 0$, $e_{ss} = \lim _{s \to 0} s\frac{1}{1 + \frac{\overline{GD_{cl}}(s)}{s^n}}\frac{1}{s^{k + 1}} = \lim _{s \to 0} \frac{s^n}{s^k(s^n + \overline{GD_{cl}}(s))} = \frac{1}{\overline{GD_{cl}}(0)} = \frac{1}{K_n}$
		* For $n > k$, $e_{ss} = \lim _{s \to 0} \frac{s^n}{s^k(s^n + \overline{GD_{cl}}(s))} = \frac{1}{\overline{GD_{cl}}(0)}\lim _{s \to 0} s^{n - k} = 0$
		* For $n < k$, $e_{ss} = \lim _{s \to 0} \frac{s^n}{s^k(s^n + \overline{GD_{cl}}(s))} = \frac{1}{\overline{GD_{cl}}(0)}\lim _{s \to 0} \frac{1}{s^{k - n}} = \infty$
* The type of a system is a *robust property*, i.e. it is independent of the parameters of the system
* For a type 1 system, we can define a *position constant*, $K_p = K_0 = \lim _{s \to 0} GD_{cl}(s)$, so $e_{ss} = \frac{1}{1 + K_0}$ (known as the *position error constant*)
	* Note that this is the only one where the error constant is not a simple reciprocal
* For a type 2 system, we can define a *velocity constant*, $K_v = K_1 = \lim _{s \to 0} sGD_{cl}(s)$, so $e_{ss} = \frac{1}{K_1}$
* For a type 2 system, we can define an *acceleration constant*, $K_a = K_2 = \lim _{s \to 0} s^2GD_{cl}(s)$, so $e_{ss} = \frac{1}{K_2}$
* Example: plant $G(s) = \frac{A}{\tau s + 1}$ with controller $D_{cl}(s) = k_P + \frac{k_I}{s}$
	* $GD_{cl}(s) = \frac{A(k_Ps + k_I)}{s(\tau s + 1)}$ so this is a type 1 system
	* The velocity constant is $K_v = \lim _{s \to 0} sGD_{cl}(s) = Ak_I$ so the steady-state error is $\frac{1}{Ak_I}$
* For non-unity feedback, $E_{cl}(s) = R(s) - Y_{cl}(s) = \frac{1 + (H - 1)GD_{cl}}{1 + HGD_{cl}}R = (1 - \mathcal T(s))R(s)$
	* $e_{ss} = \lim _{s \to 0} s(1 - \mathcal T(s))R(s) = \lim _{s \to 0} \frac{1 - \mathcal T(s)}{s^k}$
	* We have to explicitly check the type by finding the largest value of $k$ that keeps $e_{ss}$ finite
	* However, the relationship between the position/velocity/acceleration constants and the steady state error still holds
* Typing a system can also be done with respect to regulation, i.e. setting $R = V = 0$ and finding the highest order of disturbance $W$ that leads to a finite steady state error; in this case the type is determined by the number of zeroes in the error transfer function
	* $E_{cl}(s) = R(s) - Y(s) = -\frac{G(s)}{1 + H(s)G(s)D_{cl}(s)}W \implies \frac{E_{cl}(s)}{W(s)} = -\frac{G(s)}{1 + H(s)G(s)D_{cl}(s)} = -T_w(s)$
		* Note the negative sign in the definition, so that $Y(s) = T_w(s)W(s)$
	* The type is the number of zeroes of $T_w(s)$ at the origin (instead of poles!)
	* Let $W(s) = \frac{1}{s^{k + 1}}$ and $T_w(s) = s^m\tilde T_w(s)$ where $\tilde T_w(0) = \frac{1}{K_{m,w}}$
	* $-e_{ss} = y_ss = \lim _{t \to \infty} y(t) = \lim _{s \to 0} sT_w(s)W(s) = \lim _{s \to 0} \tilde T_w(s)\frac{s^m}{s^k}$
	* Now we can see that $m > k \implies y_ss \to 0$, $m < k \implies y_{ss} \to \infty$ and $m = k \implies y_ss = \frac{1}{K_{m,w}}$
* Generally, the type of a system with respect to tracking can be different than the type with respect to regulation, so we must specify when stating the type

### PID Controllers

* For the following analyses we will assume unity feedback

### Proportional Control (P)

* The simplest controller simply applies a gain to the error feedback: $u(t) = k_Pe_a(t) \implies D_{cl} = k_P$
* Consider a second order plant $G(s) = \frac{K\omega _n^2}{s^2 + 2\zeta\omega _n s + \omega _n^2} \implies GD_{cl}(s) = \frac{k_PK\omega _n^2}{s^2 + 2\zeta\omega _ns + \omega _n^2}$
* Closed loop transfer function: $\frac{Y(s)}{R(s)} = \frac{GD_{cl}(s)}{1 + GD_{cl}(s)} = \frac{k_PK\omega _n^2}{s^2 + 2\zeta\omega _ns + (1 + k_PK)\omega _n^2}$
	* Notice that the new natural frequency is $\omega _n' = \sqrt{1 + k_PK}\omega _n^2$, which is increased
	* The new damping ratio is $\zeta' = \frac{\zeta}{\sqrt{1 + k_PK}}$, which is decreased (obtained by comparing $2\zeta'\omega _n'$ with $2\zeta\omega _n$)
	* Increased natural frequency leads to shorter rise time (faster system), but decreased damping leads to more overshoot
* No poles at the origin in the open-loop transfer function, therefore this is a type 0 system
* For $R(s) = \frac{1}{s}$, we have $e_{ss} = \lim _{s \to 0} s\frac{1}{1 + GD_{cl}}\frac{1}{s} = \frac{1}{1 + k_PK}$
	* The steady-state error in the step response is reduced, but not eliminated entirely
* The same analysis can be made for the disturbance regulation

