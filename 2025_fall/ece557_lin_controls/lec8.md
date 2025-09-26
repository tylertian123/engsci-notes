# Lecture 8, Sep 24, 2025

## Solution to a Non-Autonomous LTI System

\noteThm{The solution to the LTI system $$\alignedlines[t]{}{\dot{\bm x} = \bm A\bm x + \bm B\bm u, \bm x(0) = \bm x_0}{\bm y = \bm C\bm x + \bm D\bm u}$$ is given by $$\bm x(t) = e^{\bm At}\bm x_0 + \int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau$$}

* We can show the initial condition is satisfied trivially
* $\alignedeqntwo[t]{\dot{\bm x}}{\diff{}{t}\left(e^{\bm At}\bm x_0 + \int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau\right)}{\bm Ae^{\bm At}\bm x_0 + \bm A\int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau + \bm B\bm u(t)}{\bm A\left(e^{\bm At}\bm x_0 + \int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau\right) + \bm B\bm u(t)}{\bm A\bm x(t) + \bm B\bm u(t)}$
	* Note $\diff{}{t}\int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau = \bm A\int _0^t e^{\bm A(t - \tau)}\bm B\bm u(\tau)\,\dtau + \bm B\bm u(t)$ by Leibniz rule
		* $\diff{}{x}\int _{a(x)}^{b(x)} f(x, t)\,\dt = f(x, b(x))\diff{}{x}b(x) - f(x, a(x))\diff{}{x}a(x) + \int _{a(x)}^{b(x)} \pdiff{}{x}f(x, t)\,\dt$
* Note due to the fundamental theorem of differential equations (the existence and uniqueness theorem), as our system is linear (and therefore continuous), we know that the solution above is the unique solution

