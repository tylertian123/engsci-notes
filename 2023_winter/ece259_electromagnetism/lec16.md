# Lecture 16, Feb 15, 2023

## Capacitance

\noteDefn{Given two conductors with a potential difference, the capacitance $C$ between them is defined as $$C = \frac{Q}{\Delta V} = \frac{Q}{V}$$ with units of $[\si{C/V} = \si{F}]$}

* Consider 2 conductors attached to a battery; they will have equal and opposite charges proportional to the voltage
* Let $Q = C\Delta V$; $C$ is the *capacitance*, $C = \frac{Q}{\Delta V} = \frac{Q}{V} [\si{C/V} = \si{F}]$
	* Capacitance is a function of only the conductor geometry and the material separating them
	* A large capacitance results in large $Q$ for a small $V$
	* Application notes: typically in circuits there are lots of conductors next to each other, which can introduce a parasitic capacitance; this capacitance can severely distort high frequency signals
* $C = \frac{Q}{\Delta V} = \frac{\oiint _{S+} \vec D \cdot \dd\vec S}{\abs*{-\int \vec E \cdot \dd\vec l}} = \frac{\oiint _{S+} \varepsilon _r\varepsilon _0\vec E \cdot \dd\vec S}{\abs*{-\int \vec E \cdot \dd\vec l}}$
	* $S+$ is the surface that encloses the positively charged conductor but this could be another conductor as well
* Example: parallel plate capacitor filled with dielectric with relative permittivity $\varepsilon _r$
	* First we need to find the electric field in the dielectric: $\vec E = \frac{\rho _s}{\varepsilon _0\varepsilon _r}$
		* We can see this from boundary conditions $D_{\text{dielectric}} - D_\text{conductor} = \rho _s \implies D = D_\text{dielectric} = \rho _s$
	* $\Delta V = \abs*{-\int \vec E \cdot \dd\vec l} = Ed = \frac{\rho _sd}{\varepsilon _0\varepsilon _r} = \frac{Qd}{\varepsilon _0\varepsilon _rS}$
		* $Q = \rho _sS$ where $S$ is the area of the plate, assuming uniform free charge distribution
	* Therefore $C = \frac{Q}{\Delta V} = \frac{Q}{\frac{Qd}{\varepsilon _0\varepsilon _rS}} = \frac{\varepsilon _0\varepsilon _rS}{d}$
	* This assumes uniform charge distribution (i.e. plates are effectively infinitely large), and also the insulation cannot conduct any current
* To maximize capacitance we increase $\varepsilon _r$ or the plate area $S$, and making the plate spacing $D$ as small as possible
* Example: capacitance of a spherical capacitor; inner sphere with radius $a$, outer sphere with radius $b$, dielectric with $\varepsilon _r$ between
	* Assume a $Q$, find $\vec E$ from it, and then find $\Delta V$
	* Assume inner shell has charge $+Q$ and outer shell has charge $-Q$
	* Apply Gauss's law: $\oiint _S \vec E \cdot \dd\vec S = \frac{Q_{enc}}{\varepsilon _0\varepsilon _r} \implies 4\pi\varepsilon _r\varepsilon _0 R^2E_R = Q \implies \vec E = \frac{Q}{4\pi R^2\varepsilon _r\varepsilon _0}\hat a_R$
	* Find potential by integration: $\Delta V = \abs*{\int _a^b E\,\dR} = \frac{Q}{4\pi\varepsilon _r\varepsilon _0}\left(\frac{1}{a} - \frac{1}{b}\right)$
	* Therefore $C = \frac{Q}{\Delta V} = \frac{4\pi\varepsilon _r\varepsilon _0ab}{b - a}$
	* Does this make sense?
		* $C$ is directly proportional to $\varepsilon _r$
		* The distance between conductors in the denominator
		* The surface area of the conductors is in the numerator

\noteSummary{To find capacitance:
\begin{enumerate}
	\item Assume some charge $Q$ on the surfaces
	\item Use boundary conditions and Gauss's Law to find $\vec D$ and $\vec E$
	\item Find voltage $\Delta V = \abs*{\int \vec E \cdot \dd\vec l}$
	\item Calculate capacitance by $C = \frac{Q}{\Delta V}$
\end{enumerate}
}

