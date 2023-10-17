# Lecture 10, Oct 10, 2023

## D'Alembert's Principle

* Consider an inertially fixed point $O_\mathfrak{I}$, an inertially moving point $O$ and a grammar of particles $\mathcal P_i$, with positions $\uvec r_i$ relative to $O_\mathfrak{I}$ and $\uvec\rho _i$ relative to $O$
* How can we accommodate Newton's second law in a noninertial frame?
* $\uvec r_i = \uvec r^{O\mathfrak{I}} + \uvec\rho _i$
* The equations of motion are $m_i\uvec r_i^\ddota = \uvec f_{i,ext} + \sum _j \uvec f_i^j = m_i(\uvec\rho _i^\ddota + {\uvec r^{O\mathfrak{I}}}^\ddota)$
	* Let $\uvec a_O = {\uvec r^{O\mathfrak{I}}}^\ddota$ which is the acceleration of $O$ with respect to $O_\mathfrak{I}$
	* $m_i\uvec \rho _i^{\ddota} = \uvec f_{i,ext} + \sum _i \uvec f_i^j - m_i\uvec a_O$
	* Therefore $m\uvec\rho _\scom^\ddota = \uvec f - m\uvec a_O$
	* Let $\uvec\pi _i = m_i\uvec\rho _i^\dota$ be the momentum as seen in $O$
	* $\uvec\pi = m\rho _\scom^\dota$
	* Therefore $\uvec\pi^\dota = \uvec f - m\uvec a_O$
	* Notice that the rate of change momentum as observed in $O$ is the total force, plus a reversed inertial force
* For the angular momentum: $\uvec\eta _i = \uvec\rho _i \times \uvec \pi _i$
	* The total momentum is then $\uvec\eta _0 = \sum _i m_i\uvec\rho _i \times \uvec \rho _i^\dota$
	* $\uvec\eta _0^\dota = \sum _i\uvec\rho _i \times (m_i \uvec\rho _i^\ddota) = \sum _i \uvec\rho _i \times \left(\uvec f_{i,ext} + \sum _j \uvec f_i^j - m_i\uvec a_O\right)$
	* $\uvec\eta _0^\dota = \uvec\tau _O - \left(\sum _i m_i\uvec \rho _i\right) \times \uvec a_O = \uvec\tau _O - m\uvec\rho _{\scom} \times \vec a_O = \uvec\tau _O + \uvec\rho _{\scom} \times (-m\uvec a_O)$

\noteDefn{D'Alembert's principle: The classical laws of mechanics can be applied in a linearly accelerating frame if reversed inertial forces are applied to the center of mass of a grammar of particles.}

## The Rocket Problem

* Consider a rocket with mass $m$ moving at velocity $\uvec v$; if $\uvec f = \uvec p^\dota$, then do we have $\uvec f = \dot m\uvec v + m\uvec v^\dota$, since the mass is changing for the rocket?
	* The problem is that we failed to consider the part of the mass that was ejected
* At time $t$, the rocket has mass $m$ and velocity $\uvec v$; at time $t + \dt$, the rocket has mass $m + \dd m$ and velocity $\uvec v + \dd\uvec v$, where $-\dd m$ is the amount of mass that was ejected at a velocity $\uvec v + \uvec v_{ex}$
* $\uvec f = \diff{\uvec p}{t} \implies \dd\uvec p = \uvec f\,\dt = \uvec p(t + \dt) - \uvec p(t)$
	* $\uvec p(t) = m\uvec v$
	* $\uvec p(t + \dt) = (m + \dd m)(\uvec v + \dd\uvec v) + (-\dd m)(\uvec v + \uvec v_{ex})$
	* Under a first order approximation, this reduces to $\dd\uvec p = m\dd\uvec v - \uvec v_{ex}\dd m = \uvec f\,\dt$
	* Therefore $m\diff{\uvec v}{t} - \uvec v_{ex}\diff{m}{t} = \uvec f \implies m\uvec v^\dota = \uvec f + \dot m\uvec v_{ex}$
* Comparing this result to what we have before, the difference is that instead of $-\uvec v_{ex}$, in our first incorrect result we had $\uvec v$
* Example: consider an open-top railway car with mass $m_0$ and velocity $v_0$, which is collecting rain at a rate $\dot m$; what is the velocity of the car after a given time, where an amount of rain $m$ has fallen?
	* Suppose there is an amount of water $m$ in the car at time $t$, then $p(t) = (m_0 + m)v$ and $p(t + \dt) = (m_0 + m + \dd m)(v + \dv)$
	* Since the rain is falling vertically, $p(t) = p(t + \dt) \implies (m_0 + m)v = (m_0 + m + \dd m)(v + \dv)$
	* $v\,\dd m + (m_0 + m)\dv = 0 \implies \frac{\dd v}{v} = -\frac{\dd m}{m_0 + m}$ with initial conditions $m = 0, v = v_0$ at $t = 0$
	* Integrating both sides: $\ln \frac{v}{v_0} = -\ln\frac{m_0 + m}{m_0} \implies v = v_0\frac{m}{m_0 + m} \implies (m_0 + m)v = m_0v_0$
* Example: if the car is dripping so that the water level stays the same, what is the velocity now?
	* $p(t) = m_0v$
	* $p(t + \dt) = m_0(v + \dv) + (v + \dv)\dd m$ where $-\dd m$ is the amount of water falling out
	* Again $p(t + \dt) - p(t) = 0 \implies m_0\,\dv + v\,\dd m = 0 \implies \frac{\dv}{v} = -\frac{\dd m}{m_0} \implies \ln\frac{v}{v_0} = -\frac{m}{m_0} \implies v = v_0e^{-\frac{m}{m_0}}$

