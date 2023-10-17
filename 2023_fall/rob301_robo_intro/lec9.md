# Lecture 9, Oct 5, 2023

## Multidimensional Kalman Filtering

* We can generalize our model to multiple degrees of freedom with a separate measurement relation:
	* $\bm x_{k + 1} = \bm A_k\bm x_k + \bm B_k\bm u_k + \bm v_k$ (the *state*, or *process equation*)
	* $\bm z_k + \bm D_k\bm x_k + \bm w_k$ (the *measurement model*)
	* Where $\bm A_k$ is the state update matrix, $\bm B_k$ is the control matrix, $\bm z_k$ is the measurement, $\bm D_k$ is the measurement matrix, $\bm v_k$ is the process (or model) noise and $\bm w_k$ is the measurement noise
	* Again assume $\bm v_k \sim \mathcal N(\bm 0, \bm Q_k), \bm w_k \sim \mathcal N(\bm 0, \bm R_k)$, i.e. zero-mean noise with covariances $\bm Q_k, \bm R_k$
	* In practice we can find $\bm Q_k$ and $\bm R_k$ through testing and characterization of the system; depending on the model, we may be able to estimate it mathematically
* Let $\hat{\bm x}_{k|j}$ be the estimate of $\bm x_k$ given measurements $\Set{\bm z_0, \dots, \bm z_j}$, with $\bm P_{k|j}$ as its covariance
* Kalman filtering is a two-branch process divided into state and covariance estimations:
	* Given $\hat{\bm P}_{k|k}$ (the previous best estimate), $\bm u_k$ (the control input), $\bm P_{k|k}$ (the previous covariance)
	* State estimation:
		1. Predict the next state: $\hat{\bm x}_{k + 1|k} = \bm A_k\hat{\bm x}_{k|k} + \bm B_k\bm u_k$
		2. Predict the next measurement: $\hat{\bm z}_{k + 1|k} = \bm D_{k + 1}\hat{\bm x}_{k + 1|k}$
		3. Calculate the measurement residual: $\bm s_{k + 1} = \bm z_{k + 1} - \hat{\bm z}_{k + 1|k}$
		4. Update the state estimate: $\hat{\bm x}_{k + 1|k + 1} = \hat{\bm x}_{k + 1|k} + \bm W_{k + 1}\bm s_{k + 1}$
	* Covariance estimation:
		1. Predict the state covariance: $\bm P_{k + 1|k} = \bm A_k\bm P_{k|k}\bm A_k^T + \bm Q_k$
		2. Predict the measurement covariance: $\bm S_{k + 1} = \bm D_{k + 1}\bm P_{k + 1|k}\bm D_{k + 1}^T + \bm R_{k + 1}$
		3. Calculate the Kalman gain: $\bm W_{k + 1} = \bm P_{k + 1|k}\bm D_{k + 1}^T\bm S_{k + 1}^{-1}$
		4. Update the state covariance: $\bm P_{k + 1|k + 1} = \bm P_{k + 1|k} - \bm W_{k + 1}\bm S_{k + 1}\bm W_{k + 1}^T$
* The state covariance estimation part can be combined into a single equation, which is known as the *Ricatti equation*
* This only works if we have noise -- if $\bm R_{k + 1} = \bm 0$, often $\bm S_{k + 1}$ is not invertible; however if $\bm R_{k + 1}$ is invertible, then due to the positive-definiteness of $\bm P_{k + 1|k}$, we are guaranteed that $\bm S$ is invertible
* Example: body in free fall
	* Model: $\cvec{x_{k + 1}}{v_{k + 1}} = \mattwo{1}{1}{0}{1}\cvec{x_k}{v_k} + \cvec{-\frac{1}{2}g}{-g}$
	* We will measure the height: $z_k = \rvec{1}{0}\cvec{x_k}{v_k} + w_k$
	* Take noise to be $\bm Q_k = \bm 0, \bm R_k = 1$

## Optimality of Kalman Filtering

* If we expand the update relations we get:
	* $\hat{\bm x}_{k + 1} = \hat{\bm x}_{k + 1|k} + \bm W_{k + 1}(\bm D_{k + 1}\bm x_{k + 1} + \bm w_{k + 1} - \bm D_{k + 1}\hat{\bm x}_{k + 1|k})$
	* $P_{k + 1|k + 1} = (\bm 1 - \bm W_{k + 1}\bm D_{k + 1})(\bm A_k\bm P_{k|k}\bm A_k + \bm Q_k)(\bm 1 - \bm W_{k + 1}\bm D_{k + 1})^T + \bm W_{k + 1}\bm R_{k + 1}\bm W_{k + 1}^T$
* We would want to minimize $\varepsilon _{k + 1}^2 = \mathbb E\left[\norm{\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1}}^2\right]$, i.e. the expected error
	* $\alignedeqntwo[t]{\varepsilon _{k + 1}^2}{\mathbb E\left[\norm{\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1}}^2\right]}{\mathbb E\left[(\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1})^T(\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1})\right]}{\tr \mathbb E\left[(\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1})(\hat{\bm x}_{k + 1|k + 1} - \bm x_{k + 1})^T\right]}{\tr\bm P_{k + 1|k + 1}}$
	* This means that to minimize the expected error, we should minimize the covariance
* To minimize the error, we solve for $\pdiff{\varepsilon _{k + 1}^2}{\bm W_{k + 1}} = \bm 0$ to get the optimal $\bm W$
	* Note: $\pdiff{\tr\bm A\bm B}{\bm B} = \bm A^T$ for matrices $\bm A, \bm B$
	* If we do this, we get $\pdiff{\tr\bm P_{k + 1|k + 1}}{\bm W_{k + 1}} = -2\bm P_{k + 1|k + 1}\bm D_{k + 1}^T + 2\bm W_{k + 1}\bm S_{k + 1} = \bm 0$ where $\bm S_{k + 1}$ is defined above
	* Assuming $\bm S_{k + 1}$ is invertible, solve to get $\bm W_{k + 1} = \bm P_{k + 1|k}\bm D_{k + 1}^T\bm S_{k + 1}^{-1}$
* Hence Kalman filtering is an *optimal* estimator

## Extended Kalman Filtering (EKF)

* What if we didn't have a linear process/measurement model?
* In general, we can have $\bm x_{k + 1} = \bm f(\bm x_k, \bm u_k) + \bm v_k, \bm z_{k + 1} = \bm h(\bm x_{k + 1}) + \bm w_{k + 1}$
	* Note we are assuming that noise is additive right now
* We simply linearize the system with the Jacobian
* For the predictions, we can directly do $\hat{\bm x}_{k + 1|k} = \bm f(\hat{\bm x}_{k|k}, \bm u_k)$ and $\hat{\bm z}_{k + 1|k} = \bm h(\hat{\bm x}_{k|k})$
* For the state covariance estimate, we will linearize about $\hat{\bm x}_{k + 1|k}, \bm u_k$:
	* $\bm A_k = \eval{\pdiff{\bm f}{\bm x_k^T}}{\hat{\bm x}_{k + 1|k}, \bm u_k}, \bm B_k = \eval{\pdiff{\bm f}{\bm u_k^T}}{\hat{\bm x}_{k + 1|k}, \bm u_k}, \bm D_{k + 1} = \eval{\pdiff{\bm h}{\bm x_k^T}}{\hat{\bm x}_{k + 1|k}}$
		* Note that now the matrices such as $\bm A_k$ are dependent on our state!
* The procedure is identical to that of normal Kalman filtering, except the nonlinear model is used for prediction and measurement, while the linearized Jacobians are used for covariance estimation

