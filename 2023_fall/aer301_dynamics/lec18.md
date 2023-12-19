# Lecture 18, Nov 16, 2023

## Dynamics of Rigid Bodies

### Momentum of Rigid Bodies

* Consider a rigid body $R$ and some inertial reference point $O_\mathfrak{I}$
	* Each differential mass element $\dm$ has momentum $\dd\uvec p = \uvec r^\dota\,\dm$
	* Therefore the overall momentum is $\uvec p = \int _R \uvec r^\dota\,\dm$
* Consider some reference point $O$ fixed to the body, and let $\uvec\rho$ be the position of a mass element relative to $O$
	* $\uvec r^\dota = \uvec v_O + \uvec\rho^\dota = \uvec v_O + \uvec\rho^\dotb + \uvec\omega \times \uvec\rho$
	* But $\uvec\rho$ is fixed as seen in a body-relative frame, so $\uvec\rho^\dotb = 0$ (unless the body is deformable)
	* $\uvec p = \int _R (\uvec v_O + \uvec\omega \times \uvec\rho)\,\dm = \int _R \uvec v_O \,\dm - \int _R \uvec\rho \times \uvec\omega\,\dm = m\uvec v_O - \left(\int _R \uvec \rho\,\dm\right)\times \uvec\omega$
* Let $\uvec c_O = \int _R \uvec\rho\,\dm$ be the *first moment of mass* (aka *first moment of inertia*), then $\uvec p = m\uvec v_O - \uvec c_O \times \uvec \omega$
	* Note that $\uvec c_O$ has a subscript since it is computed with respect to $O$
	* Expressed in a body frame $\vcx F_b$, $\bm p = m\bm v_O - \bm c_O^\times\bm \omega$
		* Note $\bm c_O$ is a constant in $\vcx F_b$
* For angular momentum, $\dd\uvec h_O = \uvec\rho \times \dd\uvec p = \uvec\rho \times (\uvec v_O - \uvec\rho \times \uvec\omega)\,\dm \implies \uvec h_O = \uvec c_O \times \uvec v_O - \int _R \uvec\rho \times (\uvec\rho \times \uvec\omega)\,\dm$
	* In $\vcx F_b$, $\alignedeqntwo[t]{\bm h_O}{\bm c_O^\times\bm v_O - \int _R \bm\rho^\times\bm\rho^\times\bm\omega\,\dm}{\bm c_O^\times\bm v_O + \left(-\int _R \bm\rho^\times\bm\rho^\times\,\dm\bm\right)\bm\omega}{\bm c_O^\times\bm v_O + \bm J_O\bm\omega}$
	* $\bm J_O = -\int _R\bm\rho^\times\bm\rho^\times\,\dm$ is the *second moment of mass*, or the *inertia matrix*
		* Note $\uvec J_O$ is a *second order tensor*; in vector form, $\uvec h_O = \uvec c_O \times \uvec v_O + \uvec J_O \cdot \uvec \omega$
		* $\bm J_O = \int _R (\rho^2\bm 1 - \bm\rho\bm\rho^T)\,\dm$
	* Let $\bm s$ be any vector, then $\alignedeqntwo[t]{\bm s^T\bm J_O\bm s}{-\bm s^T\left(\int _R\bm\rho^\times\bm\rho^\times\,\dm\right)\bm s}{-\int _R\bm s^T\bm\rho^\times\bm\rho^\times\bm s\,\dm}{\int _R(\bm\rho^\times\bm s)^T(\bm\rho^\times\bm s)\,\dm}{\int _R \norm{\bm\rho^\times\bm s}^2\,\dm}$
		* There will always be some $\uvec\rho$ that is not parallel to $\uvec s$ for any 3D body, so this integral is always positive for a nonzero $\uvec s$
		* Therefore $\bm J_O$ is symmetric positive definite (hence why we include a minus sign in the definition)
* A *second-order tensor* $\uvec D = \uvec a\uvec b$ is defined such that $\uvec D \cdot \uvec v = (\uvec a\uvec b) \cdot \uvec v = \uvec a(\uvec b \cdot \uvec v)$
* In matrix form, $\cvec{\bm p}{\bm h_O} = \mattwo{m\bm 1}{-\bm c_O^\times}{\bm c_O^\times}{\bm J_O}\cvec{\bm v_O}{\bm\omega}$, where $\bm M = \mattwo{m\bm 1}{-\bm c_O^\times}{\bm c_O^\times}{\bm J_O}$ is the *mass matrix*, which is also symmetric positive definite
* If we choose $O = \com$, then $\int _R \uvec r\,\dm = 0$, so $\uvec c = 0$
	* $\bm p = m\bm v_O$
	* $\bm h_\com = \bm J_\com\bm\omega = \bm I\bm\omega$, where we denote $\bm I$ as the inertia matrix about the centre of mass
