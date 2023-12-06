# Lecture 21, Nov 28, 2023

## Vibrations: Equation of Motion

* Consider a system of $N$ rigid bodies and particles, described by a set of $n$ generalized coordinates $q_k$
* Consider a potential $V$, then the forces are given by $f = -\pdiff{V}{q_k}$, which are zero at equilibrium
* WLOG choose the equilibria to be when $q_k = 0$, then we can expand the potential about the equilibrium:
	* $V(\bm q) = V_0 + \sum _k \pdiff{V}{q_k}q_k + \frac{1}{2}\sum _{k, j}\ppdiff{V}{q_j}{q_k}q_jq_k$
	* We can take $V_0 = 0$ since in general the reference potential level does not matter; at an equilibrium we also have $\pdiff{V}{q_k} = 0$
	* Therefore $V = \frac{1}{2}\sum _{k, j}\ppdiff{V}{q_j}{q_k}q_jq_k$
* We may express $V = \frac{1}{2}\bm q^T\bm K\bm q$ for small disturbances
	* $\bm K$ is a matrix of second partials, known as the *stiffness matrix*
	* Due to symmetry of second partials, $\bm K$ is symmetric (but note it is not necessarily definite)
* For kinetic energy, $T = \frac{1}{2}\sum _{i = 1}^N \left(m_i\bm v_i^T\bm v_i + \bm\omega _i^T\bm I_i\bm\omega _i\right)$
	* $\bm v_i = \dot{\bm r_i}(q_1, \dots, q_k) = \sum _{k = 1}^n\pdiff{\bm r_i}{q_k}\dot q_k = \sum _{k = 1}^n \bm a_{ik}\dot q_k$
	* $\bm\omega _i^\times = -\dot{\bm C}_i\bm C_i^T = \sum _k -\pdiff{\bm C_i}{q_k}\bm C_i^T\dot q_k = \sum _k \bm b_{ik}^\times\dot q_k \implies \bm\omega _i = \sum _k\bm b_{ik}\dot q_k$
	* We will assume that both have no dependence on $\bm q$
	* Therefore $T = \frac{1}{2}\sum _{j, k}\left[\sum _i m_i\bm a_{ij}^T\bm a_{ik}\dot q_j\dot q_k + \sum _i \bm b_{ij}^T\bm I_i\bm b_{ik}\dot q_j\dot q_k\right]$
* Let $M_{jk} = \sum _i m_i\bm a_{ij}^T\bm a_{ij} + \sum _i \bm b_{ij}^T\bm I\bm b_{ij}$, then $T = \frac{1}{2}\sum _{j, k} M_{jk}\dot q_j\dot q_k = \frac{1}{2}\dot{\bm q}^T\bm M\dot{\bm q}$
	* $\bm M$ is symmetric and positive definite, because for any nonzero $\dot q$, we expect some kind of positive kinetic energy
* The non-conservative forces are $\overarc{\delta W}_{\striangle} = \sum _k f_k\delta q_k = \delta\bm q_k^T\bm f$
* Using Hamilton's principle, we seek to find $\delta \int _{t_1}^{t_2} L\,\dt - \int _{t_1}^{t_2}\overarc{\delta W}_\striangle\,\dt = 0$
	* $\alignedeqntwo[t]{\delta \int _{t_1}^{t_2} L\,\dt - \int _{t_1}^{t_2}\overarc{\delta W}_\striangle\,\dt}{\int _{t_1}^{t_2} \left[\delta\left(\frac{1}{2}\dot{\bm q}^T\bm M\dot{\bm q} - \frac{1}{2}\bm q^T\bm K\bm q\right) + \overarc{\delta W}_{\striangle}\right]\,\dt}{\int _{t_1}^{t_2} \left[\left(\delta\dot{\bm q}^T\bm M\dot{\bm q} - \delta \bm q^T\bm K\bm q\right) + \delta\bm q^T\bm f\right]\,\dt}{\int _{t_1}^{t_2} \left(-\delta\bm q^T\bm M\ddot{\bm q} - \delta\bm q^T\bm K\bm q + \delta\bm q^T\bm f\right)\,\dt}{\int _{t_1}^{t_2} \delta\bm q^T\left(-\bm M\ddot{\bm q} - \bm K\bm q + \bm f\right)\,\dt}$
	* Note we used integration by parts and eliminated the boundary term as in the derivation for the Euler-Lagrange equation
	* Setting this to zero, we get that the term inside the brackets must be zero
* Therefore the equation of motion is $\bm M\ddot{\bm q} + \bm K\bm q = \bm f(t)$
	* Notice the similarity to the 1 dimensional spring-mass system $m\ddot x + kx = f$
	* If we had linear damping, we could add a $\bm D\dot q$ term, where $\bm D$ is symmetric and positive semi-definite
	* We could also add a $\bm G\dot{\bm q}$ term, where $\bm G$ is a skew-symmetric matrix representing gyric effects
	* Finally we can add a $\bm H\bm q$ term where $\bm H$ is a skew-symmetric matrix representing circulatory effects (follower forces, e.g. lift and drag)
	* This is the general form for a linear system
* Note that to obtain the linear system, we need to find the kinetic and potential energies to second order

### Example: Double Pendulum

* Consider a double pendulum with masses $m_1 = m_2 = m$, angles $\theta _1, \theta _2$ from vertical, and link lengths $l_1 = l_2 = l$
* $T = \frac{1}{2}m_1v_1^2 + \frac{1}{2}m_2v_2^2$
	* $v_1 = l_1\dot\theta _1$
	* For $v_2$, we need to add the velocities of the first mass and the second mass relative to the first mass, which are in general not in the same direction
	* The relative speed is $v_2' = l_2\dot\theta _2$, which forms a triangle with $v_1$
	* Using the cosine law: $v_2^2 = v_1^2 + (v_2')^2 - 2v_1v_2'\cos(\pi - (\theta _2 - \theta _1)) = l_1^2\dot\theta _1^2 + l_2^2\dot\theta _2^2 + 2l_1l_2\dot\theta _1\dot\theta _2\cos(\theta _2 - \theta _1)$
	* $T = \frac{1}{2}ml^2\left(2\dot\theta _1^2 + \dot\theta _2^2 + 2\dot\theta _1\dot\theta _2\cos(\theta _2 - \theta _1)\right)$
		* We can expand $\cos(\theta _2 - \theta _1) = 1 - \frac{1}{2}(\theta _2 - \theta _1)^2$ to second order
		* However since we already have a $\dot\theta _1\dot\theta _2$ multiplying this, it will be 4th order, which we can ignore
	* Therefore $T = \frac{1}{2}ml^2\left(2\dot\theta _1^2 + \dot\theta _2^2 + 2\dot\theta _1\dot\theta _2\right)$
* This gives $T = \frac{1}{2}\dot{\bm\theta}^T\bm M\dot{\bm\theta}$ where $\bm M = \mattwo{2ml^2}{ml^2}{ml^2}{ml^2} = ml^2\mattwo{2}{1}{1}{1}$
* $V = mgl(1 - \cos\theta _1) + mgl(1 - \cos\theta _2 + 1 - \cos\theta _1)$
	* Expanding this to second order, we get $\frac{1}{2}mgl(2\theta _1^2 + \theta _2^2)$
	* Therefore $V = \frac{1}{2}\bm\theta^T\bm K\bm\theta$ where $\bm K = mgl\mattwo{2}{0}{0}{1}$
* The equation of motion is therefore $\bm M\ddot{\bm\theta} + \bm K\bm\theta = \bm 0$

