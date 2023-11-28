# Lecture 5, Sep 21, 2023

## Transport Equations

* We want to know how $\uvec v^\dota$ is related to $\uvec v^\dotb$
	* $\uvec v = \vcx F_a^T\bm v_a = \vcx F_b^T\bm v_b$
	* $\uvec v^\dota = {\vcx F_a^T}^\dota\bm v_a + \vcx F_a^T\bm v_a^\dota = \vcx F_a^T\bm v_b^\dota$
	* $\uvec v^\dotb = {\vcx F_b^T}^\dotb\bm v_b + \vcx F_b^T\bm v_b^\dotb = \vcx F_b^T\bm v_b^\dotb$
	* $\uvec v^\dota = \vcx F_b^T\dot{\bm v_b} + {\vcx F_b^T}^\dota\bm v_b = \uvec v^\dotb + \uvec\omega^{ba} \times \vcx F_b^T\bm v_b = \uvec v^\dotb + \uvec\omega^{ba} \times \uvec v$
		* Note that when we have as scalar $\bm v_b$, we put the dot over instead of to the right, because for the scalar reference frames does not matter
* Therefore $\uvec v^\dota = \uvec v^\dotb + \uvec\omega^{ba} \times \uvec v$, which is known as the *transport equation* for velocity
* For acceleration, $\alignedeqntwo[t]{\uvec v^{\dota\dota}}{(\uvec v^\dotb + \uvec\omega^{ba} \times \uvec v)^\dota}{(\uvec v^\dotb)^\dota {\uvec\omega^{ba}}^\dota \times \uvec v + \uvec\omega^{ba} \times \uvec v^\dota}{\uvec v^{\dotb\dotb} + \uvec\omega^{ba} \times \uvec v^\dotb ({\uvec\omega^{ba}}^\dotb + \uvec\omega^{ba} \times \uvec\omega^{ba}) \times \uvec v + \uvec\omega^{ba} \times (\uvec v^\dotb + \uvec\omega^{ba} \times \uvec v)}{\uvec v^{\dotb\dotb} + 2\uvec\omega^{ba} \times \uvec v^\dotb + {\uvec\omega^{ba}}^\dotb \times \uvec v + \uvec\omega^{ba} \times (\uvec\omega^{ba} \times \uvec v)}$
	* Notice that ${\uvec\omega^{ba}}^\dota = {\uvec\omega^{ba}}^\dotb$
	* If we interpret $\uvec v$ as a position vector, then $2\uvec\omega^{ba} \times \uvec v^\dotb$ would be the Coriolis acceleration, $\uvec\omega^{ba} \times (\uvec\omega^{ba} \times \uvec r)$ would be the centripetal acceleration and ${\uvec\omega^{ba}}^\dotb \times \uvec r$ would be the tangential acceleration (or Euler acceleration)
* In coordinate form, the velocity transport equation is $\dot{\bm v}_a = \bm C_{ab}(\dot{\bm v}_b + {\bm\omega^{ba} _b}^\times\bm v_b)$
* For acceleration this is $\ddot{\bm v}_a = \bm C_{ab}(\ddot{\bm v}_b + {2{\bm\omega}_b^{ba}}^\times\dot{\bm v}_b + {\dot{\bm\omega}_b^{ba}}^\times\bm v + {\bm\omega _b^{ba}}^\times{\bm\omega _b^{ba}}^\times\bm v_b)$
* How do rotation matrices change with rotating reference frames?
	* ${\vcx F_b^T}^\dota = \vcx F_a^T\dot{\bm C}_{ab}$ since ${\vcx F_a^T}^\dota = \bm 0$
	* ${\bm\omega _b^{ba}}^\times = \vcx F_b \cdot {\vcx F_b^T}^\dota = \bm C_{ba}\vcx F_a \cdot \vcx F_a^T\dot{\bm C}_{ab} = \bm C_{ba}\dot{\bm C}_{ab}$
	* If we transpose both sides we get $-{\bm\omega _b^{ba}}^\times = \dot{\bm C}_{ba}\bm C_{ab}$
	* Multiplying by $\bm C_{ba}$ and rearranging, we get $\dot{\bm C}_{ba} + {\bm\omega _b^{ba}}^\times\bm C_{ba} = \bm 0$
		* We have found a differential equation for the rotation matrix that describes its evolution
		* This is known as *Poisson's kinematical equation*
* Consider now 3 reference frames $\vcx F_a, \vcx F_b, \vcx F_c$; what is the relationship among $\uvec\omega^{ba}, \uvec\omega^{cb}$ and $\uvec\omega^{ca}$?
	* $\dot{\bm C}_{ca} = \dot{\bm C}_{cb}\bm C_{ba} + \bm C_{cb}\dot{\bm C}_{ba}$
	* $\alignedeqntwo[t]{{\bm\omega _c^{ca}}^\times}{-\dot{\bm C}_{ca}\bm C_{ac}}{-\dot{\bm C}_{cb}\bm C_{ba}\bm C_{ab}\bm C_{bc} - \bm C_{cb}\dot{\bm C}_{ba}\bm C_{ab}\bm C_{bc}}{-\dot{\bm C}_{cb}\bm C_{bc} - \bm C_{cb}\dot{\bm C}_{ba}\bm C_{ab}\bm C_{bc}}{{\bm\omega _c^{cb}}^\times + \bm C_{cb}{\bm\omega _b^{ba}}^\times\bm C_{bc}}{{\bm\omega _c^{cb}}^\times + (\bm C_{cb}\bm\omega _b^{ba})^\times}{({\bm\omega _c^{cb}}+ \bm C_{cb}\bm\omega _b^{ba})^\times}$
	* Therefore $\bm\omega _c^{ca} = \bm\omega _c^{cb} + \bm C_{cb}\bm \omega _b^{ba}$
	* If we multiply both sides by $\vcx F_c^T$, we see that $\uvec\omega^{ca} = \uvec\omega^{cb} + \uvec\omega^{ba}$