* Consider two inertia matrices $\bm J_A, \bm J_B$ relative to points $A, B$; for a differential mass element, denote position relative to $A$ by $\uvec a$, position relative to $B$ by $\uvec b$ and the relative position between $A$ and $B$ is $\uvec\rho^{BA}$
	* $\bm a = \bm b + \bm\rho^{BA}$ in a common body frame (draw this out)
	* $\alignedeqntwo[t]{\bm J_A}{-\int _R\bm a^\times\bm a^\times\,\dm}{-\int _R(\bm b + \bm\rho^{BA})^\times(\bm b + \bm\rho^{BA})\,\dm}{-\int _R \left(\bm b^\times\bm b^\times + {\bm\rho^{BA}}^\times\bm b^\times + \bm b^\times{\bm\rho^{BA}}^\times + {\bm\rho^{BA}}^\times{\bm\rho^{BA}}^\times\right)\,\dm}{-\int _R \bm b^\times\bm b^\times\,\dm - {\bm\rho^{BA}}^\times\int _R\bm b^\times\,\dm - \int _R\bm b^\times\,\dm{\bm\rho^{BA}}^\times - \int\,\dm{\bm\rho^{BA}}^\times{\bm\rho^{BA}}^\times}{\bm J_B - {\bm\rho^{BA}}^\times\bm c_B^\times - \bm c_B^\times{\bm\rho^{BA}}^\times - m{\bm\rho^{BA}}^\times{\bm\rho^{BA}}^\times}$
	* This is the *parallel axis theorem* for an inertia matrix

\noteThm{\textit{Parallel Axis Theorem}: Given an inertia matrix $\bm J_B$ around a point $B$, and relative position $\bm\rho^{BA}$ from $A$ to $B$, we can find the inertia matrix around $A$, $\bm J_A$ as:
$$\bm J_A = \bm J_B - {\bm\rho^{BA}}^\times\bm c_B^\times - \bm c_B^\times{\bm\rho^{BA}}^\times - m{\bm\rho^{BA}}^\times{\bm\rho^{BA}}^\times$$}

* Consider the same reference point in two frames $\vcx F_a, \vcx F_b$; denote $\bm J_a, \bm J_b$ be the inertia matrix about this point expressed in the two frames
	* $\alignedeqntwo[t]{\bm J_a}{-\int _R\bm\rho _a^\times\bm\rho _a^\times\,\dm}{-\int _R (\bm C_{ab}\bm\rho _b)^\times(\bm C_{ab}\bm\rho _b)^\times\,\dm}{-\int _R (\bm C_{ab}\bm\rho _b^\times\bm C_{ba})(\bm C_{ab}\bm\rho _b^\times\bm C_{ba})\,\dm}{\bm C_{ab}\left(-\int _R\bm\rho _b^\times\bm\rho_b^\times\right)\bm C_{ba}}{\bm C_{ab}\bm J_b\bm C_{ba}}$
	* This is the *rotational transformation theorem* for an inertia matrix
	* Note for a second-order tensor, $\uvec J = \vcx F_a^T\bm J_a\vcx F_a \iff \bm J_a = \vcx F_a \cdot \uvec J \cdot \vcx F_a^T$, so this identity follows
		* The result applies for any second-order tensor

### Motion of Rigid Bodies

* To get the equations of motion, we can treat a rigid body like a grammar of particles 
* For a grammar of particles, $\uvec p^\dota = \uvec f$ and $\uvec h_O^\dota + \uvec v_O \times \uvec p = \uvec\tau _O$
	* $\bm p = m\bm v_O - \bm c_O^\times\bm\omega$
	* $\bm h_O = \bm c_O^\times\bm v_O + \bm J_O\bm\omega$
	* But to use these, we have to first convert the derivative $(\cdot)^\dota$ with respect to inertial frame into a derivative with respect to body frame
		* $\uvec p^\dotb + \uvec\omega \times \uvec p = \uvec f$
		* $\uvec h_O^\dotb + \uvec\omega \times \uvec h_O + \uvec v_O \times \uvec p = \uvec\tau _O$
	* In the body frame:
		* $\dot{\bm p} + \bm\omega^\times\bm p = \bm f$	
		* $\dot{\bm h}_O + \bm\omega^\times\bm h_O + \bm v_O^\times\bm p = \bm\tau _O$
* Therefore the equations of motion for a rigid body are given by, in the general case:
	* $m\dot{\bm v}_O - \bm c_O^\times\dot{\bm\omega} + m\bm\omega^\times \bm v_O - \bm\omega^\times\bm c_O^\times\bm v_O = \bm f$
	* $\bm c_O^\times\dot{\bm v}_O + \bm J_O\dot{\bm\omega} - \bm c_O^\times\bm\omega^\times\bm v_O + \bm\omega^\times\bm J_O\bm\omega = \bm\tau _O$
	* In matrix form, $\bm M\cvec{\dot{\bm v}_O}{\dot{\bm\omega}} + \mattwo{\bm\omega^\times}{\bm 0}{\bm v_O^\times}{\bm\omega^\times}\bm M\cvec{\bm v_O}{\bm\omega} = \cvec{\bm f}{\bm \tau _O}$
		* $\cvec{\bm v_O}{\bm\omega}$ is a generalized velocity and $\cvec{\bm f}{\bm \tau _O}$ is a generalized force
	* If $O = \com$, we can simplify (where all quantities are relative to the centre of mass):
		* $m\dot{\bm v} + m\bm\omega^\times\bm v = \bm f$
		* $\bm I\dot{\bm\omega} + \bm\omega^\times\bm I\bm\omega = \bm\tau$
	* Note that in the general case, the equations of motion are coupled; but if we use $\com$, the rotational equation is uncoupled, making it much easier to solve
	* Solving this gives us the angular velocity of the body, but not the orientation; for that we need to use Poisson's equation $\dot{\bm C} + \bm\omega^\times\bm C = \bm 0$, or for Euler angles $\bm\omega = \bm S\dot{\bm\theta}$ (or axis-angle/quaternion)
