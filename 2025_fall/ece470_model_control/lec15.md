# Lecture 15, Oct 6, 2025

## Basic Motion Planning With Velocity Jacobian

* We can use velocity Jacobians to create a very basic motion planning algorithm for the manipulator through gradient descent
	* Given a desired $O_d^0 \in \reals^3$, we want to find $(q_1(t), \dots, q_n(t))$, the joint variables as a function of time, that takes us to the desired position
* Recall that the gradient for $f: \reals^n \mapsto \reals$ is $\nabla _x f(x) = \left(\pdiff{f(x)}{x}\right)^T$, a column vector
* Also, $\pdiff{\norm{x}}{x} = \frac{1}{\norm{x}}x^T$
	* This can be shown by checking componentwise, with $\norm{x} = \sqrt{x^Tx}$
* The algorithm: Define a quadratic cost function $\mathcal U(q) = \frac{1}{2}\norm{O_d^0 - O_n^0(q)}^2$ (penalizing the difference between desired and current end-effector position), we move in the direction of the negative gradient
	* $\alignedeqntwo[t]{\pdiff{\mathcal U}{q}}{\norm{O_d^0 - O_n^0(q)}\eval{\pdiff{\norm{O_d^0 - O_n^0(q)}}{(O_d^0 - O_n^0(q))}}{O_n^0(q)}\left(-\pdiff{O_n^0(q)}{q}\right)}{\norm{O_d^0 - O_n^0(q)}\frac{1}{\norm{O_d^0 - O_n^0(q)}}(O_d^0 - O_n^0(q))^T\left(-\pdiff{O_n^0(q)}{q}\right)}{-(O_d^0 - O_n^0(q))^T\pdiff{O_n^0(q)}{q}}$
	* $\nabla _q \mathcal U(q) = \left(\pdiff{\mathcal U}{q}\right)^T = -\left(\pdiff{O_n^0(q)}{q}\right)^T(O_d^0 - O_n^0(q))$
	* Notice that the second term is simply the direction we want to move in, in the workspace of the robot (Euclidean space), and then we transformed it using the Jacobian to get the direction in $q$ space
* In continuous time, $\dot q = -\gamma\nabla _q\mathcal U(q) = \gamma\left(\pdiff{O_n^0(q)}{q}\right)^T(O_d^0 - O_n^0(q))$ where $\gamma > 0$ is the learning rate
	* We can forward simulate this with any numerical ODE solver to get a reference signal to track
* In discrete time, $q(t_{k + 1}) = q(t_k) + \gamma\left(\pdiff{O_n^0}{q}(q_{t_k})\right)^T(O_d^0 - O_n^0(q_{t_k}))$
* Note this is an asymptotic algorithm, i.e. it will never reach the goal exactly, instead closing in on the goal as the error decays exponentially
* This can also be seen as a method to do inverse kinematics without relying on kinematic decoupling or any geometric constraints on the manipulator
* In the future we will add collision avoidance and other features to this algorithm

## Velocity Kinematics -- Examples

* Example: 3-link articulated manipulator, RRR, find $J_v(q), J_w(q)$
	* $\rho = 1$ for all joints
	* $J_w(q) = \rvec{z_0^0}{z_1^0}{z_2^0}$
	* $J_v(q) = \rvec{J_{v,1}}{J_{v,2}}{J_{v,3}}$
		* $J_{v,1} = z_0^0 \times (O_3^0 - O_0^0)$
		* $J_{v,2} = z_1^0 \times (O_3^0 - O_1^0)$
		* $J_{v,3} = z_2^0 \times (O_3^0 - O_2^0)$
	* Now find $z_0^0, z_1^0, z_2^0$ and $O_1^0, O_2^0, O_3^0$
		* $z_0^0 = \cvec{0}{0}{1}$
		* $z_1^0$ can be found by extracting the last column of $R_1^0$, which is contained in $H_1^0$
		* Find $O_1^0$ in $H_1^0$
		* Repeat for all the other variables
* Example: A helicopter flies horizontally along a circle of radius 30 at a height of 100, speed of 10, counterclockwise about $z_0$; frame 1 is attached to the helicopter, with $x_1$ forward and $z_1$ up; find the linear and angular velocities of the helicopter with respect to frame 0
	* We want $\dot O_1^0$ and $w_1^0$
	* Can think of there being a revolute joint between the two frames, so $q_1$ is the angle between $x_0, x_1$ about $z_0$
	* Because we can easily write a closed form for $O_1^0$, the simplest method to get the linear velocity is to simply differentiate it
		* $O_1^0 = \cvec{30\cos(\omega t) + c_1}{30\sin(\omega t) + c_2}{100}$
		* $c_1, c_2$ account for the initial conditions
		* $\dot O_1^0 = \cvec{-30\omega\sin(\omega t)}{30\omega\cos(\omega t)}{0}$
		* Now $\norm{\dot O_1^0} = \sqrt{(-30\omega\sin(\omega t))^2 + (30\omega\cos(\omega t))^2} = 30\omega = 10 \implies \omega = \frac{1}{3}$
		* $\dot O_1^0 = \cvec{-10\sin(t/3)}{10\cos(t/3)}{0}$
	* For the angular velocity, we make the assumption that the helicopter always flying forward, i.e. the direction of $x_1$ is the same as the direction of the linear velocity $\dot O_1^0$
	* Since the angular velocity Jacobian is trivial, we can simply compute $\alignedeqntwo[t]{w_1^0}{J_w(q)\dot q}{J_w(q_1)\dot q_1}{\rvec{\rho _1z_0^0}\dot q_1}{\cvec{0}{0}{1/3}}$
	* The brute-force approach is to find $R_1^0$, compute its derivative $\dot R_1^0$, and extract $w_1^0$ from $S(w_1^0) = \dot R_1^0(R_1^0)^T$
		* Find $x_1^0$ by normalizing $\dot O_1^0$, so $x_1^0 = \cvec{-\sin(t/3)}{\cos(t/3}{0}$
		* We also have $z_1$ parallel to $z_0$ so $z_1^0 = \cvec{0}{0}{1}$
		* Finally to get $y_1^0$ we need to take a cross product, so its normal to the other 2 and the right hand rule holds
		* $R_1^0 = \rvec{x_1^0}{y_1^0}{z_1^0} = \matthree{-\sin(t/3)}{-\cos(t/3)}{0}{\cos(t/3)}{-\sin(t/3)}{0}{0}{0}{1}$
		* Now we can take the derivative of each term with respect to $t$, multiply by $(R_1^0)^T$ and simplify
		* In the end we're left with $S(w_1^0) = \matthree{0}{-1/3}{0}{1/3}{0}{0}{0}{0}{0} \implies w_1^0 = \cvec{0}{0}{1/3}$

