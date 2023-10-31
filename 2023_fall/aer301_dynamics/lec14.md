# Lecture 14, Oct 24, 2023

## Virtual Work and D'Alembert's Principle

* Consider a grammar of particles in static equilibrium; we will have that $\uvec f_i = \uvec 0$; then for any small displacement $\delta\uvec r_i = 0$, so $\sum _i\uvec f_i \cdot \delta\uvec r_i = 0$
	* We define this quantity as the *virtual work* $\overarc{\delta W}$ (note the ligature since work is not path-independent)
	* We call $\delta\uvec r_i$ a *virtual displacement*
* In general we can write $\uvec f_i = \uvec f_{i,app} + \uvec f_{i,\ssquare}$, where $\uvec f_{i,app}$ is an applied force and $\uvec f_{i,\ssquare}$ is a constraint force
	* Then $\overarc{\delta W} = \sum _i\uvec f_{i,app} \cdot \delta\uvec r_i + \sum _i\uvec f_{i,\ssquare} \cdot \delta\uvec r_i = \sum _i\uvec f_{i,app} \cdot \delta\uvec r_i$ because constraint forces do no work, provided that the $\delta\uvec r_i$ are consistent with the geometry of the system
		* This is the *principle of virtual work* and is an assumption that we make
* What about particles in dynamic equilibrium?
	* $\uvec f_i = m\uvec r^\ddota$
	* So we just need to consider $\uvec f_i - m_i\uvec r_i^\ddota$ as the total force -- according to d'Alembert's principle
	* $\overarc{\delta W} = \sum _i (\uvec f_{i,app} - m_i\uvec r_i^\ddota) \cdot \delta\uvec r_i = 0$ by the same reasoning and assumptions above, as long as $\delta\uvec r_i$ is consistent with the system's constraints
		* This is known as *d'Alembert's principle* (again)
	* Note that since we no longer have to consider constraint forces we will drop the subscript

## Lagrangian Mechanics

* Consider an independent set of coordinates $q_1, q_2, \dots, q_n$ where $n$ is the number of degrees of freedom
	* The coordinates must be complete, i.e. satisfy $\uvec r_i = \uvec r_i(q_{11}, q_{12}, \dots, q_n, t)$; the position of any particle must be expressible in terms of the generalized coordinates
	* These coordinates are called *generalized coordinates*, because the do not have to be Cartesian; instead they can be displacements or angles etc
	* We aim to obtain equations of motions in these generalized coordinates only
* Any permissible virtual displacement can then be given in terms of these coordinates: $\delta\uvec r_i = \sum _k\pdiff{\uvec r_i}{q_k}{\delta q_k}$ -- in this form it is clear that the virtual displacements are permissible
	* Note that even though $\uvec r_i$ can be dependent on time, the virtual displacements $\delta\uvec r_i$ are "frozen" in time; this is why we don't need to consider $\pdiff{\uvec r_i}{t}$
* $\sum _i \uvec f_i \cdot \delta\uvec r_i - \sum _i m_i\uvec r_i^\ddota \cdot \delta\uvec r_i = 0$
	* $\sum \uvec f_i \cdot \delta\uvec r_i = \sum _i\sum _k \uvec f_i \cdot \pdiff{\uvec r_i}{q_k}\delta q_k = \sum _k Q_k\delta q_k$ where $Q_k = \sum _i\uvec f_i \cdot \pdiff{\uvec r_i}{q_k}$
		* $Q_k$ are referred to as the *generalized forces*
	* $\sum _i m_i\uvec r_i^\ddota \cdot \delta\uvec r_i = \sum _i\sum _j m_i\uvec r_i^\ddota \cdot \pdiff{\uvec r_i}{q_k}\delta q_k = \sum _i\sum _j \left[\diff{}{t}\left(m_i\uvec r_i^\dota \cdot \pdiff{\uvec r_i}{q_k}\right) - m_i\uvec r_i^\dota \cdot \diff{}{t}\left(\pdiff{\uvec r_i}{q_i}\right)\right]\delta q_k$
	* Note $\pdiff{\uvec r_i}{q_k} = \pdiff{\uvec v_i}{\dot q_k}$ and $\diff{}{t}\left(\pdiff{\uvec r_i}{q_k}\right) = \pdiff{\uvec v_i}{q_k}$ so the stuff in brackets becomes $\diff{}{t}\left(m_i\uvec v_i \cdot \pdiff{\uvec v_i}{\dot q_i}\right) - m_i\uvec v_i \cdot \pdiff{\uvec v_i}{q_k} = \diff{}{t}\left[\pdiff{}{\dot q_k}\left(\frac{1}{2}m_iv_i^2\right)\right] - \pdiff{}{q_k}\left(\frac{1}{2}m_i\uvec v_i \cdot \uvec v_i\right) = \pdiff{}{t}\left(\pdiff{}{\dot q_k}T_i\right) - \pdiff{}{q_k}T_i$
	* Together we have $\sum _k Q_k\delta q_k - \sum _k\left[\diff{}{t}\left(\pdiff{}{\dot q_k}\left(\sum _i T_i\right)\right) - \pdiff{}{q_k}\left(\sum _i T_i\right)\right]\delta q_k = 0$
	* $\sum _k\left[Q_k - \diff{}{t}\left(\pdiff{T}{\dot q_k}\right) + \pdiff{T}{q_k}\right]\delta q_k = 0$
	* Since $\delta q_k$ are all independent, we can choose each one independently and arbitrarily; therefore we need $Q_k\delta q_k - \diff{}{t}\left(\pdiff{T}{\dot q_k}\right) + \pdiff{T}{q_k} = 0$ for all $k$
