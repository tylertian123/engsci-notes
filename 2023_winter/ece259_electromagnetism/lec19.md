# Lecture 19, Mar 1, 2023

## Boundary Value Problems

* Motivation: usually we don't have any idea what the charge distribution $\rho _s$ is like
* We often know what values of $V$ are on the boundaries of the problem
* By using Laplace's or Poisson's equations we can determine $\vec E$ in a given problem without knowing the charge densities
* Example: parallel plate capacitor
	* Assume $\rho _v = 0$ and $\varepsilon _r$ is constant, so we use Laplace's equation $\del^2 V = 0$
	* Assume $\vec E = E\hat a_x$, then $\del^2\vec V = \diffn{2}{V}{x} = 0 \implies V(x) = c_1x + c_2$
	* Using boundary conditions $V(0) = V_0, V(d) = 0$ we get $V(x) = -\frac{V_0}{d}x + V_0$
* In general, start with Poisson's equation; if the field is homogeneous we can take out $\varepsilon$; if there is no charge density then we can use Laplace's equation
* Then use the equation to double integrate to find $V$, using boundary conditions to find the constants, then find $\vec E$
* Finally from $E$ we may find other quantities such as $Q$ with a variety of methods (Gauss's Law, boundary conditions, finding work, etc)

