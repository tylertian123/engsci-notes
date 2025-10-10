# Lecture 14, Oct 3, 2025

## Forward Velocity Kinematics (Continued)

### Linear Velocity Jacobian

* Now we want to find $J_v(q)$ such that $\dot O_n^0 = J_v(q)\dot q$, where $J_v(q) = \pdiff{O_n(q)}{q}$
	* Note for simple cases, if we have an explicit expression for the end-effector position as a function of $q$ (from forward kinematics), we can simply differentiate it as a consequence of the chain rule
	* However we want a systematic approach from only the DH parameters so we can do this for any general manipulator
* Recall that $O_i^0 = O_{i - 1}^0 + R_{i - 1}^0O_i^{i - 1} \implies O_i^0 - O_{i - 1}^0 = R_{i - 1}^0O_i^{i - 1}$
	* Therefore $O_n^0 = \sum _{i = 1}^n O_n^0 - O_{n - 1}^0 = \sum _{i = 1}^n R_{i - 1}^0O_i^{i - 1} \implies \dot O_n^0 = \sum _{i - 1}^n (\dot O_i^0 - \dot O_{i - 1}^0)$
* Differentiate each term in the sum: $\alignedeqntwo[t]{\dot O_i^0 - \dot O_{i - 1}^0}{\dot R_{i - 1}^0O_i^{i - 1} + R_{i - 1}^0\dot O_i^{i - 1}}{S(w_{i - 1}^0)R_{i - 1}^0O_i^{i - 1} + R_{i - 1}^0\dot O_i^{i - 1}}{w_{i - 1}^0\times (R_{i - 1}^0O_i^{i - 1}) + R_{i - 1}^0\dot O_i^{i - 1}}$
	* For prismatic joints, $\dot O_i^{i - 1} = \dot q_i\cvec{0}{0}{1} = \dot q_iz_{i - 1}^{i - 1} \implies R_{i - 1}^0\dot O_i^{i - 1} = \dot q_iR_{i - 1}^0z_{i - 1}^{i - 1} = \dot q_iz_{i - 1}^0$
	* For revolute joints, $\dot O_i^{i - 1} = \dot q_iz_{i - 1}^{i - 1} \times O_i^{i - 1} \implies \alignedeqntwo[t]{R_{i - 1}^0\dot O_i^{i - 1}}{\dot q_iR_{i - 1}^0z_{i - 1}^{i - 1} \times R_{i - 1}^0O_i^{i - 1}}{(\dot q_iz_{i - 1}^0) \times (R_{i - 1}^0O_i^{i - 1})}{\dot q_i(z_{i - 1}^0 \times (R_{i - 1}^0O_i^{i - 1}))}$
	* Then $\dot O_i^0 - \dot O_{i - 1}^0 = w_{i - 1}^0 \times (R_{i - 1}^0O_i^{i - 1}) + \dot q_i\twocond{z_{i - 1}^0}{\text{joint }i\text{ is prismatic}}{z_{i - 1}^0 \times (R_{i - 1}^0O_i^{i - 1})}{\text{joint }i\text{ is revolute}}$
	* Using a similar derivation as the angular velocity Jacobian, $w_{i - 1}^0 = \sum _{j = 1}^{i - 1} \dot q_j\rho _jz_{j - 1}^0$
	* Finally, $\dot O_i^0 - \dot O_{i - 1}^0 = \left(\sum _{j = 1}^{i - 1} \dot q_j\rho _jz_{j - 1}^0\right) \times (R_{i - 1}^0 O_i^{i - 1}) + \dot q_i\twocond{z_{i - 1}^0}{\text{joint }i\text{ is prismatic}}{z_{i - 1}^0 \times (R_{i - 1}^0O_i^{i - 1})}{\text{joint }i\text{ is revolute}}$
* To collect everything, note the following:
	* If joint $k$ is prismatic, then $\rho _k = 0$, and so $\dot q_k$ can only show up in the second term, and will have a coefficient of $z_{i - 1}^0$
	* If joint $k$ is revolute, then $\rho _k = 1$ and $\dot q_k$ shows up in both terms
		* $\dot q_k$ appears in each term $\dot O_i^0 - \dot O_{i - 1}^0$ where $i \geq k$ due to the double sum
		* Intuitively, the revolute joint's angular velocity affects all links down the chain
		* Using this, we can show that the coefficient of $\dot q_k$ in $\dot O_n^0$ is $z_{k - 1}^0 \times \left(\sum _{i = k}^n R_{i - 1}^0O_i^{i - 1}\right)$
			* We also know $O_n^0 = O_{k - 1}^0 + R_{k - 1}^0O_k^{k - 1} + \cdots + R_{n - 1}^0O_n^{n - 1}$ so $\sum _{i = k}^n R_{i - 1}^0O_i^{i - 1} = O_n^0 - O_{k - 1}^0$
* Finally, $J_v(q) = \rvec{J_{v,1}(q)}{\cdots}{J_{v,1}(q)} \in \reals^{3 \times n}$, where each column can be written as:
	* $J_{v,i}(q) = \twocond{z_{i - 1}^0}{\text{joint }i\text{ is prismatic}}{z_{i - 1}^0 \times (O_n^0 - O_{i - 1}^0)}{\text{joint }i\text{ is revolute}}$

