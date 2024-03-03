# Lecture 10, Feb 27, 2024

## Quasi-Newton Methods (Symmetric Rank 1 (SR1))

* Recall that for quasi-Newton methods, since computing the inverse Hessian is expensive, we use approximations to speed up computation
* Idea: use an iterative update routine to approximate the inverse Hessian
* Start with a quadratic approximation of the objective function $f(\bm\theta)$ at the current iteration, $m_k(\bm\theta)$
* $m_k(\bm\theta) = f(\bm\theta _k) + \del^T f(\bm\theta _k)(\bm\theta - \bm\theta_k) + \frac{1}{2}(\bm\theta - \bm\theta _k)^T\bm B_k(\bm\theta - \bm\theta _k)$
	* $\bm B_k \in \reals^{n \times n}$ is an approximation of the inverse Hessian
	* When $\bm\theta = \bm\theta _k$ we have $m_k = f$ and $\del m_k = \del f$
	* These conditions are known as the *zero* and *first-order consistency conditions*
* The minimum of the quadratic model can be obtained by differentiating and setting to zero as usual
	* $\bm\theta _{k + 1} = \bm\theta _k - \bm B _k^{-1}\del f(\bm\theta _k)$
* Using the new minimum, we construct a new quadratic approximation $m_{k + 1}(\bm\theta)$ using the same formula and the new approximate Hessian $\bm B_{k + 1}$
* To update the approximate Hessian, we impose the constraint that $m_{k + 1}(\bm\theta)$ matches the gradient of $f(\bm\theta)$ at both $\bm\theta _k$ and $\bm\theta _{k + 1}$
	* We want $\del m_{k + 1}(\bm\theta _{k + 1}) = \del f(\bm\theta _{k + 1}) + \bm B_{k + 1}(\bm\theta _k - \bm\theta _{k + 1}) = \del f(\bm\theta _k)$
	* Rearrange to get $\bm B_{k + 1}(\bm\theta _k - \bm\theta _{k + 1}) = \del f(\bm\theta _k) - \del f(\bm\theta _{k + 1})$
		* This is known as the *secant equation*
* Since the Hessian is SPD, we want $\bm B_{k + 1}$ to also be SPD
	* Symmetry gives us $\frac{1}{2}n(n + 1)$ independent entries, but the secant equation only gives a system of $n$ equations
	* To obtain a unique solution, we impose the constraint that $\bm B_{k + 1}$ should be closest to $\bm B_k$
	* Therefore we use the update formula: $\bm B_{k + 1} = \bm B_k + \bm u\bm u^T$
		* $\bm u\bm u^T$ is the "symmetric rank 1" matrix
		* This guarantees that $\bm B_{k + 1}$ is close to $\bm B_k$ in terms of rank
* Let $\bm s_k = \bm\theta _{k + 1} - \bm\theta _k, \bm y_k = \del f(\bm \theta _{k + 1}) - \del f(\bm\theta _k)$
	* Rewrite the secant equation as $\bm B_{k + 1}\bm s_k = \bm y_k$
	* Plugging in the SR1 update, $\bm B_k\bm s_k + \bm u\bm u^T\bm s_k = \bm y_k \implies \bm u(\bm u^T\bm s_k) = \bm y_k - \bm B_k\bm s_k$
		* This means $\bm u = \gamma(\bm y_k - \bm B_k\bm s_k)$ where $\gamma = \bm u^T\bm s_k$ is a scalar
	* Plug this back in: $\gamma^2(\bm y_k - \bm B_k\bm s_k)(\bm s_k^T(\bm y_k - \bm B_k\bm s_k)) = \bm y_k - \bm B_k\bm s_k$
	* $\gamma^2 = \frac{1}{\bm s_k^T(\bm y_k - \bm B_k\bm s_k)}$
* The final update formula is $\bm B_{k + 1} = \bm B_k + \frac{(\bm y_k - \bm B_k\bm s_k)(\bm y_k - \bm B_k\bm s_k)^T}{(\bm y_k - \bm B_k\bm s_k)^T\bm s_k}$
	* However, this only gives the approximate Hessian and not its inverse (inverting at each iteration would be too expensive)

\noteThm{\textit{Sherman-Morrison-Woodbury (SMW) Formula}: Given $\bm A \in \reals^{n \times n}, \bm u, \bm v \in \reals^{n \times p}$, then $$(\bm A + \bm u\bm v^T)^{-1} = \bm A^{-1} - \bm A^{-1}\bm u(\bm 1 + \bm v^T\bm A^{-1}\bm u)^{-1}\bm v^T\bm A^{-1}$$}

