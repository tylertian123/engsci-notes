# Lecture 3, Jan 13, 2023

## Continuous Charge Distributions

* What is the electric field due to a charged plate?
	* Consider a point at $P(0, 0, z)$, and a plate with total charge $Q$ and area $A$ on the $xy$ plane
	* Break the plate into pieces, by superposition $\vec E _{tot} = \sum _{i = 1}^N \vec E_i = \sum _{i = 1}^N \frac{Q_i(\vec R - \vec R_i')}{4\pi \varepsilon _0\norm{\vec R - \vec R_i'}^2}$
	* As $N \to \infty$, the summation becomes an integral and $Q_i$ become $\dd Q'$, which are point charges
		* Note primes denote source charge
	* Define the *charge density* $\rho _s$, in this case with area $\si{C/m^2}$ and $\rho _s = \frac{Q}{A}$
	* $\vec E_{tot} = \iint _S \frac{(\vec R - \vec R')}{4\pi\varepsilon _0\norm{\vec R - \vec R'}^3}\,\dd Q'$
		* $\vec R'$ is a function of $x$ and $y$
* Instead of considering discrete (point charges), which are confined to an infinitesimally small point, in most practical problems charge is distributed in one or more dimensions

\noteDefn{
There are 3 types of \textit{continuous charge distributions}:
\begin{itemize}
	\item Linear: $\alignedlines[t]{}{Q = \int \rho _l\,\dd l}{\rho _l = \frac{Q}{L}}$
	\item Surface: $\alignedlines[t]{}{Q = \iint _ S \rho _s\,\dS}{\rho _s = \frac{Q}{A}}$
	\item Volume: $\alignedlines[t]{}{Q = \iiint _V \rho _v\,\dV}{\rho _v = \frac{Q}{V}}$
\end{itemize}
In each case $\rho$ denotes the charge density, and the subscript denotes the dimensionality
}

## Differential Elements in Orthogonal Coordinate Systems

* In Cartesian coordinates:
	* Differential lengths are $\dx, \dy, \dz$, so a differential length vector is $\dd\vec l = \dx\,\hat a_x + \dy\,\hat a_y + \dx\,\hat a_z$
	* Differential surface vectors are $\threepiece{\dd\vec s_x = \dy\,\dz\,\hat a_x}{\dd \vec s_y = \dx\,\dz\,\hat a_y}{\dd\vec s_z = \dx\,\dy\,\hat a_z}$
	* Differential volume is $\dV = \dx\,\dy\,\dz$
* In cylindrical coordinates:
	* Differential lengths are $\dr, r\,\dphi, \dz$
	* Differential length vector is $\dd\vec l = \dr\,\hat a_r + r\,\dphi\,\hat a_\phi + \dz\,\hat a_z$
	* Differential surface vectors are $\threepiece{\dd\vec s_r = r\,\dphi\,\dz\,\hat a_r}{\dd\vec s_\phi = \dr\,\dz\,\hat a_\phi}{\dd\vec s_z = r\,\dr\,\dphi\,\hat a_z}$
		* $\dd\vec s_r$ represents the cylindrical wall
		* $\dd\vec s_\phi$ represents a vertical plane coming out of the $z$ axis
		* $\dd\vec s_z$ represents a horizontal plane
	* Differential volume is $\dV = r\,\dr\,\dphi\,\dz$
* In spherical coordinates:
	* Differential lengths are $\dd R, R\,\dtheta, R\sin\theta\,\dphi$
	* Differential length vector is $\dd\vec l = \dd R\,\hat a_R + R\sin\theta\,\dphi\,\hat a_\phi + R\,\dtheta\,\hat a_\theta$
	* Differential surface vectors are $\threepiece{\dd\vec s_R = R^2\sin\theta\,\dphi\,\dtheta\,\hat a_R}{\dd\vec s_\phi = R\,\dtheta\,\dd R\,\hat a_\phi}{\dd\vec s_\theta = R\sin\theta\,\dphi\,\dd R\,\hat a_\theta}$
	* Differential volume is $\dV = R^2\sin\theta\,\dd R\,\dphi\,\dtheta$

