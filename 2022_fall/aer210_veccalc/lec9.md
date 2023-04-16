# Lecture 9, Sep 23, 2022

## Cylindrical Coordinates

* Uses triplets of $(r, \theta, z)$
	* $z$ is the distance from the $r\theta$ plane, same as Cartesian $z$
	* $r, \theta$ work like polar coordinates
* Conversion: $\threepiece{x = r\cos\theta}{y = r\sin\theta}{z = z}$

\noteImportant{If $f(x, y, z)$ is continuous in $$Q = \Set{(x, y, z) | (x, y) \in R, u_1(x, y) \leq z \leq u_2(x, y)}$$ where $$R = \Set{(r, \theta) | \alpha \leq \theta \leq \beta, h_1(\theta) \leq r \leq h_2(\theta)}$$ then $$\alignedeqntwo[t]{\iiint _Q f(x, y, z)\,\dV}{\iint _R \int _{u_1(x, y)}^{u_2(x, y)} f(x, y, z)\,\dz\,\dA}{\int _\alpha^\beta \int _{h_1(\theta)}^{h_2(\theta)} \int _{u_1(r\cos\theta, r\sin\theta)}^{u_2(r\cos\theta, r\sin\theta)} f(r\cos\theta, r\sin\theta, z)\,r\,\dz\,\dr\,\dtheta}$$}

* Note in cylindrical coordinates, $\dV = r\,\dz\,\dr\,\dtheta$

## Spherical Coordinates

* Uses triplets of $(\rho, \theta, \phi)$
	* $\rho$ is the distance from the origin, always non-negative
	* $\phi$ is the angle from the $z$ axis
		* $\phi$ is between $0$ (straight up) and $\pi$ (straight down)
	* $\theta$ is the angle from the $x$ axis, in the $xy$ plane
* Conversion: $\threepiece{x = \rho\sin\phi\cos\theta}{y = \rho\sin\phi\sin\theta}{z = \rho\cos\phi}$
	* $\rho\sin\theta$ is $r$ in the $xy$ plane
* Constant $\rho$: sphere
* Constant $\theta$: vertical plane
* Constant $\phi$: cone
* Therefore in spherical coordinates $\dV = \rho^2\sin\phi\,\drho\,\dphi\,\dtheta$

\noteImportant{Triple integration in spherical coordinates: $$\iiint _Q f(x, y, z)\,\dx\,\dy\,\dz = \iiint _{Q'} f(\rho\sin\phi\cos\theta, \rho\sin\phi\sin\theta, \rho\cos\phi)\,\rho^2\sin\phi\,\drho\,\dphi\,\dtheta$$}