* $\diff{}{t}\left(\pdiff{T}{\dot q_k}\right) + \pdiff{T}{q_k} = Q_k$
	* $Q_k = \sum _i \uvec f_i \cdot \pdiff{\uvec r_i}{q_k}$
	* Split the forces into conservative and non-conservative parts $\uvec f_i = -\del V_i + \uvec f_{i,\striangle}$
	* Then $Q_k = -\sum _i \del V_i\cdot\pdiff{\uvec r_i}{q_k} + \sum _i f_{i,\striangle} \cdot \pdiff{\uvec r_i}{q_k} = -\pdiff{V}{q_k} + Q_{k,\striangle}$
		* $Q_{k,\striangle}$ are the generalized non-conservative forces
	* Plugging this back in we get $\diff{}{t}\left(\pdiff{T}{\dot q_k}\right) + \pdiff{T}{q_k} = -\pdiff{V}{q_k} + Q_{k,\striangle}$
		* Assuming $V$ is a function of position only, $\pdiff{V}{\dot q_k} = 0$, so we have $\diff{}{t}\left(\pdiff{}{\dot q_k}(T - V)\right) + \pdiff{}{q_k}(T - V) = Q_{k,\striangle}$
	* Letting $L = T - V$, we get $\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} = Q_{k,\striangle}$
* $\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} = Q_{k,\striangle}$ is *Lagrange's equation* (aka the Euler-Lagrange equation)
	* $Q_{k,\striangle} = \sum _i \uvec f_{i,\striangle} \cdot \pdiff{\uvec r_i}{q_k}$ is the generalized non-conservative force
	* $L = T - V$ is the *Lagrangian*, the difference between the kinetic and potential energies (summed across all particles)
		* Note that when we take the partials with respect to $\dot q_k$ and $q_k$, we treat these two as independent
	* For a system with $n$ degrees of freedom, there are $n$ Lagrange's equations
	* If we have no non-conservative forces, then the equation equals zero
	* Lagrange's equation is equivalent to Newton's laws -- we can replace $\uvec f = m\uvec r^\ddota$ by this formulation to yield identical results
* Note that since we started with Newton's second law, this can only be applied in an inertial frame
	* There is a way around this by considering the potential to be velocity-dependent
* Example: pendulum with length $l$, mass $m$ and angle $\theta$
	* $q_1 = \theta$
	* $T = \frac{1}{2}m(l\dot\theta)^2 = \frac{1}{2}ml^2\dot\theta^2$
	* $V = -mg\cos\theta$ (gravity, with the pivot as reference height)
		* Note it doesn't matter what we take as the reference here because we always take the partial derivative of the Lagrangian, so constant factors in energy disappear as expected
	* Assume that there are no non-conservative forces
	* $\pdiff{L}{\dot\theta} = ml^2\dot\theta \implies \diff{}{t}\left(\pdiff{L}{\dot\theta}\right) = ml^2\ddot\theta$
	* $\pdiff{L}{\theta} = -mgl\sin\theta$
	* Plugging in, we get $ml^2\ddot\theta - (-mgl\sin\theta) = 0 \implies \ddot\theta + \frac{g}{l}\sin\theta = 0$, exactly what we get with Newtonian mechanics

