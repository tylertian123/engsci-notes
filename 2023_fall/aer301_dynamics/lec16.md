# Lecture 16, Oct 31, 2023

## Midterm Review

* Example: pendulum with spring and dashpot on the arm
	* Kinetic energy: $T = \frac{1}{2}mv^2 = \frac{1}{2}m\left(\dot x^2 + (l + x)^2\dot\theta^2\right)$
	* Potential energy: $V = \frac{1}{2}kx^2 - mg(l + x)\cos\theta$
	* Nonconservative forces: consider $\overarc{\delta W}_{\striangle} = Q_{x,\striangle}\delta x + Q_{\theta,\striangle}\delta\theta$
		* For a small virtual displacement $\delta x$ we would have done work $f_d\delta x = -c\dot x\delta x$
		* A small displacement $\delta\theta$ does no non-conservative work
		* Therefore $Q_{x,\striangle} = -c\dot x, Q_{\theta,\striangle} = 0$
		* We could also do this using $Q_{k,\striangle} = \sum _i \uvec f_{i,\striangle} \cdot \pdiff{\uvec r_i}{q_k}$
	* $L = \frac{1}{2}m\left(\dot x^2 + (l + x)^2\dot\theta^2\right) - \frac{1}{2}kx^2 - mg(l + x)\cos\theta$
	* $\pdiff{L}{\dot x} = m\dot x \implies \diff{}{t}\left(\pdiff{L}{\dot x}\right) = m\ddot x$
	* $\pdiff{L}{x} = m(l + x)\dot\theta^2 - kx - mg\cos\theta$
	* $\pdiff{L}{\dot\theta} = m(l + x)^2\dot\theta \implies \diff{}{t}\left(\pdiff{L}{\dot\theta}\right) = 2m(l + x)\dot x\dot\theta + m(l + x)^2\ddot\theta$
	* $\pdiff{L}{\theta} = -mg(l + x)\sin\theta$
	* $m\ddot x - m(l + x)\dot\theta^2 + kx - mg\cos\theta = -c\dot x$
	* $m(l + x)^2\ddot\theta + 2m(l + x)\dot x\dot\theta + mg(l + x)\sin\theta = 0$

