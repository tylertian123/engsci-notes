# Lecture 33, Apr 5, 2022

## Solving Differential Equations with Diagonalization

* Given $\dot{\bm x} = \bm A\bm x, \bm x(0) = \bm x_0$, how do we get $\bm x(t)$?
* Assume $\bm A$ is diagonalizable, then $\dot{\bm x} = \bm P\bm\Lambda\bm P^{-1}\bm x$
* We can use $\bm P$ as a transition matrix; set $\bm x = \bm P\bm \eta$, then $\alignedimp[t]{\dot{\bm x} = \bm A\bm x}{\bm P\dot{\bm \eta} = (\bm P\bm \Lambda\bm P^{-1})(\bm P\bm \eta)}{\bm P\dot{\bm \eta} = \bm P\bm\Lambda\bm\eta}{\dot{\bm \eta} = \bm\Lambda\bm\eta}$
	* Since $\bm\Lambda$ is diagonal, we have now decoupled the system!
	* Each equation becomes $\dot{\bm \eta _\alpha} = \lambda _\alpha\bm \eta _\alpha$, so each solution is $\bm \eta _\alpha(t) = c_\alpha e^{\lambda _\alpha t}$
* The full solution becomes $\bm x(t) = \bm P\bm \eta(t) = \rvec{\bm p_1}{\cdots}{\bm p_n}\cvec{c_1e^{\lambda _1t}}{\vdots}{c_ne^{\lambda _nt}} = c_1\bm p_1e^{\lambda _1t} + \cdots + c_n\bm p_ne^{\lambda _nt}$
* Plugging the initial conditions $t = 0$ gives $c_1\bm p_1 + \cdots + c_n\bm p_n = \bm x_0 = \bm P\bm c$; solving the system gives the coefficients
* The eigenvalues $\lambda$ are in the exponents, which dictate the speed at which the solution decays, or the frequency of oscillations
* The eigenvectors dictate the shape of the solution

