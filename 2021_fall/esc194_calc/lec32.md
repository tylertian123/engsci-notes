# Lecture 32, Dec 1, 2021

## Complex Arithmetic

* Complex addition: $z = a + ib, w = c + id \implies z + w = (a + c) + i(b + d), z - w = (a - c) + i(b - d)$
	* Properties are the same as regular addition:
		1. Commutative $z_1 + z_2 = z_2 + z_1$
		2. Associative $(z_1 + z_2) + z_3 = z_1 + (z_2 + z_3)$
		3. Triangle inequality $\abs{z_1 \pm z_2} \leq \abs{z_1} \pm \abs{z_2}$
	* The conjugate of the sum is the sum of the conjugate: $\overline{z + w} = \bar{z} + \bar{w}$
* Complex multiplication: $(a + ib)(c + id) = (ac - bd) + i(ad + bc)$
	* Product of a complex number and its conjugate is the square of the modulus: $z\bar{z} = \abs{z}^2$
	* Properties are like regular multiplication:
		1. Commutative
		2. Associative
	* $\overline{z_1z_2} = \bar{z_1}\bar{z_2}$
	* In polar form: Let $z_1 = r_1(\cos\theta + i\sin\theta)$ and $z_2 = r_2(\cos\phi + i\sin\phi)$
		* $\alignedeqntwo[t]{z_1z_2}{r_1r_2(\cos\theta + i\sin\theta)(\cos\phi + i\sin\phi)}{r_1r_2((\cos\theta\cos\phi - \sin\theta\sin\phi) + i(\sin\theta\cos\phi + \cos\theta\sin\phi))}{r_1r_2(\cos(\theta + \phi) + i\sin(\theta + \phi))}$
		* Therefore $\abs{z_1z_2} = \abs{z_1}\abs{z_2}$, and $\arg(z_1z_2) = \arg(z_1) + \arg(z_2)$
		* Graphically, a product multiplies the lengths and adds the angles
		* Generally, if we have multiple products, the modulus of the product is the product of the moduli and the argument of the product is the sum of the arguments
			* Example: Multiplication by $z = i$ is a counterclockwise rotation by $90\degree$ but no change in the modulus
* Division/reciprocals: $z^{-1} = \frac{1}{z} = \frac{1}{a + ib} = \frac{a - ib}{(a + ib)(a - ib)} = \frac{a - ib}{a^2 + b^2} = \frac{\bar{z}}{\abs{z}^2}$
	* Since $\abs{\bar{z}} = \abs{z}$ and $\arg(\bar{z}) = -\arg(z)$, we have $\abs*{\frac{1}{z}} = \frac{\abs{\bar{z}}}{\abs{z}^2} = \frac{1}{\abs{z}}$ and $\arg\left(\frac{1}{z}\right) = \arg\left(\bar{z}\frac{1}{\abs{z}^2}\right) = -\arg(z)$
	* Define the complex quotient $\frac{z}{w} = zw^{-1} = \frac{z\bar{w}}{\abs{w}^2} = \frac{(a + ib)(c - id)}{c^2 + d^2} = \frac{(ac + bd) + i(ad - cb)}{c^2 + d^2}$
	* $\abs*{\frac{z}{w}} = \frac{\abs{z}}{\abs{w}}$
	* $\arg\left(\frac{z}{w}\right) = \arg(z) - \arg(w)$

## De Moivre's Theorem

* Let $z = \cos\theta + i\sin\theta$, then $\abs{z} = 1$ and $\arg{z} = \theta$
* Then $\abs*{z^n} = \abs{z}^n = 1$ and $\arg(z^n) = n\arg(z) = n\theta$
* Therefore $(\cos\theta + i\sin\theta)^n = \cos(n\theta) + i\sin(n\theta)$

## Complex Exponentials

* To define $e^{ix}$ we can no longer take the log approach because $ix \notin$ the range of $\ln$
* Let $f(x) = e^{ix}$ and $g(x) = \cos x + i\sin x$, then $f'(x) = ie^{ix} = if(x)$ and $g'(x) = -\sin x + i\cos x = ig(x)$, and also $f(0) = e^0 = i$ and $g(0) = \cos 0 + i\sin 0 = 1$
	* Euler therefore concluded that $f(x) = g(x)$ so $e^{ix} = \cos x + i\sin x$
	* Note this is not a sufficient proof since we haven't proven the complex power rule, so this is more of a definition than a proof
* Therefore $e^z = e^{a + ib} = e^a(\cos b + i \sin b)$


## Second Order Linear Differential Equations

* A general second order linear ODE has the form $p(x)y'' + q(x)y' + r(x)y = g(x)$
* To begin we look at second linear DEs with constant coefficients: $y'' + ay' + by = g(x)$, and start where $g(x) = 0$, known as a *homogeneous* second order linear DE with constant coefficients
* Theorem: If $y_1(x)$ and $y_2(x)$ are both solutions of a homogeneous second order linear differential equation, then any linear combination $c_1y_1 + c_2y_2$ is also a solution
	* Proof: $(c_1y_1 + c_2y_2)'' + a(c_1y_1 + c_2y_2)' + b(c_1y_1 + c_2y_2) = c_1(y_1'' + ay_1' + by_1) + c_2(y_2'' + ay_2' + by_2) = 0 + 0 = 0$
* Theorem: If $y_1(x)$ and $y_2(x)$ are linearly independent solutions to a homogeneous second order linear differential equation, then $c_1y_1 + c_2y_2$ is the general solution
	* Linearly independent means that $y_2 \neq cy_1$
	* Proof is more involved and is covered in a later course
* We can try the solution $y = e^{rx} \implies (e^{rx})'' + a(e^{rx})' + be^{rx} = 0 \implies r^2e^{rx} + are^{rx} + be^{rx} = 0 \implies (r^2 + ar + b)e^{rx} = 0$
	* Thus, $y = e^{rx}$ is a solution if $r$ is a root of $r^2 + ar + b$
	* $r^2 + ar + b = 0$ is known as the *characteristic* or *auxiliary equation* of this differential equation

