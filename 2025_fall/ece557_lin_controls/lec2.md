# Lecture 2, Sep 5, 2025

## Converting Between State Space and Transfer Functions

* Recall the transfer function representation: $Y(s) = G(s)U(s)$ where $U(s) = \laplace{u(t)}$ (input), $Y(s) = \laplace{y(t)}$ (output), the transfer function is $G(s) = \laplace{g(t)}$ (impulse response)
	* Also known as the *input-output representation*
	* Note this assumes zero initial conditions
* Using the circuit example: $\diff{y}{t} + \frac{1}{R\tilde C}y = \frac{1}{R\tilde C}u$
	* Assuming zero initial conditions, $\laplace{y}$ and $\laplace{u}$ exist in the right-half complex plane
	* Apply Laplace: $sY(s) + \frac{1}{R\tilde C}Y(s) = \frac{1}{R\tilde C}U(s) \implies \left(s + \frac{1}{R\tilde C}\right)Y(s) = \frac{1}{R\tilde C}U(s)$
	* Therefore $G(s) = \frac{\frac{1}{R\tilde C}}{s + \frac{1}{R\tilde C}}$
	* To go from state space to transfer function representation, we can take the Laplace transform and rearrange into the $Y(s) = G(s)U(s)$ form
* To transform transfer function to state space: Let $G(s) = \frac{b_ms^m + \cdots + b_1s + b_0}{s^n + a_{n - 1}s^{n - 1} + \cdots + a_1s + a_0} = \frac{N(s)}{D(s)}$ and assume $a_i, b_i \in \reals$ (*rational*) and $m < n$ (*strictly proper*)
	* Break into 2 blocks, $\frac{1}{D(s)}$ and then $N(s)$, and let the intermediate output be $V(s)$; the first block will give us our state equation, the second will give the measurement equation
	* Block 1: $\frac{V(s)}{U(s)} = \frac{1}{D(s)} = \frac{1}{s^n + a_{n - 1}s^{n - 1} + \cdots + a_1s + a_0}$
		* $\left(s^n + a_{n - 1}s^{n - 1} + \cdots + a_1s + a_0\right)V(s) = U(s)$
		* Inverse Laplace assuming zero initial conditions: $\diffn{n}{v}{t} + a_{n - 1}\diffn{n - 1}{v}{t} + \cdots + a_1\diff{v}{t} + a_0v = u$
		* Let $\bm x = \cvec{x_1}{x_2}{\vdots}{x_n} = \cvec{v}{\diff{v}{t}}{\vdots}{\diffn{n - 1}{v}{t}} \implies \dot{\bm x} = \cvec{\diff{v}{t}}{\diffn{2}{v}{t}}{\vdots}{\diffn{n}{v}{t}} = \cvec{x_2}{x_3}{\vdots}{-a_{n - 1}{x_n} - \cdots - a_1x_2 - a_0x_1 + u}$
		* $\bm A = \begin{bmatrix}0 & 1 & 0 & \cdots & 0 \\ 0 & 0 & 1 & \cdots & 0 \\ \vdots & \vdots & \vdots & \ddots & \vdots \\ -a_0 & -a_1 & -a_2 & \cdots & -a_{n - 1}\end{bmatrix}, \bm B = \cvec{0}{0}{\vdots}{0}{1}$
	* Block 2: $Y(s) = V(s)N(s) = \left(b_ms^m + \cdots + b_1s + b_0\right)V(s)$
		* Again inverse Laplace assuming zero IC ($v(0) = \dot v(0) = \cdots = \diffn{m - 1}{v}{t}(0) = 0$)
		* Using the definition of $\bm x$: $y(t) = b_m\diffn{m}{v}{t} + \cdots + b_1\diff{v}{t} + b_0v = b_mx_{m + 1} + \cdots + b_1x_2 + b_0x_1$
			* Here is where we use the $m < n$ assumption
		* Therefore: $\bm C = \rvec{b_0}{b_1}{\cdots}{b_m}, \bm D = 0$
	* Note there are many other sets of $\bm A, \bm B, \bm C, \bm D$ that satisfy this

\noteNote{Given the state-space representation with $\bm x(0) = \bm 0$, we can show that the corresponding transfer function is $$\bm G(s) = \bm C(s\bm I - \bm A)^{-1}\bm B + \bm D$$ Note $\bm G \in \reals^{p \times m}$ is a matrix. This can be derived by taking the Laplace transform, then isolating and substituting $\bm X$.}

