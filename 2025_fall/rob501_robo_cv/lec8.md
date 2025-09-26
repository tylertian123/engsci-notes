# Lecture 8, Sep 26, 2025

## Camera Pose Estimation (Perspective-n-Point)

* The *pose estimation problem* is the estimation of the pose of an object (or camera) from 3D-2D correspondences
	* Typically we know where the points lie on the object in 3D, and we also know where those points appear in our image
	* This is known as the *perspective-n-point* or PnP problem
		* For 3 points, this is known as P3P
		* 3 points is the minimum number of points we need to get a solution, but often we want to use more points to remove ambiguity and reject noise
	* This process can be used to estimate the camera pose for extrinsic calibration; intrinsic parameters can be estimated at the same time
		* This is how camera calibration with a checkerboard works
* There are linear and nonlinear algorithms for this
	* The linear case locally linearizes the problem and may not be very accurate if the initial guess is bad
	* The nonlinear algorithm uses an initial guess and iterates to find the solution
	* We often start from the linear algorithm and then use nonlinear algorithm to refine
* Solving for $\bm P = \bm K\rvec{\bm C}{\bm t}$ requires at least 6 correspondences (since there are 6 degrees of freedom), but if we have intrinsics already we only need 3
* The linear algorithm for solving PnP is the *direct linear transform*, which stacks a system of equations
	* We have $\bm P \in \reals^{3 \times 4}$ (the combination of the extrinsic and intrinsic matrices) with 12 unknowns
	* For each correspondence we can construct 2 equations from it; with 6 correspondences we can solve the whole system
		* $x_i = \frac{p_{00}X_i + p_{01}Y_i + p_{02}Z_i + p_{03}}{p_{20}X_i + p_{21}Y_i + p_{22}Z_i + p_{23}}$
		* $y_i = \frac{p_{10}X_i + p_{11}Y_i + p_{12}Z_i + p_{13}}{p_{20}X_i + p_{21}Y_i + p_{22}Z_i + p_{23}}$
		* Note the division due to normalization
	* Because the intrinsics matrix $\bm K$ is upper-triangular, we can do a QR factorization on $\bm P$ to recover the separate intrinsic and extrinsic matrices
* Nonlinear least squares (Gauss-Newton optimization) is an optimization approach we can use to solve this system
	* For nonlinear least squares, we wish to optimize $E(\bm x) = \frac{1}{2}\bm e(\bm x)^T\bm e(\bm x)$ where $\bm e(\bm x)$ is some nonlinear function
		* In the linear case we can substitute $\bm e(\bm x) = \bm A\bm x - \bm b$ and expand the error function, then take a derivative to obtain the normal equation
	* For the nonlinear case we linearize around an initial guess (the operating point) $\bm x_{op}$
	* $\bm e(\bm x) \approx \bm e(\bm x_{op}) + \bm J_e\delta\bm x$ where $\bm J_e = \eval{\pdiff{\bm e}{\bm x}}{\bm x_{op}}$ is the Jacobian and $\delta\bm x$ is a small deviation
		* Now substitute this back into the error function and notice we get an expression very similar to the linear form, so we can use the same techniques to solve this
	* We can solve the linearized system, and add the $\delta\bm x$ to our initial operating point $\bm x_{op}$ to get the next linearization point
	* Do this until our Jacobian becomes sufficiently small which means we have converged
	* We are essentially approximating the cost function as a quadratic at each step and optimizing the quadratic for a local solution
* Important notes for nonlinear least squares:
	* Choosing good initial guesses is important, otherwise the optimization process can get trapped in a local minimum
	* The states we are solving for must exist in a vector space (i.e. we cannot apply constraints, since then the vector space is no longer closed)
* For multiple errors, we sum over all the errors, so in the normal equation we sum over $\bm J^T\bm J$ and $\bm J^T\bm e$ and multiply in the end
	* $E(\bm x) = \frac{1}{2}\sum _{i = 1}^N \bm e_i(\bm x)^T\bm e_i(\bm x)$$
	* $\delta\bm x^* = -\left(\sum _{i = 1}^N \bm J_{e_i}^T\bm J_{e_i}\right)^{-1}\left(\sum _{i = 1}^N \bm J_{e_i}^T\bm e_i(\bm x_{op})\right)$
	* Note we need to reevaluate the Jacobian for each measurement $i$, since the linearization point is all different!
* Often we have associated uncertainties for each error, so we can do a weighted version of least squares, so $E(\bm x) = \frac{1}{2}\sum _{i = 1}^N \bm e_i(\bm x)^T\bm W_i\bm e_i(\bm x)$
	* Now we have $\delta\bm x^* = -\left(\sum _{i = 1}^N \bm J_{e_i}^T\bm W_i\bm J_{e_i}\right)^{-1}\left(\sum _{i = 1}^N \bm J_{e_i}^T\bm W_i\bm e_i(\bm x_{op})\right)$
	* $\bm W_i$ are symmetric matrices, one describing the weight for each measurement
	* Often we want scalar weights so $\bm W_i$ for each measurement $i$ is just a multiple of the identity
	* For vector-valued observations, we can use the inverse of the measurement covariance matrix $\bm\Sigma$, known as the *information matrix*
