# Lecture 22, Nov 30, 2023

## Manipulator Control

* Recall the manipulator dynamics: $\bm M(\bm q)\ddot{\bm q} + \bm h(\bm q, \dot{\bm q}) - \bm f^f(\bm q, \dot{\bm q}) - \bm f^g(\bm q) - \bm J^T(\bm q)\bm f^{ee} = \bm u(t)$
	* $\bm M(\bm q)\ddot{\bm q}$ are the linear (in $\ddot{\bm q}$) terms
	* $\bm h(\bm q, \dot{\bm q})$ are the nonlinear (in $\dot{\bm q}$) terms
* In general there are 3 approaches to control: independent joint control, computed torque control, and general feedback control

### Independent Joint Control

* Assumes joints are independent; each joint is controlled by its own PID controller
* $u_k(t) = -K_{D,k}(\dot q_k - \dot q_{d,k}) - K_{P,k}(q_k - q_{d,k}) - K_{I,k}\int (q_k - q_{d,k})\,\dt$
	* $q_{d,k}(t)$ is the desired trajectory of joint $k$
* Most simple and most commonly used; does not take into account the system dynamics at all
* Since the system is highly nonlinear, there is no guarantee that this will work
* In practice gain scheduling might be used to improve results

### Computed Torque Control

* Using the equations of motion, solve for the forces to effect the desired motion, and use PD control to correct for errors
* $\bm u(t) = \bm M(\bm q)[\ddot{\bm q}_d - \bm K_D(\dot{\bm q} - \dot{\bm q}_d) - \bm K_P(\bm q - \bm q_d)] + \bm h(\bm q, \dot{\bm q}) - \bm f^g(\bm q)$
	* Note in the following discussion we will neglect friction and end-effector force terms
* This uses a combination of feedback and feedforward control
* This requires that we know all parts of the system dynamics fairly well
* We can show that this is asymptotically stable; substitute $\bm u(t)$ in the manipulator dynamics, then:
	* $\bm M(\bm q)[\ddot{\bm q}_d - \bm K_D(\dot{\bm q} - \dot{\bm q}_d) - \bm K_P(\bm q - \bm q_d)] + \bm h(\bm q, \dot{\bm q}) - \bm f^g(\bm q) = \bm M(\bm q)\ddot{\bm q} + \bm h(\bm q, \dot{\bm q}) - \bm f^g(\bm q)$
	* $\bm M(\bm q)[(\dot{\bm q} - \ddot{\bm q}_d) - \bm K_D(\dot{\bm q} - \dot{\bm q}_d) - \bm K_P(\bm q - \bm q_d)] = \bm 0$
	* Since $\bm M$ is positive definite, this reduces to $\ddot{\bm e} + \bm K_D\dot{\bm e} + \bm K_P\bm e = \bm 0$, where $\bm e = \bm q - \bm q_d$
	* This is asymptotically stable if $\bm K_D, \bm K_D$ are both positive definite
* $\bm K_D, \bm K_P$ can be chosen to be e.g. diagonal matrices, in which case this would be similar to independent joint control, but with feedforward to take into account manipulator dynamics
	* If $\bm K_D = \diag[2\zeta _i\omega _i], \bm K_P = \diag[\omega _i^2]$, then the error equation is $\ddot e_i + 2\zeta _i\omega _i\dot e_i + \omega _i^2 e_i = 0$

### General Feedback Control

* PD controller with some feedforward for gravity, but not inertia
* $\bm u(t) = -\bm K_D(\dot{\bm q} - \dot{\bm q}_d) - \bm K_P(\bm q - \bm q_d) - \bm f^g(\bm q)$
	* Notice that there is no $\bm h(\bm q, \dot{\bm q})$ term or inertia matrix
	* This requires much less knowledge of the system than the computed-torque approach
