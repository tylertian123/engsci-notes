# Lecture 24, Mar 14, 2022

## Curvature in 2D

* Definition: Curvature is defined as $\kappa \equiv \abs*{\diff{\phi}{s}}$, where in 2D $\phi$ is the angle that the tangent line makes with the $x$ axis and $s$ is arc length
	* Let $y = y(x) \implies \diff{y}{x} = y' = \tan\phi \implies \phi = \tan^{-1}y' \implies \diff{\phi}{x} = \frac{y''}{1 + (y')^2}$
	* Note $\diff{s}{x} = \sqrt{1 + (y'(x))^2}$
	* $\diff{\phi}{x} = \diff{\phi}{s}\diff{s}{x} = \diff{\phi}{s}\sqrt{1 + (y')^2}$
	* $\diff{\phi}{s}\sqrt{1 + (y')^2} = \frac{y''}{1 + (y')^2} \implies \frac{y''}{(1 + (y')^2)^\frac{3}{2}}$
	* Therefore $\kappa = \frac{\abs*{y''}}{(1 + (y')^2)^\frac{3}{2}}$ (all derivatives are with respect to $x$)
	* For a parametric curve $\diff{y}{x} = \frac{y'}{x'} \implies \diffn{2}{y}{x} = \frac{x'y'' - y'x''}{(x')^3} \implies \alignedeqntwo[t]{\kappa}{\frac{\abs*{\frac{x'y'' - y'x''}{(x')^3}}}{\left(1 + \left(\frac{y'}{x'}\right)^2\right)^\frac{3}{2}}}{\frac{\abs{x'y'' - y'x''}}{\left((x')^2 + (y')^2\right)^\frac{3}{2}}}$
* Example: circle $\vec r = r\cos(t)\ihat + r\sin(t)\jhat$
	* $x(t) = r\cos t \implies x'(t) = -r\sin t \implies r'' = -r\cos t$
	* $y(t) = r\sin t \implies y' = r\cos t \implies y'' = -r\sin t$
	* $\alignedeqntwo[t]{\kappa}{\frac{\abs{x'y'' - y'x''}}{\left((x')^2 + (y')^2\right)^\frac{3}{2}}}{\frac{\abs{r^2\sin^2 t + r^2\cos^2 t}}{(r^2\sin^2 t + r^2\cos^2 t)^\frac{3}{2}}}{\frac{r^2}{r^3}}{\frac{1}{r}}$
	* We can also get this intuitively by noting that $\frac{\Delta \phi}{\Delta s} = \frac{2\pi}{2\pi r} = \frac{1}{r}$
* This leads to the definition for the *radius of curvature*: $\rho = \frac{1}{\kappa}$
	* The radius of curvature is the radius of the tangent circle to the curve at any given point
* Note: Consider the unit tangent vector $\vec T = \cos(\phi)\ihat + \sin(\phi)\jhat$
	* $\diff{\vec T}{s} = -\sin(\phi)\diff{\phi}{s}\ihat + \cos(\phi)\diff{\phi}{s}\jhat$
	* $\norm*{\diff{\vec T}{s}} = \abs*{\diff{\phi}{s}} = \kappa$
	* This gives an alternative interpretation of curvature as the rate of change of the unit tangent vector with respect to arc length

## Curvature in 3D

* Definition: $\kappa \equiv \norm*{\diff{\vec T}{s}}$ in 3D, where $\vec T$ is the unit tangent vector to the curve and $s$ is the arc length
* Consider $C: \vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat$
	* $\kappa = \norm*{\diff{\vec T}{t}\diff{t}{s}} = \frac{\norm*{\diff{\vec T}{t}}}{\abs*{\diff{s}{t}}} = \frac{\norm*{\vec T'}}{\norm*{\vec r'}}$
* Example: Circular helix $\vec r(t) = 3\sin(t)\ihat + 3\cos(t)\jhat + 4t\khat$ for $t \in [0, 2\pi]$
	* $\vec r'(t) = 3\cos(t)\ihat - 3\sin(t)\jhat + 4\khat$
	* $\norm*{\vec r'(t)} = \sqrt{9\cos^2 t + 9\sin^2 t + 16} = 5$
	* $\vec T = \frac{\diff{\vec r}{t}}{\norm*{\diff{\vec r}{t}}} = \frac{3}{5}\cos(t)\ihat - \frac{3}{5}\sin(t)\jhat + \frac{4}{5}\khat$
	* $\diff{\vec T}{t} = -\frac{3}{5}\sin(t)\ihat - \frac{3}{5}\cos(t)\jhat + 0\khat \implies \norm*{\diff{\vec T}{t}} = \frac{3}{5}$
	* $\kappa = \frac{\frac{3}{5}}{5} = \frac{3}{25}$ or $\rho = \frac{25}{3}$
* Alternatively: $\kappa = \frac{\norm*{\vec r'(t) \times \vec r''(t)}}{\norm*{\vec r'(t)}^3}$

## The Normal and Binormal Vectors

* Definition: The *principal unit normal* $\vec N(t) \equiv \frac{\vec T'(t)}{\norm*{\vec T'(t)}}$, i.e. a unit vector in the direction of $\vec T'$
	* $\vec T$ is tangent to the curve and $\vec N$ is perpendicular to this tangent
	* $\vec N$ points in the direction that the curve is changing
* Definition: The *osculating plane* is the plane defined by $\vec N$ and $\vec T$
	* The osculating plane is the plane that comes closest to containing the curve at a point
* Definition: The *binormal vector* is $\vec B = \vec T \times \vec N$
* Example: for a straight line $\vec T'(t) = 0$ since the tangent vector doesn't change; this means $\vec N$ does not exist and we can't define an osculating plane
	* This can be interpreted as a straight line is contained in an infinite number of planes
* Example: Circular helix $\vec r(t) = 3\sin(t)\ihat + 3\cos(t)\jhat + 4t\khat$ for $t \in [0, 2\pi]$
	* $\vec T'(t) = -\frac{3}{5}\sin(t)\ihat - \frac{3}{5}\cos(t)\jhat \implies \norm*{\vec T'(t)} = \frac{3}{5}$
	* $\vec N(t) = -\sin(t)\ihat - \cos(t)\jhat$
	* $\vec B = \left(\frac{4}{5}\cos t, -\frac{4}{5}\sin t, -\frac{3}{5}\right)$
	* A point on the plane is $(3\sin t, 3\cos t, 4t)$
	* The equation of the plane is $\left(\frac{4}{5}\cos t\right)(x - 3\sin t) - \left(\frac{4}{5}\sin t\right)(y - 3\cos t) - \frac{3}{5}(z - 4t) = 0 \implies 4\cos(t)x - 4\sin(t)y - 4z = -12t$
* In general the magnitude of the binormal vector is always 1, because $\norm*{\vec B} = \norm*{\vec T}\norm*{\vec N}\sin \theta = 1$
	* $\vec T, \vec N, \vec B$ form a set of mutually perpendicular unit vectors
	* We can use this as a new coordinate system, useful in some physical situations e.g. satellites