* Note nonlinear least squares is equivalent to a maximum likelihood estimate if we assume our data has additive noise drawn from IID multivariate zero-mean Gaussians; weights are the information matrices of each noise Gaussian in this case
* To use NLS for pose estimation, we optimize the reprojection error $\bm e_i = \bm x_i - f(\bm p_i; \bm C, \bm t, \bm K)$
	* $f$ is our projection function which takes $p_i$, converts it to the camera frame using the extrinsic calibration, then to pixel space using the intrinsics and normalizes it
	* But, rotation matrices have constraints, so we can't use Gauss-Newton as-is; we need to either express $\bm C$ in a way that ensures it is a rotation matrix, or modify our update so that $\bm C$ remains orthogonal
* This leads to the *Wahba problem*, which involves identifying a rotation matrix $\bm C$ between frames given corresponding unit vector measurements $\bm u_i, \bm v_i$ in two frames
	* The cost function is $E(\bm C) = \frac{1}{2}\sum _{i = 1}^N (\bm C\bm u_i - \bm v_i)^T(\bm C\bm u_i - \bm v_i) = \frac{1}{2}\sum _{i = 1}^N \bm e_i(\bm C)^T\bm e_i(\bm C)$
	* Approach 1: Euler angles
		* Optimize over 3 Euler angles instead
		* However, this runs the risk of Gimbal lock -- if our solution ends up near points with Gimbal lock, we run into numerical sensitivity issues or our solution may collapse entirely
			* This can work if we have good initial guesses
		* Let $\bm C(\bm\theta) = \bm C_3(\theta _3)\bm C_2(\theta _2)\bm C_1(\theta _1)$, then $\bm e_i(\bm\theta _{op} + \delta\bm\theta) = \bm e_i(\bm\theta _{op}) + \bm J_{e_i}\delta\bm\theta$
		* The Jacobian $\bm J_{e_i} = \pdiff{\bm C\bm u_i}{\bm\theta}$ can be computed in each column as follows:
			* $\pdiff{\bm C\bm u_i}{\theta _3} = \skewsym{\bm 1_3}\bm C_3(\theta _3)\bm C_2(\theta _2)\bm C_1(\theta _1)\bm u_i$
			* $\pdiff{\bm C\bm u_i}{\theta _2} = \bm C_3(\theta _3)\skewsym{\bm 1_2}\bm C_2(\theta _2)\bm C_1(\theta _1)\bm u_i$
			* $\pdiff{\bm C\bm u_i}{\theta _1} = \bm C_3(\theta _3)\bm C_2(\theta _2)\skewsym{\bm 1_1}\bm C_1(\theta _1)\bm u_i$
			* Note $\bm 1_i$ is a zero vector with 1 in the $i$th spot
	* Approach 2: use axis-angle
		* To avoid gimbal lock we keep the operating point $\bm C_{op}$ in matrix form, and consider a perturbation $\bm C(\delta\bm\phi)$, so the update becomes $\bm C_{op} \gets \bm C(\delta\bm\phi)\bm C_{op}$
		* Recall the Rodrigues formula: $\bm C(\bm\phi) = 1 + \sin\phi\skewsym{\hat{\bm n}} + (1 - \cos\phi)\skewsym{\hat{\bm n}}^2$
			* For small angles $\bm\phi$ we approximate $\sin\phi = 0, \cos\phi = 1$
			* $\bm C(\delta\bm\phi) \approx 1 + \delta\phi\skewsym{\hat{\bm n}} = 1 + \skewsym{\delta\bm\phi}$
		* Substitute the approximation for $\bm C(\delta\bm\phi)$:
			* $\alignedeqntwo[t]{\bm e_i(\delta\bm\phi)}{\bm C\bm u_i - \bm v_i}{\bm C(\delta\bm\phi)\bm C_{op}\bm u_i - \bm v_i}{(1 + \skewsym{\delta\bm\phi})\bm C_{op}\bm u_i - \bm v_i}{\bm C_{op}\bm u_i - \bm v_i + \skewsym{\delta\bm\phi}\bm C_{op}\bm u_i}{\bm e_i(\bm C_{op}) - \skewsym{\bm C_{op}\bm u_i}\delta\bm\phi}{\bm e_i(\bm C_{op}) + \bm J_{e_i}\delta\bm\phi}$
		* Therefore the Jacobian is $\bm J_{e_i} = -\skewsym{\bm C_{op}\bm u_i}$, and with this we can use the normal equation to compute the update for $\delta\bm\phi^*$ and update the operating point

