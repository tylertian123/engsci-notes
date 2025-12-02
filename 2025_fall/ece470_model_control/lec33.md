# Lecture 33, Nov 28, 2025

## Linear Parametrization of the Robot Model

* How can we learn the parameters of the system?
* The robot model can be "factorized" as $M(q)\ddot q + C(q, \dot q)\dot q + B(q)\dot q + G(q) = Y(q, \dot q, \ddot q)\Phi$, where $Y(q, \dot q, \ddot q)$ is a *regressor* matrix that models the structure of the robot, and $\Phi$ is a vector containing all the physical parameters of the robot
	* $Y(q, \dot q, \ddot q)$ is considered known, since it's based on the structure of the robot, which we have exactly even if we don't know the exact system parameters
	* $\Phi$ is unknown, and an adaptive controller would need to learn this parameter vector
* Example: for the pendulum cart $D(q)\ddot q + C(q, \dot q)\dot q + G(q) = \cvec{M\ddot q_1 - m_2l\cos(q_2)\ddot q_2 + m_2l\sin(q_2)\dot q_2^2}{-m_2l\cos(q_2)\ddot q_1 + (I + m_2l^2)\ddot q_2 - m_2lg\sin(q_2)}$
	* Identify the independent parameters: $M, m_2l, I + m_2l^2 = \bar I$
		* The fewer independent parameters we have, the better, so in this case because we never see $m_2$ and $l$ on their own, we group them into a single parameter
	* We can factor into $\mattwothree{\ddot q_1}{-\cos(q_2)\ddot q_2 + \sin(q_2)\dot q_2^2}{0}{0}{-\cos(q_2)\ddot q_1 - g\sin(q_2)}{\ddot q_2}\cvec{M}{m_2l}{\tilde I}$

