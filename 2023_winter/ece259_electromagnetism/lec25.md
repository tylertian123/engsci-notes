# Lecture 25, Mar 17, 2023

## Ampere's Law

\noteDefn{Ampere's Law in differential form is given by: $$\del \times \vec H = \del \times \left(\frac{1}{\mu _r\mu _0}\vec B\right) = \vec J$$ Where the magnetic field intensity $\vec H$ is related to the magnetic flux density $\vec B$ as $$\vec B = \mu _r\mu _0\vec H$$ \tcblower In integral form, this is $$\oint _C \vec H \cdot \dd\vec l = \iint _S \vec J \cdot \dd\vec s = I_{enc}$$}

* Ampere's law is a fundamental law, the analogue of Gauss's law
* At every point in space, the magnetic field intensity has a nonzero curl only if a current density $\vec J$ is present at that point
* The integral form tells us that if we take any contour integral of $\hat H$, it is equal to the current crossing through the surface enclosed by that curve
	* Note that the direction of $\dd\vec s$ in relation to $C$ is defined based on the right hand rule (coming from Stokes' theorem), which is what gives us the right hand rule for $\vec B$
* To find $\vec H$ from $\vec J$ is like finding $\vec E$ using Gauss's law; instead of using a Gaussian surface, we use an Amperian loop
	* Choose the loop so that:
		* $\vec H$ is always tangential or normal to the loop
		* $\vec H$ has a constant value where $\vec H$ is a tangential
	* This means $\int \vec H \cdot \dd\vec l = \int H\,\dd l = HL$ where $L$ is the length of the loop where $\hat H$ is tangential to the loop
* For an infinitely long wire in the $\vec a_z$ direction, we choose the Amperian loop to be a circle centered on the wire, which gets us $\oint _C \vec H \cdot \dd\vec l = 2\pi rH_\phi = I_{enc} \implies \vec H = \frac{I_0}{2\pi r}\hat a_\phi$

