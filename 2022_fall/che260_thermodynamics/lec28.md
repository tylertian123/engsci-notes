# Lecture 28, Nov 21, 2022

## Transient Conduction (Non-Lumped)

* When $B_i > 0.1$ we can no longer neglect the temperature difference in the body, so we have to solve the complete heat conduction equation
* When we insert a plane wall into a fluid, we should see a bump in the temperature in the middle of the wall that becomes flatter over time
* In this case $T = T(x, t)$ if we assume 1D conduction
* $\pdiffn{2}{T}{x} = \frac{1}{\alpha}\pdiff{T}{t}$
	* $\alpha = \frac{k}{\rho c_p}$ is the thermal diffusivity
* Initial conditions: $T(x, 0) = T_i$, boundary conditions: at $L$, $-k\pdiff{T}{x} = h(T(L, t) - T_\infty)$
	* Use symmetry, $\eval{\pdiff{T}{x}}{x = 0} = 0$ (note zero is the centre of the plate)
* Use a change of variables $X = \frac{x}{L}, \text{Bi} = \frac{hL}{k}, \tau = \frac{\alpha t}{L^2}$
	* $\tau = \text{Fo}$ is also known as the Fourier number, a unitless measure of time (note this is a variable)
		* The Fourier number is the ratio of conductive heat transfer to energy increase in the system
		* Imagine a cube with sides $L$ with conductive heat transfer in, convective heat transfer out
		* From Fourier's law $\dot Q_{cond} = kA\diff{T}{x} = kL^2\frac{\Delta T}{L} = kL\Delta T$
		* $\Delta E = mc\diff{T}{t} = \rho L^3c\frac{\Delta T}{t}$
		* $\frac{\dot Q_{cond}}{\Delta E} = \frac{k}{\rho c}\frac{t}{L^2} = \frac{\alpha t}{L^2} = \text{Fo}$
	* $\theta(X, \text{Fo}) = \frac{T - T_\infty}{T_i - T_\infty}$ is the normalized thermal driving force
* $\pdiffn{2}{\theta}{X} = \pdiff{\theta}{\text{Fo}}$
	* Boundary conditions $\eval{\pdiff{\theta}{X}}{X = 0} = 0$
	* At the walls $\eval{\pdiff{\theta}{X}}{X = 1} = -\text{Bi}\theta(1, \text{Fo})$
* This can be solved analytically, but we're not going to do so
* In the simplest case of the lumped capacitance $\theta = e^{-\frac{hA}{\rho Vc}t} = e^{-\left(\frac{hL}{k}\right)\left(\frac{\alpha t}{L^2}\right)t} = e^{-\text{Bi}\text{Fo}}$
* In more complex cases $\theta = \theta(X, \text{Bi}, \text{Fo})$ is a complicated function, but the textbook gives some approximations for different geometries for sufficiently large $t$
	* For the plane wall: $\theta = \frac{T(x, t) - T_\infty}{T_i - T_\infty} = A_1e^{-\lambda _1^2\text{Fo}}\cos\left(\lambda _1\frac{x}{L}\right)$
		* $A_1, \lambda _1$ are functions of $\text{Bi}$
		* $\theta _0 = A_1e^{-\lambda _1^2\text{Fo}}$
		* $\theta = \theta _0(\text{Fo})\cos\left(\lambda _1\frac{x}{L}\right)$
	* For all the geometries, we can separate $\theta$ into a function of time and a function of position

\noteSummary{For non-lumped transient conduction for a plane wall: $$\theta(x, t) = A_1e^{-\lambda _1^2\text{Fo}}\cos\left(\lambda _1\frac{x}{L}\right)$$
where $\text{Fo} = \frac{\alpha t}{L^2}$ is the Fourier number, $\alpha = \frac{k}{\rho c}$ is the thermal diffusivity, and $A_1, \lambda _1$ are functions of $\text{Bi} = \frac{hL}{k}$, the Biot number, which can be determined through a table}

