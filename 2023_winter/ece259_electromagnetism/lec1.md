# Lecture 1, Jan 9, 2023

## Maxwell's Equations

\noteEqn{Maxwell's Equations:
\begin{align*}
	\text{Faraday's Law: }&\del \times \vec E = -\mu\pdiff{\vec H}{t} \\
	\text{Ampere's Law: }&\del \times \vec H = \vec J + \varepsilon\pdiff{\vec E}{t} \\
	\text{Gauss's Law (Electric): }&\del \cdot \vec E = \frac{\rho _\nu}{\varepsilon} \\
	\text{Gauss's Law (Magnetic): }&\del \cdot \vec H = 0
\end{align*}
\tcblower
In a static field:
$$\del \times \vec E = 0$$
$$\del \times \vec H = \vec J$$
$$\del \cdot \vec E = \frac{\rho _\nu}{\varepsilon}$$
$$\del \times \vec H = 0$$
}

* In a static field, electric and magnetic fields are now independent
* Maxwell added the second term in Ampere's Law, connecting electric and magnetic fields

## Electrostatics -- The Beginning

* The *triboelectric series* ranks the tendency for different materials to gain or lose electrons
* Coulomb noticed the properties of the electric force (Coulomb's Law)
	* $\abs{\vec F_e}$ dependent on $Q_1Q_2$
	* $\abs{\vec F_e} \propto \frac{1}{R^2}$
	* The direction of $\vec F_e$ acts along the line connecting $Q_1$ and $Q_2$
	* Like charges repel, opposite charges attract
* Mathematically we express this as $\abs{\vec F_e} = F_e \propto \frac{Q_1Q_2}{R^2}$

\noteDefn{Coulomb's Law (scalar form): $$F_e = k\frac{Q_1Q_2}{R^2} = \frac{Q_1Q_2}{4\pi\varepsilon _0R^2}$$ where $k = \SI{9e9}{Nm^2/C^2}$, $\varepsilon _0 = \SI{8.85e-12}{F/m}$ is the permittivity of free space}

