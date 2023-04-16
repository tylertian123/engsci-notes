# Lecture 20 (2-3), Mar 3, 2023

## Equipartition Theorem Continued

* For an $n$-atom molecule, there is always $3n$ total degrees of freedom since there are 3 DoF for each atom
	* For linear and nonlinear molecules, CoM translation takes up 3 DoF
	* For nonlinear molecules, rotation takes up 3 DoF; for linear molecules rotation only take up 2 DoF because rotation around the axis of symmetry is not a degree of freedom
	* This leaves $3n - 6$ vibrational degrees of freedom for nonlinear molecules and $3n - 5$ for linear molecules
* This gives energy per molecule of $3\frac{kT}{2} + 2\frac{kT}{2} + 2(3n - 5)\frac{kT}{2} = \frac{kT}{2}(6n - 5)$ for a linear molecule and $\frac{kT}{2}(6n - 6) = (3n - 3)kT$ for a nonlinear molecule

## Heat and Work

* For ideal gases energy is given by the equipartition theorem, equal to the number of particles times the energy of each particle
	* The ideal gas assumes the total energy is just the kinetic energy; this implies that the particles don't interact, because interactions would require potential energy
	* However interactions between particles is required for the gas to reach equilibrium
	* An ideal gas is a gas where there is just enough interaction to enable the gas to go to TD equilibrium, but interactions are rare enough that the ideal gas law holds
* How do we change the energy of a system?
	* We will use a diatomic molecule, $U = \frac{7}{2}kTN$
	* Consider putting a thermostat (a very large thermal body) with temperature $T'$ in contact with a small body of temperature $T$; heat transfer will occur
	* After a while, the thermostat is removed, and now we have a system with temperature $T'$
	* The initial energy is $U_i = \frac{7}{2}NkT$, the final energy is $U_f = \frac{7}{2}NkT'$, which give a difference in energy of $\frac{7}{2}Nk(T' - T)$ which is the total heat absorbed
	* This is the first law of thermodynamics, $\Delta U = Q + W$ or energy conservation
* When we do work on the system, the particles that hit the wall will bounce back with greater velocity; this is why doing work on the system heats it up

## Heat Capacity

\noteDefn{The heat capacity is the amount of energy needed to change $T$ by 1 degree}

* However we have to specify which quantity we would like to keep fixed, whether that's $V$ or $p$ or something else
* We know $U = \frac{7}{2}NkT$ which gives a heat capacity of $\frac{7}{2}Nk$
* Heat capacity should stay constant with increasing $T$, but it does not -- the constant only occurs around temperatures of $10000\si{K}$
	* Below this temperature the heat capacity increases to discrete levels with increasing $T$
	* This is because of quantum mechanics
* At low temperatures there are only translational movements, then vibrational and transitional, and finally rotational, vibrational and translational at higher temperatures
	* At lower temperatures the collisions do not have enough energy to excite vibrational/rotational modes
	* Because of quantum mechanics, the molecules can either not rotate but rotate with some minimum energy