\noteImportant{While angular velocities can be added directly as $\uvec\omega^{ca} = \uvec\omega^{cb} + \uvec\omega^{ba}$, angular accelerations cannot!}

\noteSummary{The transport equations relate velocity and acceleration as measured in one frame to how they're measured in another frame:
\begin{itemize}
	\item $\uvec v^\dota = \uvec v^\dotb + \uvec\omega^{ba} \times \uvec v$
	\item $\dot{\bm v}_a = \bm C_{ab}(\dot{\bm v}_b + {\bm\omega_b^{ba}}^\times\bm v_b)$
	\item $\uvec v^{\ddota} = \uvec v^{\dotb\dotb} + 2\uvec\omega^{ba} \times \uvec v^\dotb + {\uvec\omega^{ba}}^\dotb \times \uvec v + \uvec\omega^{ba} \times (\uvec\omega^{ba} \times \uvec v)$
	\item $\ddot{\bm v}_a = \bm C_{ab}(\ddot{\bm v}_b + {2{\bm\omega}_b^{ba}}^\times\dot{\bm v}_b + {\dot{\bm\omega}_b^{ba}}^\times\bm v + {\bm\omega _b^{ba}}^\times{\bm\omega _b^{ba}}^\times\bm v_b)$
\end{itemize}}

## Rotation Representations Revisited

* Given an axis-angle representation $\bm a, \phi$, the Euler parameters are $\eta = \cos\frac{1}{2}\phi$ and $\bm\varepsilon = \bm a\sin\frac{1}{2}\phi$
	* $\eta$ and $\bm\varepsilon$ are not independent, because we stipulate that $\eta^2 + \bm\varepsilon^T\varepsilon = 1$
	* Euler parameters don't have a singularity
	* These are also known as quaternions
* Consider a 1-2-3 set of Euler angles, so $\bm C = \bm C_3\bm C_2\bm C_1$
	* $\bm\omega^\times = -\dot{\bm C}\bm C^T$ (Note here $\bm\omega = \bm\omega _b^{ba}$)
	* $\dot{\bm C} = \bm C_3\bm C_2\dot{\bm C_1} + \bm C_3\dot{\bm C}_2\bm C_1 + \dot{\bm C}_3\bm C_2\bm C_1$
	* $\alignedeqntwo[t]{\bm\omega^\times}{-\bm C_3\bm C_2\dot{\bm C_1}\bm C_1^T\bm C_2^T\bm C_3^T - \bm C_3\dot{\bm C}_2\bm C_1\bm C_1^T\bm C_2^T\bm C_3^T - \dot{\bm C}_3\bm C_2\bm C_1\bm C_1^T\bm C_2^T\bm C_3^T}{-\bm C_3\bm C_2\dot{\bm C}_1\bm C_1^T\bm C_2^T\bm C_3^T - \bm C_3\dot{\bm C}_2\bm C_2^T\bm C_3^T - \dot{\bm C}_3\bm C_3^T}{\bm C_3\bm C_2\bm 1_1^\times\dot\theta _1\bm C_2^T\bm C_3^T - \bm C_3\bm 1_2^\times\dot\theta _2\bm C_3^T - \bm 1_3^\times\dot\theta _3}{(\bm C_3\bm C_2\bm 1_1\dot\theta _1)^\times + (\bm C_3\bm 1_2\dot\theta _2)^\times + \bm 1_3^\times\dot\theta _3}$
		* Note that $\dot{\bm C}_1\bm C_1^T$ is the angular velocity of a rotation about the first axis, so it is equal to $\cvec{0}{0}{\dot\theta _1}^\times = \bm 1_1^\times\dot \theta_1$
	* This means $\bm\omega = \bm C_3\bm C_2\bm 1_1\dot\theta _1 + \bm C_3\bm 1_2\dot\theta _2 + \bm 1_3\dot\theta_3 = \rvec{\bm C_3\bm C_2\bm 1_1}{\bm C_3\bm 1_2}{\bm 1_3}\cvec{\dot\theta _1}{\dot\theta _2}{\dot\theta _3} = \bm S(\theta_2, \theta_3)\dot{\bm \theta}$
		* This is the kinematic equation for a 1-2-3 set of Euler angles (page 89 lists the $\bm S$ matrices for other combinations)
	* At a singularity, $\bm S$ becomes singular (hence the name singularity) -- given $\bm\omega$, at a singularity, we cannot find $\dot{\bm\theta}$
* Given any rotation representation, we can write a kinematic equation for it

