# Lecture 21, Oct 27, 2021

* Once we calculate the bending moments and shear forces, we want to ask whether the structure is safe and how much it will deform

## Navier's Equation

* Recall that the longitudinal strain in a bending member is $\varepsilon(y) = \phi y$ where $y$ is the distance above the centroidal axis
* The stress is then $\sigma(y) = E\phi y$, and if we consider a very small area of the cross section $\dA$, then $\dd F(y) = \sigma(y)\,\dA = E\phi y\,\dA$; this force produces a moment about the neutral axis $\dd M(y) = y\dd F(y) = E\phi y^2\,\dA$
* If we integrate this we get the axial force $N = \int _A E\phi y\,\dA = 0$, equal to zero because when subjected to pure bending the axial force will always be zero; this requires that the *first moment of area* $\int _A y\,\dA = 0$ (this will be used in the next lecture)
	* Essentially half of the cross section will be in tension and the other half will be in compression, so when the integral is taken over the entire thing they cancel out
* Integrating $\dd M$ gets us $M = \int _A E\phi y^2\,\dA = E\phi\int y^2\,\dA = EI\phi$
* Combining this and $\sigma = E\phi y$, we get $\sigma(y) = \frac{My}{I}$, which is called *Navier's Equation*, which relates flexural stress to bending moment

## Steel Wide Flange Members

* *Wide-flange sections*, also known as I-beams or H-piles, are commonly used in members that bend since they can carry bending moments very efficiently
* According to Navier's equation, the bending stresses are the greatest at the top and bottom, so it is often convenient to consider those points only
* $\twopiece{\sigma _{max,top} = \frac{My_{top}}{I} = \frac{M}{S_{top}}}{\sigma _{max,bot} = \frac{My_{bot}}{I} = \frac{M}{S_{bot}}}$, where $S = \frac{I}{y}$ is the *section modulus*
* The middle is the *web* and the top and bottom are the *flanges*

