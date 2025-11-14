# Lecture 26, Nov 12, 2025

## Modelling Example

* Example: Pendulum on a cart: a cart with mass $m_1$ is accelerated by a horizontal force $u$; there is a pendulum of mass $m_2$ attached to the cart, where the centre of mass is $l$ units away from the pivot; the inertia of the pendulum about its centre of mass is $I_{zz}$ (along the axis the pendulum will swing)
	* We can model this as a manipulator with a prismatic joint (for the cart) and revolute joint (for the pendulum)
		* According to DH frame rules, $z_0$ points in the direction of the cart track and $z_1$ points along the axis of rotation of the pendulum
	* Let $x$ be the position of the cart and $\phi$ be the angle of the pendulum from vertical
		* In the DH table, $x = d_1$ and $\phi = \theta _2$
	* DH table:

		| Link | $a$ | $\alpha$ | $d$ | $\theta$ |
		|---|---|---|---|---|
		| 1 | 0 | $-\pi/2$ | $x$ | 0 |
		| 1 | $a_2$ | 0 | 0 | $\phi$ |
	* Assume $r_1^0 = O_1^0$, so now we can write $r_1^0, r_2^0$ in terms of the generalized coordinates $x$ and $\phi$
		* $r_1^0 = \cvec{0}{0}{x} \implies \dot r_1^0 = \cvec{0}{0}{\dot x}$
		* $r_2^0 = \cvec{l\cos\phi}{0}{x - l\sin\phi} \implies \dot r_2^0 = \cvec{-l\sin(\phi)\dot\phi}{0}{\dot x - l\cos(\phi)\dot\phi}$
	* First find the kinetic energy
		* $T_1 = \frac{1}{2}m_1\norm{\dot r_1^0}^2 = \frac{1}{2}m_1\dot x^2$ for link 1 since it is not rotating
		* $T_2 = \frac{1}{2}m_2\norm{\dot r_2^0}^2 + \frac{1}{2}(w_2^0)^TI_2w_2^0$
			* $\norm{\dot r_2^0}^2 = (l\sin(\phi)\dot\phi)^2 + (\dot x - l\cos(\phi)\dot\phi)^2$
			* $w_2^0 = w_1^0 + R_1^0w_2^1 = R_1^0w_2^1 = R_1^0\dot\phi z_1^1 = \dot\phi z_1^0 = \cvec{0}{\dot\phi}{0}$
			* $I_2 = R_2^0\bar I_2(R_2^0)^T$
			* $(R_2^0)^Tw_2^0 = \matthree{\cos\phi}{-\sin\phi}{0}{0}{0}{1}{\sin\phi}{-\cos\phi}{0}^T\cvec{0}{\dot\phi}{0} = \cvec{0}{0}{\dot\phi}$
			* $(w_2^0)^TI_2w_2^0 = \rvec{0}{0}{\dot\phi}\bar I_2\cvec{0}{0}{\dot\phi} = I_{zz}\dot\phi^2$
		* $\alignedeqntwo[t]{T}{\frac{1}{2}m_1\dot x^2 + \frac{1}{2}m_2\left((l\sin(\phi)\dot\phi)^2 + (\dot x - l\cos(\phi)\dot\phi)^2\right) + \frac{1}{2}I_{zz}\dot\phi^2}{\frac{1}{2}m\dot x^2 + \frac{1}{2}(I_{zz} + m_2l^2)\dot\phi^2 - m_2l\cos(\phi)\dot x\dot\phi}$
			* $m = m_1 + m_2$ is the total mass
	* Now for the potential energy
		* $\bar g = \cvec{-g}{0}{0}$
		* $\mathcal U(q) = -(m_1\bar g^Tr_1^0 + m_2\bar g^Tr_2^0) = m_2gl\cos\phi$
	* Lagrangian: $\mathcal L = T - \mathcal U = \frac{1}{2}m\dot x^2 + \frac{1}{2}(I_{zz} + m_2l^2)\dot\phi^2 - m_2l\cos(\phi)\dot x\dot\phi - m^2gl\cos\phi$
	* Find derivatives... (exercise to the reader)
	* Substitute into Euler-Lagrange to get the equations of motion:
		* $m\ddot x - m_2l\cos(\phi)\ddot\phi + m_2l\sin(\phi)\dot\phi^2 = u$
		* $(I_{zz} + m_2l^2)\ddot\phi - m_2l\cos(\phi)\ddot x - m_2lg\cos(\phi) = 0$
	* Put this in canonical form $D(q)\ddot q + C(q, \dot q)\dot q + G(q) = \tau$
		* $q = \cvec{x}{\phi}$
		* $D(q) = \mattwo{m}{-m_2l\cos\phi}{-m_2l\cos\phi}{I_{zz} + m_2l^2}$
			* Notice that, as expected, $D(q)$ is symmetric (if not, we made a calculation mistake!)
		* $G(q) = \cvec{0}{-m_2lg\cos\phi}$
		* $C(q, \dot q) = \mattwo{0}{m_2l\sin(\phi)\dot\phi}{0}{0}$
			* This is the only term that's left
			* Notice the nonzero entry only has $\dot\phi$ instead of $\dot\phi^2$ since in the canonical form we multiply it again by $\dot q$ in the equation

