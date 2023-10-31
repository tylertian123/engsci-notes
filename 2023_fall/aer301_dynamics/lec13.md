# Lecture 13, Oct 19, 2023

## Perturbation Theory

* Perturbation theory deals with the changes in a function (e.g. an orbit) resulting from a small change
* Let $x(t) = x_0(t) + \Delta x(t)$, where $x(t)$ is some nominal solution and $\Delta x(t)$ is some small disturbance; our goal is to get the response $f(x)$ in terms of $\Delta x$ only, since we might not have a closed-form expression for $f$
* Recall the equations of motion: $\twopiece{f_1(r, \dot r, \ddot r, \omega, \dot\omega) = \ddot r - r\omega^2 = -\frac{\mu}{r^2}}{f_2(r, \dot r, \ddot r, \omega, \dot\omega) = r\dot\omega + 2\dot r\omega = 0}$
* Take some some nominal/reference solutions $r_0(t), \omega _0(t)$ so that $\twopiece{r(t) = r_0(t) + \Delta r(t)}{\omega(t) = \omega _0(t) + \Delta\omega(t)}$
* Consider a satellite in orbit; we fire thrusters such that at time $t = 0$, we have an instantaneous increase in velocity $\Delta v$ tangential to the orbit
	* The resulting orbit will be slightly elliptical
* Plug in reference solution to first equation: $(\ddot r_0 + \Delta\ddot r) - (r_0\Delta r)(\omega _0 + \Delta\omega)^2 = -\frac{\mu}{(r_0 + \Delta r)^2}$
	* Expand and ignore all terms second order and above
	* $(\ddot r_0 + \Delta\ddot r) - r_0\omega _0^2 + 2r_0\omega _0\Delta\omega + \omega _0^2\Delta r = -\frac{\mu}{r_0^2\left(1 + \frac{\Delta r}{r_0}\right)} = -\frac{\mu}{r_0^2}\left(1 - 2\frac{\Delta r}{r_0}\right)$
	* $\ddot r_0 - r_0\omega _0^2 + \Delta\ddot r - 2r_0\omega _0\Delta\omega - \omega _0^2\Delta r = -\frac{\mu}{r_0^2} + 2\frac{\mu}{r_0^3}\Delta r$
	* Compare this with the equation of motion, we can subtract $\ddot r_0 - r_0\omega _0^2 = -\frac{\mu}{r_0^2}$ from both sides
	* $\Delta\ddot r - 2r_0\omega _0\Delta\omega - 3\omega _0^2\Delta r = 0$
* The second equation gives $r_0\Delta\dot\omega + 2\omega _0\Delta\dot r = 0$, with initial conditions $\Delta r(0) = 0, \Delta\dot r(0) = 0, \Delta\omega(0) = \frac{\Delta v}{r_0}$
	* Integrate directly: $r_0\Delta\omega + 2\omega _0\Delta r = C = \Delta v$
	* The first equation becomes: $\Delta\ddot r + 4\omega _0^2\Delta r - 3\omega _0^2\Delta r = 2\omega _0\Delta v$
	* $\Delta\ddot r + \omega _0^2\Delta r = 2\omega _0\Delta v$
	* Particular solution: $\Delta r(t) = \frac{2\Delta v}{\omega _0}$
	* Homogeneous solution: $c_1\cos(\omega _0 t) + c_2\sin(\omega _0 t)$
	* Solve for initial conditions: $\Delta r(t) = \frac{2\Delta v}{\omega _0}(1 - \cos(\omega _0 t))$
* The resulting orbit is slightly elliptical, and at $t = 0$ we're at the point on the ellipse closest to the focus

## Gravity Boosting/Braking

* Consider a body with velocity $\uvec v_p$; a spacecraft of velocity $\uvec v_s^-$ approaches it from far away, and we want to know the velocity of the spacecraft $\uvec v_s^+$ after escaping the planet's gravity
* Shift into the planet's reference frame; the velocity of the spacecraft in this frame is $\uvec u_s^- = -\uvec v_p + \uvec v_s^-$
* Since the spacecraft is coming from infinity, the orbital shape is effectively hyperbolic
	* The spacecraft will be entering and leaving with the same magnitude of velocity in the planet's frame, $\norm{\uvec u_s^-} = \norm{\uvec u_s^+}$
* If we now shift into the sun's reference frame, the spacecraft leaves with velocity $\uvec v_s^+ = \uvec u_s^+ + \uvec v_p$
	* Depending on the direction that the vectors are arranged, $\uvec v_s^+$ can be much faster or slower than $\uvec v_s^-$
	* If the spacecraft passes behind the planet, it will speed up; if it passes in front of the planet, it will slow down
* This is called gravity boosting or braking (aka the slingshot effect)

## Example Problem

* Given that the orbital shape of a body is $r = a\sqrt{\cos 2\theta}$, show that in order to create this orbital shape, the force satisfies $f \propto \frac{1}{r^7}$
* For a general central force we have $\twopiece{\ddot r - r\dot\theta^2 = \frac{f}{m}}{r\ddot\theta + 2\dot r\dot\theta = 0}$
* Now we can simply substitute in $r$: $\twopiece{\dot r = -\frac{a\dot\theta\sin 2\theta}{\sqrt{\cos 2\theta}}}{\ddot r = -\frac{a\ddot\theta\sin2\theta}{\sqrt{\cos2\theta}} - \frac{a\dot\theta\sin2\theta}{\cos^\frac{3}{2}2\theta} - 2a\dot\theta^2\sqrt{\cos2\theta}}$
	* Using the second equation, $\dot\theta = \frac{h}{r^2}$ and $\ddot\theta = -\frac{2h}{r^3}\dot r = \frac{2\dot\theta^2\sin2\theta}{\cos2\theta}$
	* This allows us to express everything in terms of $r$ in the first equation

