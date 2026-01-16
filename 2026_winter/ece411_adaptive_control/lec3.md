# Lecture 3, Jan 9, 2026

## Time Response

* Given a state space model $x(k + 1) = Ax(k) + Bu(k), y(k) = Cx(k) + Du(k)$, an initial condition $x(0)$ and input at all times $\set{u(k)}_{k \geq 0}$, we want to obtain an explicit formula for $x(k), y(k)$, for $k \geq 0$
* As with continuous systems, since the system is LTI we can again break the total response into a superposition of the initial state response (nonzero initial conditions with zero input) and input response (zero initial conditions with nonzero input)
	* Initial state response: $x(k + 1) = Ax(k) \implies x(k) = A^kx(0)$
		* This is an explicit formula because $A^k$ can always be computed non-iteratively as we will see later
		* $A^k$ is the discrete time analogue of $e^{At}$ in continuous time
	* Input response: $\alignedimp[t]{x(k + 1) = Ax(k) + Bu(k), x(0) = 0}{\alignedeqntwo[t]{x(k)}{Bu(k - 1) + ABu(k - 2) + A^2Bu(k - 3) + \cdots + A^{k - 1}Bu(0)}{\sum _{i = 0}^{k - 1} A^{k - 1 - i}Bu(i)}}$
		* This is the discrete time analogue of a convolution
* The total response is $x(k) = A^kx(0) + \sum _{i = 0}^{k - 1}A^{k - 1 - i}Bu(i)$

