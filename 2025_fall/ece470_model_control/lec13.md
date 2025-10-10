# Lecture 13, Oct 1, 2025

## Forward Velocity Kinematics (Continued)

* Recall that we want to find a formula for the end-effector linear and angular velocity, so we want to find $\dot O_i^{i - 1}, w_i^{i - 1}$ in terms of the DH parameters
* Denote $w_{i,j}^k = R_i^kw_j^i$ as a shorthand (notation used by textbook)
	* This means "the angular velocity of frame $j$ with respect to frame $i$, expressed in frame $k$"
	* Using this notation, $w_n^0 = w_{0,1}^0 + \cdots + w_{n - 1, n}^0 = \sum _{i = 1}^n w_{i - 1, i}^0$
* Recall that rotating a body around a fixed axis $z$ yields an angular velocity $w = \dot\theta z$ where $\dot\theta$ is the rate of rotation, and the linear velocity of any point on the object is given by $v = w \times p$, where $p$ is a vector from the axis of rotation
* Therefore, we can derive $\dot O_i^{i - 1}, w_i^{i - 1}$ for each type of joint as follows:
	* Revolute joint: $w_i^{i - 1} = \dot q_i\cvec{0}{0}{1}, \dot O_i^{i - 1} = w_i^{i - 1} \times O_i^{i - 1}$
		* $w_i = \dot\theta _iz_{i - 1}$ since the joint rotates around axis $z_{i - 1}$ and the angle of rotation is $\theta$
		* Then $w_i^{i - 1} = \dot\theta _iz_{i - 1}^{i - 1} = \dot\theta _i \cvec{0}{0}{1}$
		* From physics, $\dot O_i^{i - 1} = w_i^{i - 1} \times O_i^{i - 1}$
			* In the common case where $O_i$ and $O_{i - 1}$ are aligned on $z_{i - 1}$, notice that this evaluates to zero (since $z_{i - 1}$ is parallel to $w_i$), which is consistent with our intuition that in this case, frame $i$ is not translating with respect to frame $i - 1$
	* Prismatic joint: $w_i^{i - 1} = 0, \dot O_i^{i - 1} = \dot q_i\cvec{0}{0}{1}$
		* This can be easily seen by noting that there is no rotation happening
		* The only component of $O_i^{i - 1}$ that is changing is the $z$ component, which has a value of $d_i$

### Angular Velocity Jacobian

* We will show the following:
	* $\dot O_n^0 = J_v(q)\dot q$, where $J_v(q) = \pdiff{O_n(q)}{q}$ is the *linear velocity Jacobian*
	* $w_n^0 = J_w(q)\dot q$, where $J_w(q) = \pdiff{w_n}{q}$ is the *angular velocity Jacobian*
* For the angular velocity, recall $w_n^0 = w_{0,1}^0 + \cdots + w_{n - 1, n}^0 = \sum _{i = 1}^n w_{i - 1, i}^0$
	* If joint $i$ is revolute, then $w_{i - 1, i}^0 = R_{i - 1}^0w_i^{i - 1} = R_{i - 1}^0\dot q_iz_{i - 1}^{i - 1} = \dot q_iR_{i - 1}^0z_{i - 1}^{i - 1} = \dot q_iz_{i - 1}^0$
	* If joint $i$ is prismatic, then $w_{i - 1, i}^0 = 0$
* As a shorthand, define the *indicator function* $\rho _i = \twocond{0}{\text{joint }i\text{ is prismatic}}{1}{\text{joint }i\text{ is revolute}}$
* Using the indicator function, $\alignedeqntwo[t]{w_n^0}{\sum _{i = 1}^n w_{i - 1, i}^0}{\rho _i\dot q_iz_{i - 1}^0}{\rvec{\rho _1 z_0^0}{\rho _1 z_1^0}{\cdots}{\rho _n z_{n - 1}^0}_{3 \times n}\dot q}{J_w(q)\dot q}$

