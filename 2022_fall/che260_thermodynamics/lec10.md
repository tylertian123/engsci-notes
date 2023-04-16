# Lecture 10 (Videos)

## Postulate of Thermodynamics

* *Fundamental properties* are properties that cannot be explained in simpler terms:
	* By defining them we are postulating fundamental assumptions
* Fundamental properties (postulates):
	* Mass: matter exists
	* Volume: matter takes up space
	* Energy: matter moves and interacts
	* Entropy: interactions between pieces of matter lead to equilibrium
* Other properties:
	* Time is a fundamental property, but we don't care about it since we only deal with equilibrium states which are independent of time
	* All other properties can be expressed in terms of fundamental properties (including temperature and pressure)
* Four Postulates:
	* State Postulate: All isolated systems reach a state of equilibrium; the equilibrium state of a pure, simple compressible substance is completely described by its mass, volume, and internal energy
		* $S = S(U, V, m)$
	* First Law: The change in energy of a closed system equals the net energy transferred to it in the form of work and heat
		* $Q + W = \Delta E$
	* Second Law: The entropy of an isolated system increases until equilibrium, at which point it remains constant
		* $\Delta S \geq 0$
	* Third Law: The entropy of a pure substance in equilibrium at absolute zero is zero
		* $S = 0$ at $T = 0$
* Using these fundamental properties and postulates we can develop thermodynamics as a logical system

## Defining Temperature

* $T$ can be defined in terms of fundamental properties
* Consider system $A$ and $B$ at different temperatures, brought together to form system $C$; what is the condition for $C$ to reach thermal equilibrium?
	* The two systems have $m_A, V_A, m_B, V_B$ fixed, so only $U_A, U_B$ may change
	* $S_C = S_A(U_A, V_A, m_A) + S_B(U_B, V_B, m_B) \implies \dS_C = \pdiff{S_A}{U_A}\dd U_A + \pdiff{S_B}{U_B}\dd U_B$
	* At equilibrium $\dS_C = 0$ (entropy is constant)
	* $C$ is isolated so $U_C = U_A + U_B = \text{const} \implies \dd U_A = -\dd U_B$
	* Substituting this we have $\dS_C = \left(\pdiff{S_A}{U_A} - \pdiff{S_B}{U_B}\right)\dd U_A = 0$
	* Therefore for thermal equilibrium we must have $\pdiff{S_A}{U_A} = \pdiff{S_B}{U_B}$ -- what does this mean?

\noteDefn{Temperature $T = \pdiffc{U}{S}{m, V}$}

* The equilibrium condition becomes $\pdiff{S_A}{U_A} = \pdiff{S_B}{U_B} \implies \frac{1}{T_A} = \frac{1}{T_B} \implies T_A = T_B$
	* This satisfies our understanding of temperature since the system is at thermal equilibrium when temperatures are the same
* If $T_A > T_B$ then $\dS_C = \left(\frac{1}{T_A} - \frac{1}{T_B}\right)\dd U_A > 0$ must be true; to satisfy this $\dd U_A < 0$
	* This means energy of system $A$ decreases while energy of $B$ increases
	* This matches our understanding since we have heat transfer from $A$ to $B$

## Defining Pressure

* Consider a container with two compartments $A$ and $B$ separated by a locked piston, initially with different pressures; when the piston is removed the system goes to equilibrium; what is the equilibrium condition?
	* $S_C = S_A(U_A, V_A, m_A) + S_B(U_B, V_B, m_B) \implies \dS_C = \pdiff{S_A}{U_A}\dd U_A + \pdiff{S_A}{V_A}\dd V_A + \pdiff{S_B}{U_B}\dd U_B + \pdiff{S_B}{V_B}\dd V_B$
	* Energy and volume are constant so $\dd U_A = -\dd U_B, \dd V_A = -\dd V_B$
	* $\dS_C U = \left(\pdiff{S_A}{U_A} - \pdiff{S_B}{U_B}\right)\dd U_A + \left(\pdiff{S_A}{V_A} - \pdiff{S_B}{V_B}\right)\dd V_A = \left(\frac{1}{T_A} - \pdiff{1}{T_B}\right)\dd U_A + \left(\pdiff{S_A}{V_A} - \pdiff{S_B}{V_B}\right)\dd V_A$
	* For a system at equilibrium $T_A = T_B$ so $\pdiff{S_A}{V_A} = \pdiff{S_B}{V_B}$

\noteDefn{The thermodynamic pressure $P$, such that $\frac{P}{T} = \pdiffc{S}{V}{m, U} \implies P = T\pdiffc{S}{V}{m, U}$}

