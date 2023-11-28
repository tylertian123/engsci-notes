# Lecture 9, Oct 5, 2023

## A Grammar (System) of Particles

* Consider a system of particles, $\mathcal P_i, \mathcal P_j, \dots$, with the reference points $O_\mathfrak{I}$, an inertially fixed reference point, $\com$, the centre-of-mass reference point, and $O$, an arbitrary reference point
	* Each particle has positions $\uvec r_i, \uvec r_j$ relative to $O_\mathfrak{I}$, $\uvec s_i, \uvec s_j$ relative to $\com$, masses $m_i, m_j$, external forces $\uvec f_{i,ext}, \uvec f_{j,ext}$ and forces between particles $\uvec f_i^j, \uvec f_j^i$
* We wish to extend the concepts of momentum and angular momentum to this grammar of particles
	* $\uvec p_i = m_i\uvec r_i^\dota = m_i\uvec v_i$
	* The total momentum is $\uvec p = \sum _i \uvec p_i = \sum _i m_i\uvec r_i^\dota$
	* $\uvec h_i = m_i\uvec r_i \times \uvec r_i^\dota = m_i\uvec r_i \times \uvec v_i = \uvec r_i \times \uvec p_i$
	* Total angular momentum is $\uvec h = \sum _i \uvec h_i = \sum _i m_i\uvec r_i \times \uvec r_i^\dota$
* The centre of mass is $\uvec r_\scom = \sum _i \frac{\dot m_i\uvec r_i}{m}$ where $m = \sum _i m_i$ is the total mass
	* Therefore $m\uvec r_\scom = \sum _i m_i\uvec r_i \implies m\uvec r_\scom^\dota = \sum _i m_i\uvec r_i^\dota = \uvec p$ which is the total momentum
	* We can therefore work with momentum as though all particles are concentrated at the center of mass
* $\uvec r_i = \uvec r_\scom + \uvec s_i \implies \uvec p = \sum _i m_i(\uvec r_\scom^\dota + \uvec s_i^\dota) = \sum _i m_i\uvec r_\scom^\dota + \sum _i m_i\uvec s_i^\dota = m\uvec r_\scom^\dota + \sum _i m_i\uvec s_i^\dota$
	* Therefore $\sum _i m_i\uvec s_i^\dota = \uvec 0$; for an observer at $\com$, the total momentum is zero
* What about forces?
	* $m_i\uvec r_i^\ddota = \uvec f_{i,ext} + \sum _j \uvec f_i^j$ assuming that $\uvec f_i^i = \uvec 0$
	* Summing over all forces, $\sum _i m_i\uvec r_i^\ddota = m\uvec r_\scom^\ddota = \sum _i \uvec f_{i,ext} + \sum _i\sum _j \uvec f_i^j$
		* The double sum becomes $\frac{1}{2}\sum _i\sum _j (\uvec f_i^j + \uvec f_i^j) = \frac{1}{2}\sum _i\sum _j (\uvec f_i^j - \uvec f_j^i)$ by Newton's third law
		* But since we are summing over all $i$ and $j$, $\frac{1}{2}\sum _i\sum _j (\uvec f_i^j - \uvec f_j^i) = \frac{1}{2}\sum _i\sum _j \uvec f_i^j - \frac{1}{2}\sum _i\sum _j\uvec f_j^i = \frac{1}{2}\sum _i\sum _j \uvec f_i^j - \frac{1}{2}\sum _i\sum _j\uvec f_i^j = \uvec 0$
	* Therefore $m\uvec r_\scom^\ddota = \uvec f$, which is Newton's second law on the center of mass -- we've extended the law from individual particles to systems of particles
* What about the rotational equations of motion?
	* $\uvec h_i^\dota = m_i\uvec r_i^\dota \times \uvec r_i^\dota + m_i\uvec r_i \times \uvec r_i^\ddota = m_i\uvec r_i \times \uvec r_i^\ddota = \uvec r_i \times \uvec f_i = \uvec r_i \times \left(\uvec f_{i,ext} + \sum _j f_i^j\right)$
	* So $\uvec h^\dota = \sum _i \uvec h_i^\dota = \sum _i \uvec r_i \times \uvec f_{i,ext} + \sum _i\sum _j \uvec r_i \times \uvec f_i^j = \uvec \tau + \sum _i\sum _j \uvec r_i \times \uvec f_i^j$
	* $\alignedeqntwo[t]{\sum _i\sum _j \uvec r_i \times \uvec f_i^j}{\frac{1}{2}\sum _i\sum _j (\uvec r_i \times \uvec f_i^j + \uvec r_i \times \uvec f_i^j)}{\frac{1}{2}\sum _i\sum _j (\uvec r_i \times \uvec f_i^j - \uvec r_i \times \uvec f_j^i)}{\frac{1}{2}\sum _i\sum _j (\uvec r_i \times f_i^j - \uvec r_j \times \uvec f_i^j)}{\frac{1}{2}\sum _i\sum _j (\uvec r_i - \uvec r_j) \times \uvec f_i^j}$
		* If we assume that $(\uvec r_i - \uvec r_j) \parallel \uvec f_i^j$, that is, the inter-particle forces act along the lines connecting two particles, then we can make this term zero
		* This additional assumption, that equal and opposite forces act along the line connecting two particles, is the *strong form* of Newton's third law
		* This is a reasonable assumption to make because otherwise two particles in a system would keep accelerating forever
	* Hence $\uvec h^\dota = \uvec\tau = \sum _i \uvec r_i \times \uvec f_{i,ext}$
	* Note this is not $\uvec h_\scom$, but angular momentum about the inertial reference point $O_\mathfrak{I}$
