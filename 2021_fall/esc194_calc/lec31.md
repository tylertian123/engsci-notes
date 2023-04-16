# Lecture 31, Nov 29, 2021

## Linear Equations Continued

* Example: Logistic model $\diff{P}{t} = kP\left(1 - \frac{P}{M}\right)$ with $M(t)$ and $k(t)$ as a function of time
	* First we have to make the equation linear since there is a $P^2$ term; substitute $z = \frac{1}{p} \implies P = \frac{1}{z} \implies \diff{P}{t} = -\frac{1}{z^2}\diff{z}{t}$
	* $-\frac{1}{z^2}\diff{z}{t} = \frac{k}{z}\left(1 - \frac{1}{ZM}\right) \implies \diff{z}{t} = -kz\left(1 - \frac{1}{ZM}\right) \implies \diff{z}{t} + kz = \frac{k}{M}$ and it is now linear
	* If $k$ and $M$ are constant, then integrating factor: $H(t) = kt \implies$ integrating factor is $e^{kt}$
	* $z = e^{-kt}\left[\int e^{kt}\frac{k}{M}\,\dt + C\right] = e^{-kt}\left[\frac{e^{kt}}{M} + C\right] = \frac{1}{M} + Ce^{-kt}$
	* Therefore $P = \frac{1}{z} = \frac{M}{1 + MCe^{-kt}}$
* Example: Solving an RC (resistor-capacitor) circuit
	* Voltage drop across a capacitor is $\frac{Q}{C}$ where $Q$ is the charge in coulombs and $C$ is capacitance in Farads
	* $E(t) = \frac{Q}{C} = IR$, but since $I = \diff{Q}{t}$, $E(t) = \frac{Q}{C} + R\diff{Q}{t}$
	* In standard form, $Q' + \frac{1}{RC}Q = \frac{E(t)}{R}$
	* $H(t) = \int \frac{1}{RC}\,\dt = \frac{t}{RC}$ so the integrating factor is $e^{\frac{t}{RC}}$
	* $\diff{}{t}\left(e^{\frac{t}{RC}}Q\right) = e^{\frac{t}{RC}}\frac{E(t)}{R}$
	* $Q = e^{-\frac{t}{RC}}\left(\int e^{\frac{t}{RC}}\frac{E(t)}{R}\,\dt + A\right)$
* A nonlinear equation in the form $y' + p(x)y = q(x)y^r$ can be made linear by substituting $u = y^{1 - r}$
	* $u' = (1 - r)y^{-r}$
	* $y' + p(x)y = q(x)y^r \implies (1 - r)y^{-r}y' + (1 - r)y^{-r}y = (1 - r)y^{-r}q(x)y^r \implies u' + (1 - r)p(x)u = (1 - r)q(x)$
	* Now we can apply the integrating factor
	* Equations in this form are called *Bernoulli Equations*

## Complex Numbers

* Our number system is missing solutions to equations such as $x^2 = -1$, and like we extended the reals with CORA, we need more axioms to extend our number system
* Calculus of complex number systems is called complex analysis
* Define the *imaginary unit* $i^2 = -1$ or $i = \sqrt{-1}$, and a *complex number* $z = a + ib$ where $a, b \in \mathbb{R}$ and $\Re(z) = a, \Im(z) = b$
* We can represent the complex number $a + ib$ as the point $(a, b)$ on the complex plane (instead of a number line), where the horizontal axis is the real axis and the vertical axis is the imaginary axis
	* This is known as an *Argand Diagram*, and the plane is known as the complex plane, $\mathbb{C} = \{a + ib: a, b \in \mathbb{R}\}$
* Complex numbers can be represented in a polar form (like polar vectors)
	* The distance from the origin of a complex number is known as the *modulus*: $\abs{z} = \abs{a + ib} = \sqrt{a^2 + b^2}$
		* The modulus of a complex number is like the absolute value of a real number, and it is always real and nonnegative
	* The angle that the complex number makes with the real axis is the known as the *argument*: $\arg(z) = \theta$
		* Arguments are not unique; $\arg(z) = \theta \implies \arg(z) = \theta + 2k\pi$ where $k \in \mathbb{Z}$
	* $\abs{z}\cos(\arg(z)) = a$, $\abs{z}\sin(\arg(z)) = b$, and $\tan(\arg(z)) = \frac{b}{a}$ for $a \neq 0$
	* Let $r = \abs{z}$ and $\theta = \arg(z)$, then the polar representation of $z$ is $z = r\cos\theta + ir\sin\theta$
* Definition: The complex conjugate of $z = a + ib$ is $\bar{z} = a - ib$
	* In an Argand diagram the conjugate is a reflection across the real axis

