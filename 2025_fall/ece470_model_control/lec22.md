# Lecture 22, Nov 3, 2025

## Euler-Lagrange -- Part 2

* Last lecture we derived the Lagrange-d'Alembert principle: $\sum _{i = 1}^N (m_i\ddot r_i - f_i^l)^T\delta r_i = 0$
	* To get to the form we want, we'll get rid of all the $r$ terms and express everything in terms of $q$
* From the chain rule:
	* $\dot r_i = \sum _{j = 1}^n \pdiff{r_i}{q_j}\dot q_j$
	* $\delta r_i = \sum _{j = 1}^n \pdiff{r}{q_j}\dd q_j$
		* Note here $\dd q_j$ is not a virtual displacement, since unlike $\delta r_i$ it is not constrained
* The two parts of the equation are then:
	* $\alignedeqntwo[t]{\sum _{i = 1}^N (f_i^l)^T \delta r_i}{\sum _{i = 1}^N\sum _{j = 1}^n (f_i^l)^T\pdiff{r_i}{q_j}\dd q_j}{\sum _{j = 1}^n\varphi _j \dd q_j}$
		* $\varphi _j = \sum _{i = 1}^N (f_i^l)^T\pdiff{r_i}{q_j}$ is the $j$th *generalized force*
	* $\alignedeqntwo[t]{\sum _{i = 1}^N m_i\ddot r_i^T\delta r_i}{\sum _{i = 1}^N \sum _{j = 1}^n m_i\ddot r_i^T\pdiff{r_i}{q_j}\dd q_j}$
* Observe $\alignedeqntwo[t]{\diff{}{t}\left(m_i\dot r_i^T\pdiff{r_i}{q_j}\right)}{m_i\ddot r_i^T\pdiff{r_i}{q_j} + m_i\dot r_i^T\diff{}{t}\left(\pdiff{r_i}{q_j}\right)}{m_i\ddot r_i^T\pdiff{r_i}{q_j} + m_i\dot r_i^T\pdiff{\dot r_i}{q_j}}$
	* $\diff{}{t}\left(\pdiff{r_i}{q_j}\right) = \sum _{k = 1}^n \pdiff{}{q_k}\left(\pdiff{r_i}{q_j}\right)\dot q_k = \pdiff{}{q_j}\sum _{k = 1}^n\pdiff{r_i}{q_k}\dot q_k = \pdiff{\dot r_i}{q_j}$
* Therefore $\sum _{i = 1}^N m_i\ddot r_i^T\delta r_i = \sum _{i = 1}^N\sum _{j = 1}^n\left(\diff{}{t}\left(m_i\dot r_i^T\pdiff{r_i}{q_j}\right) - m_i\dot r_i^T\pdiff{\dot r_i}{q_j}\right)\dd q_j$

