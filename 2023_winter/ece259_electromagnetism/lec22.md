# Lecture 22, Mar 8, 2023

## Resistance and Conductance

* Recall that $\vec J = \sigma\vec E, \vec E = \rho \vec J$ where $\sigma$ is the conductivity and $\rho$ is the resistivity, with $\frac{1}{\rho} = \sigma$
* Resistance and conductance are macroscopic properties that apply to an entire piece of material rather than points within the material
* Using Ohm's law we define resistance as $R = \frac{V}{I}$, conductance as $G = \frac{I}{V} = \frac{1}{R}$
* Consider a material with conductivity $\sigma$ connected to a battery with voltage $V$; this creates a field $\vec E$ that generates a current $\vec J$
	* We know $V = -\int \vec E \cdot \dd\vec l$ and $I = \iint _S \vec J \cdot \dd\vec s = \iint _S \sigma \vec E \cdot \dd\vec s$ where $S$ is the cross-sectional area
	* Therefore $R = \frac{V}{I} = \frac{\abs*{-\int \vec E \cdot \dd\vec l}}{\iint _S \sigma\vec E \cdot \dd\vec s}$
* Like capacitance, to find the resistance of any material we can assume some voltage and compute how much current this creates, and then take the ratio
* In the case of a simple conductor with uniform $S$ and $\sigma$, $V = EL, I = E\sigma S \implies R = \frac{V}{I} = \frac{L}{\sigma S}$
	* For the uniform area conductor we know $\vec E$ is constant, because $I$ is constant and therefore $\vec J$ must be constant, which leads to $\vec E$ being constant
	* This applies to e.g. a cylinder, but not a cone
	* If we don't have uniform cross-sectional area, $R = \int \frac{1}{\sigma S}\,\dd l$ where $S$ and $\sigma$ can be functions of $l$
		* This works even in the case of a non-uniform electric field
		* Can be thought of as a collection of infinitesimal resistors in series
* Example: resistance of a coaxial cable filled with dielectric $\varepsilon _r$
	* Use Gauss's law to find $\vec E = \frac{\rho _{sa}a}{\varepsilon _r\varepsilon _0r}\hat a_r$
	* $R = \frac{\abs*{\int \vec E \cdot \dd\vec l}}{\iint _S \sigma\vec E \cdot \dd\vec s} = \frac{\abs*{\int \frac{\rho _{sa}a}{\varepsilon _r\varepsilon _0r}\,\dr}}{\int _0^{2\pi}\int _0^L\frac{\sigma\rho _{sa}a}{\varepsilon _r\varepsilon _0a}a\,\dz\,\dphi} = \frac{\ln\frac{b}{a}}{2\pi L\sigma}$
	* When we're evaluating the bottom integral to find current, we can choose any surface; usually we choose one so that $\vec J \cdot \dd\vec s$ is easy to evaluate (e.g. a Gaussian surface)
		* We only need to integrate over a single surface, in this case a cylinder of radius $a$
	* We can also find this by $R = \int \frac{1}{\sigma S}\,\dd l = \int \frac{1}{\sigma \cdot 2\pi r L}\,\dr$
	* Note this assumes that the electric field is uniform down the wire; if the wire were extremely long we would need to consider how $\vec E$ changes as you move down the wire, due to resistance of the conductor and leakage current through the dielectric

## Joule's Law (Power Loss)

* Since current is the result of the electric field doing work on the electrons, the electric field has to do work to create current
* Power is lost as heat in the system
* Consider an electric field causing a current $\vec J = \sigma\vec E$ in a non-perfect dielectric; how much power does it take to sustain this current?
	* Consider a very small region; the charges move at the drift velocity
	* $\Delta P = \diff{\Delta U}{t}$ and $\Delta U = W_e$ so $\Delta P = \diff{}{t}\int \vec F_e \cdot \dd\vec l = \diff{}{t}\int Q\vec E \cdot \dd\vec l = \diff{}{t}\int \rho _v\Delta v\vec E \cdot \dd\vec l$
	* $\Delta P = \int \rho _v\Delta v \vec E \cdot \diff{\vec l}{t} = \vec E \cdot \vec J\Delta v$

\noteDefn{Joule's law: $$P = \iiint _V \vec E \cdot \vec J\,\dV$$ relates energy losses in a conductor to the current and electric field in it}