* $\uvec h_\scom = \sum _i s_i \times m_i(\uvec r_\scom^\dota + \uvec s_i^\dota) = \sum _i m_i\uvec s_i \times \uvec s_i^\dota + \left(\sum _i m_i\uvec s_i\right) \times \uvec r_\scom^\dota = \sum _i m_i\uvec s_i \times \uvec s_i^\dota$
	* $\uvec h_\scom^\dota = \sum _i\uvec s_i^\dota \times \uvec p_i + \sum _i \uvec s_i \times \uvec p_i^\dota = \sum _i \uvec s_i \times \uvec f_{i,ext} = \uvec\tau _\scom$
* So we have $\uvec h^\dota = \uvec \tau$ about $O_\mathfrak{I}$ and $\uvec h_\scom^\dota = \uvec\tau _\scom$ about $\com$
	* This is a special result that only olds for the center of mass!
	* In general $\uvec h_O^\dota + \uvec v_O \times \uvec p = \uvec\tau _O$ for a general $O$ moving at $\uvec v_O = {\uvec r^{OO_\mathfrak{I}}}^\dota$ with respect to $O_\mathfrak{I}$
		* In the inertially fixed point, $\uvec v_O = 0$
		* At the center of mass, $\uvec p = m\uvec r_\scom^\dota = m\uvec v_O$, so when we cross it with $\uvec v_O$, the term cancels
		* In both special frames we do not need to apply a correction
* What about work and kinetic energy?
	* $W_i = \int _A^B \uvec f_i \cdot \dd\uvec r_i$
	* $W = \sum _i W_i = \sum _i T_i^B - \sum _i T_i^A = T_B - T_A$ by the principle of work and kinetic energy
	* $T_i = \frac{1}{2}m_i\uvec v_i \cdot \uvec v_i = \frac{1}{2}m_i\uvec r_i^\dota \cdot \uvec r_i^\dota$ and $\uvec r_i^\dota = \uvec r_\scom^\dota + \uvec s_i^\dota$, so substituting in:
	* $\alignedeqntwo[t]{T}{\sum _i T_i}{\frac{1}{2}\sum _i m_i(\uvec r_\scom^\dota \cdot \uvec r_\scom^\dota + 2\uvec s_i^\dota \cdot \uvec r_\scom^\dota + \uvec s_i^\dota \cdot \uvec s_i^\dota)}{\frac{1}{2}mv_\scom^2 + \left(\sum _i m_i\uvec s_i^\dota\right)\cdot \uvec v_\scom + \frac{1}{2}\sum _i m_i\uvec s_i^\dota \cdot \uvec s_i^\dota}{\frac{1}{2}mv_\scom^2 + \frac{1}{2}\sum _i m_iu_i^2}$
	* So the total kinetic energy is the kinetic energy as if all the mass is at the center of mass, plus the kinetic energy of all the particles relative to the center of mass
	* If we have a rigid body in translation, all $u_i = 0$, so the kinetic energy is just the same as if the mass is concentrated at the center of mass
		* Note this does not apply in rotation -- in that case the second term would result in rotational kinetic energy

## D'Alembert's Principle

* Let $\uvec\rho _i$ be the position of particle $i$ with respect to $O$, an arbitrary, possibly accelerating reference point, so $\uvec r_i = \uvec r^{OO_\mathfrak{I}} + \uvec\rho _i$
* $m\uvec \rho_\scom^\ddota = \uvec f \implies m({\uvec r^{OO_\mathfrak{I}}}^\ddota + \uvec \rho_\scom^\ddota) = \uvec f$
* Let ${\uvec r^{OO_\mathfrak{I}}}^\ddota = \uvec a_O$ be the acceleration of $O$ with respect to $O_\mathfrak{I}$; then $m\uvec \rho _\scom^\ddota = \uvec f - m\uvec a_O$
	* Note we've made Newton's second law work by applying a "reversed inertial force"
	* This is the essence of d'Alembert's Principle -- the ability to transform ourselves into a noninertial frame but still use Newton's second law

