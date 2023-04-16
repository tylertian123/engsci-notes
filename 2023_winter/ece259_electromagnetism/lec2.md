# Lecture 2, Jan 11, 2023

## The Electric Field

* Expressing everything in terms of forces is cumbersome; using "fields" can simplify this
* While forces can be directly experienced, fields remove the immediate effects
	* An electric force requires two object, a source charge (the thing causing the force), and a test charge (the thing experiencing the force)
	* A field however only requires the source charge and fully characterizes it
* We can define the *electric field intensity* as $\vec E_{12} = \lim _{Q_2 \to 0} \frac{\vec F_{12}}{Q_{12}} = \lim _{Q_2 \to 0} \frac{1}{Q_{12}}k\frac{Q_1Q_2}{R^2}\hat a_{12} = k\frac{Q_1}{R^2}\hat a_{12}$
	* The electric field has units of $[\si{N/C}] = [\si{V/m}]$
	* Now we have $\vec F_{12} = Q_2\vec E_{12}$

\noteDefn{The \textit{electric field} caused by a charge $Q_1$ is defined as $$\vec E_{12} = k\frac{Q_1}{R^2}\hat a_{12} = \frac{Q_1}{4\pi\varepsilon _0R^2}\hat a_{12}$$
The electric field has 4 key properties:
\begin{enumerate}
	\item $\vec E$ points away from positive charges
	\item $\vec E$ points towards negative charges
	\item $\vec E$ points along the line connecting the source point to the measurement point
	\item $\vec E$ is linear, so we can superimpose electric fields from multiple charges
\end{enumerate}

\tcblower

The electric field at point $\vec R$ due to a point charge at $\vec R'$ is $$\vec E = \frac{Q_1}{4\pi\varepsilon _0\norm{\vec R - \vec R'}^2}\hat a_{12} = \frac{Q_1}{4\pi\varepsilon _0\norm{\vec R - \vec R'}^3}(\vec R - \vec R')$$
}

* The first 2 properties are by convention -- we always think of the electric field coming from a positive charge and going into a negative charge somewhere

## Position Vectors

* In Cartesian coordinates, a point $P(x, y, z)$ is specified by a position vector $\vec R = x\hat a_x + y\hat a_y + z\hat a_z$ where $\hat a_x, \hat a_y, \hat a_z$ are the 3 unit vectors
* In cylindrical coordinates, a point is specified by $P(r, \phi, z)$; unit vectors are $\hat a_r, \hat a_\phi, \hat a_z$
	* $\hat a_z$ is constant, but $\hat a_r, \hat a_\phi$ change based on angle!
	* A position vector is described by $\vec R = r\hat a_r + z\hat a_z$, because $\phi$ is encoded in $\hat a_r$
		* In Cartesian coordinates $\hat a_r = \cos(\phi)\hat a_x + \sin(\phi)\hat a_y$
* In spherical coordinates, a point is specified by $P(R, \theta, \phi)$ (**note $\phi$ is the angle in the $xy$ plane!**); unit vectors are $\hat a_R, \hat a_\phi, \hat a_\theta$
	* All unit vectors change based on where you are
	* A position vector is described by $\vec R = R\hat a_r$
	* $\hat a_r = \sin\theta\cos\phi\hat a_x + \sin\theta\sin\phi\hat a_y + \cos\theta\hat a_z$

