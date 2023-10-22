# Lecture 12, Oct 17, 2023

## Recovering Kepler's Laws

* Using Newton's law of gravitation, we will attempt to recover Kepler's 3 laws
* Consider a grammar of 2 particles $a$ and $b$; the particles have positions $\uvec r_a$ and $\uvec r_b$ relative to the center of mass; let $\uvec r = \uvec r_a - \uvec r_b$ be the vector connecting the two particles
	* Since we have no external forces acting on the system, $m\uvec r_\com^\ddota = \uvec f_{ext} = \uvec 0$, so $\com$ is not accelerating with respect to inertial frame, i.e. the $\com$ frame is an inertial frame
* $\uvec f_a^b = -\frac{Gm_am_b}{r^3}\uvec r$ but also $\uvec f_a^b = m_a\uvec r_a^\ddota, \uvec f_b^a = m_b\uvec r_b^\ddota = -\uvec f_a^b$
	* $\uvec r^\ddota = \uvec r_a^\ddota - \uvec r_b^\ddota = \frac{1}{m_a}\uvec f_a^b - \frac{1}{m_b}\uvec f_b^a$
	* Using this we get $\uvec r^\ddota = -\frac{\mu}{r^3}\uvec r$ where $\mu = G(m_a + m_b)$
* Therefore the relative motion of the bodies is given by $\uvec r^\ddota = -\frac{\mu}{r^3}\uvec r$
	* This means instead of the motion of two bodies, we can fix $b$ and consider the relative motion of $a$, with its mass replaced by the reduced mass $m = \frac{m_am_b}{m_a + m_b}$
* Consider the total angular momentum (about the centre of mass) $\uvec h = m_a\uvec r_a \times \uvec r_a^\dota + m_b\uvec r_b \times \uvec r_b^\dota$
	* $\uvec h^\dota = m_a\uvec r_a \times \uvec r_a^\ddota + m_b\uvec r_b \times \uvec r_b^\ddota$ (product rule terms cancel)
	* $\uvec h^\dota = \uvec r_a \times \uvec f_a^b + \uvec r_b \times \uvec f_b^a = \uvec r_a \times (k\uvec r) + \uvec r_b \times (k\uvec r) = 0$
	* Note this is just conservation of angular momentum
* $\uvec r \cdot \uvec h = m_a\uvec r \cdot (\uvec r_a \times \uvec r_a^\dota) + m_b\uvec r \times (\uvec r_b \times \uvec r_b^\dota) = 0$
	* Note that $\uvec r_a \times \uvec r_a^\dota$ is normal to $\uvec r_a$, which is parallel to $\uvec r$; therefore the dot product with $\uvec r$ is zero for both terms
	* Therefore $\uvec r$ is always normal to $\uvec h$, but $\uvec h$ is constant, so $\uvec r$ is always in some fixed plane, so now we can reduce the problem down to 2 dimensions
* Since the motion is 2-dimensional, we will use polar coordinates $(r, \theta)$ to express $\uvec r$
* Let the (noninertial) orbital frame $\vcx F_o$ such that $\uvec o_1$ is in the same direction as the vector connecting the two masses and $\uvec o_2$ is in the plane of motion of $\uvec r$
	* $\uvec r = \vcx F_o^T\cvec{r}{0}{0}, \uvec\omega = \vcx F_o^T\cvec{0}{0}{\dot\theta}$
	* $\uvec r^\ddota = \uvec r^\ddotb + 2\uvec\omega \times \uvec r^\dotb + \uvec\omega^\dotb \times \uvec r + \uvec\omega \times (\uvec\omega \times \uvec r) = -\frac{\mu}{r^3}\uvec r$
	* We can now expand this out in the orbital frame and obtain the equations of motion
