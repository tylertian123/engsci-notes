# Lecture 9, Feb 16, 2024

## Unconstrained Optimization

* Given $f(\bm \theta)$ where $\bm\theta \in \reals^n$ and $f \colon \reals^n \mapsto \reals$, we want to find $\bm\theta^* = \argmin _{\bm\theta} f(\bm\theta)$
* Let $\bm\theta^*$ be a local minimum of $f$, then $f(\bm\theta^* + \epsilon\bm p) \geq f(\bm\theta^*)$ for any arbitrary $\bm p$ and small $\epsilon$
	* $f(\bm\theta^* + \epsilon\bm p) = f(\bm\theta^*) + \epsilon\bm p^T\bm g(\bm\theta^*) + \frac{1}{2}\epsilon^2\bm p^T\bm H(\bm\theta^*)\bm p + O(\epsilon^3)$ where $\bm g(\bm\theta)$ is the gradient and $\bm H(\bm\theta)$ is the Hessian
	* The middle two terms must be greater than or equal to zero due to the local minimum condition
	* This means that $\bm g(\bm\theta^*) = \bm 0$, and $\bm H(\bm\theta^*)$ is symmetric positive definite, since $\bm p$ is arbitrary
* KKT conditions:
	* The first order necessary optimality condition states that the gradient must be zero at the minimum
	* The second order necessary optimality condition states that the Hessian must be positive semi-definite
	* If both the gradient is zero and the Hessian is positive definite, then we have sufficient conditions for a minimum

### Gradient-Based Unconstrained Numerical Optimization

* Gradient-based algorithms are based on the following template:
	* Start with $k = 0$ and an initial guess $\bm\theta _0$
	* In each iteration:
		* Test for convergence; if we have converged, stop and take $\bm\theta _k$ as the solution; if not, continue
		* Compute the search direction $\bm p_k$
		* Compute the step length $\alpha _k > 0$ s.t. $f(\bm\theta _k + \alpha _k\bm p_k) < f(\bm \theta _k)$
		* Take $\theta _{k = 1} \gets \bm\theta _k + \alpha _k\bm p_k$ and $k \gets k + 1$
* To obtain a valid search direction, we need $\bm p_k^T\bm g_k < 0$, i.e. the step and the gradient have to point in opposite directions
	* Take $\bm p_k = -\bm B\bm g_k$ for some symmetric positive definite $\bm B$
	* Possible choices for $\bm B$:
		* Steepest descent: $\bm B = \bm 1$
			* The search direction is directly opposite to the gradient
		* Newton's method: $\bm B = \bm H_k^{-1}$
		* Quasi-Newton methods: $\bm B \approx \bm H_k^{-1}$
			* For computational reasons, these methods take an approximation of the inverse Hessian
* Computing the appropriate $\alpha _k$ is a tradeoff between reducing function evaluations (i.e. getting to the goal with fewer steps) and computational cost at each step
	* One technique is to take a number of $\alpha _k$s and stop at the first one that meets some condition
	* Armijo sufficient decrease condition: $f(\bm\theta _k + \alpha _k\bm p_k) \leq f(\bm\theta _k) + \mu _1\alpha _k\bm g_k^T\bm p_k$
		* The constant $\mu _1$ is typically chosen in the range of $10^{-4}$
	* Backtracking line search:
		* Choose starting step length (between 0 and 1)
		* Check if Armijo condition is satisfied, and if so use the current step length
		* If not, $\alpha \gets \rho\alpha$ (typically $\rho \in [0.1, 0.5]$) and check again
* Steepest descent algorithm:
	* Select initial guess $\bm\theta _0$, gradient tolerance $\epsilon _g$, absolute tolerance $\epsilon _a$, relative tolerance $\epsilon _r$
	* If $\norm{\bm g(\bm\theta _k)}_2 \leq \epsilon _g$ then stop
	* Set $\bm p_k = -\frac{\bm g(\bm\theta _k)}{\norm{\bm g(\bm\theta _k)}_2}$
	* Find $\alpha _k$ such that $f(\bm\theta _k + \alpha\bm p_k)$ satisfies the sufficient decrease conditions
	* Update as $\bm\theta _{k + 1} \gets \bm\theta _k + \alpha _k\bm p_k$
	* Evaluate $f(\bm\theta _{k + 1})$; if $\abs{f(\bm\theta _{k + 1}) - f(\bm\theta _{k})} \leq \epsilon _a + \epsilon _r\abs{f(\bm\theta _k)}$ for two successive iterations, stop
		* In this case our algorithm has gotten stuck
* For steepest descent, for all $k$, we can show that $\bm p_{k + 1}$ is orthogonal to $\bm p_k$
	* $\pdiff{f(\bm\theta _{k + 1})}{\alpha} = 0 \implies \del^T f(\bm\theta _{k + 1})\bm p_{k} = 0 \implies \bm g(\bm\theta _{k - 1})^T\bm g(\bm\theta _k) = 0$
	* This means we're always zig-zagging at each iteration
	* This is inefficient (high number of iterations needed), but it is guaranteed to converge
	* Convergence rate is linear: $\lim _{k \to \infty} \frac{\abs{f(\bm \theta _{k - 1}) - f(\bm\theta^*)}}{\abs{f(\bm\theta _k) - f(\bm\theta^*)}} = K$
* Conjugate gradient method (nonlinear, first order, i.e. only uses the gradient):
	* $\bm p_0 = -\frac{\bm g(\bm\theta _0)}{\norm{\bm g(\bm\theta _0)}_2}$ for the first step
	* For all other steps $\bm p_k = -\bm g_k + \beta _k\bm p_{k - 1}$
		* Fletcher-Reeves: $\beta _k = \frac{\bm g_k^T\bm g_k}{\bm g_{k - 1}^T\bm g_{k - 1}}$
		* Polak-Ribieve: $\beta _k = \frac{\bm g_k^T(\bm g_k - \bm g_{k - 1})}{\bm g_{k - 1}^T\bm g_{k - 1}}$
	* Since we're using knowledge from previous gradients, this does not zig zag as much as steepest descent
* Newton's method (second order, i.e. also uses the Hessian):
	* Quadratic convergence: $\lim _{k \to \infty} \frac{\abs{f(\bm \theta _{k - 1}) - f(\bm\theta^*)}}{\abs{f(\bm\theta _k) - f(\bm\theta^*)}^2} = K > 0$
	* Use $\bm p_k = \bm H_k^{-1}\bm g_k$
		* Note that this step direction is only valid if $\bm H_k$ is positive definite
		* We can check the dot product of $\bm p_k$ with $\bm g_k$ at each step, and if this is invalid (i.e. greater than 0) we simply go in the opposite direction
* Newton's method requires computation of the inverse Hessian, which can be very inefficient; for computational reasons, we use quasi-Newton methods which approximate the inverse Hessian
	* These don't make use of the Hessian but can still get better than linear convergence
	* Iteratively update $\bm B_{k + 1}^{-1} = \bm B_k^{-1} + \Delta\hat{\bm B}_k$
	* $\Delta\hat{\bm B}_k$ depends on the specific method

