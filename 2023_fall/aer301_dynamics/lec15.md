# Lecture 15, Oct 26, 2023

## Example: Spherical Pendulum

* Consider a pendulum of mass $m$, length $l$ at an angle $\theta$ from the vertical and $\phi$ from the $x$ axis; what are the equations of motion
* Our generalized coordinates are $q_1 = \phi, q_2 = \theta$
* To get the kinetic energy we break up the velocity into two components
	* $T = \frac{1}{2}mv^2 = \frac{1}{2}m\left((l\dot\theta)^2 + (l\dot\phi\sin\theta)^2\right) = \frac{1}{2}ml^2(\dot\theta^2 + \dot\phi^2\sin^2\theta)$
* Using the pivot as zero, the potential energy due to gravity is $V = mgl\cos\theta$
* No $Q_{k,\striangle}$ because there are no non-conservative forces in our problem
* $L = \frac{1}{2}ml^2(\dot\theta^2 + \dot\phi^2\sin^2\theta) - mgl\cos\theta$
* Compute the derivatives:
	* $\pdiff{L}{\dot\theta} = ml^2\dot\theta$
	* $\diff{}{t}\left(\pdiff{L}{\dot\theta}\right) ml^2\ddot\theta$
	* $\pdiff{L}{\theta} = ml^2\dot\phi^2\sin\theta\cos\theta + mgl\sin\theta$
	* $\pdiff{L}{\dot\phi} = ml^2\dot\phi\sin^2\theta$
	* $\diff{}{t}\left(\pdiff{L}{\dot\phi}\right) = ml^2\ddot\phi\sin^2\theta - 2ml^2\dot\theta\dot\phi\sin\theta\cos\theta$
	* $\pdiff{L}{\phi} = 0$
* The two equations are:
	* $ml^2\ddot\theta - ml^2\dot\phi^2\sin\theta\cos\theta - mgl\sin\theta = 0$
	* $ml^2\ddot\phi\sin^2\theta - 2ml^2\dot\theta\dot\phi\sin\theta\cos\theta = 0$
* Note because $\diff{}{t}\left(\pdiff{L}{\dot\phi}\right) = 0$, we can immediately say $\pdiff{L}{\dot\phi}$ is a constant
	* In this case we refer to $\phi$ as an *ignorable*, or *cyclical coordinate*
	* Physically, $ml^2\dot\phi\sin^2\theta$ is the angular momentum about the vertical axis, which is conserved, hence it is a constant
	* $\pdiff{L}{\dot q_k}$ is a *generalized momentum*

## Constraints -- Method of Lagrange Multipliers

* Consider a hoop of radius $a$ rolling without slipping at an angle $\phi$ down a ramp, at a distance $x$
	* In this case we only have 1 independent coordinate -- we can't move $x$ and $\phi$ independently of each other
	* $\dx = a\dphi \implies x = a\phi + x_0$
	* Starting from the differential form we were able to integrate this to get an expression relating $x$ and $\phi$; this is not always possible
	* If we had an expression involving $x$, we can simply replace it by an expression of $\phi$
* Now consider that hoop rolling on a 2D surface, at a direction of $\theta$ with respect to the $x$ axis
	* $\dx = a\dphi\cos\theta, \dy = a\dphi\sin\theta$
	* We have 2 independent coordinates since the change in $\theta$ and $\phi$ dictate the change in $x$ and $y$
	* But we can no longer directly integrate our differential constraints since $x$ and $y$ depend on the entire history of $\theta$ and $\phi$
	* Even though we only have 2 independent coordinates, we cannot write $x$ and $y$ independently of $\phi$ and $\theta$, so we can't substitute $x$ and $y$ for $\phi$ and $\theta$ anymore
* In general, integrable constraints can be written as $\varphi(x, \phi) = 0$ and are referred to as *holonomic* constraints; if they can't be integrated, they are *non-holonomic*
	* Note that inequality constraints are holonomic
	* Holonomic constraints tell you "where" you can go -- they limit the space of coordinates to a subspace that we can reach
	* Non-holonomic constraints tell you "how" you can go -- they limit the possible paths we can take through the coordinate space
