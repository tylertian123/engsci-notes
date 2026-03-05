# Lecture 20, Mar 2, 2026

## Dead Reckoning and Odometry

* Given a vehicle model $\dot{\bm x} = \bm A(\bm x)\bm x + \bm B(\bm x)\bm u$, we can integrate to predict future states as $\bm x(t) = \bm x(0) + \int _0^t \dot{\bm x}(t)\,\dt$, given initial condition and inputs $\bm u(t)$
* Consider a 1D example $\dot x = u + w$ where $w$ is some noise, and we integrate as $x(t + h) = x(t) + hu(t) + hw(t) \implies x(Kh) = x(0) + h\sum _{k = 0}^{K - 1}u(kh) + h\sum _{k = 0}^{K - 1} w(kh)$
	* Assuming the noise is a zero mean Gaussian we can derive the mean and variance
	* $\mu(Kh) = E[x(0)] + h\sum _{k = 0}^{K - 1}u(kh)$ -- this means that the mean of the estimate is unbiased
	* $\sigma(Kh) = Kh^2Q$ -- the variance grows without bound
	* The fact that the uncertainty grows without bound is the key characteristic of dead reckoning
* We can perform dead reckoning with wheel odometry from encoders
* For the differential drive robot:
 	* $\dot{\bm q} = \cvec{\dot x}{\dot y}{\dot\theta} = \matthreetwo{\cos\theta}{0}{\sin\theta}{0}{0}{1}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{\dot\varphi _r}{\dot\varphi _l}$
	* Assume we can measure the wheel speed using encoders
	* We discretize as $\bm q(t + h) = \bm q(t)\matthreetwo{\cos\theta}{0}{\sin\theta}{0}{0}{1}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}h\cvec{\dot\varphi _r}{\dot\varphi _l}$
	* Model the encoder measurements as $h\cvec{\dot\varphi _r(t)}{\dot\varphi _l(t)} \approx \cvec{\Delta\varphi _r(t) + w_r(t)}{\Delta\varphi _l(t) + w_l(t)}$
		* We model $w(t) \sim \mathcal U\left(-\frac{\pi}{2^N}, \frac{\pi}{2^N}\right)$ for quantization error
		* For convenience we approximate as a zero-mean Gaussian $\bm w(t) = \cvec{w_r(t)}{w_l(t)} \sim \mathcal N(\bm 0, \bm Q)$
	* $\bm q(t + h) = \bm q(t)\matthreetwo{\cos\theta}{0}{\sin\theta}{0}{0}{1}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{\Delta\varphi _r(t) + w_r(t)}{\Delta\varphi _l(t) + w_l(t)}$
	* We often denote $\bm q(t)$ as the overall noisy state, which is composed of $\bar{\bm q}(t)$, the large and known mean, and $\delta\bm q(t)$, the small uncertain part (noise)
		* Therefore $\bm q$ has mean $\bar{\bm q}$ and covariance $\delta q(t)\delta q^T(t)$
	* Linearize the update equation about the mean to propagate uncertainty
		* $\cos(\theta(t)) \approx \cos(\bar\theta(t)) - \sin(\bar\theta(t))\delta\theta(t)$
		* $\sin(\theta(t)) \approx \sin(\bar\theta(t)) + \cos(\bar\theta(t))\delta\theta(t)$
	* $\bm q(t + h) = \bm q(t) + \left(\matthreetwo{\cos\bar\theta(t)}{0}{\sin\bar\theta(t)}{0}{0}{1} + \matthreetwo{-\sin\bar\theta(t)}{0}{\cos\bar\theta(t)}{0}{0}{0}\delta\theta(t)\right)\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{\Delta\varphi _r(t) + w_r(t)}{\Delta\varphi _l(t) + w_l(t)}$
		* We drop all second order terms in our approximation to make it linear
		* The mean propagates as $\bar{\bm q}(t + h) = \bar{\bm q}(t) + \matthreetwo{\cos\bar\theta(t)}{0}{\sin\bar\theta(t)}{0}{0}{1}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{\Delta\varphi _r(t) + w_r(t)}{\Delta\varphi _l(t) + w_l(t)}$
		* $\alignedeqntwo[t]{\delta\bm q(t + h)}{\begin{aligned}[t] \delta\bm q(t) &+ \matthreetwo{-\sin\bar\theta(t)}{0}{\cos\bar\theta(t)}{0}{0}{0}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{\Delta\varphi _r(t)}{\Delta\varphi _l(t)}\delta\theta(t) \\ &+ \matthreetwo{\cos\bar\theta(t)}{0}{\sin\bar\theta(t)}{0}{0}{1}\mattwo{r/2}{r/2}{r/(2b)}{-r/(2b)}\cvec{w_r(t)}{w_l(t)}\end{aligned}}{\bm A(t)\delta\bm q(t) + \bm B(t)\bm w(t)}$
		* The uncertainty propagates as $\bm\Sigma(t + h) = \bm A(t)\bm\Sigma(t)\bm A(t)^T + \bm B(t)\bm Q\bm B(t)^T$
			* Once again the uncertainty grows without bound
* Our wheel odometry model depends on the wheel radius, baseline, and the update covariance; good calibration of these parameters is crucial for minimizing error
	* For wheel radius, we drive forward some distance in a straight line and divide the distance travelled by the average of the wheel encoder angle measurements
		* $r = 2\frac{x_\text{true}}{\sum _k (\Delta\varphi _r(kh) + \Delta\varphi _l(kh))}$
	* For wheel separation, we rotate some number of rotations (we can measure this using e.g. a laser pointer on the robot), and solve for the wheel separation using the distance travelled calculated from the wheel radius
		* $b = \frac{r}{2}\frac{\sum _k (\Delta\varphi _r(kh) + \Delta\varphi _l(kh))}{2\pi N}$
* Wheel odometry is usually used as the predictive source for sensor fusion, since it uses cheap sensors and low amount of computation, and does not drift when stationary unlike IMU measurements

