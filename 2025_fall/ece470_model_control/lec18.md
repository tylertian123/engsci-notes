# Lecture 18, Oct 15, 2025

## Obstacle Avoidance via Potential Field

* Given a start joint position $q^s$ and end position $q^f$, the motion planning problem involves determining the path of the manipulator in $q$-space, $q(t)$, such that the robot doesn't hit any obstacles
	* Denote by $\bar O_i^0$ the final position of the base point $O_i^0$ at $q_f$
* We will use a potential field approach, with $\mathcal U(q) = \mathcal U_{att}(q) + \mathcal U_{rep}(q)$
	* $\mathcal U_{att}(q)$: the attractive potential function, which pulls each $O_i^0$ to $\bar O_i^0$
		* This potential alone would simply pull each base point in a straight line to their final positions
	* $\mathcal U_{rep}(q)$: the repulsive potential function, which pushes each $O_i^0$ away from obstacles
		* The strength of this potential is based on the distance between the base points and the nearest point on an obstacle, i.e. the orthogonal projection
* Note this assumes the obstacles are convex, otherwise looking at only the base points is not enough to avoid the obstacle (with some other assumptions, e.g. obstacles are not too small, etc)
	* More complex versions of this algorithm can use various heuristics or intermediate waypoints, etc
	* In general this problem is computationally intractable (NP-hard)
		* Potential fields are not guaranteed to always solve the problem but they are easy to compute
* For now we work in Euclidean space instead of $q$-space, but in the end we need to define potentials in $q$
* Define the attractive potential $\mathcal U_{i, att}(O_i^0) = \frac{1}{2}c_i\norm{O_i^0 - \bar O_i^0}^2$ where $c_i > 0$ is a constant weight
	* The weights allow us to place different importances for the different base points, effectively having some of them converge faster than the others
* Attractive gradient: $\alignedeqntwo[t]{F_{i, att}(O_i^0)}{-\nabla \mathcal U_{i, att}(O_i^0)}{-\left(\pdiff{\mathcal U_{i, att}(O_i^0)}{O_i^0}\right)^T}{-\left(c_i\norm{O_i^0 - \bar O_i^0} \cdot \frac{(O_i^0 - \bar O_i^0)^T}{\norm{O_i^0 - \bar O_i^0}}\right)^T}{-c_i(O_i^0 - \bar O_i^0)}$
	* Notice how this directly pulls towards $\bar O_i^0$ in a straight line, with a strength proportional to the distance times a weight
	* Practically, we want to avoid very large gradients, so we often cap the magnitude of the gradient at some value, or normalize the gradient past a certain point
	* $F_{i,att}(O_i^0) = \twocond{-c_i(O_i^0 - \bar O_i^0)}{\norm{O_i^0 - \bar O_i^0} \leq d}{-c_i\frac{(O_i^0 - \bar O_i^0)}{\norm{O_i^0 - \bar O_i^0}}d}{\norm{O_i^0 - \bar O_i^0} > d}$
* Define the repulsive potential $\mathcal U_{i, rep} = \twocond{\frac{\eta _i}{2}\left(\frac{1}{\norm{O_i^0 - \pi(O_i^0)}} - \frac{1}{\rho _0}\right)^2}{\norm{O_i^0 - \pi(O_i^0)} \leq \rho _0}{0}{\norm{O_i^0 - \pi(O_i^0)} > \rho _0}$
	* $\mathcal O$ is a convex set representing an obstacle ($\forall p, q \in \mathcal O, \overline{pq} \in \mathcal O$) in frame 0, and $\pi(p)$ is the orthogonal projection of $p$ onto $\mathcal O$
		* Note for all convex $\mathcal O \in \reals^3$, for each $p \in \reals^3$ where $p \notin \mathcal O$, there exists a unique $\pi(p) \in \mathcal O$ such that $\norm{p - \pi(p)}$ is minimum, i.e. there is a unique closest point in $\mathcal O$ to $p$
		* The line joining $p$ and $\pi(p)$ is orthogonal to the boundary of $\mathcal O$
	* $\eta _i$ is another weight parameter similar to in the attractive potential
	* $\rho _0$ is some distance threshold; if the base point is outside this threshold, the obstacle has no effect
		* $\set{O_i^0 | \norm{O_i^0 - \pi(O_i^0)} \leq \rho _0}$ is the *region of influence* of $\mathcal O$ for collision avoidance
	* We've construed the repulsive potential so that it is continuous, and $\mathcal U_{i,rep} \to \infty$ as $O_i^0 \to \pi(O_i^0)$, i.e. the repulsion is stronger the closer we are to the obstacle
* Note the columns of $\pdiff{\pi}{O_i^0}$ are orthogonal to $O_i^0 - \pi(O_i^0)$, i.e. $(O_i^0 - \pi(O_i^0))^T\pdiff{\pi}{O_i^0} = 0$, due to the geometry of the orthogonal projection
	* Intuitively $\pdiff{\pi}{O_i^0}$ is a line tangent to the boundary of $\mathcal O$, so it should be orthogonal to the line $O_i^0 - \pi(O_i^0)$
* $\alignedeqntwo[t]{\pdiff{\mathcal U_{i, rep}(O_i^0)}{O_i^0}}{-\eta _i\left(\frac{}{\norm{O_i^0 - \pi(O_i^0)}} - \frac{1}{\rho _0}\right)\frac{1}{\norm{O_i^0 - \pi(O_i^0)}^2}\frac{(O_i^0 - \pi(O_i^0))^T}{\norm{O_i^0 - \pi(O_i^0)}}\pdiff{(O_i^0 - \pi(O_i^0))}{O_i^0}}{-\eta _i\left(\frac{1}{\norm{O_i^0 - \pi(O_i^0)}} - \frac{1}{\rho _0}\right)\frac{(O_i^0 - \pi(O_i^0))^T}{\norm{O_i^0 - \pi(O_i^0)}^3}\left(I - \pdiff{\pi(O_i^0)}{O_i^0}\right)}{-\eta _i\left(\frac{1}{\norm{O_i^0 - \pi(O_i^0)}} - \frac{1}{\rho _0}\right)\frac{(O_i^0 - \pi(O_i^0))^T}{\norm{O_i^0 - \pi(O_i^0)}^3}}$
	* $F_{i,rep}(O_i^0) = \twocond{\eta _i\left(\frac{1}{\norm{O_i^0 - \pi(O_i^0)}} - \frac{1}{\rho _0}\right)\frac{(O_i^0 - \pi(O_i^0))}{\norm{O_i^0 - \pi(O_i^0)}^3}}{\norm{O_i^0 - \pi(O_i^0)} \leq \rho _0}{0}{\norm{O_i^0 - \pi(O_i^0)} > \rho _0}$

