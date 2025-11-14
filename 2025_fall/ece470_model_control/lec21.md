# Lecture 21, Oct 24, 2025

## Euler-Lagrange -- Part 1

* We will develop a model for the dynamics of our manipulator, so we can do higher fidelity control
	* Our goal is to derive the model $M(q)\ddot q + C(q, \dot q)\dot q + G(q) = \tau$ presented in the last lecture, which is the standard manipulator model in robotics
* Consider $N$ point masses in $\reals^3$, and let $r_i \in \reals^3$ denote the position of mass $i$
	* Each mass satisfies its equations of motion, $m_i\ddot r_i - f_i^l - f_i^c = 0$, where $f_i^l$ is the sum of load forces for link $i$ and $f_i^c$ is the sum of constraint forces for link $i$ (i.e. forces that hold the links together)
	* The masses are subject to a set of $l$ holonomic constraints, i.e. their positions are constrained with respect to each other
		* The constraints are expressed as $g(r_1, \dots, r_N) = 0$ where $g: \reals^3 \times \cdots \times \reals^3 \mapsto \reals^l$ (this is a vector valued function, since we stack all $l$ constraints)
		* To enforce independence, assume that $\pdiff{g}{r} \in \reals^{l \times 3N}$ is such that $\rank\left(\pdiff{g}{r}\right) = l$, i.e. the Jacobian is full-rank
	* Let $n = 3N - l$ be the degrees of freedom of the system after the constraints are accounted for
		* Assume we have identified $n$ *generalized coordinates*, $(q_1, \dots, q_n)$, which parametrize the degrees of freedom of the system
		* These turn out to be the exact same as the joint variables
	* The set of allowed states is $\Gamma = \set{(r_1, \dots, r_N) | g(r_1, \dots, r_N) = 0}$, which is parametrized by the $n$ generalized coordinates, i.e. there is a one-to-one mapping between $(q_1, \dots, q_n)$ and elements of $\Gamma$
		* Written explicitly, $r_i = r_i(q_1, \dots, q_n)$
	* Practically, for a robot, each $r_i$ is taken at the centre of mass of the link (instead of at $O_i$), so the dynamics work out
* Consider an $N$-link planar manipulator with all revolute joints
	* For our first link $r_1$, we have 2 constraints -- it stays in the $xy$ plane, and its position on the link stays the same, i.e. its distance from $O_0$ stays the same
		* The planar constraint is linear, but the distance constraint would be nonlinear since we need to square $r_{i,x}$ and $r_{i,y}$
	* So in total, the number of constraints here is $l = 2N$
	* So our degrees of freedom is $n = 3N - l = 3N - 2N = N$, which is the same as the number of links as we expected
* Let $\delta r = \rvec{\delta r_1^T}{\cdots}{\delta r_N^T}^T \in \reals^{3N}$ be a *virtual displacement*, i.e. a "virtual" small perturbation
	* We require $\sum _{j = 1}^n \pdiff{g}{r_j}\delta r_j = \pdiff{g}{r}\delta r = 0$ -- notice the similarity to the chain rule
		* This can be derived by differentiating $g(r(t)) = 0$ and noting that the result has to be zero for all $t$
	* Intuitively, this means that if we have infinitesimal perturbations to the point masses, we need the perturbations to satisfy all the constraints; i.e. any movement should stay in $\Gamma$ by staying on the level set $g(r) = 0$
* Starting from the equations of motion, we have $(m_i\ddot r_i - f_i^l - f_i^c)^T\delta r_i = 0$
	* The constraint forces only act in directions orthogonal to the allowable directions (they have no impact in the allowable directions), i.e. $(f_i^c)^T\delta r_i = 0$, so we can ignore the $f_i^c$ term above
	* Over all $i$, $\sum _{i = 1}^N (m_i\ddot r_i - f_i^l)^T\delta r_i = 0$
	* This is known as the *Lagrange-d'Alembert principle*

