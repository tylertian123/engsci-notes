# Lecture 12, Oct 6, 2021

## Preferred Reference Frames (Centre of Momentum)

* Recall that from the previous lecture that for two observers in inertial reference frames, all physics remains the same
* Try to find an inertial reference frame where total momentum is 0
* Consider 3 objects of mass 1, 2, 3kg moving at 1, 2, 3m/s from frame $A$
	* $p_A = m_1v_1 + m_2v_2 + m_3v_3$
	* $p_F = m_1(v_1 - v_{AF}) + m_2(v_2 - v_{AF}) + m_3(v_3 - v_{AF})$ which is a linear function of $v_{AF}$
		* At some value of $v_{AF} = v_{AZ}$, $p_F = 0$; how do we calculate this value?
	* $p_A = \sum m_iv_i \to p_Z = \sum m_i(v_i - v_z) = \sum m_iv_i - \sum m_iv_z = \sum m_iv_i - v_zM_{tot}$
	* $p_{tot} = 0 \implies v_z = \frac{\sum m_iv_i}{M_{tot}} = \frac{p_A}{M_{tot}}$
	* Note here $v_z$ is relative to $A$
	* Akin to a weighted average for centre of gravity

## Centre of Mass

* If we integrate our expression for $v_z$, we get the mass-weighted average position, i.e. the center of mass
* The centre-of-mass velocity $\vec{v}_{cm}$ is exactly the velocity of the zero-momentum reference frame
* When measured from a reference frame moving the same velocity as the centre of mass of the system, the system's total momentum is 0
* During a collision, the momentum of the system and thus the zero-momentum reference frame velocity does not change, and so the velocity of the centre of mass of the system does not change

## Kinetic Energy in Different Inertial Frames

* $K_A = \sum \frac{1}{2}m_iv_i^2$
* $K_F = \sum \frac{1}{2}m_i(v_i - v_F)^2 = \frac{1}{2}\sum m_iv_i^2 - \sum m_iv_iv_F + \frac{1}{2}m_iv_F^2 = K_A - M_{tot}v_zv_F + \frac{1}{2}M_{tot}v_F^2$
* $\frac{M}{2}(v_F - v_z)^2 = \frac{M}{2}v_F^2 - Mv_Fv_z + \frac{M}{2}Mv_F^2$
* $K_{min}$ is the kinetic energy as observed at $v_z$, the centre of momentum frame; all other observers see more kinetic energy
* In summary, in the frame moving at $v_{AF} = v_{cm}$, the centre of mass is stationary, the total momentum remains zero, and the kinetic energy is minimized
* What is the physical significance of $K_{cm}$?
	* All kinetic energy from $K_i$ is converted to some $\Delta E_{int}$
	* $\Delta E_{int} = K_i$ for $e = 0$ in the $z$-frame
	* In a totally inelastic collision the two objects stick together, and if observed at the center of momentum this means they both stop
	* In the center of momentum frame $K_{min}$ goes all the way to zero, but in all other frames there is some kinetic energy left over

## Convertible Kinetic Energy (Textbook)

* For a system of objects, the kinetic energy as measured in the Earth reference frame is $K_E$
* $K_E = \frac{1}{2}\sum m_iv_i^2 = \frac{1}{2}\sum m_i(v_{cm} + v_{Zi}) = \frac{1}{2}v_{cm}^2\sum m_i + v_{cm}\sum m_iv_{Zi} + \frac{1}{2}\sum m_iv_{Zi}^2$
	* From the definition of the zero-momentum reference frame we know that $\sum m_iv_{Zi} = \sum p_{Zi} = 0$ so the middle term disappears
	* $\frac{1}{2}\sum m_iv_{Zi}^2$ is just the sum of all kinetic energies as observed in the zero-momentum reference frame $K_Z$
	* If we substitute $m = \sum m_i$ we get $K_E = \frac{1}{2}mv_{cm}^2 + K_Z$
	* The $\frac{1}{2}mv_{cm}^2$ term is the kinetic energy associated with the motion of the center of mass of the system $K_{cm}$
		* For an isolated system, $K_{cm}$ is *nonconvertible*, i.e. cannot be converted into internal energy, because it is needed to preserve conservation of momentum; recall how the velocity of the centre of mass of a system does not change after a collision
	* The $K_Z$ term is the system's *convertible kinetic energy* $K_{conv}$, which can be converted into internal energy while conserving the momentum of the system
* Therefore we have $K = K_{conv} + K_{cm}$, where $K_{conv} = \frac{1}{2}\sum m_iv_i - \frac{1}{2}mv_{cm}^2$ and this holds in any inertial reference frame; i.e. the kinetic energy of any system can be split into a convertible and a nonconvertible part
* We can also express $K_{conv} = \frac{1}{2}\mu v_{12}^2$, where $\mu$ is the *reduced inertia/mass*
* In a totally inelastic collision, all the convertible kinetic energy is converted into internal energy, but the system has to retain its nonconvertible kinetic energy $K_{cm}$ to maintain momentum conservation

