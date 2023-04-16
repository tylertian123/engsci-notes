# Lecture 6, Jan 26, 2023

## Resting Membrane Potential

* Ions are constantly leaking in/out of the membrane through leak channels (aka background channels, open rectifier channels) as the potassium and sodium is pumped in/out of the cell
	* There are way more potassium channels than sodium or chloride channels
	* For sodium, we have $150\si{mmol/L}$ outside and $15\si{mmol/L}$ inside with a relative permeability of $1/50$ to $1/75$
	* For potassium, we have $5\si{mmol/L}$ outside and $150\si{mmol/L}$ inside with a relative permeability of 1
	* For chlorine we have $110\si{mmol/L}$ outside the cell and $20\si{mmol/L}$ inside with a relative permeability of about $1/2$
	* Amino acids only exist inside the cell and has a relative permeability of 0
* Suppose we have a higher concentration of potassium inside the cell; the ions are going to leak out due to the concentration gradient, which creates an electric potential due to the charge being carried outside by the potassium; as the charge builds up, it becomes harder for the ions to leak out, eventually reaching an equilibrium potential
* The equilibrium potential is the point at which the ion exchange rate caused by a concentration gradient matches the rate caused by the attraction of the charges
	* For potassium this is $-90\si{mV}$, for sodium it's $+61\si{mV}$
	* The overall membrane potential is $V_m = -70\si{mV}$

### Nernst Equation

* The equilibrium potential can be calculated by the Nernst equation
* $E_x = \frac{61}{Z_x}\log_{10}\frac{[C]_o}{[C]_i}$ for a single type of ion
	* $E$ is the equilibrium potential in millivolts (difference between two sides of the cell) ($x$ denotes the ion, e.g. $E_{\ce{K+}}$ is the equilibrium potential of potassium)
		* The ground is outside the cell
	* $Z$ is the valence of the ion
	* $[C]_o, [C]_i$ denote concentration outside and inside the cell
		* This concentration difference is controlled by the ATP pumps
	* The full version of the equation is $E_x = \frac{RT}{Z_xF}\ln\frac{[C]_o}{[C]_i}$
		* Converting this to give you volts and changing the base of the log gives the factor of 61
* Note the individual equilibrium potentials are not the same as the overall membrane potential $V_m$
* If we want to consider multiple types of ions, we need to use the Goldman-Hodgkin-Katz equation
	* The concentration of each type of ion on one side is multiplied by the selectivity $P$ and summed
* We can visualize this with an electrochemical graph:
	1. Set up the graph, with concentration on the horizontal axis and electric potential on the vertical
	2. Write down the concentrations inside and outside the cell and look at how the concentration would move the ions; put this on the horizontal axis
	3. Consider the equilibrium potential and put it on the vertical axis
	4. Draw a line between the two points
	5. Follow this line for a specific potential value, project this onto the horizontal axis and look at which side of the axis it's on
* Note the equilibrium potential for a specific ion has nothing to do with permeability, but the resting membrane potential does
	* If permeability changed for an ion, its equilibrium potential would not change
	* The overall membrane potential shifts to reflect the change

### Free Energy

* "Energy to do useful work"
* The concentration difference and electrical potential creates free energy
* $\Delta G_\text{chem} = RT\ln\frac{[C]_o}{[C]_i}$, $\Delta G_\text{elec} = ZFV_m$
* At equilibrium they are equal to each other
	* We can rearrange this to derive the Nernst equation
* $\Delta G = \Delta G_\text{chem} - \Delta G_\text{elec}$
	* If $\Delta G < 0$, the ion moves out of the cell
	* If $\Delta G > 0$, the ion moves into the cell

