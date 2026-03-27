# Lecture 30, Mar 24, 2026

## Disturbance Observers

* How can we estimate $w(k)$?
* Recall that we have the system $\begin{aligned}[t] z(k + 1) &= Az(k) + Bu(k) - B\psi^Tw(k) \\ e(k) &= Cz(k) \end{aligned}$
* Consider the system: $\begin{aligned}[t] \hat z_d(k + 1) &= A\hat z_d(k) + Bu(k) + L_d(e(k) - \hat e(k)) \\ \hat e(k) &= C\hat z_d(k) \end{aligned}$
	* This looks like an observer, but note that we are not estimating $z(k)$ directly since we don't have the $B\psi^Tw(k)$ term; instead, we want to find the missing term
	* As usual, we select $L_d$ such that $A - L_dC$ is Schur stable
		* Note that if $A$ is already stable then we can just choose $L_d = 0$, but using the observer gain we can make it converge faster
* Let the estimation error $\tilde z_d(k) = \hat z_d(k) - z(k)$, then $\tilde z_d(k + 1) = (A - L_dC)\tilde z_d(k) + Bd(k)$
	* Let $\alignedeqntwo[t]{d_f(k)}{C\tilde z_d(k)}{C\hat z_d(k) - Cz(k)}{C\hat z_d(k) - e(k)}$ which is fully measurable
	* Note that $d_f(k)$ is just a version of $d(k)$ filtered through a stable LTI system; therefore it should have the same frequency content as $d(k)$, since LTI systems don't change frequency
	* Therefore one can prove that there is another exosystem $\begin{aligned}[t] w_f(k + 1) &= Fw_f(k) + Gd_f(k) \\ d_f(k) &= \psi^Tw_f(k) \end{aligned}$
		* The $F, G$ matrices and parameter vector are the same as the ones previously used for the Nikiforov representation
		* Moreover there is a coordinate transformation $w_f(k) = H_fw(k)$ where $H_f$ is nonsingular
* Now we can make a filter $\hat w_f(k + 1) = F\hat w_f(k) + Gd_f(k)$
	* Consider the estimation error $\tilde w_f(k) = \hat w_f(k) - w_f(k)$
	* $\alignedeqntwo[t]{\tilde w_f(k + 1)}{\hat w_f(k + 1) - w_f(k + 1)}{F\hat w_f(k) + Gd_f(k) - (Fw_f(k) + Gd_f(k))}{F\tilde w_f(k)}$
	* Since $F$ is Schur stable, $\hat w_f(k) \to w_f(k)$ exponentially
* Finally we have $\alignedeqntwo[t]{d(k)}{\psi^Tw(k)}{\psi^TH_f^{-1}w_f(k)}{\psi _f^T(\hat w_f(k) - \tilde w_f(k))}{\psi _f^T\hat w_f(k) + \varepsilon(k) \Ttag{where }\varepsilon(k) \to 0}$

