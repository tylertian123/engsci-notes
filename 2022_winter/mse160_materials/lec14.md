# Lecture 14, Feb 11, 2022

## Dislocations Continued

* Close-packed planes and directions are preferred when dislocations propagate since the least work is required
* In FCC there are many close-packed planes/directions; in HCP there's only one close-packed plane (the basal plane); BCC is not close packed
* Stacking faults (planar defect): for FCC an error in the packing can happen, e.g. ABCABABC

## Diffusion

* Diffusion: Mass transport by atomic motion
* Diffusion occurs in fluids this happens through Brownian motion and occurs in solids through atomic movement via vacancies or interstitials
* Inter-diffusion: In an alloy atoms migrate from regions of high concentration to regions of low concentration
	* This smoothes out the concentration profile
* Self-diffusion: Atoms also migrate in an elemental solid (solid of one material!)
* Diffusion mechanisms:
	* Vacancy diffusion:
		* There's always a finite concentration of vacancies
		* Atoms around a vacancy jump into the vacancy so the atoms or the vacancy moves around
		* The rate depends on the concentration of vacancies (cost to form vacancies) and the activation energy for the exchange (cost to do the exchange)
	* Interstitial diffusion:
		* Smaller atoms of the impurity diffuse between host atoms
		* Interstitial atoms jump between spaces
		* Spaces are typically not close-packed so there is ample space
		* The interstitial atoms are typically not bound to the actual crystal structure so the cost of moving is a lot lower, and interstitial diffusion happens a lot faster

## Processing Using Diffusion

* Case hardening: Diffusing carbon atoms into the host iron atoms at the surface (e.g. a case hardened gear)
	* The carbon in the structure makes the iron (steel) harder
	* Carbon strains the bonds (stretches the lattice) to make the crystal harder as the surface is under tension
* Doping: Diffusing phosphorus and other impurities into silicon crystals to make semiconductors
	* Phosphorus is deposited on the surface using a mask pattern
	* The silicon is heated and the phosphorus diffuses into the silicon

## Quantifying Diffusion

* To measure the rate of diffusion we use flux $J$, the mass (or moles of atoms) diffusing per unit area per unit time, in units of $\frac{\si{mol}}{\si{cm^2s}}$ or $\frac{\si{kg}}{\si{m^2s}}$
* Flux is measured empirically
	* Membrane of known surface area is made and a concentration gradient is imposed on the two sides
	* The speed of diffusion through this membrane is measured
	* $J = \frac{M}{At} = \frac{I}{A}\diff{M}{t}$ where $M$ is the mass diffused, $t$ is the time passed
* Steady state diffusion: When the rate of diffusion independent of time
	* Fick's first law of diffusion: $J = -D\diff{C}{x}$
		* The minus sign is because things diffuse from high concentration to low
	* The flux is proportional to the concentration gradient
	* If linear this is approximately $\frac{\Delta C}{\Delta x}$
* Example: Chemical protective clothing
	* e.g. Gloves are used to protect against methylene chloride; if Butyl rubber gloves ($0.04\si{cm}$) thick are used, what is the diffusive flux of methylene chloride through the gloves?
		* Surface concentrations $C_1 = 0.44\si{g/cm^3}, C_2 = 0.02\si{g/cm^3}$
		* Diffusion coefficient given
* Diffusion coefficient increases with increasing temperature as atoms have more energy
	* $D = D_0e^{-\frac{Q_d}{RT}}$ where $Q_d$ is the activation energy, $R$ is the ideal gas constant (note temperature is in Kelvin)

