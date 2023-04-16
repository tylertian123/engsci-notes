# Lecture 21, Mar 6, 2023

## Electric Field Inside Conducting Materials

* When an electric field is applied to a material where there are free charge carriers, it will create a current density $\vec J$
	* Electrons move with a drift velocity $\vec u_d$
* The force on each conductor is $\vec F_e = -e\vec E = m_e\vec a \implies \vec a = -\frac{e}{m_e}\vec E$
* The charge density is $\rho _{ve} = -N_ee$ where $N_e$ is the charge carrier density; so define the current density as $\vec J = \rho _{ve}\vec u_d$
	* Current density has units of $\si{A/m^2}$ which this relation satisfies
* By convention current density $\vec J$ is in the same direction as the electric field $\vec E$
	* $\vec u_d$ would be in the opposite direction as $\vec E$ and $\vec J$ if the charge carriers were electrons
* How can we model the movement of electrons?
	* Consider the case where there is no $\vec E$ field applied, electrons move by thermal agitation and bounce around atoms
		* There is no net movement since the movements are completely random
		* The velocity is on the order of $\SI{1e5}{m/s}$ but there is no coordination in direction, so no net movement
	* When a field is applied, there is a net movement in the direction that the field pushes the electrons in
		* The overall average velocity is the drift velocity $\vec u_d = \Delta t\vec a \approx \tau\vec a = -\frac{\tau e\vec E}{m_e}$
		* $\tau$ is the mean free time, or average time between collisions
	* Since $\vec u_d$ is directly connected to current density, higher $\tau$ means better conductor
	* Define the mobility $\mu _e = -\frac{e\tau}{m_e}$ so that $\vec u_d = \mu _e\vec E$
		* The mobility takes into account both $\tau$ and the type of charge carrier
* Since the current density is current per unit area, $I = \iint _S \vec J \cdot \dd\vec S$
* Therefore $\vec J = \rho _{ve}\vec u = -N_ee\left(-\frac{\tau e}{me}\right) = \frac{N_ee^2\tau}{m_e}\vec E = \sigma\vec E$

\noteDefn{Ohm's Law in point form: $$\vec J = \sigma\vec E$$ where $\sigma = \frac{N_ee^2\tau}{m_e}$ is the conductivity of the material}

* Using this we can derive another equation for the boundary condition: $E_{t1} = E_{t2} \implies \frac{J_{t1}}{\sigma _1} = \frac{J_{t2}}{\sigma _2}$
	* Combine this to with the boundary condition for $\vec D$ we have $\frac{\varepsilon _{r1}\varepsilon _0 J_{n1}}{\sigma _1} - \frac{\varepsilon _{r2}\varepsilon _0 J_{n2}}{\sigma _2} = \rho _s$
	* For a steady current interface, $J$ is continuous: $J_{n1} = J_{n2} = J_n$, therefore $\rho _s = J_n\left(\frac{\varepsilon _{r1}\varepsilon _0}{\sigma _1} - \frac{\varepsilon _{r2}\varepsilon _0}{\sigma _2}\right)$

\noteSummary{Electric current quantities:
\begin{itemize}
	\item $N_e$ charge carrier density (number density of charge carriers)
	\item $\rho _{ve} = -N_ee$ charge density (density of moving charges)
	\item $\vec J = \rho _{ve}\vec u _d$ current density (current per unit area)
	\item $\vec u_d = \mu _e\vec E = -\frac{\tau e\vec E}{m_e}$ drift velocity (average velocity of moving electrons)
	\item $\mu _e = -\frac{e\tau}{m_e}$ (electron) mobility (how easily electrons move given an applied electric field)
	\item $\sigma = \frac{N_ee^2\tau}{m_e}$ conductivity
\end{itemize}
}

\noteSummary{Boundary conditions for current density for a current going from material 2 to material 1:
\begin{itemize}
	\item Tangential component: $\frac{J_{t1}}{\sigma _1} = \frac{J_{t2}}{\sigma _2}$
	\item Normal component: $\frac{\varepsilon _{r1}\varepsilon _0 J_{n1}}{\sigma _1} - \frac{\varepsilon _{r2}\varepsilon _0 J_{n2}}{\sigma _2} = \rho _s$
	\item Given a steady current interface, we can find $\rho _s = J_n\left(\frac{\varepsilon _{r1}\varepsilon _0}{\sigma _1} - \frac{\varepsilon _{r2}\varepsilon _0}{\sigma _2}\right)$
\end{itemize}
}

