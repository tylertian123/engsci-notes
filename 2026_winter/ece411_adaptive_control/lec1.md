# Lecture 1, Jan 6, 2026

## Discrete-Time Systems

* Some physical phenomena is best captured with discrete-time dynamics rather than continuous time, e.g. the human saccadic system (where the eye moves around rapidly to sample different objects)
* (LTI) Discrete processes can be modelled in 3 ways:
	* State models: $\begin{aligned}[t] x(k + 1) &= Ax(k) + Bu(k) \\ y(k) &= Cx(k) + Du(k) \end{aligned}$ where:
		* $k$ is a discrete sample time, which is not necessarily evenly spaced
		* $x(k)$ is the state
		* $u(k)$ is the input
		* $y(k)$ is the output
	* Difference equations: $y(k) + a_1y(k - 1) + \cdots + a_ny(k - n) = b_0u(k) + b_1u(k - 1) + \cdots + b_mu(k - m)$
		* Written in terms of the input, output, and delayed values (as opposed to always a single shift in $k$ as in the state model)
		* The difference equation is to the state-space model the same way that an ODE is to a continuous time state-space model
	* Transfer functions: $\frac{Y(z)}{U(z)}$ where $Y(z)$, $U(z)$ are the Z-transformed versions of the output and input
		* Analogous to continuous time transfer functions, except using Z-transforms instead of Laplace transforms
* Example: modelling the saccade process: let the state $x(k) \in \reals$ be the change in eye angle at the end of the saccade, the error $e(k) = r(k) - x(k)$ representing the difference between the desired change in eye angle and the actual eye angle
	* How does the brain ensure that the saccade is always correct, despite various disturbances to the system (e.g. glasses)?
	* Augment the error with a disturbance $d(k)$, such that $e(k) = r(k) + d(k) - x(k)$
	* Consider a simple plant model $x(k + 1) = u(k)$, which is in the form of a state model
		* The TF is $zX(z) = U(z) \implies \frac{X(z)}{U(z)} = \frac{1}{z}$
			* For Z-transforms, a shift $x(k) \to x(k + 1)$ becomes a multiply, $X(z) \to zX(z)$, analogous to how differentiation becomes multiplication for Laplace transforms
		* The difference equation is obtained by simply shifting back, $x(k) = u(k - 1)$
			* In this case the difference between state model and difference equation is trivial, but in higher dimension systems the difference equation becomes higher order
	* Derive the error model, $\alignedeqntwo[t]{e(k + 1)}{r(k + 1) + d(k + 1) - x(k + 1)}{\bar r + \bar d - x(k + 1)}{\bar r + \bar d - u(k)}$
		* We assume $r(k) = r(k + 1) = \bar r$ is a constant target, and $d(k) = d(k + 1) = \bar d$ is a constant disturbance
		* To get the error model, we keep forward shifting the dynamics until the input $u(k)$ appears
		* We only needed to forward shift once, so this is a first-order model
	* Consider a controller $u(k) = u_s(k) + u_m(k)$ where $u_m$ is the internal model, which handles the steady state behaviour, and $u_s$ gives us good transient behaviour
	* Choose $u_s(k) = Ke(k)$ for some gain $K$, so $e(k + 1) = -Ke(k) - u_m(k) + \bar d + \bar r$
		* Suppose $u_m(k) = 0$; is this stable?
			* For a system in canonical form $x(k + 1) = Ax(k)$, the system is asymptotically stable if and only if the eigenvalues of $A$ are inside the unit circle, so in this case the undriven system is stable if $\abs{K} < 1$
			* To find the steady state (we know it exists in this case), set $e_{ss} = e(k) = e(k + 1) \implies e_{ss} = \frac{1}{1 + K}(\bar d + \bar r)$
			* Notice that the higher the gain, the smaller our steady state error, but we can never eliminate the steady state error if $u_m(k) = 0$ since we can only set $K$ to be so high before the system becomes unstable
	* We add an internal model $\hat w(k + 1) = \hat w(k) + Ge(k)$ and $u_i(k) = \phi\hat w(k)$, and we can show that the resulting closed-loop system is asymptotically stable

\noteNote{The failure of the controller with $u_m(k) = 0$ is an example of the \textit{Internal Model Principle}, which intuitively states that "any good regulator must create an internal model of the dynamic structure of the environment in the closed loop system," i.e. the controller must incorporate a model of the \textit{exosystem}, which is capable of producing any disturbance frequencies that could enter the system.}

