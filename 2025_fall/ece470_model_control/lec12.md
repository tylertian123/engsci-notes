# Lecture 12, Sep 29, 2025

## Forward Velocity Kinematics

* Given the joint variables $q_i(t)$ as functions of time, we want to find the relationship between the joint velocities $\dot q_i(t)$ and the linear and angular velocities of the end-effector, with applications in motion planning
	* To do this, we need to know how velocities are transformed between frames
* Define the operation $S(w) = S\left(\cvec{w_x}{w_y}{w_z}\right) = \matthree{0}{-w_z}{w_y}{w_z}{0}{-w_x}{-w_y}{w_x}{0}$
	* This allows us to compute the cross product easily as $w \times v = S(w)v$
	* Note this produces a skew-symmetric matrix, i.e. $M = -M^T$; furthermore, every skew-symmetric matrix can be expressed as $S(w)$ for some unique $w \in \reals^3$
* Note the following properties of $S(w)$:
	1. Linearity: $S(w_1 + \lambda w_2) = S(w_1) + \lambda S(w_2)$
	2. Similarity transform: $RS(w)R^T = S(Rw)$ for all $R \in SO(3)$
* Lemma: there exists a unique $w_1^0 \in \reals^3$ such that $\dot R_1^0 = S(w_1^0)R_1^0$
	* This means if we can find $w_1^0$ we can compute the derivative of a rotation matrix easily without taking the derivative for each term in the matrix
	* Proof: differentiate $R_1^0(R_1^0)^T = I$
		* $\dot R_1^0(R_1^0)^T + R_1^0(\dot R_1^0)^T = 0$
		* $\dot R_1^0(R_1^0)^T = -R_1^0(\dot R_1^0)^T = -\left(\dot R_1^0(R_1^0)^T\right)^T$
		* This means that $\dot R_1^0(R_1^0)^T$ is skew-symmetric, so there exists $w_1^0$ such that $\dot R_1^0(R_1^0)^T = S(w_1^0)$
		* Rearrange to yield $\dot R_1^0 = S(w_1^0)R_1^0$
* Consider a point moving in frame 0, $p^0(t)$; its linear velocity is defined as $v^0(t) = \diff{}{t}p^0(t) = \dot p^0(t)$
* Now suppose frame 1 is moving relative to frame 0, i.e. $O_1^0, R_1^0$ are functions of $t$; consider a point $p$ fixed in frame 1
	* $p^0 = O_1^0 + R_1^0p^1$
	* Differentiate: $\alignedeqntwo[t]{\dot p^0}{\dot O_1^0 + \dot R_1^0p^1 + R_1^0\dot p^1}{\dot O_1^0 + S(w_1^0)R_1^0p^1 + R_1^0\dot p^1}{\dot O_1^0 + w_1^0 \times (R_1^0p^1) + R_1^0\dot p^1}$
	* $\dot O_1^0$ is the *linear velocity* of frame 1 with respect to frame 0
	* $w_1^0$ is the *angular velocity* of frame 1 with respect to frame 0
* Consider frames 0, 1, 2, where 0 is the inertial frame and frames 1 and 2 are moving; how can we express $w_2^0$ in terms of $w_1^0$ and $w_2^1$?
	* We know $\dot R_2^0 = S(w_2^0)R_2^0$ and $R_2^0 = R_1^0R_2^1$
	* Take derivative: $\alignedeqntwo[t]{\dot R_2^0}{\dot R_1^0R_2^1 + R_1^0\dot R_2^1}{S(w_1^0)R_1^0R_2^1 + R_1^0S(w_2^1)R_2^1}{S(w_1^0)R_2^0 + R_1^0S(w_2^1)(R_1^0)^TR_1^0R_2^1}{S(w_1^0)R_2^0 + S(R_1^0w_2^1)R_1^0R_2^1}{S(w_1^0)R_2^0 + S(R_1^0w_2^1)R_2^0}{(S(w_1^0) + S(R_1^0w_2^1))R_2^0}{S(w_1^0 + R_1^0w_2^1)R_2^0}$
	* Compare this with the above, we get $S(w_2^0) = S(w_1^0 + R_1^0w_2^1) \implies w_2^0 = w_1^0 + R_1^0w_2^1$
* Note the similarity between $w_2^0 = w_1^0 + R_1^0w_2^1$ and the transformation for points, $O_2^0 = O_1^0 + R_1^0O_2^1$
	* Angular velocities work similarly to points -- we can "add" them
* Therefore, for an $n$-link manipulator:
	* $O_i^0 = O_{i - 1}^0 + R_{i - 1}^0O_i^{i - 1}$
	* $\dot O_i^0 = \dot O_{i - 1}^0 + \dot R_{i - 1}^0O_i^{i - 1} + R_{i - 1}^0\dot O_{i}^{i - 1}$
	* $w_i^0 = w_{i - 1}^0 + R_{i - 1}^0w_i^{i - 1}$
	* This is a set of recursive formulas for computing the end-effector linear and angular velocities
* Next, we can write explicit formulas for $w_i^{i - 1}$ and $\dot O_i^{i - 1}$, which will be easy to do since all joints operate in the $z$ axis
 
