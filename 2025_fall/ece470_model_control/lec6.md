# Lecture 6, Sep 15, 2025

## Homogeneous Transformations

* Motivation: Suppose we have $p^2$ and we want to get $p^0$; we know $p^0 = R_1^0p^1 + O_1^0$ and $p^1 = R_2^1p^2 + O_2^1$
	* $p^0 = R_1^0(R_2^1p^2 + O_2^1) + O_1^0 = R_1^0R_2^1p^2 + R_1^0O_2^1 + O_1^0$
	* The more frames we have, the messier it gets -- the algebra is not scalable
	* Can we turn this into a simple matrix multiplication?
* Consider $p^0 = \rvec{a}{b}{c}^T$; apply a rigid motion $q^0 = Rp^0 + d^0$ where $R \in SO(3), d^0 \in \reals^3$
	* Let the *homogeneous coordinates* be $Q^0 = \cvec{q^0}{1}, P^0 = \cvec{p^0}{1} \in \reals^4$ (capital letters denote homogeneous coordinates)
	* Let the *homogeneous transformation* $H = \mattwo{R}{d^0}{0_{1 \times 3}}{1} \in \reals^{4 \times 4}$
	* Notice $HP^0 = \mattwo{R}{d^0}{0_{1 \times 3}}{1}\cvec{p^0}{1} = \cvec{Rp^0 + d^0}{0 + 1} = Q^0$
	* We have turned the entire rigid motion transformation into a single matrix multiplication by $H$, which is much easier to compose

\noteDefn{$Q^0 = HP^0$ is a \textit{homogeneous transformation}, where $$P^0 = \cvec{p^0}{1}, Q^0 = \cvec{q^0}{1}$$ are the \textit{homogeneous coordinates}, formed by adding a 1 after the normal coordinates. $H$ is a member of the \textit{special Euclidean group} $$SE(3) = \Set{H = \mattwo{R}{d}{0_{1 \times 3}}{1} | R \in SO(3), d \in \reals^3}$$ Each member of $SE(3)$ represents a rigid motion in 3D corresponding to a rotation by $R$ followed by a translation by $d$.}

* For our original problem, let $P^i = \cvec{p^i}{1}$ be the homogeneous coordinates of $p$ in the 3 frames
	* Let $H_1^0 = \mattwo{R_1^0}{O_1^0}{0}{1}$ be the homogeneous transformation from frame 1 to frame 0, and so on for $H_2^1$ and $H_2^0$
	* With these definitions, $P^0 = H_1^0P^1$, $P^1 = H_2^1P^2$, so $P^0 = H_1^0P^1 = H_1^0H_2^1P^2$
	* If we compute this matrix product, we get the same expression from before, but now we have a much more compact way of representing it
* Similar to the rotations, we define the *elementary homogeneous transformations*:
	* Pure rotations: $\Rot_{x, \alpha} = \mattwo{R_{x, \alpha}}{0}{0}{1}$ denotes a rotation by $\alpha$ around $x$ with no translation
		* Similar definitions for $\Rot_{y, \beta}$ and $\Rot_{z, \gamma}$
	* Pure translations: $\Trans_{x, a} = \mattwo{I}{\cvec{a}{0}{0}}{0}{1}$ denotes a translation of $a$ in $x$ with no rotation
		* Similar definitions for $\Trans_{y, b}$ and $\Trans_{z, c}$

## Forward Kinematics

* The forward kinematic problem: Given the joint variables $(q_1, \dots, q_n)$ for an $n$-joint robot (where $q_i$ denotes the angle for a revolute joint or a length for the prismatic joint), compute the end-effector position and orientation with respect to frame 0
* Consider a manipulator with $n$ links and a base, denoted $0, 1, \dots, n$ (where $0$ is the base), and joints $1, \dots, n$ (notice the base has no joint); joint $i$ connects link $i - 1$ to link $i$, and is rigidly attached to link $i - 1$; when joint $i$ is actuated, link $i$ moves
	* For each link $i \in [1, n]$, we attach a corresponding frame $O_i, x_i, y_i, z_i$ (so this frame moves when joint $i$ moves)
	* Note frame 0 is the inertial frame, which is attached to the fixed base link (link 0)
* Suppose we have all the $R_i^{i - 1}, O_i^{i - 1}$ relating each frame to the previous frame; let $H_i^{i - 1} = \mattwo{R_i^{i - 1}}{O_i^{i - 1}}{0}{1}$, then the solution of the forward kinematics problem (i.e. the end-effector pose), is $H_n^0 = H_1^0H_2^1\cdots H_n^{n - 1}$
	* These rotations and translations are functions of the joint variables