* Recall that from $\sum _k\left[Q_k - \diff{}{t}\left(\pdiff{T}{\dot q_k}\right) + \pdiff{T}{q_k}\right]\delta q_k = 0$, we concluded that the part inside the brackets was zero for all $k$ because the $\delta q_k$ are independent; but if we have dependent coordinates, we can no longer do this
* Consider a series of (linearly independent) constraints in the form $\sum _k \Xi _{jk}\delta q_k = 0$ for $j = 1, \dots, m$
	* We can use the method of *Lagrange multipliers*
	* Multiply each constraint by $\lambda _j$, so $\sum _j\lambda _j\sum _k \Xi _{jk}\delta q_k = 0$
	* $\sum _{k = 1}^n \left[\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} - Q_{k,\striangle} - \sum _{j = 1}^m \lambda _j\Xi _{jk}\right]\delta q_k = 0$
	* Without loss of generality, let $q_k, k = 1, \dots, m$ be dependent on $q_k, k = m + 1, \dots, n$, which are independent
	* We can choose $\lambda _j$ such that $\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} = Q_{k,\striangle} + \sum _{j = 1}^m \lambda _j\Xi _{jk}$ for $k = 1, \dots, m$
		* Now $\sum _{k = m + 1}^n \left[\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} - Q_{k,\striangle} - \sum _{j = 1}^m \lambda _j\Xi _{jk}\right]\delta q_k = 0$
		* But we said that $q_k$ for $k = m + 1, \dots, n$ are independent, so we can apply the same argument as before
* $\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) - \pdiff{L}{q_k} = Q_{k,\striangle} + \sum _{j = 1}^m \lambda _j\Xi _{jk}$ applies for all coordinates, regardless of independence
	* Note that we have $n + m$ unknowns (the $q_k$ and $\lambda _j$), which are matched by our $n + m$ equations ($n$ Lagrange equations and $m$ constraints)
	* In general the constraints are $\sum _{k = 1}^n \Xi _{jk}\dd q_k + \Xi _{jt} \dt = 0$
		* Dividing by $\dt$, $\sum _{k = 1}^n \Xi _{jk}\dot q_k + \Xi _{jt} = 0$, which are our $m$ constraint equations
		* This is known as the *Pfaffian form* of the constraints

## Example: Atwood's Machine

* Consider two masses $m_1, m_2$ hung over a pulley with mass $m_p$, which is concentrated at the circumference (so we don't need to worry about moment of inertia)
* The height of the masses are $z_1, z_2$; the pulley is rotating by an angle $\theta$, and let $z_3 = a\theta$ where $a$ is the radius of the pulley
* We have 1 degree of freedom, but we will use all 3 coordinates and use 2 constraints:
	* $z_1 = a\theta = z_3 = -z_2 \implies \twopiece{\dz _1 - \dz _3 = 0}{\dz _2 + \dz _3 = 0}$
	* Therefore $\Xi _{11} = 1, \Xi _{12} = 0, \Xi _{13} = -1$; $\Xi _{21} = 0, \Xi _{22} = 1, \Xi _{23} = 1$
* Kinetic and potential energy:
	* $T = \frac{1}{2}m_1\dot z_1^2 + \frac{1}{2}m_2\dot z_2^2 + \frac{1}{2}m_p\dot z_3^2$
	* $V = m_1gz_1 + m_2gz_2$
* Derivatives:
	* $\pdiff{L}{\dot z_1} = m_1\dot z_1, \diff{}{t}\left(\pdiff{L}{\dot z_1}\right) = m_1\ddot z_1, \pdiff{L}{z_1} = -m_1g$
	* $\pdiff{L}{\dot z_2} = m_2\dot z_2, \diff{}{t}\left(\pdiff{L}{\dot z_2}\right) = m_2\ddot z_2, \pdiff{L}{z_2} = -m_2g$
	* $\pdiff{L}{\dot z_3} = m_p\dot z_3, \diff{}{t}\left(\pdiff{L}{\dot z_3}\right) = m_p\ddot z_3, \pdiff{L}{z_3} = 0$
	* Assume no non-conservative forces
* Lagrange's equations: 
	* $m_1\ddot z_1 + m_1g = \lambda _1\Xi _{11} + \lambda _2\Xi _{21} = \lambda _1$
	* $m_2\ddot z_2 + m_2g = \lambda _1\Xi _{12} + \lambda _2\Xi _{22} = \lambda _2$
	* $m_p\ddot z_3 = \lambda _1\Xi _{13} + \lambda _2\Xi _{23} = -\lambda _1 + \lambda _2$
* Constraint equations:
	* $\dot z_1 - \dot z_3 = 0$
	* $\dot z_2 + \dot z_3 = 0$
* We can solve this to get $\ddot z_1 = -\ddot z_2 = \ddot z_3 = -\frac{m_1 - m_2}{m_p + m_1 + m_2}g$
	* $\lambda _1 = \frac{m_p + 2m_2}{m_p + m_1 + m_2}m_1g$
	* $\lambda _2 = \frac{m_p + 2m_1}{-m_p + m_1 + m_2}m_2g$
	* The idea of Atwood's machine is that we can choose the masses to be nearly equal, so we get an effective $g$ that's very small
	* $\lambda _1$ and $\lambda _2$ turn out to be the tension on the two sides of the string
* In general, the Lagrange multipliers have meaning -- they are associated with the constraint forces

