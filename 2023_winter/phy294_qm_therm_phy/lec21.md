# Lecture 21 (2-4), Mar 6, 2023

## Discrepancy in Heat Capacity -- Effect of Quantum Mechanics

* Based on quantum mechanics, can we estimate the energy where molecules have enough energy to excite rotations?
* Consider a hydrogen molecule: interatomic distance of $\SI{0.7e-10}{m}$ and mass of $\SI{1e-27}{kg}$
	* The momentum is $L = I\dot\phi$ classically, rotational energy is $\frac{1}{2}I\dot\phi^2 = \frac{L^2}{2I}$
	* Moment of inertial is given by $I \sim mr^2$
	* Angular momentum is quantized, we can consider it as either $L = 0$ for no rotation or $L \geq \hbar^2$ for some rotation
	* Therefore the minimum energy of rotation is $E \sim \frac{\hbar^2}{I}$
	* $I \sim \SI{1e-27}{kg}(\SI{0.7e-10}{m})^2 = \SI{1e-48}{kg.m^2}$
	* This gives the minimum energy on the order of $\SI{1e-20}{J}$
	* If we compare this to $kT$, we get that a temperature on the order of $1000\si{K}$ is needed to have enough energy to excite rotations

## First Law of Thermodynamics

* $\Delta U = Q + W$, where $Q$ is the heat absorbed and $W$ is the work done on the system
* Consider a piston of area $A$ being pushed against a gas with pressure $p$, volume $V$ for length $\dx$
	* $\dx$ is positive of the gas expands, negative if it contracts
	* The force is $pA$, therefore the work done by the gas is $pA\,\dx = p\,\dV$
	* Let $\dd U = \delta Q - p\,\dV$, where $\delta Q$ is some small amount of heat resulting from this
		* Note the sign on $p\,\dV$ since here it's the work done on the gas, not by the gas
	* This is the first law expressed in terms of infinitesimal changes

## Isothermal Processes

\noteDefn{A \textit{quasistatic} process is one where the process is slow enough such that the system is in thermodynamic equilibrium for every moment of the process}

* How do finite changes of $V$ affect the state of the system?
	* We need to make assumptions about the nature of the change
	* This question is easy to answer if the process is *quasistatic*
		* In a non-quasistatic expansion we'll get a depletion of gas density near the piston as it moves, so the force it experiences will be less
		* Therefore the work done in a quasistatic expansion is strictly larger than the work in a non-quasistatic expansion
	* For such processes we can find the work done by $W = \int _{V_i}^{V_f} p(V, T)\,\dV$
		* If the temperature is constant (*isothermal* process), then $W = \int _{V_i}^{V_f} \frac{NkT}{V}\,\dV = NkT\ln\left(\frac{V_f}{V_i}\right)$
		* To keep the process as isothermal we need to keep it in contact with a thermal reservoir, and now the process must be slow enough that we get both pressure and temperature equilibrium
	* For an isothermal process $\Delta U = Q - NkT\ln\left(\frac{V_f}{V_i}\right)$, but since $U$ is dependent only on $T$ for an ideal gas, we must have $Q = NkT\ln\left(\frac{V_f}{V_i}\right)$
* For an isothermal process $pV = \textit{const}$ so on a P-V diagram this shows up as a curve $P = \frac{C}{V}$
	* The area under this curve is the work done by the process