* Using the SMW formula: $\bm B_{k + 1}^{-1} = \bm B_k^{-1} + \frac{(\bm s_k - \bm B_k^{-1}\bm y_k)(\bm s_k - \bm B_k^{-1}\bm y_k)^T}{(\bm s_k - \bm B_k^{-1}\bm y_k)^T\bm y_k}$
	* This gives a cost of $O(n^2)$ (compared to $O(n^3)$ for matrix inversion)
* An alternative approach to compute $\bm B_{k + 1}$ is to formulate it as a constrained optimization problem
	* $\bm B_{k + 1} = \min _{\bm B} \norm{\bm B - \bm B_k}$ subject to $\bm B = \bm B^T, \bm B(\bm\theta _k - \bm\theta _{k + 1}) = \del f(\bm\theta _k) - \del f(\bm\theta _{k + 1})$
	* The choice of matrix norm to use leads to different variations of the method:
		* Davidon-Fletcher-Powell (DFP): $\bm B_{k + 1}^{-1} = \bm B_k^{-1} - \bm A_k + \bm C_k$
			* $\bm A_k = \frac{\bm B_k^{-1}\bm y_k\bm y_k^T\bm B_k^{-1}}{\bm y_k^T\bm B_k^{-1}\bm y_k}$
			* $\bm C_k = \frac{\bm s_k\bm s_k^T}{\bm s_k^T\bm y_k}$
			* This is a rank-2 method
		* Broyden–Fletcher–Goldfarb–Shanno (BFGS):
			* $\bm B_{k + 1}^{-1} = \left(\bm 1 - \frac{\bm s_k\bm y_k^T}{\bm s_k^T\bm y_k}\right)\bm B_k^{-1}\left(\bm 1 - \frac{\bm s_k\bm y_k^T}{\bm s_k^T\bm y_k}\right) + \frac{\bm s_k\bm s_k^T}{\bm s_k^T\bm y_k}$
* Quasi-Newton methods generally have between linear and quadratic convergence; we calls this *superlinear*
* In problems where $n$ is very large such that $O(n^2)$ is impractical, limiting-memory quasi-Newton methods compute the search step directly

## Constrained Optimization -- Penalty Methods

* Consider the problem of minimizing $f(\bm\theta)$ subject to constraints $g_i(\bm\theta) \geq 0, h_j(\bm\theta) = 0$ where $i = 1, 2, \dots, m$ and $j = 1, 2, \dots, q$ and $\bm\theta _l \leq \bm\theta \leq \bm\theta _u$
* Penalty methods minimize $\pi(\bm\theta, \rho _k) = f(\bm\theta) + \rho _k\phi(\bm\theta)$
	* $\phi(\bm\theta)$ is the *penalty function* and $\rho _k$ is the *penalty parameter*
	* We want $\bm\phi(\theta)$ equal to zero when no constraints are violated and positive when constraints are violated
	* We need to ensure that the objective and the penalty function are appropriately scaled, so one doesn't dominate the other
* Quadratic penalty function: $\phi(\bm\theta _k) = \sum _{i = 1}^m (\max(0, -g_i(\bm\theta)))^2 + \sum _{i = 1}^q (h_i(\bm\theta))^2$
* Penalty methods template:
	1. Check termination conditions
	2. Minimize $\pi(\bm\theta, \rho _k)$ to find $\bm\theta _{k + 1}$
	3. Increment the penalty parameter, $\rho _{k + 1} > \rho _k$
		* Typically we multiply by a factor of 1.4 to 10, but this is problem dependent

## Nonlinear Least Squares

* $\min _{\bm\theta \in \reals^n} = \frac{1}{2}\sum _{i = 1}^N r_i(\bm\theta)^2$ where $r_i(\bm\theta) = \hat f(\bm x^{(i)}, \bm\theta) - y^{(i)}$
	* Assume $N > n$, i.e. we have more data points than dimensions
* Let $\bm r = \cvec{r_1}{\vdots}{r_n} \in \reals^N$ and $f(\bm\theta) = \frac{1}{2}\norm{\bm r(\bm\theta)}_2^2$
* $\del f(\bm\theta) = \sum _{j = 1}^N r_j(\bm\theta)\del r_j(\bm\theta) = \bm J(\bm\theta)^T\bm r(\bm\theta)$
	* $\bm J(\bm\theta) = \cvec{\pdiff{r_j}{r_i}} \in \reals^{N \times n}$ is the Jacobian
