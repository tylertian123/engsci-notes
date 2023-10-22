# Lecture 12, Oct 17, 2023

## Kalman Filter (Discretization) Example

* Consider a system modelled by $\diff{v}{t} = \frac{u}{m}$, where the state is $\bm x = \cvec{x}{v}$
* First we need to discretize the system and bring it into standard form $\bm x_{k + 1} = \bm A_k\bm x_k + \bm B_k\bm u_k + \bm s_k$ and $\bm z_k = \bm D_k\bm x_k + \bm w_k$
* $\frac{x_{k + 1} - x_k}{\Delta t} = v_k + r_k, \frac{v_{k + 1} - v_k}{\Delta t} = \frac{u_k}{m} + s_k$ where $r_k$ and $s_k$ are noise terms
	* This gives $x_{k + 1} = x_k + v_k\Delta t + r_k\Delta t, v_{k + 1} = v_k + \frac{\Delta t}{m}u_k + s_k\Delta t$
* Take some timestep $\Delta t$, then $\cvec{x_{k + 1}}{v_{k + 1}} = \mattwo{1}{\Delta t}{0}{1}\cvec{x_k}{v_k} + \cvec{0}{\Delta t/m}u_k + \Delta t\bm s_k$ and $z_k = v_k = \rvec{0}{1}\cvec{x_k}{v_k} + w_k$
	* Therefore $\bm A_k = \mattwo{1}{\Delta t}{0}{1}, \bm B_k = \cvec{0}{\Delta t/m}, \bm D_k = \rvec{0}{1}$ (note $\bm s_k = \cvec{r_k}{s_k}$)
	* Therefore $\bm Q_k = \Delta t^2\mathbb E[\bm s_k\bm s_k^T]$; note the $\Delta t^2$, since the noise is scaled by $\Delta t$

