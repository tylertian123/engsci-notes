# Lecture 8, Sep 23, 2022

## Applications of Triple Integrals

* Finding mass: If $\rho = \rho(x, y, z)$ is the mass per unit volume over a region $Q$, then $m = \iiint _Q \rho(x, y, z)\,\dV$
* The centres of mass:
	* $M_{yz} = \iiint _Q x\rho(x, y, z)\,\dV = m\bar x \implies \bar x = \frac{M_{yz}}{m}$
	* $M_{xz} = \iiint _Q y\rho(x, y, z)\,\dV = m\bar y \implies \bar y = \frac{M_{xz}}{m}$
	* $M_{xy} = \iiint _Q z\rho(x, y, z)\,\dV = m\bar z \implies \bar z = \frac{M_{xy}}{m}$
* The centroids:
	* $x_c = \frac{1}{V}\iiint _Q x\,\dV$
	* $y_c = \frac{1}{V}\iiint _Q y\,\dV$
	* $z_c = \frac{1}{V}\iiint _Q z\,\dV$
* Moment of inertia:
	* $I = \iiint _Q \rho(x, y, z)(r(x, y, z))^2\,\dV$ where $r$ is the distance to the axis of rotation

