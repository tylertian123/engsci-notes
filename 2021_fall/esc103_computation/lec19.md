# Lecture 19, Nov 24, 2021

## Systems of Linear Differential Equations

* Consider the IVP: $\twopiece{x'(t) = ax(t) + by(t)}{y'(t) = cx(t) + dy(t)}$
	* This is a coupled system so we can't simply use the method in the last lecture to the two equations separately
	* We can write this using a matrix: Let $Z = \cvec{x(t)}{y(t)}$, then $Z' = \cvec{x'(t)}{y'(t)}$, so the system can now be represented as $Z' = \mattwo{a}{b}{c}{d}Z = AZ$
	* To capture the initial conditions, let $Z_0 = \cvec{x_0}{y_0}$
	* This is referred to as a *state-space* description of the system and only applies to systems described by linear differential equations with constant coefficients
		* $Z$ is the *state* of the system
	* For these systems there are analytical solutions
* Euler's method can be applied to such a system in the same way
	* Let $t_{n + 1} = t_n + \Delta t$
	* $Z_{n + 1} = Z_n + \Delta tZ_n' = Z_n + \Delta tAZ_n$
* Improved Euler's method:
	* $Z_{n + 1}^* = Z_n + \Delta tAZ_n$ is the Euler update
	* $Z_{n + 1} = Z_n + \frac{\Delta t}{2}(AZ_n + AZ_{n + 1}^*)$ is the improved update, where the average of the rate of change at $Z_n$ and $Z_{n + 1}^*$ is averaged

## Higher Order Systems

* Higher order systems of linear differential equations can be converted into systems of first order linear ODEs, by making the derivatives a part of the state
* Consider a general second-order differential equation $\diffn{2}{y}{t} = y''(t) = f(t, y(t), y'(t))$, and for initial values $y(0) = y_0$ and $y'(0) = y_0'$
* Let $Z = \cvec{y(t)}{y'(t)} \implies Z' = \cvec{y'(t)}{y''(t)}$, and $Z_0 = \cvec{y_0}{y_0'}$ and if the system is linear, we can express this in the same way using a matrix as a system of first order equations
* Example: $y''(t) = -y(t)$, $y(0) = 1$, $y'(0) = 0$
	* Set up $Z' = AZ$, where $Z = \cvec{y(t)}{y'(t)} \implies Z' = \cvec{y'(t)}{y''(t)}$
	* $\cvec{y'(t)}{y''(t)} = \mattwo{0}{1}{-1}{0}\cvec{y(t)}{y'(t)} \implies A = \mattwo{0}{1}{-1}{0}$
	* Now Euler's method can be used in exactly the same way

