# Lecture 26, Mar 18, 2022

## Initial Value Problems

* Using relationships like Newton's second law and relationship between angular momentum and torque to calculate the motion of objects
* Example: Confinement of a hot plasma by a magnetic field for fusion energy
	* Mean speed in a thermal distribution is about $v_{th} = \sqrt{\frac{kT}{m}}$ where $k = \num{1.4e-23}$ is the Boltzmann constant and temperature is on the order of $\SI{10e8}{K}$, $m_{ion} = \SI{1.6e-27}{kg}, m_e = \SI{9.1e-31}{kg}$
		* At this temperature hydrogen nuclei are moving at about $\SI{1e6}{m/s}$ while electrons move at $\SI{3e7}{m/s}$ and start experiencing relativistic effects
		* We need to constrain the nuclei so it doesn't just fly off
			* To do this, a magnetic bottle is used (Tokamak)
* Charged particles in a magnetic field experiences $\vec F = q\vec E$ from the electric field and $\vec F = q\vec v \times \vec B$ from the magnetic field (Lorentz force)
	* Note that the magnetic field only has an impact when the particle is moving, and that the direction of the magnetic force is perpendicular to both the velocity and the field
	* Assume we have no electric field and orient the constant magnetic field along the $z$ axis, so that $\vec B = B_0\khat$
		* Strength of the magnetic field for fusion is about $10\si{T}$ over a large volume, which requires superconducting coils
	* $\vec F = m\vec v' = qB_0\vec v \times \vec k \implies \vec v' = \omega _L\vec v \times \khat$ where $\omega _L \equiv \frac{qB_0}{m}$
	* Let $\vec v(t) = v_x(t)\ihat + v_y(t)\jhat + v_2(t)\khat$
	* $v_x'\ihat + v_y'\jhat + v_z'\khat = \omega _Lv_y\ihat - \omega _Lv_x\jhat \implies \threepiece{v_x'(t) = \omega _Lv_y(t)}{v_y'(t) = -\omega _Lv_x(t)}{v_z'(t) = 0}$
		* We have a system of coupled differential equations
	* In the $z$ direction, $v_z$ is a constant since $v_z' = 0$
		* A particle moving in the same direction of the magnetic field is unaffected by the field
	* In the $x$ direction, $v_x'' = \omega _Lv_y' = -\omega _L^2v_x$, so the solution is $v_x(t) = A\sin(\omega _Lt + \phi)$
	* In the $y$ direction, $v_y = \frac{1}{w_L}v_x' \implies v_y(t) = A\cos(\omega _Lt + \phi)$
	* Thus $\vec v(t) = A\sin(\omega _Lt + \phi)\ihat + A\cos(\omega _L t + \phi)\jhat + c\khat$
	* $\vec r(t) = \left(-\frac{A}{\omega _L}\cos(\omega _Lt + \phi) + D_x\right)\ihat + \left(\frac{A}{\omega _L}\sin(\omega _L + \phi) + D_y\right)\jhat + \left(ct + D_z\right)\khat$
		* Set $\phi = D_x = D_y = D_z = 0 \implies \vec r(t) = -r_L\cos(\omega _Lt)\ihat + r_L\sin(\omega _Lt + \jhat) + ct\khat$ where $r_L = \frac{A}{\omega _L}$
		* This is a circular helix
	* $\omega _L$ is known as the gyro frequency or Larmor frequency; for electrons about $\SI{1e13}{Hz}$ (microwaves) for electrons or $\SI{6e9}{Hz}$ for ions (radio waves)
		* This gives us a mechanism for heating up the plasma as $\omega _L$ is a natural resonant frequency for all the particles
* The particle is unconstrained in the direction of the magnetic field, which is problematic -- we try to get around this by making the magnetic field a torus
	* However, the magnetic field is no longer uniform, and there are now electric fields
* Consider constant magnetic field pointing out of the page and constant electric field pointing up and a stationary particle
	* Initially, the magnetic field has no affect, but the electric field still moves the particle
	* The particle starts moving in the direction of the electric field (up), but now the magnetic field has an effect and causes it to turn right
	* As the particle turns, it starts to move against the electric field and lose energy
	* Eventually the particle ends up in the same vertical position as where it started, as it loses all kinetic energy to the electric field, and the cycle repeats
* Let $\vec B = (0, 0, B_z), \vec E = (0, E_y, 0)$
	* $v_x'(t) = \omega _Lv_y(t)$ and $v_z'(t) = 0$ remains unchanged
	* $v_y'(t) = -\omega _Lv_x(t) + \frac{qE_y}{m}$ with an additional electric force component
	* Uncoupling these and solving we get $\threepiece{v_x = v_\perp\sin(\omega t) + \frac{E_y}{B_z}}{v_y = v_\perp\cos(\omega t)}{v_t = c}$
		* The additional $v_D = \frac{E_y}{B_z}$ is known as the *drift velocity*, causing a constant motion in the $x$ direction
		* In the general case, $\vec v_D = \frac{\vec E \times \vec B}{B^2}$
		* The drift velocity has no dependence on charge or mass; all particles in the plasma move at the same speed

