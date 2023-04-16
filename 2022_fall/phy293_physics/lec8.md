# Lecture 8, Sep 26, 2022

## Spring-Coupled Masses

* Two equal spring oscillators coupled by another spring
* $\twopiece{m\diffn{2}{x_A}{t} = -kx_A + k(x_B - x_A) = kx_B - 2kx_A}{m\diffn{2}{x_B}{t} = -kx_B - k(x_B - x_A) = kx_A - 2kx_B}$
* Consider a normal mode where both masses have the same frequency, i.e. $\twopiece{x_A(t) = A\cos(\omega t)}{x_B)t) = B\cos(\omega t)}$
	* Substitute into 1: $\frac{A}{B} = \frac{k}{2k - m\omega^2}$
	* Substitute into 2: $\frac{A}{B} = \frac{2k - m\omega^2}{k}$
	* Therefore $2k - m\omega^2 = \pm k \implies \omega _1 = \sqrt{\frac{k}{m}}, \omega _2 = \sqrt{\frac{3k}{m}}$
		* $\omega^2 = \frac{k}{m} \implies A = B$ -- regular oscillation, middle spring inactive
		* $\omega^2 = \frac{3k}{m} \implies A = -B$ -- effectively two springs in the system
* General mode would be a superposition: $\twopiece{x_A(t) = C_1\cos(\omega _1t) + C_2\cos(\omega _2t)}{x_A(t) = C_1\cos(\omega _1t) + C_2\cos(\omega _2t)}$ where $\omega _1 = \sqrt{\frac{k}{m}}, \omega _2 = \sqrt{\frac{3k}{m}}$
* Example: Consider if $x_A(0) = A, x_B(0) = 0$:
	* $q_1 = x_A + x_B, q_2 = x_A - x_B \implies x_A = \frac{1}{2}(q_1 + q_2), x_B = \frac{1}{2}(q_1 - q_2)$
	* Consider $q_1 = C_1\cos(\omega _1t), q_2 = C_2\cos(\omega _2t)$; plug in $t = 0$ and solve to get $C_1 = C_2 = A$
	* $x_A = \frac{1}{2}(C_1\cos(\omega _1t) + C_2\cos(\omega _2t)) = \frac{1}{2}A(\cos(\omega _1t) + \cos(\omega _2t)) = \frac{1}{2}A\cos\left(\frac{\omega _1 + \omega _2}{2}t\right)\cos\left(\frac{\omega _1 - \omega _2}{2}t\right)$
		* We can think about this as a system oscillating with frequency $\frac{\omega _1 + \omega 2}{2}$ (i.e. the average of the two), and amplitude $\frac{\omega _1 - \omega _2}{2}t$ 
		* This is known as a beating phenomenon

## Extending to More Masses

* Let $x_A = A\cos(\omega t), x_B = B\cos(\omega t)$, substitute into the equations of motion
	* Recall $\diffn{2}{x}{t} = -\omega^2x$
* $\twopiece{A(2k - m\omega^2)\cos(\omega t) = kB\cos(\omega t)}{B(2k - m\omega^2)\cos(\omega t) = kA\cos(\omega t} \implies \twopiece{\frac{2k}{m}A - \frac{k}{m}B = A\omega^2}{\frac{2k}{m}B - \frac{k}{m}A = B\omega^2}$
* Write in matrix form: $\mattwo{\frac{2k}{m}}{-\frac{k}{m}}{-\frac{k}{m}}{\frac{2k}{m}}\cvec{A}{B} = \omega^2\cvec{A}{B}$
	* This is an eigenvalue problem
	* Solving us gets the same $\omega$ as before
* Example: Two equal masses $m$ suspended from identical springs of constant $k$ each
	* Note we don't need to worry about gravity since it's only a constant offset to the equilibrium
	* Consider a displacement down
	* $m\diffn{2}{x_A}{t} = -kx_A + k(x_B - x_A) \implies \diff{x_A}{t} = -\frac{2k}{m}x_A + \frac{k}{m}x_B$
	* $m\diffn{2}{x_B}{t} = -k(x_B - x_A) = \frac{k}{m}x_A - \frac{k}{m}x_B$
	* Let $x_A = A\cos(\omega t), x_B = B\cos(\omega t)$
	* As matrix equation: $\mattwo{-\frac{2k}{m}}{\frac{k}{m}}{\frac{k}{m}}{-\frac{k}{m}}\cvec{A}{B} = \omega^2\cvec{A}{B}$

