# Lecture 27, Nov 17, 2022

## Fin Sizing

* When can we assume a fin to be infinitely long?
* Compare adiabatic tip vs. infinitely long fin equation, taking the ratio we get $\tanh(aL)$
* For $aL = 1$, $\tanh(aL) = 0.762$; for $aL = 5$, $\tanh(aL) = 0.9999)$
	* As a rule of thumb if $aL \geq 5$ we can assume the fin is infinitely long
	* A value of 1 gives $76.2\%$ of the total heat transfer from an infinitely long fin, with a lot less material
* $L = \frac{1}{a}$ is typically a reasonable length for a fin
* What about the area of fins?
	* Consider area with fin and area without fin
	* $\dot Q_{total} = \dot Q_{nofin} + \dot Q_{fin}$
	* From the fin efficiency definition $\eta _{fin} = \frac{\dot Q_{fin}}{hA_{fin}(T_b - T_\infty)}$
	* $\dot Q_{fin} = h\eta _{fin}A_{fin}(T_b - T_\infty)$
	* Putting it all together $\dot Q_{total} = h(A_{nofin} + \eta _{fin}A_{fin})(T_b - T_\infty)$
* $(A_{nofin} + \eta _{fin}A_{fin})$ is the *effective area for heat transfer*
	* In terms of thermal resistances $R = \frac{T_b - T_\infty}{\dot Q_{total}} = \frac{1}{h(A_{nofin} + \eta _{fin}A_{fin})}$

## Transient Heat Conduction (Lumped)

* Simple example: taking a material and immersing it in a fluid with a high temperature difference, resulting in rapid heat transfer
	* What is $T(t)$?
* Recall $\pdiffn{2}{T}{x} + \pdiffn{2}{T}{y} + \pdiffn{2}{T}{z} = \frac{1}{\alpha}\pdiff{T}{t}$
* Lumped capacitance: simple assumption that there is no temperature gradient in the body, i.e. $\pdiffn{2}{T}{x} = \pdiffn{2}{T}{y} = \pdiffn{2}{T}{z} = 0$, the temperature is at uniform temperature everywhere
	* In reality modes of heat transfer include conduction within the material and convection to the surrounding fluid
	* This makes sense only if $R_{cond} \ll R_{conv}$
* Energy balance: Let $\Delta \dot E(t) = -\dot Q_{conv}(t)$ be the energy change in the body
	* $\Delta \dot E(t) = mc_p\diff{T}{t} = \rho Vc_p\diff{T}{t}$
	* $hA(T - T_\infty) = -\rho Vc_p\diff{T}{t} \implies \frac{\dd T}{T - T_\infty} = \frac{\dd(T - T\infty)}{T - T_\infty} = -\frac{hA}{\rho Vc_p}\,\dt$
	* Integrate to get $\ln(T - T_\infty) = -\frac{hA}{\rho Vc_p}t + c_1$, apply boundary condition that $T(0) = T_i$
	* $\ln\left(\frac{T - T_\infty}{T_i - T_\infty}\right) = -\frac{hA}{\rho Vc_p}$
	* This compares the "changing driving force" against the "max driving force"
* Define the time constant $\tau = \frac{\rho Vc_p}{hA}$ so $\frac{T - T_\infty}{T_i - T_\infty} = e^{-\frac{t}{\tau}}$

\noteEqn{For lumped transient heat conduction, $$\frac{T - T_\infty}{T_i - T_\infty} = e^{-\frac{t}{\tau}}$$ where $\tau = \frac{\rho Vc_p}{hA}$}

## Validity of the Lumped Capacitance Assumption

* This only makes sense if $R_{conv} \gg R_{cond}$
* Take $\frac{R_{cond}}{R_{conv}} = \frac{\frac{L}{kA}}{\frac{1}{hA}} = \frac{hL}{k}$
* $\BiN = \frac{hL_c}{k}$ is the *Biot number*, a dimensionless quantity
	* $L_c$ is a characteristic length in the direction of conduction, from the midpoint to the wall
	* $L_c = \frac{V}{A}$
	* For a sphere $L_c = \frac{r}{3}$, for a cylinder (with length $\gg$ radius) $L_c = \frac{r}{2}$
* Consider the steady state analogue; for $\BiN \gg 1$, the temperature drops the sharpest over conduction, so lumped capacitance is not valid; for $\BiN \ll 1$, the temperature drops the sharpest over convection, so lumped capacitance is valid
* Typical cutoff is $\BiN < 0.1$
* Example: putting steel rod at $300\si{\degree C}$ into furnace at $1200\si{\degree C}$ with $h = 100\si{W/m^2.K}, D = 0.1m, k = 51.2\si{W/m.K}, \rho = 7832\si{kg}{m^3}, c = 541\si{J/kg.K}$, how long until the rod temperature reaches $800\si{\degree C}$?
	* First, check validity of lumped capacitance assumption: $\BiN = \frac{hL_c}{k} = \frac{100\si{W/m^2k} \cdot \frac{0.05\si{m}}{2}}{51.2\si{W/m.K}} = 0.05 < 0.1$ so the assumption is valid
	* Using lumped capacitance $\frac{T - T_\infty}{T_i - T_\infty} = e^{-\frac{hA}{\rho Vc}t} = e^{-\frac{h}{\rho c} \cdot \frac{2}{r}t}$
	* $\ln \frac{800 - 1200}{300 - 1200} = \frac{-2 \cdot 100\si{W}{m^2.K}}{7832\si{kg/m^3} \cdot 541\si{J}{kg.K}}t$
	* $t = 859\si{s}$

