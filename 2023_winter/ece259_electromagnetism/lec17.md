# Lecture 17, Feb 17, 2023

## Electrostatic Energy

* The work done to bring a charge from infinity in is $-\int _{-\infty}^{P_2} \vec F_{12} \cdot \dd\vec l = -Q_1\int _{-\infty}^{P_2}\vec E \cdot \dd\vec l = Q_1V(P_2)$
	* If we being in another charge we have to account for the repulsion of the additional charges already there

\noteDefn{For a collection of point charges, the total stored energy is $$W_e = \frac{1}{2}\sum _{i = 1}^N Q_iV_i$$ For a continuous charge distribution this is $$W_e = \frac{1}{2} \iiint _V \rho _v V\dV$$ where $V$ is the potential of the total system after all the charges have been brought together \tcblower In terms of the fields, from $\del \cdot \vec D = \rho _v$ and $\vec E = -\del V$, we have $$W_e = \frac{1}{2}\iiint _V \vec D \cdot \vec E \dd\vec V = \frac{1}{2}\iiint _V \varepsilon\abs{\vec E}^2\,\dV$$ Where the energy density is $$W_e = \frac{1}{2}\vec D \cdot \vec E = \frac{1}{2}\varepsilon _r\varepsilon _0\abs{\vec E}^2 = \frac{1}{2}\frac{\abs{D}^2}{\varepsilon _r\varepsilon _0}$$}

* The factor of $\frac{1}{2}$ accounts for duplication between charge interactions
* Consider the energy stored in a parallel plate capacitor:
	* First method: using charges
		* $W_e = \frac{1}{2}\iint \rho _sV\,\dS = \frac{1}{2}\iint _S \rho _sV_0\,\dS = \frac{1}{2}\rho _sV_0S = \frac{1}{2}QV_0 = \frac{1}{2}CV_0^2 = \frac{1}{2}\frac{\varepsilon _r\varepsilon _0S}{d}V_0^2$
	* Second method: using fields
		* $W_e = \frac{1}{2}\iiint _V \varepsilon _r\varepsilon _0\abs{\vec E}^2\,\dV$
		* For a parallel plate capacitor $\vec E$ has constant magnitude $\frac{\rho _s}{\varepsilon _r\varepsilon _0}$, and the volume is $Sd$
		* Therefore $W_e = \frac{1}{2}\left(\frac{\rho _s}{\varepsilon _0\varepsilon _r}\right)^2\varepsilon _r\varepsilon _0Sd = \frac{1}{2}\frac{Q^2}{S\varepsilon _r\varepsilon _0}Sd = \frac{1}{2}\frac{Q^2d}{\varepsilon _r\varepsilon _0S} = \frac{1}{2}\frac{Q^2}{C}$

\noteImportant{$W_e = \frac{1}{2}\frac{Q^2}{C} = \frac{1}{2}CV_0^2$ holds in general; we may find $C$ from energy by $C = \frac{1}{2}\frac{Q^2}{W_e} = \frac{2W_e}{V_0^2}$}

