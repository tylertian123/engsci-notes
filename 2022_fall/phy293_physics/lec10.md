# Lecture 10, Sep 29, 2022

## Waves

* A wave is a function of position and time: $y(x, t)$
* Ultimately a wave is nothing but a large number of coupled oscillators next to each other
* A travelling wave has $y(x, t) = f(x \pm vt)$
	* Since $t$ only increases, but the wave can travel left or right, the sign of $vt$ decides the direction of propagation
		* As $x$ increases, we take away $vt$ so the shape stays the same
	* A wave travelling to the right has the sign of $vt$ negative
* Types of waves:
	* Mechanical waves require a medium of propagation
		* Transverse waves are waves where the displacement is perpendicular to the direction of travel, e.g. wave in a string
		* Longitudinal waves are waves where the displacement is parallel to the direction of travel, e.g. sound waves
			* In general these travel a little faster
	* Electromagnetic waves are self sustaining oscillations of the electromagnetic field; these require no medium so can travel through vacuum
		* These can also behave like particles!
	* Matter waves are the wavelike behaviour of small particles such as electrons

## Sinusoidal Waves

* A sinusoidal wave is modelled by $y(t) = A\sin(kx \pm \omega t + \phi _0)$
	* $\omega$ is the angular frequency of the wave (if the wave is created by an oscillator, then that's the frequency of the oscillator)
	* $k$ is the *angular wave number* $k = \frac{2\pi}{\lambda}$ where $\lambda$ is the wavelength
		* $k$ is also known as the *wave vector* (for a multidimensional wave it becomes a number)
		* Speed can be calculated: $v = \frac{\lambda}{T} = \lambda f = \frac{2\pi}{k}\frac{\omega}{2\pi} = \frac{\omega}{k}$
* $y(x, t) = A\sin\left(k\left(x \pm \frac{\omega}{k}t\right) + \omega _0\right) = A\sin\left(\frac{2\pi}{\lambda}(x \pm vt) + \phi _0\right)$
* We can either fix $x$ and look at the history graph (where it looks like a normal oscillator, with a phase dependent on $x$), or fix $t$ and look at a snapshot, which is a sinusoidal function in space
* Each particle has a changing velocity, therefore for waves to propagate a force is needed

## The Wave Equation

* $y(x, t) = A\sin(kx \pm \omega t + \phi _0) \implies \diffn{2}{y}{t} = -A\omega^2\sin(kx \pm \omega t + \phi _0) = -\omega^2 y(x, t) \implies \diffn{2}{y}{x} = -Ak^2\sin(kx \pm \omega t + \phi _0) = -k^2y(x, t)$
* Therefore $\frac{1}{k^2}\pdiffn{2}{y}{x} = \frac{1}{\omega^2}\pdiffn{2}{y}{t} \implies \pdiffn{2}{y}{x} = \frac{k^2}{\omega^2}\pdiffn{2}{y}{t}$

\noteImportant{The Wave Equation: $\pdiffn{2}{y}{x} = \frac{1}{v^2}\pdiffn{2}{y}{t}$}

## Wave Speed of a Stretched String

* Under a small angle approximation $v = \sqrt{\frac{\tau}{\mu}}$ where $\mu = \frac{m}{L}$ is the linear density and $\tau$ is the tension
* In general speed of a mechanical wave will always have a force element and a density element
	* For a solid the force element would be the Young's modulus

## Mechanical Impedance

* A property of the medium that relates partial velocity to driving force: $Z = \frac{\tau _y(x, t)}{v_y(x, t)}$
	* Defines how much the medium resists motion when subjected to a force
* Define the mechanical impedance for:
	* Wave on a string: $Z = \sqrt{\mu\tau}$
	* Fluids: $Z_a = \sqrt{\rho B}$
	* Solid rod: $Z_a = \sqrt{\rho Y}$
* For fluids and solid rods this is also known as the acoustic impedance

## Reflection and Transmission

* Consider when a wave travels from one medium to another with different $Z$
	* Two conditions: displacement is continuous: $f_1(x - c_1t) + g_1(x + c_1t) = f_2(x - c_2t)$; slope is continuous: $\diff{}{x}(f_1(x - c_1t) + g_1(x + c_1t)) = \diff{}{x}f_2(x - c_2t)$
	* This gives us $A_i + A_r = A_t$ and $A_iZ_1 - A_rZ_1 = A_tZ_2$

\noteDefn{The reflection coefficient $R \equiv \frac{A_r}{A_i}$, the amplitude ratio of the reflected wave to the incident wave; the transmission coefficient $T \equiv \frac{A_t}{A_i}$, the amplitude ratio of the trasmitted wave to the incident wave}

* Note amplitude ratios may be negative (e.g. $R < 1$ means the reflected wave is perfectly out of phase)

\noteImportant{The reflection/transmission coefficients may be calculated as: $$R = \frac{Z_1 - Z_2}{Z_1 + Z_2}, T = \frac{2Z_1}{Z_1 + Z_2} \implies 1 + R = T$$}

* This means that $-1 \leq R \leq 1$ and $0 \leq T \leq 2$
* Consider the following cases:
	* Fixed boundary (wall): $Z_2 \to \infty \implies R = -1, T = 0$
		* Reflected wave is perfectly out of phase, nothing transmitted
	* Free boundary (ring on rod): $Z_2 = 0 \implies R = 1, T = 2$

