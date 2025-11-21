# Lecture 27, Nov 14, 2025

## Modelling Example -- Matrix and Hybrid Methods

* Using the same cart example from last lecture, this time we will use the formulas to go for the canonical form directly
	1. Compute $D(q)$
		* $D(q) = m_1J_{v_1}^TJ_{v_1} + J_{w_1}^TR_1^0\bar I_1(R_1^0)^TJ_{w_1} + m_2J_{v_2}^TJ_{v_2} + J_{w_2}^TR_2^0\bar I_2(R_2^0)^TJ_{w_2}$
		* Compute Jacobians
			* $J_{w_1} = \rvec{\rho _1z_0^0}{0} = \rvec{0}{0}$
			* $J_{v_1} = \rvec{z_0^0}{0} = \matthreetwo{0}{0}{0}{0}{1}{0}$
			* $J_{w_2} = \rvec{\rho _1z_0^0}{\rho _2z_1^0} = \rvec{0}{z_1^0} = \matthreetwo{0}{0}{0}{1}{0}{0}$
			* $J_{v_2} = \rvec{z_0^0}{z_1^0 \times (r_2^0 - O_1^0)} = \matthreetwo{0}{-l\sin\phi}{0}{0}{1}{-l\cos\phi}$
				* Recall $r_2^0 = \cvec{l\cos\phi}{0}{x - l\sin\phi} \implies r_2^0 - O_1^0 = \cvec{l\cos\phi}{0}{-l\sin\phi}$
		* Compute rotation matrices
			* $R_1^0$ does not matter since it's multiplied by $J_{w_1}$ which is zero
			* $R_2^0 = \matthree{\cos\phi}{-\sin\phi}{0}{0}{0}{1}{-\sin\phi}{-\cos\phi}{0}$ (from DH table)
		* Compute inertia matrices
			* $\bar I_1$ does not matter since again it is multiplied by a zero matrix
			* $\bar I_2 = \matthree{I_{xx}}{*}{*}{*}{I_{yy}}{*}{*}{*}{I_{zz}}$ where the $*$ entries don't matter
				* One can verify that $J_{w_2}^TR_2^0\bar I_2(R_2^0)^TJ_{w_2}^T = \mattwo{0}{0}{0}{I_{zz}}$
		* $D(q) = m_1\mattwo{1}{0}{0}{0} + m_2\mattwo{1}{-l\cos\phi}{-l\cos\phi}{l^2} + \mattwo{0}{0}{0}{I_{zz}} = \mattwo{m}{-m_2l\cos\phi}{-m_2l\cos\phi}{m_2l^2 + I_{zz}}$
			* Check that $D(q)$ is symmetric
			* Compare with the one we derived at the end of the last lecture and we see that they are the same
	2. Compute Christoffel symbols and $C(q, \dot q)$
		* $c_{ijk} = \frac{1}{2}\left(\pdiff{d_{kj}}{q_i} + \pdiff{d_{ki}}{q_j} - \pdiff{d_{ij}}{q_k}\right)$
			* e.g. $c_{211} = \frac{1}{2}\left(\pdiff{d_{11}}{q_2} + \pdiff{d_{12}}{q_1} - \pdiff{d_{21}}{q_1}\right) = \frac{1}{2}\pdiff{d_{11}}{q_2} = 0$
			* Many terms cancel since $D(q)$ is symmetric
			* For the $2 \times 2$ case, we need to compute 8 Christoffel symbols
		* $\left[C(q, \dot q)\right]_{kj} = \sum _{i = 1}^n c_{ijk}(q)\dot q_i$
	3. Compute $G(q)$
		* $\mathcal U(q) = -(m_1\bar g^Tr_1^0 + m_2\bar g^Tr_2^0) = m_2gl\cos\phi$$
		* $G(q) = \nabla\mathcal U(q)$
