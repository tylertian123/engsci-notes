# Lecture 5

## Qualitative Behaviour of Solutions

* Consider a system $x(k + 1) = Ax(k) + Bu(k)$ with response $x(k) = A^kx(0) + \sum _{i = 0}^{k - 1}A^{k - 1 - i}Bu(i)$; what can we conclude qualitatively about the solution without explicitly computing it?
* Let the system have output $y(k) = Cx(k)$ and transfer function $G(z) = C(zI - A)^{-1}B = k\frac{(z - q_1)(z - q_2)\cdots}{(z - p_1)(z - p_2)\cdots}$
* To get $Y(k)$ we use partial fractions as with Laplace transforms, yielding $\frac{c_1}{z - p_1} + \frac{c_2}{z - p_2} + \cdots$
* What is the behaviour of a typical pole?
* For real distinct poles, $\iztf{\frac{z}{z - p}} = p^k$
	* Clearly, if $p = 1$ then we get a constant response, or if $p = -1$ we get an alternating response that has constant magnitude
	* For $p \in (0, 1)$ we get a decaying envelope that does not change sign; with the decay faster the closer $p$ is to zero
	* For $p = 0$ we get a constant zero (but we need to watch out since now we have $z/z$)
	* For $p \in (-1, 0)$ we get a decaying envelope with alternating signs, again with decay faster the closer $p$ is to zero
	* In summary:
		* $p < 0 \to$ solution alternates signs
		* $\abs{p} < 1 \to$ solution decays
		* $\abs{p} > 1 \to$ solution blows up
		* $p = \pm 1 \to$ steady-state response
* For complex conjugate poles, $\iztf{\frac{z^2}{(z - re^{j\omega})(z - re^{-j\omega})}} = \frac{1}{\sin\omega}r^k\sin(k\omega + \phi)$
	* This contains a constant factor, an exponential envelope $r^k$ and an oscillation at frequency $\omega$
	* Larger values of $r$ decay slower, until $r = 1$ which is a steady-state oscillation, then for $r > 1$ the solution blows up
	* The frequency of oscillation gets faster with increasing $\omega$, as we increase the angle of the pole
		* However since the angles live on a circle, if we have $\omega > \pi$ (i.e. flipping beyond the negative real line), the effect is the same as reducing the frequency
		* This is because $\omega = \pi$ represents the Nyquist frequency, and any higher frequency contents will be aliased into lower frequencies in the output, so we have a fundamental limit based on the sampling rate
	* In summary:
		* Poles on the same circle have the same exponential envelope
		* Poles with the same angle have the same oscillation frequency

