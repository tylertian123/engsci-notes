# Lecture 15, Feb 14, 2022

## Non Steady State Diffusion

* Fick's Second law: $\pdiff{C}{t} = D\pdiffn{2}{C}{x}$
	* Boundary conditions: at $t = 0$, $C = C_0$ for $x \leq x \leq \infty$ (assume bar has preexisting concentration of copper)
	* At $t > 0$, $C = C_s$ for $x = 0$ (constant surface concentration), and $C = C_0$ for $x = \infty$
* Solution is $\frac{C(x, t) - C_0}{C_s - C_0} = 1 - \erf\left(\frac{x}{2\sqrt{Dt}}\right)$ where the error function $\erf(z) = \frac{2}{\sqrt{\pi}}\int _0^z e^{-y^2}\,\dy$
	* With increasing time, the concentration profile flattens and the material moves deeper into the bar
	* The $\sqrt{Dt}$ is the characteristic length that the diffusing atom has moved in time $t$
* Example: An FCC Iron-Carbon alloy initially containing $0.20\%$ carbon by weight is carburized at an elevated temperature and in an atmosphere that gives a constant surface carbon concentration of $1.0\%$ by weight. After $49.5\si{h}$ the concentration of carbon is $0.35\%$ by weight at a position $4.0\si{mm}$ below the surface. Determine the temperature at which the treatment was carried out.
	* Using the solution equation we can get $\erf(z) = 0.8125$
	* Go to the table to find the value of $z$ using an interpolation, and then solve for $D = \SI{2.6e-11}{m^2/s}$
	* Now we have $D$, we need $D_0$ and $Q$ to find the temperature
* Diffusion is faster for: 
	* Open crystal structures
	* Smaller diffusing atoms
	* Lower density materials

## Phase Diagrams

* Given the composition of a material and the temperature, we can determine how many phases it forms, what the composition each phase is and what the amount of each phase is
* Solubility limit: Maximum concentration for which only a single phase solution exists (i.e. a homogeneous solution e.g. syrup)
* Phase diagrams have 2 axes: composition ($x$) and temperature ($y$)
	* The composition axis goes between no substance 1, all substance 2, to all substance 1, no substance 2 (wt%)
	* The diagram is divided into two big regions; on the left we have a homogeneous solution (below the solubility limit); on the right we have the dual phase region where both solid and solution exist
* Components: Elements or compounds which are present in the alloy (e.g. $\ce{Al}$ or $\ce{Cu}$)
* Phases: Physically and chemically distinct material regions that form (e.g. $\alpha, \beta$)
	* e.g. aluminum-copper alloy under a microscope has $\beta$ phases (lighter) and $\alpha$ phases (darker)
* State variables: temperature and composition
	* Higher temperature leads to greater solubility and moves us from a dual phase region to a single phase region
	* Changing the composition also changes between phase regions (isothermal changes)
	* Pressure is also a state variable but not in this course
* Solubility is affected by Hume-Rothery rules
	* Not meeting the criteria gives typically limited solubility
* e.g. nickel and copper are soluble in one another for all proportions
	* In the phase diagram there's a thin transition area where both liquid and solid solution exist, as the crystals have to from from the solid first
* A binary isomorphous system (e.g. copper and nickel) has only 2 components, and complete solubility of one component in another
	* i.e. it is possible to have the same phase for 0 to 100% composition
	* The *liquidus* divides the single phase liquid region and the mixed region; the *solidus* divides the single phase solid region and the mixed region