* Substituting this back in we have $\dd S_C = \left(\frac{1}{T_A} - \frac{1}{T_B}\right)\dd U_A + \left(\frac{P_A}{T_A} - \frac{P_B}{T_B}\right)\dd V_A$
	* At equilibrium we would require $T_A = T_B, P_A = P_B$
	* If the system is not at equilibrium (assume $T_A = T_B = T$, but $P_A > P_B$), then $\dd S_C = \left(\frac{P_A}{T} - \frac{P_B}{T}\right)\dd V_A > 0 \implies (P_A - P_B)\dd V_A > 0 \implies \dd V_A > 0$
	* This means system $A$, at higher pressure, expands while system $B$ contracts, which matches our understanding of pressure

## Calculating Entropy Changes

* In terms of intensive properties $\frac{1}{T} = \pdiffc{s}{u}{v}, \frac{P}{T} = \pdiffc{s}{v}{u}$
* $s = s(u, v) \implies \ds = \pdiffc{s}{u}{v}\du + \pdiff{s}{v}{u}\dv = \frac{1}{T}\du + \frac{P}{T}\dv$

\noteImportant{The Gibbs Equation: $\ds = \frac{1}{T}\du + \frac{P}{T}\dv$ \tcblower Alternative form: $\ds = \frac{\dd h}{T} - \frac{v}{T}\dd P$}

* This gives us the change in entropy as a function of things we can easily measure
* For an impressible substance, $\dv = 0 \implies \ds = \frac{1}{T}\du$ and $c_p = c_p = c$ and $\du = c(T)\dd T$, so $\ds = c(T)\frac{\dd T}{T}$
	* $\Delta s = s_2 - s_1 = \int _{T_1}^{T_2} c(T)\frac{\dd T}{T}$
	* $\Delta s = c_{avg}\ln\frac{T_2}{T_1}$
	* Notice $\Delta s = c_{avg}(\ln T_2 - \ln T_1)$, compare to $\Delta u = c_{avg}(T_2 - T_1)$
* For an ideal gas $\du = c_v(T)\dd T$ and $\frac{P}{T} = \frac{R}{v} \implies \ds = \frac{c_v(T)}{T}\dd T + R\frac{\dv}{v}$
	* $\Delta s = \int _{T_1}^{T_2} c_v(T)\frac{\dd T}{T} + \int _{v_1}^{v_2} R\frac{dv}{v}$
	* Assume constant $c_v$, then $\Delta s = c_v\ln\frac{T_2}{T_1} + R\ln\frac{v_2}{v_1}$
	* This gives $\Delta s = \Delta s(T, v)$
	* From the ideal gas equation $\frac{T_2}{T_1} = \frac{P_2}{P_1}\frac{v_2}{v_1}$ so $\Delta s = c_v\ln\frac{P_2}{P_1} + (c_v + R)\ln\frac{V_2}{V_1}$
	* This gives $\Delta s = \Delta s(P, v) = c_v\ln\frac{P_2}{P_1} + c_p\ln\frac{v_2}{v_1}$
	* For $\Delta s(P, T)$: $T\ds = \du + P\dv$, $h = u + Pv \implies \dd h = \du + P\dv + v\dd P \implies \du + P\dv = \dd h - v\dd P \implies T\ds = \dd h - v\dd P$
		* Alternative form of the Gibbs equation: $\ds + \frac{\dd h}{T} - \frac{v}{T}\dd P$
	* For an ideal gas $\dd h = c_p(T)\dd T$ and $\frac{v}{T} = \frac{R}{P}$ so $\ds = \frac{c_p(T)}{T}\dd T - R\frac{\dd P}{P}$
		* $\Delta s(P, T) = c_p\ln\frac{T_2}{T_1} - R\ln\frac{P_2}{P_1}$

\begin{note-summary}
For constant specific heat, for an ideal gas:
\begin{itemize}
	\item $\Delta s(T, v) = c_v\ln\frac{T_2}{T_1} + R\ln\frac{v_2}{v_1}$
	\item $\Delta s(P, v) = c_v\ln\frac{P_2}{P_1} + c_p\ln\frac{v_2}{v_1}$
	\item $\Delta s(P, T) = c_p\ln\frac{T_2}{T_1} - R\ln\frac{P_2}{P_1}$
\end{itemize}

\tcblower

For an incompressible substance, $\Delta s = c_{avg}\ln\frac{T_2}{T_1}$
\end{note-summary}

* For variable specific heat, consider $\int _{T_1}^{T_2} c_p(T)\frac{\dd T}{T} = \int _{T_{ref}}^{T_2} c_p(T)\frac{\dd T}{T} - \int _{T_{ref}}^{T_1} c_p(T)\frac{\dd T}{T}$
* Define $s^0(T_0) = \int _{T_{ref}}^{T_0} c_p(T)\frac{\dd T}{T}$, so that we can instead use $s^0(T_2) - s^0(T_1)$ instead of $c_v\ln\frac{T_2}{T_1}$ whenever specific heat is nonconstant
	* Air tables list these values of $s^0$
	* Usually $s^0 = 0$ at $T_{ref} = 0\si{K}$

\noteImportant{When $c_p$ is nonconstant, instead of $c_p\ln\frac{T_2}{T_1}$, use $s^0(T_2) - s^0(T_1)$}

