# Lecture 3, Sep 13, 2022

## Energy

* Energy can be macroscopic (changes in velocity or position, e.g. potential energy, kinetic energy) or microscopic (changes in temperature or pressure, e.g. heating up a gas, compressing a gas)
	* We will be talking about the microscopic forms today

\noteDefn{Internal energy $U$ are all microscopic (molecular) forms of energy stored in a system (e.g. "thermal energy", "chemical energy", etc)}

* The total energy of a system is $E = KE + PE + U$
	* Kinetic, potential, and internal energy are the only ways energy can be stored in a system
	* $E$ is an extensive property (it depends on the mass of the system)

\noteDefn{Extensive properties depend on the mass of the system (e.g. energy, volume); intensive properties do not depend on the mass of the system (e.g. temperature, pressure)}

* For any extensive property, we can define an intensive property by dividing by the mass
	* e.g. the specific volume $v = \frac{V}{m}$, the specific energy $u = \frac{U}{m}$

## Ideal Gas Model

* Assumptions of the model:
	* Hard spheres moving randomly
	* All with the same mass $m_e$
	* Collisions are elastic
	* No long range interactions, i.e. the only time the molecules interact is when they collide
		* Intermolecular forces within most gases are negligible since the molecules are so far apart
	* Molecules are point masses (no rotational KE, etc)
		* Good approximation for monoatomic gases and noble gases
* Consider a box, a cube of side $L$, and a molecule with velocity $c$ hitting a wall and bouncing off
	* $\Delta p_x = (-m_ec_x) - (m_ec_x) = -2m_ec_x$
	* With the change in momentum we can find the force
	* The distance travelled between successive collisions is $2L$ as the particle bounces off the opposite wall and comes back, so time between collisions is $\frac{2L}{c_x}$
	* The force on the wall is then $F = \frac{\Delta p}{\Delta t} = 2m_ec_x\frac{c_x}{2L} = \frac{m_ec_x^2}{L}$
	* Pressure on the wall would be $\frac{F}{A} = \frac{m_ec_x^2}{L} \cdot \frac{1}{L^2} = \frac{m_ec_x^2}{V}$
	* Summing up all the molecules, we get $\frac{1}{3}\frac{m}{V}c_{rms}^2$, where $c_{rms}$ is the root-mean-square velocity
		* Factor of 3 comes from there being 3 components in 3 principle directions
* Now $PV = \frac{1}{3}mc_{rms}^2$
	* As the velocity of molecules increases, momentum and frequency of impact increases, leading to an increase in pressure
* Note $m = NM$ where $M$ is the molar mass, so $PV = \frac{1}{3}NMc_{rms}^2 = NR_uT$
	* This allows us to relate the temperature to what's happening on the molecular level
	* $\frac{1}{2}Mc_{rms}^2 = \frac{3}{2}R_uT$
	* $\frac{1}{2}\frac{M}{N_A}c_{rms}^2 = \frac{1}{2}m_ec_{rms}^2 = \frac{3}{2}\frac{R_u}{N_A}T$
* $k = \frac{R_u}{N_A}$ is the Boltzmann constant

\noteImportant{The average kinetic energy of a molecule in the gas is related to the temperature by $\frac{1}{2}m_ec_{rms}^2 = \frac{3}{2}kT$}

* This means $\frac{3}{2}nkT$ where $n$ is the number of molecules of gas is the total kinetic energy of the gas

\noteImportant{$U = \frac{3}{2}NR_uT$ is the total kinetic energy of all the molecules, or the internal energy}

* In mass units this is $\Delta U = \frac{3}{2}mR(T_2 - T_1)$ where $R$ is the gas constant for the specific gas
* This means that a change in temperature is proportional to a change in internal energy
* Compressing a gas does work on it, increasing $U$, which leads to an increase in $T$

\noteImportant{For all ideal gases, $U$ is a function of $T$ exclusively, and not on pressure}

* For any ideal gas $\Delta U = mc(T_2 - T_1)$ where $c$ is the specific heat
	* $c = \frac{1}{m}\frac{\Delta U}{\Delta T}$
* For monoatomic gases we can expect $c = \frac{3}{2}R$