* Here we will analyze only the regulator problem (i.e. constant $\bm q_d$)
* We can prove that this is stable using Lyapunov theory:
	* Candidate Lyapunov function: $v(\bm e, \dot{\bm q}) = \frac{1}{2}\dot{\bm q}^T\bm M(\bm q)\dot{\bm q} + \frac{1}{2}\bm e^T\bm K_P\bm e$
		* Since $\bm M > 0$, assuming $\bm K_P > 0$, this is clearly positive definite
	* $\dot v(\bm e, \dot{\bm q}) = \dot{\bm q}^T\bm M(\bm q)\ddot{\bm q} + \frac{1}{2}\dot{\bm q}^T\dot{\bm M}\dot{\bm q} + \dot{\bm q}^T\bm K_P\bm e$
		* From the equation of motion, $\bm M(\bm q)\ddot{\bm q} = -\bm h(\bm q, \dot{\bm q}) - \bm K_D\dot{\bm q} - \bm K_P\bm e$ (obtain by substituting in control policy)
		* $\dot v(\bm e, \dot{\bm q}) = \frac{1}{2}\dot{\bm q}^T\dot{\bm M}(\bm q)\dot{\bm q} - \dot{\bm q}^T\bm h(\bm q, \dot{\bm q}) - \dot{\bm q}^T\bm K_D\dot{\bm q}$
		* The last term is negative semi-definite, but what about the rest?
	* $\frac{1}{2}\dot{\bm q}^T\dot{\bm M}(\bm q)\dot{\bm q} - \dot{\bm q}^T\bm h(\bm q, \dot{\bm q}) = \sum _{k = 1}^n\sum _{j = 1}^n\left(\frac{1}{2}\dot M_{kj}\dot q_j - h_k\right)\dot q_k$
		* Recall $h_k = \sum _{j = 1}^n \left(\dot M_{kj} - \frac{1}{2}\sum _{i = 1}^n\pdiff{M_{ij}}{q_k}\dot q_i\right)\dot q_j$
		* Therefore $\frac{1}{2}\dot{\bm q}^T\dot{\bm M}(\bm q)\dot{\bm q} - \dot{\bm q}^T\bm h(\bm q, \dot{\bm q}) = -\frac{1}{2}\sum _{k = 1}^n\sum _{j = 1}^n\left(\dot M_{kj} - \sum _{i = 1}^n\pdiff{M_{ij}}{q_k}\dot q_i\right)\dot q_j\dot q_k$
		* Note $\dot M_{kj} = \sum _{i = 1}^n \pdiff{M_{kj}}{q_i}\dot q_i$
		* Therefore $\frac{1}{2}\dot{\bm q}^T\dot{\bm M}(\bm q)\dot{\bm q} - \dot{\bm q}^T\bm h(\bm q, \dot{\bm q}) = -\frac{1}{2}\sum _{i = 1}^n\sum _{j = 1}^n\sum _{k = 1}^n \left(\pdiff{M_{kj}}{q_i} - \pdiff{M_{ij}}{q_k}\right)\dot q_i\dot q_j\dot q_k$
		* But $\sum _{i = 1}^n\sum _{j = 1}^n\sum _{k = 1}^n \pdiff{M_{kj}}{q_i}\dot q_i\dot q_j\dot q_k = \sum _{i = 1}^n\sum _{j = 1}^n\sum _{k = 1}^n\pdiff{M_{ij}}{q_k} \dot q_i\dot q_j\dot q_k$ if we rename the indices
		* Therefore this entire term reduces to 0
	* Hence $\dot v(\bm e, \dot{\bm q}) = -\dot{\bm q}^T\bm K_D\dot{\bm q}$
		* Provided $\bm K_D > 0$, this is negative definite with respect to $\dot{\bm q}$, but not $\bm e$
		* We need to use Lasalle's extension
	* Consider the equation of motion: $\bm M(\bm q)\ddot{\bm q} + \bm h(\bm q, \dot{\bm q}) + \bm K_D\dot{\bm q} + \bm K_P\bm e = \bm 0$
		* When $\ddot{\bm q} = \bm 0$, we also have $\ddot{\bm q} = 0$, so the equation of motion reduces to $\bm K_P\bm e = \bm 0$
		* Since $\bm K_P$ is positive definite, it is also full rank, so the only solution is $\bm e = \bm 0$
		* Therefore when $\dot v = 0$, we are forced to have $\bm e = \bm 0$, so Lasalle's extension applies
	* Hence this system is asymptotically stable if $\bm K_P, \bm K_D > 0$

