# Lecture 19 (2-2), Mar 2, 2023

## Temperature as a Measure of Average Kinetic Energy

* Several assumptions:
	* Molecules are uniformly distributed in space (at TD equilibrium)
	* Velocities are isotropically distributed (i.e. the number of particles with velocity in any given direction is the same)
		* This means $\frac{1}{N}\sum _{i = 1}^N v_{xi} = 0$ since there are always the same number of particles going in the positive vs. negative directions
	* The major assumption of the molecular model: all molecules have the same average speed in time
		* Let $\frac{1}{N}\sum _{i = 1}^N v_{xi}^2 = \bar v^2$
		* For now we assume all molecules move with the same speed that is the average
* Consider one wall with area $A$; what is the average force exerted on the wall due to the molecules?
	* How many molecules collide with the wall in time $\Delta t$?
		* Consider a volume formed by extending the area $A$ a distance $L$ into the gas, where $L = \bar v\Delta t$
		* Assume all molecules in the volume are moving either in the $+x$ or $-x$ directions (by isotropy this means each would have half the molecules)
			* We can integrate over solid angles if we don't make this assumption, but the conclusion is the same
			* Combined with the speed, this means all molecules in the box that are moving in the $+x$ direction would hit the wall, and no molecules outside the box will hit the wall (i.e. half of the molecules hit the wall)
		* Therefore the number of molecules that hit is $\frac{1}{2}\frac{N}{V}V = \frac{1}{2}\frac{N}{V}LA = \frac{1}{2}\frac{N}{V}\bar v\Delta tA$
	* What is the force caused by the collisions?
		* Each molecule has momentum $m\bar v$, which becomes $-m\bar v$ after colliding with the wall; therefore the total momentum transferred is $2m\bar v$
		* Total momentum transferred is then $\frac{N}{V}m\bar v^2\Delta tA$
		* Since $F = \diff{p}{t}$ the force is $\frac{N}{V}m\bar v^2A$
	* Therefore the pressure produced by this is $m\bar v^2\frac{N}{V}$
* Bring in the ideal gas law: $p = kT\frac{N}{V} = m\bar v^2\frac{N}{V}$, we get the conclusion that $kT = m\bar v^2$
	* Therefore temperature is a measure of the kinetic energy
	* But note $\bar v$ is only in the $x$ direction - what if we bring in the other directions?
	* With our isotropic assumption, we know that $\bar v$ is the same in any direction
	* Now consider $\overline{\vec v^2} = \frac{1}{N}\sum _i \norm{\vec v}^2 = \frac{1}{N}\sum _i v_{xi}^2 + v_{yi}^2 + v_{zi}^2 = 3\bar v^2$
	* Therefore $kT = m\bar v^2 = \frac{1}{3}m\overline{\vec v^2} \implies \frac{1}{2}m\overline{\vec v^2} = \frac{3}{2}kT$
* $\overline{\vec v^2} = \frac{3kT}{m}$ let $v_{rms} = \sqrt{\overline{\vec v^2}} = \sqrt{\frac{3kT}{m}}$
	* If we plugin numbers for e.g. nitrogen, we get hundreds of meters per second
	* This is also roughly the speed of sound

\noteImportant{For an ideal gas, $\frac{3}{2}kT$ is the average kinetic energy of the molecules in the gas}

## Classical Equipartition Theorem

* $T$ being a measure of average kinetic energy is an example of the classical equipartition theorem, which is proven using SM

\noteThm{Classical equipartition theorem: In thermodynamic equilibrium of a classical ideal gas, the average energy per degree of freedom of a molecule is:
\begin{enumerate}
	\item Translational: $\frac{1}{2}kT$
	\item Rotational: $\frac{1}{2}kT$
	\item Vibrational: $kT$
\end{enumerate}
}

* Depending on the kind of molecule, we can calculate what degrees of freedom it has and how many, from which we can calculate the average energy from the temperature
* This allows us to predict the heat capacity of gases
	* Actual heat capacities deviated from the prediction of the classical equipartition theorem because of quantum mechanics
* e.g. For a diatomic molecule, each atom has 3 DoF; overall in the molecule there are 3 translational degrees of freedom of the CoM, and 2 rotational degrees of freedom, and 1 vibrational degree of freedom
	* Therefore the average energy is $\frac{3}{2}kT + \frac{2}{2}kT + kT = \frac{7}{2}kT$
	* $U = N\frac{7}{2}kT$
* The idea of the equipartition theorem is that through collisions energy is distributed into all degrees of freedom (translational, rotational and vibrational)
* The reason reality deviates from this is due to the quantized vibrational energies in $\hbar\omega$ (since vibrations are harmonic oscillators), so if a molecule doesn't have enough energy it can't transfer energy into the vibrational degrees of freedom
	* If $kT \gg \hbar\omega$ then this won't have much effect, but at much lower temperatures this becomes important

