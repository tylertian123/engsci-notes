# Lecture 35 (2-18), Apr 10, 2023

## Maxwell-Boltzmann Speed Distribution

* We will consider as our "system" one of the particles and the rest of the particles as the "thermostat"; for our "system", what is $P(v)$, i.e. the probability density function of the speed?
* Applying the Boltzmann distribution gives us $P(v)\,\dv = ce^{-\frac{E}{kT}}v^2\,\dv = ce^{-\frac{mv^2}{2kT}}v^2\,\dv$
	* $v^2\,\dv$ is the number of microstates that have speed in $[v, v + \dv]$; this is proportional to the surface area of a sphere with radius $v$
	* The exponential term is the probability of each microstate with energy $v$
* After applying normalization, in 3D we get $P(v) = 4\pi\left(\frac{m}{2\pi kT}\right)^\frac{3}{2}v^2e^{-\frac{mv^2}{2kT}}$
	* In 2D, the number of microstates with speed in $[v, v + \dv]$ would be proportional to $v\,\dv$, since it is now proportional to the circumference of a circle with radius $v$
		* In 2D the function is linear near $v = 0$ and the peak is closer to 0
	* Note this distribution is for a classical gas, which breaks down as $v \to 0$
* $P(v)$ is maximum at $v^* = \sqrt{\frac{2kT}{m}}$
	* $\Braket{\frac{1}{2}mv^2} = \frac{m}{2}\intuinf{0} P(v)v^2\,\dv$ works out to be $\frac{3}{2}kT$, which once again verifies equipartition

## Intuition for the Partition Function

* Let the ground state have energy $E_0 = 0$, then $Z = \sum e^{-\frac{E}{kT}} = 1 + e^{-\frac{E_1}{kT}} + e^{-\frac{E_2}{kT}} + ...$
* The partition function tells us roughly which states are important and which ones are not important at a given temperature; it "partitions" the microstates into significant ones and insignificant ones
* If $E \gg kT$, its contribution to $Z$ will be very small, making them insignificant; they are *decoupled* from thermodynamics at the given temperature
	* Because $Z$ determines $F$, the thermodynamic potential, which determines macroscopic properties, this means these states are unimportant to the macroscopic behaviour
* e.g. at room temperature $kT \approx 0.02\si{eV}$, which allows us to ignore excitations in the electronic and nuclear states, because they have energies that are significantly larger
	* This is why we only need to consider translational, rotational and vibrational energies and not electronic and nuclear structures

## Equivalence of $T, V, N$ and $E, V, N$ Systems

* The Boltzmann distribution was derived with a different set-up, yet it still gives the same results in the case of the Einstein solid in the thermodynamic limit, if we use the average energy $\bar E = \braket{E}$
* We can show that in the TD limit, the two formulations will arrive at the same results
* The main difference is that for the Boltzmann distribution $E$ varies, but $E$ is constant for the multiplicity function approach
* We can find $\braket{E}$ as shown in the previous lecture and similarly $\braket{E^2}$ and using this we can find $\frac{\sigma _E^2}{N}$; this turns out to scale as $\frac{1}{\sqrt{N}}$
* In the thermodynamic limit with very large $N$, the variance of $E$ becomes negligible compared to $N$, so the spread of energies is minimal and the average energy becomes functionally the same as the energy itself