* Example: planar RR manipulator, with link lengths $l_1, l_2$ and joint angles $\theta _1, \theta _2$; links have masses $m_1, m_2$ and distances to COM of $l_{c_1}, l_{c_2}$ from the previous joint; links have inertias $I_{z_1}, I_{z_2}$
	1. Find the kinetic energy
		* $T = \frac{1}{2}m_1\norm{\dot r_1^0}^2 + \frac{1}{2}(w_1^0)^TI_1w_1^0 + \frac{1}{2}m_2\norm{\dot r_2^0}^2 + \frac{1}{2}(w_2^0)^TI_2w_2^0$
		* From geometry $r_1^0 = \cvec{l_{c_1}\cos q_1}{l_{c_1}\sin q_1}{0} \implies \dot r_1^0 = \rvec{-l_{c_1}\sin(q_1)\dot q_1}{l_{c_1}\cos(q_1)\dot q_1}$
		* $r_2^0 = \cvec{l_1\cos q_1 + l_{c_2}\cos(q_1 + q_2)}{l_1\sin q_1 + l_{c_2}\sin(q_1 + q_2}{0} \implies \dot r_2^0 = \cvec{-l_1\sin(q_1)\dot q_1 - l_{c_2}\sin(q_1 + q_2)(\dot q_1 + \dot q_2)}{l_1\cos(q_1)\dot q_1 + l_{c_2}\cos(q_1 + q_2)(\dot q_1 + \dot q_2)}{0}$
		* $w_1^0 = \dot q_1z_0^0 = \cvec{0}{0}{1}\dot q_1$
		* $w_2^0 = w_1^0 + R_1^0w_2^1 = \cvec{0}{0}{\dot q_1} + \matthree{\cos q_1}{-\sin q_1}{0}{\sin q_1}{\cos q_1}{0}{0}{0}{1}\cvec{0}{0}{\dot q_2} = \cvec{0}{0}{\dot q_1 + \dot q_2}$
		* Rotational terms:
			* $(R_1^0)^Tw_1^0 = \cvec{0}{0}{\dot q_1} = w_1^0$ so the rotation matrices have no effect
			* Therefore $(w_1^0)^TR_1^0\bar I_1(R_1^0)^Tw_1^0 = \cvec{0}{0}{\dot q_1}^T\bar I_1\cvec{0}{0}{\dot q_1} = I_{z_1}\dot q_1^2$ where $I_{z_1}$ is the bottom-right entry of $\bar I_1$
		* $T = \frac{1}{2}m_1l_{c_1}^2\dot q_1^2 + \frac{1}{2}m_2\left(l_1^2\dot q_1^2 + l_{c_2}^2(\dot q_1 + \dot q_2)^2 + 2l_1l_{c_2}\cos(q_2)\dot q_1(\dot q_1 + \dot q_2)\right) + \frac{1}{2}I_{z_1}\dot q_1^2 + \frac{1}{2}I_{z_2}(\dot q_1 + \dot q_2)^2$
	2. Factor the kinetic energy into the form $T(q, \dot q) = \frac{1}{2}\dot q^TD(q)\dot q$
		* $\frac{1}{2}q^TD(q)\dot q = \frac{1}{2}(d_{11}\dot q_1^2 + d_{22}\dot q_2^2 + 2d_{12}\dot q_1\dot q_2)$; match terms to get the entries
		* $D(q) = \mattwo{m_1l_{c_1}^2 + m_2(l_1^2 + l_{c_2}^2 + 2l_1l_{c_2}\cos(q_2)) + I_{z_1} + I_{z_2}}{m_2(l_{c_2}^2 + l_1l_{c_2}\cos(q_2)) + I_{z_2}}{m_2(l_{c_2}^2 + l_1l_{c_2}\cos(q_2)) + I_{z_2}}{I_{z_2} + m_2l_{c_2}^2}$
	3. Compute $\mathcal U(q), G(q)$
		* $\mathcal U(q) = m_1gl_{c_1}\sin(q_1) + m_2g(l_1\sin(q_1) + l_{c_2}\sin(q_1 + q_2))$
		* $G(q) = \nabla _q \mathcal U(q) = \cvec{(m_1l_{c_1} + m_2l_1)g\cos(q_1) + m_2l_{c_2}g\cos(q_1 + q_2)}{m_2l_{c_2}g\cos(q_1 + q_2)}$
	4. Compute the Christoffel symbols
		* $c_{ijk} = \frac{1}{2}\left(\pdiff{d_{kj}}{q_i} + \pdiff{d_{ki}}{q_j} - \pdiff{d_{ij}}{q_k}\right)$
		* Due to the symmetry, we can save some work by noting $c_{ijk} = c_{jik}$ due to the symmetry of the first two terms
		* $c_{111} = \frac{1}{2}\pdiff{d_{11}}{q_1} = 0$
		* $c_{121} = \frac{1}{2}\left(\pdiff{d_{12}}{q_1} + \pdiff{d_{11}}{q_2} - \pdiff{d_{12}}{q_1}\right) = -m_2l_1l_{c_2}\sin(q_2) = c_{211}$
		* $c_{221} = \frac{1}{2}\left(\pdiff{d_{12}}{q_1} + \pdiff{d_{12}}{q_2} - \pdiff{d_{22}}{q_1}\right) = c_{121}$
		* $c_{112} = -c_{121}$
		* $c_{122} = c_{222} = 0$
		* $\left[C(q, \dot q)\right]_{kj} = \sum _{i = 1}^n c_{ijk}(q)\dot q_i \implies C(q, \dot q) = \mattwo{c_{111}\dot q_1 + c_{211}\dot q_2}{c_{121}\dot q_1 + c_{221}\dot q_2}{c_{112}\dot q_1 + c_{212}\dot q_2}{c_{122}\dot q_1 + c_{222}\dot q_2}$
		* $C(q, \dot q) = -m_2l_1l_{c_2}\sin(q_2)\mattwo{\dot q_2}{\dot q_1 + \dot q_2}{-\dot q_1}{0}$

