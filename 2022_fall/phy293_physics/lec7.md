# Lecture 7, Sep 22, 2022

## Simple Pendulum

* $-mg\sin(\theta) = L\diffn{2}{\theta}{t}$
* Under a small angle approximation $-\frac{g}{L}\theta = \diffn{2}{\theta}{t}$
	* In this case "small" means $< 10\degree$
* $\theta(t) = \theta _{max}\sin(\omega t + \theta _0), \omega^2 = \frac{g}{L}, T = \frac{2\pi}{\omega} = 2\pi\sqrt\frac{L}{g}$
* For any arbitrary object, we can use the centre of mass point and pivot point and the moment of inertia
	* $\theta(t) = \theta _{max}\sin(\omega t + \theta _0)$
	* $\omega^2 = \frac{mgd}{I}$
	* Even though $m$ appears in the equation, the frequency does not actually depend on mass since it cancels with the $m$ term in $I$

## Coupled Oscillators

* Consider two pendulums with masses $m_A$, $m_B$ connected by a spring with constant $k$

### Normal Modes

\noteDefn{A normal mode is a mode of oscillation where every mass is oscillating at the same frequency and fixed phased relation}

* Consider 2 cases:
	* Displacing them the same amount $x_A = x_B$
		* In this case the springs are unstretched; both masses oscillate in phase with the same frequency $\omega _1 = \sqrt{\frac{g}{L}}$
	* Displacing them in opposite directions $x_A = -x_B$
		* Assuming masses are the same, then $m_A\diffn{2}{x_A}{t} = -\frac{mg}{L}x_A - 2kx_A$
			* The masses are stretched by the same amount, so the total spring stretch is $2x_A$
		* Both masses oscillate with frequency $\omega _2 = \sqrt{\frac{g}{L} + \frac{2k}{m}}$
		* The masses are out of phase
* These are the *normal modes* of oscillation
	* "Normal" since they are linearly independent

### Superposition of Normal Modes

* In general $x_A \neq \pm x_B$
* Assume the angles are small so the spring is horizontal
* Restoring force on $m_A$ is $-\frac{mg}{L}x_A - k(x_A - x_B)$, force on $m_B$ is $-\frac{mg}{L}x_B + k(x_A - x_B)$ 
	* This gives us a system of coupled differential equations
* Adding the two equations shows SHM with variable $x_A + x_B$ and frequency $\omega = \sqrt{\frac{g}{L}}$
* Subtracting the two equations shows SHM with variable $x_A - x_B$ and frequency $\omega = \sqrt{\frac{g}{L} + \frac{2k}{m}}$
	* The $\frac{2k}{m}$ term represents the coupling
* Let $x_A + x_B = q_1, x_A - x_B = q_2$, then $q_1(t) = C_1\cos(\omega _1t + \phi _1), q_2(t) = C_2\cos(\omega _2t + \phi _2)$ where $\omega _1 = \sqrt{\frac{g}{L}}, \omega _2 = \sqrt{\frac{g}{L} + \frac{2k}{m}}$
* Energy is $\alignedeqntwo[t]{E}{\frac{1}{2}m\left(\diff{x_A}{t}\right)^2 + \frac{1}{2}m\left(\diff{x_B}{t}\right)^2 + \frac{1}{2}\frac{mg}{L}(x_A^2 + x_B^2) + \frac{1}{2}k(x_A - x_B)^2}{\frac{1}{4}m\left(\diff{q_1}{t}\right)^2 + \frac{1}{4}\frac{mg}{L}(q_1)^2 + \frac{1}{4}m\left(\diff{q_2}{t}\right)^2 + \frac{1}{4}\left(\frac{mg}{L} + 2k\right)(q_2)^2}$

