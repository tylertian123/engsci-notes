# Lecture 2, Jan 8, 2026

## Modelling of Discrete-Time Systems

* LTI systems can be modelled in 3 ways:
	1. *Difference equations* (DEs) of the form $y(k) + a_1y(k - 1) + \cdots + a_ny(k - n) = b_0u(k) + \cdots + b_mu(k - m)$
		* Note we assume that $n \geq m$, which is required for causality (otherwise inputs in the future can affect outputs in the past)
		* This is analogous to ODEs in continuous domain
	2. *Transfer functions* (TFs): $G(z) = \frac{Y(z)}{U(z)}$, assuming zero initial conditions
		* They are analogous to transfer functions in continuous time but using a Z-transform instead of the Laplace transform; we also have the ratio of the Z-transform of the output over the input
		* $\frac{Y(z)}{U(z)} = \frac{b_0 + b_1z^{-1} + \cdots + b_mz^{-m}}{1 + a_1z^{-1} + \cdots + a_nz^{-n}} = \frac{b_0z^n + b_1z^{n - 1} + \cdots + b_mz^{n - m}}{z^n + a_1z^{n - 1} + \cdots + a_{n - 1}z + a_n} = \frac{N(z)}{D(z)}$
	3. State-space models: $\begin{aligned}[t] x(k + 1) &= Ax(k) + Bu(k) \\ y(k) &= Cx(k) + Du(k) \end{aligned}$ (*canonical form*)
		* $x(k) = \cvec{x_1(k)}{\cdots}{x_n(k)} \in \reals^n, u(k) = \cvec{u_1(k)}{\cdots}{u_m(k)} \in \reals^m, y(k) = \cvec{y_1(k)}{\cdots}{y_p(k)} \in \reals^p$

\noteDefn{The \textit{Z-transform} of a discrete time signal $x(k)$ is defined as $$\ztf{x(k)} = X(z) = \sum _{k = 0}^\infty x(k)z^{-k}$$ for some $z \in \complex$, provided that the sum is convergent.}

* Note the forward and backward shift properties of the Z-transform: $x(k + m)$ transforms to $z^mX(z)$ (for positive or negative $m$), assuming zero initial conditions
	* Therefore Z-transforming the difference equation we get $Y(z) + a_1z^{-1}Y(z) + \cdots + a_nz^{-n}Y(z) = b_0U(z) + \cdots + b_mz^{-m}U(z)$, which we can rearrange to get the expression earlier
	* Just like how the Laplace transform converts differentiations to multiplication, the Z-transform converts time shifts to multiplication, turning a difference equation into algebra

### Conversion Between State Space and Transfer Function Representations

* To convert from state space to transfer function, take the Z-transform of the state and output equations, and solve for $X(z)$ and $Y(z)$
	* $x(k + 1) = Ax(k) + Bu(k) \implies zX(z) = AX(z) + BU(z) \implies X(z) = (zI - A)^{-1}BU(z)$
		* Note $(zI - A)^{-1}$ exists since its form means it can be written as a convergent power series, so it can always be inverted
	* $y(k) = Cx(k) + Du(k) \implies \alignedeqntwo[t]{Y(z)}{CX(z) + DU(z)}{C(zI - A)^{-1}BU(z) + DU(z)}{(C(zI - A)^{-1}B + D)U(z)}$
	* This gives the transfer function $G(z) = \frac{Y(z)}{U(z)} = C(zI - A)^{-1}B + D$
	* Note that we normally only do this for SISO systems (taking the ratio of vectors would not make sense anyway) since transfer functions are generally very hard to work with for MIMO systems
* To convert from transfer function to state space, assume $G(z) = \frac{N(z)}{D(z)}$ is a rational proper transfer function, start by converting to a difference equation by inverting the Z-transform, define as many states as necessary (equal to the order of the difference equation) and organize into matrix form
	* Example: $G(z) = \frac{1}{z^2 + a_1z + a_0}$
	* Convert to difference equation: $\alignedimp[t]{(z^2 + a_1z + a_0)Y(z) = U(z)}{y(k + 2) + a_1y(k + 1) + a_2y(k) = u(k)}$
	* Define states: $x_1(k) = y(k), x_2(k) = y(k + 1) \implies \twopiece{x_1(k + 1) = y(k + 1) = x_2(k)}{x_2(k + 1) = y(k + 2) = u(k) - a_1x_2(k) - a_2x_1(k)}$
	* $x(k + 1) = \mattwo{0}{1}{-a_2}{-a_1}x(k) + \cvec{0}{1}u(k)$
	* This is known as the *controllable canonical form* (analogous to the same in continuous domain)
* More generally when the numerator is not a constant, rewrite $Y(z) = \frac{N(z)}{D(z)}U(z) = N(z)V(z)$ where $V(z) = \frac{1}{D(z)}U(z)$, and $V(z)$ becomes the state, $Y(z) = N(z)V(z)$ becomes the output equation, and $V(z) = \frac{1}{D(z)}U(z)$ becomes the state equation
	* $G(z) = \frac{b_1z + b_0}{z^3 + a_2z^2 + a_1z + a_0} = \frac{N(z)}{D(z)}$
	* State equation: $\alignedimp[t]{V(z) = \frac{1}{z^3 + a_2z^2 + a_1z + a_0}}{v(k + 3) + a_2v(k + 2) + a_1v(k + 1) + a_0v(k) = u(k)}$
		* Define states $x(k) = \cvec{v(k)}{v(k + 1)}{v(k + 2)} \implies x(k + 1) = \cvec{x_2(k)}{x_3(k)}{-a_2x_3(k) - a_1x_2(k) - a_0x_1(k) + u}$
		* Matrix form: $x(k + 1) = \matthree{0}{1}{0}{0}{0}{1}{-a_0}{-a_1}{-a_2}x(k) + \cvec{0}{0}{1}u(k)$
	* Output equation: $\alignedimp[t]{Y(z) = (b_1z + b_0)V(z)}{\alignedeqntwo[t]{y(k)}{b_1v(k + 1) + b_0v(k)}{b_1x_2(k) + b_0x_1(k)}{\rvec{b_0}{b_1}{0}x(k)}}$
* Note that the states obtained by converting from transfer function to state space are not unique
	* Some states are easier to work with than others, so we might want to do a coordinate transform $z(k) = Px(k)$ for some nonsingular $P$ to obtain a new system $z(k + 1) = PAP^{-1}z(k) + P^{-1}BU(k)$

