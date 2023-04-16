# Lecture 30, Dec 2, 2021

## Approximation of Linear Restoring Forces

* Simple harmonic motion occurs whenever there is a linear restoring force
* Usually restoring forces can be approximated linearly even when they're not (for small displacements)
* This means that there is usually simple harmonic motion occurring whenever there is a point of stable equilibrium (forces attempt to restore the object to equilibrium instead of pushing it away or doing nothing when the object goes away from equilibrium)
* If $F_x = -kx$ then $U = -\int F_x\,\dx = \frac{kx^2}{2} + U(0)$
	* $k = \diffn{2}{U}{x}$ is the curvature of the potential, and we can derive this approximate $k$ even when the restoring force is not truly linear
	* This can be done for any potential but the motion is only truly harmonic for $k$ very close to equilibrium points
* A pendulum is such an example; the restoring torque is not truly linear but for small angles $\sin x \approx x$
	* Potential is parabolic around the minimum for true harmonic motion
	* Since the pendulum is constrained to circular motion, its potential (w.r.t. angle) is sinusoidal
	* In a simple pendulum there is negligible mass in the string, the pendulum has a force $mg$ pointing straight down from gravity, acting on the mass
	* The radial component is $mg\cos\theta$ and the tangential component is $mg\sin\theta$
		* The radial component is opposed by the tension in the string but the tangential component is not
		* Sum of the forces in the radial direction is $mg\cos\theta - T = ma_r$
		* $a_r = -a_c = r\omega^2$ pointing in the $-\hat{r}$ direction towards the centre
		* Since the pendulum doesn't move radially this means that $mg\cos\theta = T$
		* Forces in the tangent direction is $mg\sin\theta$ without a counterbalancing force, so the tangential acceleration is $r\alpha = la_{\theta}$
		* $-mg\sin\theta = ml\diffn{2}{\theta}{t} \implies \diffn{2}{\theta}{t} + \frac{mg}{ml}\sin\theta = 0$ is the equation of motion for the simple pendulum
			* This would be the same equation as simple harmonic motion if the $\sin\theta$ was instead $\theta$
		* Behaviour is non harmonic if $\sin\theta$ is not close to $\theta$, when $\frac{\theta^3}{3!}$ is not negligible
			* Expanding this out the contribution is $\frac{\frac{\theta^3}{3!}}{\theta}$, so we want $\frac{\theta^2}{6} \ll 1$
	* In a physical pendulum in which the mass of the rod cannot be ignored, we can use $I$ instead of $m$ and now the gravitational force acts on the centre of mass of the entire rod-mass system
		* The torque applied is $mgl\sin\theta$ where $l$ is the distance of the centre of mass of the system from the pivot
		* For the physical pendulum $\sum \tau = -mgl\sin\theta = I\alpha_{\theta} = \diffn{2}{\theta}{t} + \frac{mgl\sin\theta}{I} = 0$
			* If $I = ml^2$ then this would be the same as the simple pendulum equation
	* Compare to simple harmonic motion $\diffn{2}{x}{t} + \omega^2x = 0$
	* Even for a spring, $F = -kx$ is only an approximation
* For any arbitrary (differentiable) potential we can always approximate its behaviour at minima using parabolas, which lead to simple harmonic motion

