# Lecture 35, Dec 6, 2022

## Radiation Analysis

* Consider 2 surfaces with $A_1, T_1$ and $A_2, T_2$, both blackbodies
	* Energy from 1 to 2 is $A_1E_{b1}(T_1)F_{12}$; energy from 2 to 1 is $A_2E_{b2}(T_2)F_{21}$
	* The net radiative exchange would be $\dot Q_{12} = A_1E_{b1}(T_1)F_{12} - A_2E_{b2}(T_2)F_{21}$
	* Using reciprocity $A_1F_{12} = A_2F_{21}$ so $Q_{12} = A_1F_{12}(E_{b1} - E_{b2}) = A_1F_{12}\sigma(T_1^4 - T_2^4)$
* Note for a small body in an enclosure $F_{12} = 1$ which makes our net radiative heat transfer $\dot Q_{12} = A_1\sigma(T_1^4 - T_2^4)$
* For a more realistic analysis, assume an isothermal, opaque, diffuse ($\varepsilon$ independent of direction), and gray ($\varepsilon$ independent of $\lambda$) surface
	* Together this gives us $\varepsilon$ constant for a material, which is a fair assumption over a small range
	* $J$ is the radiosity, the total radiative energy that leaves a surface per unit area per unit time
	* When incident radiation $G$ hits the surface we have $\rho G$ being reflected, $\alpha G$ being absorbed and $\varepsilon E_b$ being radiated back
	* $J = \rho G + \varepsilon E_b = \varepsilon E_b + (1 - \varepsilon)G \implies G = \frac{J - \varepsilon E_b}{1 - \varepsilon}$
	* The net energy leaving the surface per unit area is $\frac{\dot Q}{A} = J - G \implies \dot Q = A(J - G) = A\left(J - \frac{J - \varepsilon E_b}{1 - \varepsilon}\right)$
	* $\dot Q = A\frac{\varepsilon}{1 - \varepsilon}(E_b - J) = \frac{E_b - J}{\frac{1 - \varepsilon}{\varepsilon A}}$
	* We can think of $E_b - J$ as the driving force of radiative heat exchange, using a resistive approach $R = \frac{1 - \varepsilon}{\varepsilon A}$, known as the surface resistance
		* Note if we had a blackbody then $R = 0$ and so $E_b = J$ for a blackbody
* Consider 2 gray surfaces $i$ and $j$ with radiosities $J_i, J_j$
	* The radiation from $i$ that reaches $j$ is $J_iA_iF_{ij}$; from $j$ to $i$ is $J_jA_jF_{ji}$
	* $\dot Q_{ij} = J_iA_iF_{ij} - J_jA_jF_{ji} = A_iF_{ij}(J_i - J_j)$ by reciprocity
	* $\dot Q_{ij} = \frac{J_i - J_j}{(A_iF_{ij})^{-1}}$
		* $\frac{1}{A_iF_{ij}}$ is known as the space resistance
	* The total resistance combines the surface resistance for $i$, $\frac{1 - \varepsilon _i}{A_i\varepsilon _i}$, the space resistance $\frac{1}{A_iF_{ij}}$, and the surface resistance for $j$, $\frac{1 - \varepsilon _j}{A_j\varepsilon _j}$, with the driving force being blackbody radiation on both sides
* $\dot Q_{ij} = \frac{E_{bi} - E_{bj}}{R_{tot}} = \frac{\sigma(T_i^4 - T_j^4)}{\frac{1 - \varepsilon _i}{A_i\varepsilon _i} + \frac{1}{A_iF_{ij}} + \frac{1 - \varepsilon _j}{A_j\varepsilon _j}}$
* Example: Consider 2 large parallel plates, $T_1 = 1000\si{K}, \varepsilon _1 = 1, T_2 = 500\si{K}, \varepsilon _2 = 0.8$ with equal area; what is $\frac{\dot Q_{12}}{A}$?
	* $F_{12} = F_{21} = 1$
	* $\dot Q_{12} = \frac{\sigma(T_1^4 - T_2^4)}{\frac{1 - \varepsilon _1}{A\varepsilon _1} + 1 + \frac{1 - \varepsilon _2}{A\varepsilon _2}}$
	* $\frac{\dot Q_{12}}{A} = \frac{\sigma(T_1^4 - T_2^4)}{0 + 1 + \frac{1 - \varepsilon _2}{\varepsilon _2}} = \varepsilon _2\sigma(T_1^4 - T_2^4)$
	* Plugging in values we get $45.5\si{kW/m^2}$
* Example: An finite system with a groove at 40 degrees, $1000\si{K}, \varepsilon = 0.6, 10\si{mm}$ in the middle; what is the radiation heat flux leaving the groove?
	* Isolate the groove, and create an imaginary surface at the top to enclose the surface; this surface would have $0\si{K}$ and $\varepsilon = 1$ (since $\alpha = 1$); call this surface 2
	* We want $\dot Q_{12}$ which would be the amount of radiation escaping the groove
	* Start again with $\dot Q_{12} = \frac{\sigma(T_1^4 - T_2^4)}{\frac{1 - \varepsilon _1}{A_1\varepsilon _1} + \frac{1}{A_1F_{12}} + \frac{1 - \varepsilon _2}{A_2\varepsilon _2}} = \frac{\sigma T_1^4}{\frac{1 - \varepsilon _1}{A_1\varepsilon _1} + \frac{1}{A_1F_{12}}}$
	* To find $F_{12}$ we can use reciprocity, and we know $F_{21} = 1$ which gives us $F_{12} = \frac{A_2}{A_1} = \sin(20\degree)$ using geometry
	* Therefore $\frac{\dot Q_{12}}{A_2} = \frac{\sigma T_1^4}{\frac{1 - \varepsilon _1}{\varepsilon _1}\frac{A_2}{A_1} + 1}$
	* Plugging in values we get $46.2\si{kW/m^2}$
* If we have multiple surfaces, we still have a single surface resistance, but we have multiple space resistances for multiple sources
	* $\dot Q_1 = \sum _{i = 1}^N \dot Q_{1i}$
	* Due to conservation of energy $\frac{E_{b1} - J_1}{R_1} = \sum _{i = 1}^N \frac{J_1 - J_i}{R_{1i}}$
* Note even when $F_{11} > 0$, we still have $\dot Q_{11} = 0$ since we assume an isothermal surface
* In a system with multiple surfaces we get a system of resistances, which we can solve by assessing each node and noting that the heat in equals the heat out for all intermediate nodes

\noteSummary{The total radiative heat transfer between two surfaces $i$ and $j$ is given by $$\dot Q_{ij} = \frac{E_{bi} - E_{bj}}{R_{tot}} = \frac{\sigma(T_i^4 - T_j^4)}{\frac{1 - \varepsilon _i}{A_i\varepsilon _i} + \frac{1}{A_iF_{ij}} + \frac{1 - \varepsilon _j}{A_j\varepsilon _j}}$$ in which $\frac{1 - \varepsilon}{A\varepsilon}$ terms are the surface resistances, $\frac{1}{A_iF_{ij}}$ is the space resistance, and the driving force is the difference in blackbody radiation between the surfaces; for a system with multiple surfaces, each surface has its own surface resistance, and each pair of surfaces has a space resistance between them}

