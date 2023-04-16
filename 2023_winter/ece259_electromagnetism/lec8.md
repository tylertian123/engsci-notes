# Lecture 8, Jan 25, 2023

## Electric Scalar Potential

* By bringing repelling charges together or attracting charges apart, we do work that is stored; this is the idea of *electric potential*

\noteDefn{The electric scalar potential, or voltage $\Delta V$ between two points is defined as the work done by an external agent per unit charge, or $$\Delta V = V_2 - V_1 = V_{21} = -\int _{P_1}^{P_2} \vec E \cdot \dd\vec l$$}

* In the case where $\vec E$ is constant, we just have $\Delta V$ being the field strength times distance between the two points
* Note the negative sign: if the electric field does work between the two points, the potential difference is negative; the electric field always points from high potential to low potential
* Consider a point charge $Q$ at the origin and two points $P_1$ and $P_2$
	* $\Delta V = -\int _{P_1}^{P_2} \vec E \cdot \dd\vec l = -\int _{P_1}^{P_2} \frac{Q}{4\pi\varepsilon _0R^2}\hat a_R \cdot \dd\vec l$
	* We can choose our path so that we move radially first, and then move along a sphere; this allows us to get rid of the dot product, because the radial movement is parallel to $\hat a_R$ and the spherical movement is perpendicular
	* We get $\Delta V = \frac{Q}{4\pi\varepsilon _0}\left(\frac{1}{R_2} - \frac{1}{R_1}\right)$ as the potential difference between two points due to a single point charge
	* If we let $R_1 \to \infty$ be our reference, then we just get $\Delta V = V_2 = \frac{Q}{4\pi\varepsilon _0R_2}$

\noteDefn{The \textit{absolute electric potential} due to a point charge is $$V(R) = \frac{Q}{4\pi\varepsilon _0R}$$ This assumes a reference of a charge at $R = \infty$ having zero potential}

* Note the expression for the potential is the same as Coulomb's law but the $R$ term is not squared
* A surface which has the same value of $V$ over the entire surface is called an *equipotential surface*
	* This could be a physical surface or an imaginary surface
	* e.g. a sphere surrounding a point charge is an equipotential surface since potential depends only on $R$; for a dipole these are ellipsoids
	* All perfect conductors are equipotential surfaces
	* The electric field is always perpendicular to equipotential surfaces

