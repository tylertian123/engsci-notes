# Lecture 19, Oct 17, 2025

## Obstacle Avoidance via Potential Field (Continued)

* Given the initial joint variables $q^0 = q^s \in \reals^n$ and final joint variables $q^f \in \reals^n$, with the gradients, we can plan a path iteratively as $q^{k + 1} = q^k - \alpha _k\nabla _q\mathcal U(q^k)$ where $\alpha _k > 0$ is the learning rate
* $\mathcal U(q)$ is the total potential function, $\mathcal U(q) = \sum _{i = 1}^n \left(\mathcal U_{i, att}(O_i^0(q)) + \mathcal U_{i, rep}(O_i^0(q))\right)$
	* A simple sum might not always work; sometimes we cannot find the global minimum of the potential this way
* $\alignedeqntwo[t]{\nabla _q\mathcal U(q)}{\left(\pdiff{\mathcal U(q)}{q}\right)^T}{\left(\sum _{i = 1}^n\left(\pdiff{\mathcal U_{i, att}}{O_i^0} + \pdiff{\mathcal U_{i, rep}}{O_i^0}\right)\pdiff{O_i^0(q)}{q}\right)^T}{\sum _{i = 1}^n \left(\pdiff{O_i^0(q)}{q}\right)^T\left(\nabla\mathcal U_{i, att}(O_i^0(q)) + \nabla\mathcal U_{i, rep}(O_i^0(q))\right)}$
	* We have $\nabla\mathcal U_{i, att}(O_i^0(q)) + \nabla\mathcal U_{i, rep}(O_i^0(q))$ from the previous lecture
	* Now we need $\pdiff{O_i^0(q)}{q}$, which for $i = n$ is the linear velocity Jacobian $J_v(q)$ that we already have
	* Note, for this algorithm we need the Jacobian for every base point, not just the end-effector
	* In practice, when computing $\pdiff{O_i^0(q)}{q}$ for $i < n$, we can do it more efficiently by starting from $J_v(q)$ and zeroing out some columns
* Let $J_{v,O_i}(q) = \pdiff{O_i^0(q)}{q}$, then $J_{v,O_i} = \rvec{J_{v,O_i,1}}{\cdots}{J_{v,O_i,i}}{0_{3 \times (n - i)}}$
	* $J_{v,O_i,j} = \twocond{z_{j - 1}^0}{\text{joint }j\text{ is prismatic}}{z_{j - 1}^0 \times (O_i^0 - O_{j - 1}^0)}{\text{joint }j\text{ is revolute}}$
	* This is similar to $J_v(q)$, but notice instead of $O_n^0$ we have $O_i^0$, because we are essentially cutting off the manipulator after link $i$
* The overall algorithm:
	1. Initialize: $q^0 = q^s$
	2. Iterate: $q^{k + 1} = q^k + \alpha _k\sum _{i = 1}^n J_{v,O_i}^T(q^k)\left(F_{i,att}(O_i^0(q^k)) + F_{i,rep}(O_i^0(q^k))\right)$
	3. Termination condition: $\norm{q^{k + 1} - q^f} < \varepsilon$ where $\varepsilon > 0$ is a termination threshold
		* In practice, this won't always converge, so often we put a cap on the max iterations and give up if we hit this number
	4. Output: $q^0, q^1, \dots, q^N$, a set of waypoints in $q$-space
		* However, these waypoints are often not smooth enough and results in jerky motion
		* Therefore we usually do a spline fit over these waypoints, to get a continuous a second or third-order derivative

