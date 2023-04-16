# Lecture 4, Sep 16, 2021

## One Dimensional Motion, Continued

* $a(t) = \diff{v(t)}{t}$ is only defined for smooth and continuous functions; when collecting real world data there could be sharp changes in velocity that may not be differentiable (infinite change/discontinuity in acceleration)
	* In reality the actual motion between points is still continuous but the sampling is too rough to tell
	* Can't be described by a simple line

## Definite Integrals

* $\int _a^b f(t)\,\dt$, the definite integral or area under the curve, can be calculated from the indefinite integral $\int f(t)\,\dt$, from the fundamental theorem of calculus
	* Definite integral is a value; indefinite integral is a function
	* $\int _a^b f(t)\,\dt = F(b) - F(a)$ where $F(t) = \int f(t)\,\dt$

## Velocity and Acceleration

* $v = \diff{x}{t}$ and $x = \int v\,\dt$
* $a = \diff{v}{t}$ and $v = \int a\,\dt$
* Therefore if we have the velocity and need to know the change in position between two points in time, use $\int _{t_1}^{t_2} v(t)\,\dt = F(t_2) - F(t_1) = x_2 - x_1 = \Delta x$; similarly for velocity/acceleration

## Constant Velocity Equations

* $v(t) = v_0$
* $\Delta x = \int _{t_0}^{t_f} v(t)\,\dt = v_0\Delta t$

## Constant Acceleration Equations

* $a(t) = a_0$
* $\Delta v = \int _{t_0}^{t_f} a(t)\,\dt = a_0\Delta t$
* $v(x) = \Delta v + v_0 = a_0\Delta t + v_0$