* $\alignedeqntwo[t]{\del^2 f(\bm\theta)}{\sum _{j = 1}^N \del r_j(\bm\theta)\del r_j(\bm\theta)^T + \sum _{j = 1}^N r_j(\bm\theta)\del^2\bm r_j(\bm\theta)}{\bm J(\bm\theta)^T\bm J(\bm\theta) + \sum _{j = 1}^N r_j(\bm\theta)\del^2 r_j(\bm\theta)}$
	* The Jacobian is easy to compute, which gets us most of the way to the Hessian
	* Often the second term is small so we can ignore it altogether and use the Jacobian to approximate the Hessian
		* This happens when the initial residual is small

### Gauss-Newton Method

* This is similar to a modified Newton's method with line search
* Use $\del^2 f(\bm\theta) \approx \bm J(\bm\theta)^T\bm J(\bm\theta)$ as an approximation of the Hessian
* Solve $\bm J(\bm\theta)^T\bm J(\bm\theta)\bm p_k = -\bm J(\bm\theta)^T\bm r(\bm\theta _k)$ for the search direction
	* Update $\bm\theta _{k + 1} = \bm\theta _k + \alpha _k\bm p_k$ where $\alpha _k$ is chosen via line search
* In the case where the initial residual is small or approximately linear in $\bm\theta$, the Gauss-Newton method can perform similar to the full Newton's method, despite only computing first-order derivatives
* If $\bm J(\bm\theta _k)$ is full-rank and $\del f(\bm\theta _k) \neq 0$, the search direction is always a valid direction

## Stochastic Gradient Descent (SGD)

* In general we have loss function $\mathcal L(\bm\theta; \mathcal D) = \frac{1}{N}\sum _{i = 1}^N l(\bm\theta; \bm x^{(i)}, y^{(i)}) + \lambda R(\bm\theta)$ given data $\mathcal D = \set{(\bm x^{(i)}, y^{(i)})}_{i = 1}^N$
	* This consists of the empirical loss and a regularization term
* $\del \mathcal L = \frac{1}{N}\sum _{i = 1}^N \del l(\bm\theta; \bm x^{(i)}, y^{(i)}) + \lambda\del R(\bm\theta)$
* Applying the steepest descent method, we get the update $\bm\theta _{k + 1} = \bm\theta _k - \eta _k\del\mathcal L(\bm\theta _k; \mathcal D)$
	* $\eta _k$ is the *learning rate*
		* In classical methods we use backtracking line search to find this, but in machine learning we typically choose this heuristically, as a constant
		* e.g. start with a sensible value like $\eta = 0.1$; take smaller steps if objective gets worse or we see oscillation; take larger steps if objective reduces too slowly
	* Since we are computing the gradient over the full dataset $\mathcal D$, this is known as *full-batch gradient descent*
* Full-batch gradient descent is typically very expensive since we need to compute the gradient over the entire dataset
* Procedure of SGD:
	1. Shuffle training indices $\set{1, \dots, N}$
	2. Initialize $\bm\theta _0$
	3. Repeat until we reach some convergence criteria:
		* For $i$ from 1 to $N$, $\bm\theta \gets \bm\theta - \eta\del l(\bm\theta; \bm x^{(i)}, y^{(i)})$
* Each iteration of the outer loop is an *epoch*, where we loop over the full dataset
* SGD essentially uses only one datapoint at a time
	* This works because the gradient using one datapoint is an unbiased estimator of the full gradient
	* Let $\bm g_t = l(\bm \theta _k; \bm x^{(t)}, y^{(t)})$, we have that $\mathbb E[\bm g_t] = \mathcal L(\bm\theta _k; \mathcal D)$
* Consider gradient descent over a GLM with $M$ terms
	* The cost of full-batch gradient descent is $O(NM)$, and converges in $O\left(\log\frac{1}{\rho}\right)$
	* The cost of stochastic gradient descent is only $O(M)$, and converges in $O\left(\frac{1}{\rho}\right)$ iterations
		* Even though SGD takes more iterations to converge (sub-linearly), it's cheaper overall when factoring in the cost per iteration
		* Sometimes it's not practical to do full-batch gradient descent due to the size of the dataset
* In *mini-batch gradient descent* we compute the gradient over a mini-batch that is smaller than the full dataset, but more than 1 sample, in each iteration
	* This is a compromise between full-batch gradient descent and SGD
	* The larger the batch size, the closer we get to full-batch and the faster we converge (in iterations)

