# Lecture 23, Nov 5, 2025

## Euler-Lagrange -- Part 3

* *Kinetic energy* for a collection of point masses is $T = \sum _{i = 1}^N \frac{1}{2}m_i\norm{\dot r_i}^2 = \sum _{i = 1}^N \frac{1}{2}m_i\dot r_i^T\dot r_i$
* Notice $\alignedeqntwo[t]{\diff{}{t}\left(\pdiff{T}{\dot q_j}\right)}{\sum _{i = 1}^N \diff{}{t}\left(m_i\dot r_i^T\pdiff{\dot r_i}{\dot q_j}\right)}{\sum _{i = 1}^N \diff{}{t}\left(m_i\dot r_i^T\pdiff{r_i}{q_j}\right)}$
	* Note $\dot r_i = \sum _{j = 1}^n \pdiff{r_i}{q_j}\dot q_j$, so $\pdiff{\dot r_i}{\dot q_j} = \pdiff{r_i}{q_j}$
	* This is the first term in the summation for $\sum _{i = 1}^N m_i\ddot r_i^T\delta r_i$ from last lecture
	* Also, $\pdiff{T}{q_j} = \sum _{i = 1}^N m_i\dot r_i^T\pdiff{\dot r_i}{q_j}$ which is the second term
* Combining everything: $\sum _{j = 1}^n\left(\diff{}{t}\left(\pdiff{T}{\dot q_j}\right) - \pdiff{T}{q_j}\right)\dd q_j = \sum _{j = 1}^n \varphi _j\,\dd q_j$
	* Since the $\dd q_j$ are arbitrary, this means $\diff{}{t}\left(\pdiff{T}{\dot q_j}\right) - \pdiff{T}{q_j} = \varphi _j, j = 1, \dots, n$
* For each force, $f_i^l = f_i^g + f_i^a = -\nabla _{r_i}\mathcal U(r_1, \dots, r_N) + f_i^a = -\pdiff{\mathcal U}{r_i} + f_i^a$, where the first term is the force caused by gravity
	* $\alignedeqntwo[t]{\varphi _j}{\sum _{i = 1}^N (f_i^l)^T\pdiff{r_i}{q_j}}{\sum _{i = 1}^N -\pdiff{\mathcal U}{r_i}\pdiff{r_i}{q_j} + (f_i^a)^T\pdiff{r_i}{q_j}}{-\pdiff{\mathcal U}{q_j} + \tau _j}$
	* The term $\tau _j$ captures all the other forces acting on the joint
* Finally, we get $\diff{}{t}\left(\pdiff{T}{\dot q_j}\right) - \pdiff{T}{q_j} + \pdiff{\mathcal U}{q_j} = \tau _j$
* Let the *Lagrangian* $\mathcal L = T - \mathcal U$
	* Note the potential energy is independent of $\dot q_j$, so $\pdiff{T}{\dot q_j} = \pdiff{\mathcal L}{\dot q_j}$
* We arrive at the *Euler-Lagrange equations*: $\diff{}{t}\left(\pdiff{\mathcal L}{\dot q_j}\right) - \pdiff{\mathcal L}{q_j} = \tau _j$

\noteSummary{The Euler-Lagrange equations are a set of $n$ equations of motion for the system: $$\diff{}{t}\left(\pdiff{\mathcal L}{\dot q_j}\right) - \pdiff{\mathcal L}{q_j} = \tau _j$$
where the Lagrangian is $\mathcal L = T - \mathcal U$, $n$ is the number of degrees of freedom ($n = 3N - l$ for $l$ constraints and $N$ particles in 3 dimensions), $q$ are $n$ generalized coordinates which parametrize the set of allowed states, $\tau _j$ are the generalized forces:
$$\tau _j = \sum _{i = 1}^N (f_i^l)^T\pdiff{r_i}{q_j}$$
where $f^l$ are the applied forces.

A set of $l$ independent holonomic constraints are expressed as $$g(r_1, \dots, r_N) = 0 \in \reals^l \qquad \rank\left(\pdiff{g}{r}\right) = l$$
For constraints to be satisified, the virtual displacements $\delta r = \rvec{\delta r_1^T}{\cdots}{\delta r_N^T}^T \in \reals^{3N}$ must satisfy $\pdiff{g}{r}\delta r = 0$.}