* Kinetic energy: $\alignedeqntwo[t]{T}{\frac{1}{2}\int _R \uvec r^\dota \cdot \uvec r^\dota\,\dm}{\frac{1}{2}\int _R (\uvec v_O - \uvec\rho \times \uvec\omega) \cdot (\uvec v_O - \uvec\rho \times \uvec\omega)\,\dm}{\frac{1}{2}\int _R (\bm v_O - \bm\rho^\times\bm\omega)^T(\bm v_O - \bm\rho^\times\bm\omega)\,\dm}{\frac{1}{2}m\bm v_O^T\bm v_O - \bm v_O^T\bm c_O^\times\bm\omega + \frac{1}{2}\bm\omega^T\bm J_O\bm\omega}$
	* Notice that this has 2 parts: translational, rotational, and a coupling term, which disappears when we use the centre of mass reference frame
	* In matrix form, $\bm T = \frac{1}{2}\cvec{\bm v_O}{\bm\omega}^T\bm M\cvec{\bm v_O}{\bm\omega}$
* Note we can expand the inertia matrix as $\bm I = \int _R \matthreeb{y^2 + z^2}{-xy}{-xz}{-xy}{x^2 + z^2}{-yz}{-xz}{-yz}{x^2 + y^2}\,\dm$
	* In general $\bm I$ will be fully populated; but can we diagonalize it?
	* We know $\bm I$ is symmetric positive definite, so it is diagonalizable and the eigenvector matrix is orthogonal
	* There will always be a $\bm E$ such that $\bm E^{-1}\bm I\bm E = \bm\Lambda$; but since $\bm E^{-1} = \bm E^T$ (and choose $\bm E$ such that $\det\bm E = 1$), it is a rotation matrix
	* Recall that the inertia matrix transforms as $\bm C_{ab}\bm I_{b}\bm C_{ba} = \bm I_a$, which has the exact same form as the diagonalization we found
	* Therefore we can always find a reference frame such that $\bm I$ is diagonal; this is referred to as the *principal-axis frame*
	* This works even if we don't use $\com$ as our reference point
* In the principal axis frame, with $\com$ as our reference point, the rotational equation reduces to:
	* $I_1\dot\omega _1 - (I_2 - I_3)\omega _2\omega _3 = \tau _1$
	* $I_2\dot\omega _2 - (I_3 - I_1)\omega _3\omega _1 = \tau _2$
	* $I_3\dot\omega _3 - (I_1 - I_2)\omega _1\omega _2 = \tau _3$
	* These are known as *Euler's equations*

\noteSummary{For a rigid body, let $\bm\rho$ be the position of a differential mass element relative to $O$ in a body-fixed frame, then:
\begin{itemize}
	\item The \textit{first moment of mass/inertia} $\bm c_O = \int _R \bm\rho\,\dm$, which is zero if $O = \com$
	\item The \textit{second moment of mass/inertia matrix} $\bm J_O = -\int _R\bm \rho^\times\bm\rho^\times\,\dm$, which is diagonal in the principal axis frame and denoted $\bm I$ if $O = \com$
\end{itemize}
Then the linear and angular momenta are given by
$$\bm p = m\bm v_O - \bm c_O^\times\bm \omega,\quad\bm h_O = \bm c_O^\times\bm v_O + \bm J_O\bm\omega$$
The equations of motion are given by, in general,
$$\begin{aligned}m\dot{\bm v}_O - \bm c_O^\times\dot{\bm\omega} + m\bm\omega^\times \bm v_O - \bm\omega^\times\bm c_O^\times\bm v_O &= \bm f \\ \bm c_O^\times\dot{\bm v}_O + \bm J_O\dot{\bm\omega} - \bm c_O^\times\bm\omega^\times\bm v_O + \bm\omega^\times\bm J_O\bm\omega &= \bm\tau _O\end{aligned}$$
Using $O = \com$, this reduces to
$$\begin{aligned}m\dot{\bm v} + m\bm\omega^\times\bm v &= \bm f \\ \bm I\dot{\bm\omega} + \bm\omega^\times\bm I\bm\omega &= \bm\tau \end{aligned}$$
And the kinetic energy is given by, in general
$$T = \frac{1}{2}m\bm v_O^T\bm v_O - \bm v_O^T\bm c_O^\times\bm\omega + \frac{1}{2}\bm\omega^T\bm J_O\bm\omega$$
where the middle coupling term disappears when using $O = \com$.
}