* $\twopiece{\ddot r - r\dot\theta^2 = -\frac{\mu}{r^2}}{r\ddot\theta + 2\dot r\dot\theta = 0}$ are the 2-body orbital equations of motion
	* Note the multiplying the second equation by $r$ and integrating gives $\diff{}{t}\left(r^2\dot\theta\right) = 0$, which corresponds to conservation of angular momentum (ignoring mass) ($r\dot\theta$ being the tangential velocity, with moment arm $r$)
	* This can be solved by making the substitution $r = \frac{1}{u}$, which we leave as an exercise to the reader
* We can also solve the equation of motion using vectors:
	* Starting with the equation of motion, we can cross both sides with $\uvec h$
	* $\uvec r^\ddota \times \uvec h = -\frac{\mu}{r^3}\uvec r \times \uvec h$
	* $\diff{}{t}(\uvec r^\dota \times \uvec h) = -\frac{\mu}{r^3}\uvec r \times (\uvec r \times \uvec r^\dota) = -\frac{\mu}{r^3}((\uvec r \cdot \uvec r^\dota)\uvec r - (\uvec r \cdot \uvec r)\uvec r^\dota) = -\frac{\mu}{r_3}(r\dot r\uvec r - \uvec r^2\uvec r^\dota) = -\mu\left(\frac{\dot r}{r^2}\uvec r - \frac{1}{r}\uvec r^\dota\right) = \mu\diff{}{t}\left(\frac{\uvec r}{r}\right)$
		* Note $\uvec u \times (\uvec v\times \uvec w) = (\uvec v \cdot \uvec w)\uvec v - (\uvec u \cdot \uvec v)\uvec w$
		* $r\dot r = \frac{1}{2}\diff{}{t}r^2 + = \frac{2}{2}\diff{}{t}(\uvec r \cdot \uvec r) = \frac{1}{2}(\uvec r^\dota \cdot \uvec r + \uvec r \cdot \uvec r^\dota) = \uvec r \cdot \uvec r^\dota$
	* $\uvec r^\dota \times \uvec h = \mu\left(\frac{\uvec r}{r} + \uvec\varepsilon\right)$
	* $\uvec r \cdot \uvec r^\dota \times \uvec h = \mu(r + \uvec r \cdot \uvec\varepsilon) = \mu(r + \norm{\uvec r}\norm{\uvec\varepsilon}\cos\theta) = \mu r(1 + \varepsilon\cos\theta)$
	* $\uvec h \times (\uvec r \times \uvec r^\dota) = \uvec h \cdot \uvec h = h^2$
	* $h^2 = \mu r(1 + \varepsilon\cos\theta)$ or $r = \frac{\frac{h^2}{\mu}}{1 + \varepsilon\cos\theta}$
* $r = \frac{\frac{h^2}{\mu}}{1 + \varepsilon\cos\theta}$ is the shape of the orbit, which describes a general conic section (ellipse, parabola, hyperbola)
	* $\varepsilon$ is the *eccentricity* of the conic section, $\varepsilon = 0$ gives a circle, $0 < \varepsilon < 1$ gives an ellipse, $\varepsilon = 1$ gives a parabola, $1 < \varepsilon$ gives a hyperbola
	* This gives us Kepler's first law
	* But also, we know that orbits can also be parabolas or hyperbolas
	* If we took the energy $e = \frac{1}{2}v^2 - \frac{\mu}{r}$ we can express everything in terms of it
* If between time $t$ and $t + \dt$ the mass travelled an angle $\dtheta$, then the area swept out is $\dA = \frac{1}{2}r^2\,\dtheta$
	* $\diff{A}{t} = \frac{1}{2}r^2\diff{\theta}{t} = \frac{1}{2}r^2\dot\theta = \frac{1}{2}h$, but we know this is constant from earlier
	* This gives us Kepler's second law
* $t = \sqrt{\frac{a^3}{\mu}}(E - \varepsilon\sin  E)$
	* The period is $T = 2\pi\sqrt{\frac{a^3}{\mu}}$
	* This is Kepler's third law

