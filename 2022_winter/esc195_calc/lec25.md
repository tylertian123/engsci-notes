# Lecture 25, Mar 15, 2022

## Motion in Space: Velocity and Acceleration

* Interpret $\vec r(t)$ as the location, then $\vec r'(t) = \vec v(t)$ is the velocity and $\vec r''(t) = \vec a(t)$ is the acceleration and $\diff{s}{t} = \norm*{\vec r'(t)}$ is the speed
* For circular motion around the origin $\vec r(t) = a\cos(\theta(t))\ihat + a\sin(\theta(t))\jhat$
	* $\theta'$ is the rate of change of the angle, so $\theta' > 0$ is a counterclockwise movement
	* Define $\theta'$ as the *angular velocity* in radians per second; $\abs{\theta'}$ is the *angular speed*
		* Note $\theta'$ is essentially a scalar property but with a sign
	* If $\theta' = \omega$ then $\alignedimp[t]{\theta = \omega t}{\vec r = r\cos(\omega t)\ihat + r\sin(\omega t)\jhat}{\vec v = -r\omega\sin(\omega t)\ihat + r\omega\cos(\omega t)\jhat}{\vec a = -r\omega^2\cos(\omega t)\ihat - r\omega^2\sin(\omega t)\jhat = -\omega^2\vec r}$

## Vector Mechanics

* Newton's second law: $\vec F(t) = m\vec a(t)$
* Momentum: $\vec p(t) = m\vec r'(t)$ and $\vec p'(t) = \vec F(t)$
* Conservation of momentum: $\vec p' = \vec F = 0 \implies \vec p$ is constant
* Angular momentum: $\vec L \equiv \vec r \times \vec p = m\vec r \times \vec v$ where $\vec r$ is the radius vector
	* $\norm*{\vec L} = m\norm*{\vec r}\norm*{\vec v}\sin(\theta(t))$ where $\theta$ is the angle between $\vec v$ and $\vec r$
	* We can break up $\vec v = \vec v_\perp + \vec v_\parallel$ (directions perpendicular and parallel to $\vec r$)
	* $\vec L = m\vec r \times \vec v = m\vec r \times (\vec v_\perp + \vec v_\parallel) = m\vec r \times \vec v_\perp$ since $\vec r \times \vec v_\parallel = 0$
	* Angular momentum only cares about the component of $\vec v$ perpendicular to $\vec r$
* Example: $\vec r(t) = r\cos(\omega t)\ihat + r\sin(\omega t)\jhat$
	* $\vec L = m\vec r \times \vec v = m(0, 0, r^2\omega\cos^2(\omega t) + r^2\omega\sin^2(\omega t)) = (0, 0, mr^2\omega)$
* Example: Uniform motion in a straight line
	* $\vec r = \vec r_0 + t\vec v$
	* $\vec L = m\vec r \times \vec v = m(\vec r_0 + t\vec v) \times \vec v = m\vec r_0 \times \vec v$ which is a constant assuming $\vec v$ is constant
	* Uniform motion in a straight line has a constant angular momentum
* Torque: $\vec L' = m\vec r \times \vec r'' + m\vec r' \times \vec r' = \vec r \times \vec F \equiv \vec \tau$
* Central force: Definition: $\vec F$ is a *central* or *radial force* if $\vec F(t)$ is always parallel to $\vec r$
	* Example: gravity, electric field associated with a point charge
	* $\vec r \times \vec F = 0 \implies \tau = 0 \implies \vec L$ is constant
	* Angular momentum is conserved when only a central force is present

## Acceleration

* Break apart acceleration $\vec a = \vec a_n + \vec a_t$ (normal and tangential directions)
* $\vec T = \frac{\diff{\vec r}{t}}{\norm*{\diff{\vec r}{t}}} = \frac{\vec v}{\diff{s}{t}} \implies \vec v = \diff{s}{t}\vec T$
	* Differentiating, we get $\vec v' = \vec a = \diffn{2}{s}{t}\vec T + \diff{s}{t}\diff{\vec T}{t}$
	* Note $\diff{\vec T}{t} = \norm*{\diff{\vec T}{t}}\vec N$ and $\kappa = \frac{\norm*{\diff{\vec T}{t}}}{\abs*{\diff{s}{t}}}$
	* $\vec a = \diffn{2}{s}{t}\vec T + \kappa\left(\diff{s}{t}\right)^2\vec N$
		* The first term is $\vec a_t$, the tangential component, the second is $\vec a_n$, the normal component
* $\norm*{\vec a_t} = \diffn{2}{s}{t}$ which is the rate of change of speed in the direction of motion
	* Example: uniform circular motion with $\diff{s}{t}$ equal to a constant so $\norm*{\vec a_t} = \diffn{2}{s}{t} = 0$ so there is no tangential acceleration
* $\norm*{\vec a_n} = \kappa\left(\diff{s}{t}\right)^2$ directed perpendicular to the tangent, in the direction of curvature
	* Alternatively $\norm*{\vec a_n} = \frac{\norm{\vec v}^2}{\rho}$ where $\rho = \frac{1}{\kappa}$ is the radius of curvature

