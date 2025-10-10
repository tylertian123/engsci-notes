# Lecture 16, Oct 8, 2025

## Applications of Jacobians

* The immediate applications of velocity Jacobians are
	1. Forward and inverse velocity kinematics
	2. Motion planning (as seen in the previous lecture)
	3. Inverse kinematics (numerically, but without having to do kinematic decoupling)
	4. End-effector force and torque (i.e. calculating the joint torques required to produce a force/torque at the end-effector)

### Inverse Velocity Kinematics

* Given the desired linear and angular velocities at the end effector $\xi = \cvec{\dot O_n^0}{w_n^0}$, compute $\dot q$ that gets us these velocities
* Recall $\cvec{\dot O_n^0}{w_n^0} = J(q)\dot q = \cvec{J_v(q)}{J_w(q)}\dot q$ -- the problem basically comes down to whether the Jacobian can be inverted
* $J(q)$ will be a $6 \times n$ matrix, so 3 cases exist depending on the dimensions of $q$
	* If $n = 6$, a numerical solution can be computed if and only if $J(q)$ is invertible, and the solution will be unique
	* If $n < 6$, in general no solution exists
	* If $n > 6$, solutions exist if and only if $\rank(J(q)) = 6$ (solutions will not be unique)
		* One possible solution is to use a psuedoinverse, $\dot q = J^\dagger(q)\xi$ where $J^\dagger(q) = J^T(q)(J(q)J(q)^T)^{-1}$
			* Due to the rank restriction, we know the psuedoinverse can be calculated
			* Verify: $J(q)\dot q = J(q)J^\dagger(q)\xi = J(q)J^T(q)(J(q)J^T(q))^{-1}\xi = \xi$
			* The psuedoinverse has the important property that $J(q)J^\dagger(q) = I$
		* We can extend this to an infinite number of solutions as $\dot q = J^\dagger(q)\xi + (I - J^\dagger(q)J(q))b$ where $b \in R^n$ is any arbitrary vector
			* Verify: $\alignedeqntwo[t]{J(q)\dot q}{J(q)J^\dagger(q)\xi + J(q)(I - J^\dagger(q)J(q))b}{\xi + (J(q) - J(q))b}{\xi}$

### Inverse Kinematics Without Kinematic Decoupling

* Given $R_n^0(q) = R_d, O_n^0(q) = O_d^0$ and suppose $n > 6$, how can we solve for $q$?
* Suppose $R_d$ is written in terms of $zyz$ Euler angles
	* $R_d = \matthreeb{\cos\phi\cos\theta\cos\psi - \sin\phi\sin\psi}{-\cos\phi\cos\theta\sin\psi - \sin\phi\cos\psi}{\cos\phi\sin\theta}{\sin\phi\cos\theta\cos\psi + \cos\phi\sin\psi}{-\sin\phi\cos\theta\sin\psi + \cos\phi\cos\psi}{\sin\phi\sin\theta}{-\sin\theta\cos\psi}{\sin\theta\sin\psi}{\cos\theta}$
* Let the state $x = \cvec{O_n^0}{\phi}{\theta}{\psi} \in \reals^6$ which describes the pose of the end-effector
* The *analytic Jacobian* $J_a(q)$ relates the derivatives of $x$ with respect to $q$, and we can show $\dot x = J_a(q)\dot q$ and $\dot q = J_a^\dagger(q)\dot x$
	* This is the same psuedoinverse defined earlier, so $J_a(q)J_a^\dagger(q) = I_{6 \times 6}$
	* Note however that this does not mean $J_a(q)^\dagger J_a(q) = I$, because the solution for $\dot q$ is not unique!
		* Even though we can write $\dot q = J^\dagger(q)J(q)\dot q$, we can't say $J_a(q)^\dagger J_a(q) = I$ because the $\dot q$ on both sides may be different
		* Another way to think about this is to note $J_a(q)^\dagger J_a(q)$ has a nontrivial kernel (since it is $n \times n$ and $n > 6$)
* From $R_d, O_d^0$ we can get $x_d$, and from this we define the tracking error $e = x_d - x(q)$
	* $\dot e = -\dot x(q) = -J_a(q)\dot q$
* Choose $\dot q = J_a^\dagger(q)Ke$, analogous to a P controller, then $\dot e = -J_a(q)J_a^\dagger(q)Ke = -Ke$, and so $e(t)$ will converge to 0 exponentially
	* Therefore, if we have $q$ satisfy the ODE $\dot q = J_a^\dagger(q)K(x_d - x(q))$, then the tracking error will decrease to 0, and we will converge on a value of $q$ which solves the inverse kinematics problem
	* Practically we can form this ODE and forward simulate with any ODE solver, and as the "time" goes to infinity, the steady state value of $q$ gives us the solution

