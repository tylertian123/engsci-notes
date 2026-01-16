# Lecture 25, Nov 10, 2025

## Canonical Robot Dynamics Model

* In our previous formula for kinetic energy, our $I_i(q)$ was expressed in the inertial frame, making it a function of $q$; we can instead write it in a body-fixed frame, which makes it constant, and relate it to the inertial frame inertia tensor via a similarity transform
	* $I_i = R_i^0\bar I_i(R_i^0)^T$ where $\bar I_i$ is a constant inertia matrix expressed in a frame centred at the COM of link $i$
* Using this, $D(q) = \sum _{i = 1}^n m_iJ_{v_i}^T(q)J_{v_i}(q) + J_{w_i}^T(q)R_i^0\bar I_i(R_0^i)^TJ_{w_i}^T(q)$
	* $T = \frac{1}{2}\dot q^TD(q)\dot q = \frac{1}{2}\sum _{i,j}^n d_{ij}(q)\dot q_i\dot q_j$
	* Note $d_{ij}(q) = d_{ji}(q)$ due to symmetry
* $\pdiff{\mathcal L}{\dot q_k} = \pdiff{T}{\dot q_k} = \sum _{j = 1}^n d_{kj}(q)\dot q_j$
	* Note the $\frac{1}{2}$ disappears due to the symmetry of $D(q)$, so each term gets summed twice
* $\alignedeqntwo[t]{\diff{}{t}\left(\pdiff{\mathcal L}{\dot q_k}\right)}{\sum _{j = 1}^n d_{kj}(q)\ddot q_j + \sum _{j = 1}^n\diff{}{t}\left(d_{kj}(q)\right)\dot q_j}{\sum _{j = 1}^n d_{kj}(q)\ddot q_j + \sum _{i,j} \pdiff{d_{kj}(q)}{q_i}\dot q_i\dot q_j}$
* $\pdiff{\mathcal L}{q_k} = \frac{1}{2}\sum _{j = 1}^n \pdiff{d_{ij}(q)}{q_k}\dot q_i\dot q_j - \pdiff{\mathcal U}{q_k}$
* Substitute into Euler-Lagrange: $\sum _{j = 1}^n d_{kj}(q)\ddot q_j + \sum _{i, j}\left(\pdiff{d_{kj}(q)}{q_i} - \frac{1}{2}\pdiff{d_{ij}(q)}{q_k}\right)\dot q_i\dot q_j + \pdiff{\mathcal U}{q_k} = \tau _k$
	* It can be shown that $\sum _{i, j}\pdiff{d_{kj}(q)}{q_i}\dot q_i\dot q_j = \frac{1}{2}\left(\pdiff{d_{kj}(q)}{q_i} + \pdiff{d_{ki}(q)}{q_j}\right)\dot q_i\dot q_j$
* Let $c_{ijk} = \frac{1}{2}\left(\pdiff{d_{kj}}{q_i} + \pdiff{d_{ki}}{q_j} - \pdiff{d_{ij}}{q_k}\right)$, then $\sum _j d_{kj}(q)\ddot q_j + \sum _{i, j} c_{ijk} \dot q_i\dot q_j + \pdiff{\mathcal U}{q_k} = \tau _k$
	* These are known as the *Christoffel symbols* (of the first kind)
* Organized in matrix form, $D(q)\ddot q + C(q, \dot q)\dot q + G(q)$
	* $D(q) \in \reals^{n \times n}$ is the "mass matrix" for kinetic energy; this is the inertial term
	* $C(q, \dot q) \in \reals^{n \times n}$ where $\left[C(q, \dot q)\right]_{kj} = \sum _{i = 1}^n c_{ijk}(q)\dot q_i$ contains the Coriolis and centrifugal forces
	* $G(q) = \nabla _q\mathcal U(q) \in \reals^n$ contains the forces due to gravity (or more generally, a potential)
* In general, for a robot modelling problem, we have 2 approaches:
	1. Using Euler-Lagrange: Writing out the kinetic and potential energies, computing the derivatives and substituting into the Euler-Lagrange equation
		* $T = \sum _{i = 1}^n \frac{1}{2}m_i\norm{\dot r_i^0}^2 + \frac{1}{2}(w_i^0)^TR_i^0\bar I_i(R_0^i)^T(w_i^0)$
		* $\mathcal U = -\sum _{i = 1}^n m_i\bar g_i^Tr_i^0$
		* This is suitable for simple problems, where we can often obtain the $r_i^0$ by inspection and differentiate them
	2. Find $T = \frac{1}{2}\dot q^TD(q)\dot q$, then $C(q, \dot q)$ using the formulas (which require $D(q)$ to be known), then $G(q) = \left(\pdiff{\mathcal U}{q}\right)^T$
		* This will work for any system

\noteSummary{The canonical robot dynamics model is given by $$D(q)\ddot q + C(q, \dot q)\dot q + G(q) = \tau$$ where the terms contain the inertial, Coriolis/centrifugal, and gravitational terms respectively:
\begin{itemize}
	\item $D(q) = \sum _{i = 1}^n \left(m_iJ_{v_i}^T(q)J_{v_i}(q) + J_{w_i}^T(q)R_i^0\bar I_i(R_0^i)^TJ_{w_i}^T(q)\right)$
	\item $\left[C(q, \dot q)\right]_{kj} = \sum _{i = 1}^n c_{ijk}(q)\dot q_i$ where $c_{ijk} = \frac{1}{2}\left(\pdiff{d_{kj}}{q_i} + \pdiff{d_{ki}}{q_j} - \pdiff{d_{ij}}{q_k}\right)$
	\item $G(q) = \nabla _q\mathcal U(q)$ where $\mathcal U(q) = -\sum _{i = 1}^n m_i\bar g^Tr_i^0(q)$
\end{itemize}
where $\bar I_i$ are the inertias of each link measured about its centre of mass in a body-fixed frame, $r_i^0$ are the centres of mass, $\bar g = \rvec{0}{0}{-g}^T$ points in the direction of gravitational acceleration, and the Jacobians are given by
$$\alignedlines{}{J_{v_i} = \twocond{\rvec{z_0^0 \times (r_i^0)}{z_1^0 \times (r_i^0 - O_1^0)}{\cdots}{z_{i - 1}^0 \times (r_i^0 - O_{i - 1}^0)}{0_{3 \times (n - i)}}}{\text{joint }i\text{ is revolute}}{\rvec{z_0^0}{z_1^0}{\cdots}{z_{i - 1}^0}{0_{3 \times (n - i)}}}{\text{joint }i\text{ is prismatic}}}{J_{w_i} = \rvec{\rho _1z_0^0}{\rho _2z_1^0}{\cdots}{\rho _iz_{i - 1}^0}{0_{3 \times (n - i)}}}$$}

