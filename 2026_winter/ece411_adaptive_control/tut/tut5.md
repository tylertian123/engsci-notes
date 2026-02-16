# Tutorial 5, Feb 9, 2026

* Consider a system $\twopiece{x(k + 1) = \mattwo{\cos\omega}{-\sin\omega}{\sin\omega}{\cos\omega}x(k)}{y(k) = \rvec{1}{0}x(k)}$
	1. Given $y(k) = \cos(\omega k)$, develop an adaptive law that asymptotically recovers an initial condition which generates $y(k)$
		* In this case $\psi = x(0)$
		* $y(k) = CA^kx(0) = \rvec{\cos(\omega k)}{-\sin(\omega k)}\psi$
			* $A$ is a rotation matrix, which means $A^k = \mattwo{\cos(\omega k)}{-\sin(\omega k)}{\sin(\omega k)}{\cos(\omega k)}$
		* We have $y(k) = \psi^Tw(k)$ where $w(k) = \cvec{\cos(\omega k)}{-\sin(\omega k)}$, which suggests $w(k)$ being the regressor
		* Let $\hat y = \hat\psi^Tw(k), e(k) = \hat y(k) - y(k) = (\hat\psi - \psi)^Tw(k) = \tilde\psi^T(k)w(k)$, giving a static error model
			* What we did here was to construct the signal $y(k)$ using the parameter we're trying to estimate, and then derive an error model
		* Use the adaptive law $\hat\psi(k + 1) = \hat\psi(k) - \frac{\bar\gamma}{1 + \norm{w(k)}^2}e(k)w(k), \bar\gamma \in (0, 2)$
	2. If $y(k) = \sin(2\omega k)$, can we still obtain the correct $\psi$ estimate using the same adaptive law?
		* Notice that $\sin(2\omega k)$ cannot be written as a linear combination of $\cos(\omega k)$ and $-\sin(\omega k)$, so there is no such $\psi$ such that $y(k) = \psi^Tw(k)$ and $e(k)$ doesn't go to zero
	3. Suppose $y_\text{meas}(k) = y(k) + \eta(k)$ where $\eta(k)$ is some scalar high frequency noise; to attenuate the noise, we use a stable filter $H(z)$ to produce $y_\text{filt}(k) = H(z)\left[y_\text{meas}(k)\right]$; assuming $H(z)\left[\eta(k)\right] = 0$, develop an adaptation law that uses $y_\text{filt}(k)$ to recover initial conditions which generates $y(k)$
		* $\alignedeqntwo[t]{y_\text{filt}(k)}{H(z)\left[y_\text{meas}(k)\right]}{H(z)\left[y(k) + \eta(k)\right]}{H(z)\left[y(k)\right] + H(z)\left[\eta(k)\right] \Ttag{by linearity, since }H(z)\text{ is stable}}{H(z)\left[\psi^Tw(k)\right]}$
		* Define $\hat y_\text{filt}(k) = H(z)\left[\hat\psi^T(k)w(k)\right]$
		* $\alignedeqntwo[t]{e(k)}{\hat y_\text{filt}(k) - y_\text{filt}(k)}{H(z)\left[\hat\psi^T(k)w(k)\right] - H(z)\left[\psi^Tw(k)\right]}{H(z)\left[\hat\psi^T(k)w(k) - \psi^Tw(k)\right]}{H(z)\left[\tilde\psi^T(k)w(k)\right]}$
			* This is a dynamic error model, since $e(k)$ is is the output of a stable dynamical system
		* $\alignedeqntwo[t]{e(k)}{H(z)\left[\hat\psi^T(k)w(k)\right] - H(z)\left[\psi^Tw(k)\right]}{H(z)\left[\hat\psi^T(k)w(k)\right] - \psi^TH(z)I\left[w(k)\right]}$
		* Let $\alignedeqntwo[t]{e_a(k)}{e(k) - H(z)\left[\hat\psi^T(k)w(k)\right] + \hat\psi^T(k)H(z)I\left[w(k)\right]}{\hat\psi^T(k)H(z)I\left[w(k)\right] - \psi^TH(z)I\left[w(k)\right]}{\tilde\psi^T(k)H(z)I\left[w(k)\right]}{\tilde\psi^T(k)w_a(k)}$
		* Now we can use the adaptive law $\hat\psi(k + 1) = \hat\psi(k) - \frac{\bar\gamma}{1 + \norm{w_a(k)}^2}e_a(k)w_a(k), \bar\gamma \in (0, 2)$
			* Note we have $e_a(k) = \hat\psi^T(k)w_a(k) - y_\text{filt}(k)$ since the first piece is $\hat\psi^T(k)H(z)I\left[w(k)\right]$ and the second piece is $\psi^TH(z)I\left[w(k)\right]$ after applying the swapping lemma to the original definition of $y_\text{filt}$

