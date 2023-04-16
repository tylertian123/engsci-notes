# Lecture 34, Dec 5, 2022

## Kirchhoff's Law

* At a specific temperature, $\varepsilon = \alpha$ (emissivity equals absorptivity)
	* This works if both the source of the radiation and the absorber are at the same temperature
* Consider a large enclosure and a small body inside with surface area $A$, emissivity $\varepsilon$ and absorptivity $\alpha$, both at temperature $T$
	* Assume the large isothermal cavity acts as a blackbody
	* At thermal equilibrium $T$ is the same for both the small body and enclosure
	* The radiation on the small body per unit area is $G = \sigma T^4$ so $E_{abs} = \alpha GA = \alpha\sigma T^4A$
	* The emitted radiation is $E_{emit} = \varepsilon\sigma T^4A$
	* At equilibrium these must be equal, so $E_{abs} = E_{emit}$ and therefore $\varepsilon = \alpha$
* Note this is only true if temperatures for both radiation sources are the same
	* We can use this assumption if the temperatures are similar but not quite equal
	* e.g. $350\si{K}$ vs. $300\si{K}$ is okay for this assumption, but for solar radiation of $5000\si{K}$ vs $300\si{K}$ for a room temperature object this assumption would not apply

## View Factors

* The amount of radiation incident on a surface depends on orientation
* Consider two surfaces, $i$ and $j$, then $F_{ij}$ or $F_{i\to j}$ is the fraction of radiation leaving the surface $i$ that reaches $j$ directly; this is known as a *view factor*
	* Radiation that reaches the other surface via one or more reflections is not counted
	* Note $F_{ij}$ would be from $i$ to $j$ and $F_{ji}$ is from $j$ to $i$, and they may not be equal
		* Consider the case of surface 1 completely enclosed by 2; $F_{11}$ would be 0 and $F_{12}$ would be 1 (since the surface is completely enclosed), but $F_{21}$ is not necessarily 1, because $F_{22}$ is nonzero
	* $F_{11}$ would be the fraction of energy leaving 1 that reaches 1
		* In the case of a flat or convex surface this would clearly be 0, but if we have a concave surface, this can be nonzero
* The calculation of view factors is done by integration over the shape
	* View factors can be found in tables
	* $F_{ij}$ are functions of dimensions, distance, and orientation
	* Values are tabulated for 3D and 2D (infinitely going into screen) cases

## Analyzing Radiation Heat Transfer

* Consider an enclosure with $N$ surfaces
	* Since the region is completely enclosed $\sum _{j = 1}^N F_{ij} = 1$, i.e. all radiation leaving $i$ must hit a surface in the enclosure (summation rule)
* If the problem is not enclosed, we can make an imaginary enclosure by creating a surface out of an opening, containing $\alpha, \varepsilon, \rho$ of the opening
	* We can usually assume that it's absorbing everything, with $T = 0$ and $\alpha = 1$
* For every pair of surfaces we have a view factor, so in total we have a matrix of view factors where $M_{ij} = F_{ij}$
* Note not all $F_{ij}$ are independent; the actual number of independent view factors is $\frac{N(N - 1)}{2}$, based on the summation rule
* Reciprocity rule: $A_iF_{ij} = A_jF_{ji}$ for any pair of surfaces
	* Consider 2 surfaces 1 and 2, which are blackbodies at $T_1 = T_2$ and $\alpha = \varepsilon = 1$
	* Energy leaving 1 and reaching 2 is $E_{b1}(T_1)A_1F_{12}$; energy leaving 2 and reaching 1 is $E_{b2}(T_2)A_2F_{21}$
	* The net energy exchange is $\dot Q_{12} = E_{b1}(T_1)A_1F_{12} - E_{b2}(T_2)A_2F_{21}$
	* If we have the same temperature and thus thermal equilibrium, then $\dot Q_{12} = 0$ and $E_{b1} = E_{b2}$
	* This gives us $A_1F_{12} = A_2F_{21}$ for a special case, but all of these are geometric parameters independent of $T$ and $\varepsilon$, so this is true in general
* This means that when two areas are equal, the view factors in both directions are equal
* Superposition: We can break up a surface, and its view factor will be the sum of the view factors of the pieces
* Symmetry: if we have an axis of symmetry then view factors are symmetrical
* Example: Imagine a small sphere with a concentric hemisphere, with $A_2 = 2A_1$; find $F_{12}$ and $F_{21}$
	* Create a third imaginary surface that closes the hemisphere, call it surface 3
	* We know $F_{11}$ is 0 since it's convex
	* Using the plane of symmetry $F_{12} = F_{13} = 0.5$
	* Using reciprocity $F_{21} = \frac{A_1}{A_2}F_{12}$ so $F_{21} = 0.25$

\noteSummary{To find the view factors in a system, use the 3 rules:
\begin{enumerate}
	\item Summation rule: $\sum _{j = 1}^N F_{ij} = 1$ (sum of all outgoing view factors from a surface is 1)
	\item Reciprocity rule: $A_iF_{ij} = A_jF_{ji}$ for any pair of surfaces
	\item $F_{ii}$ is 0 for any convex surface
\end{enumerate}}

