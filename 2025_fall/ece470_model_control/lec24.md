# Lecture 24, Nov 7, 2025

## Robot Lagrangian

* Now we want to derive the Lagrangian for a robot manipulator, so we can use the Euler-Lagrange equation to model the robot
* For a rigid body, the kinetic energy is the sum of translational kinetic energy and rotational kinetic energy (note in the point mass model we used for derivation, we did not include rotational dynamics)
	* $T = \frac{1}{2}mv^Tv + \frac{1}{2}w^TIw$
	* $m$ is the mass of the rigid body, $v \in \reals^3$ is the linear velocity vector, $w \in \reals^3$ is the angular velocity vector, and $I \in \reals^{3 \times 3}$ is the *inertia matrix* or *inertia tensor*, a symmetric matrix
	* Note $v$ and $w$ must be expressed in the inertial frame
	* $I$ is expressed in the inertial frame and calculated at the centre of mass of the body
		* Since the joints are moving, this is actually a function of time
		* To make the computations easier, use a frame attached to the body at the centre of mass so the matrix becomes constant
* Consider an $n$-link robot, consisting of $n$ rigid bodies (links); $r_1^0, \dots, r_n^0$ are the positions of the centre of masses of each link, which are completely specified by $q$, and therefore it is appropriate to use $q$ as the generalized coordinates of the system
* The robot has kinetic energy $T = \sum _{i = 1}^n \frac{1}{2}m_i(\dot r_i^0)^T(\dot r_i^0) + \frac{1}{2}(w_i^0)^TI_i(w_i^0)$
	* Note $I_i$ is the inertia matrix of link $i$ in an inertial frame attached at the centre of mass of link $i$
* Define the partial Jacobian $J_{v_i}$, where we regard $r_i^0$ as a virtual "end-effector"
	* For revolute joints, $J_{v_i} = \rvec{z_0^0 \times (r_i^0)}{z_1^0 \times (r_i^0 - O_1^0)}{\cdots}{z_{i - 1}^0 \times (r_i^0 - O_{i - 1}^0)}{0_{3 \times (n - i)}}$
	* $J_{w_i} = \rvec{\rho _1z_0^0}{\rho _2z_1^0}{\cdots}{\rho _iz_{i - 1}^0}{0_{3 \times (n - i)}}$
	* We saw a similar concept when we did potential fields, except in that case we treat $O_i$ as the end-effector (see those notes for the formula for prismatic joints)
* We can now rewrite $\alignedeqntwo[t]{T}{\sum _{i = 1}^n \frac{1}{2}m_i\dot q^TJ_{v_i}^TJ_{v_i}\dot q + \frac{1}{2}\dot q^TJ_{w_i}^TI_i(q)J_{w_i}\dot q}{\frac{1}{2}\dot q^T\left(\sum _{i = 1}^n m_iJ_{v_i}^T(q)J_{v_i}(q) + J_{w_i}^T(q)I_i(q)J_{w_i}(q)\right)\dot q}{\frac{1}{2}\dot q^TD(q)\dot q}$
	* $D(q) = \sum _{i = 1}^n m_iJ_{v_i}^T(q)J_{v_i}(q) + J_{w_i}^T(q)I_i(q)J_{w_i}(q)$ is a symmetric positive definite matrix
* The (gravitational) potential energy is $\mathcal U(q) = -\sum _{i = 1}^n m_i\bar g^Tr_i^0(q)$
	* $\bar g = \cvec{0}{0}{-9.81} \in \reals^3$ is the gravitational acceleration
* Our Lagrangian is then $\mathcal L(q, \dot q) = \frac{1}{2}\dot q^TD(q)\dot q + \sum _{i = 1}^n m_i\bar g^Tr_i^0(q)$
	* Next time, we will compute $\pdiff{L}{\dot q_j}, \diff{}{t}\left(\pdiff{L}{\dot q_j}\right), \pdiff{\mathcal L}{q_j}$

