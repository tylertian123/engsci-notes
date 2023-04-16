# Lecture 12, Oct 4, 2022

## More on Entropy Balance

* Recall $\diff{S}{t} = \sum _j \frac{\dot Q_j}{T_j} + \dot S_{gen}$
* Consider a control volume where $\dot m_i, \dot m_e$ are the mass entry and exit rates
	* In addition to the heat transfer, the internal irreversibilities generating entropy, there is also entropy carried in by the mass
	* Entropy balance is then $\diff{s}{t} = \sum _j \frac{\dot Q_j}{T_j} + \sum _i \dot m_is_i - \sum _e \dot m_es_e + \dot s_{gen}$
		* Reversible system means $\dot s_{gen} = 0$
		* Adiabatic process has $\dot Q = 0$
		* Steady state systems have $\diff{s}{t} = 0$
		* With single-entry and single-exit systems $\dot m_i = \dot m_e$

\noteSummary{Entropy balance for a control mass: $\diff{s}{t} = \sum _j \frac{\dot Q_j}{T_j} + \dot s_{gen}$ \tcblower For a control volume: $\diff{s}{t} = \sum _j \frac{\dot Q_j}{T_j} + \sum _i \dot m_is_i - \sum _e \dot m_es_e + \dot s_{gen}$}

## Isentropic Steady Flow Devices

* Consider a burner outputting $\dot m, P_1, T_1$, how much work can we get out of it if we connect this to a turbine?
	* We know the inlet conditions, but we can't simply do $\dot mc_p(T_2 - T_1)$ because we don't have $T_2$
	* We know $P_2 = P_{atm}$
	* In the most ideal case, if we consider the turbine to have no internal irreversibilities and completely adiabatic, then the process is isentropic and $s_1 = s_2$
	* This allows us to get the work in the most ideal case

## Isentropic Efficiency

* In real life nothing is really isentropic, so how do we relate the numbers for the most ideal case to real life?
* Recall $s_2 - s_1 = c_p\ln\frac{T_2}{T_1} - R\ln\frac{P_2}{P_1}$
	* Assume constant pressure then $T_2 = T_1\exp\left(\frac{s_2 - s_1}{c_p}\right)$
* The curve of $T$ with respect to $s$ depends on $P$; at $P_1$ and $P_2$ there are two separate curves
	* By dropping down from $T_1, s_1$ vertically (isentropic) we can find $T_2$
	* In reality (non-isentropic process) we'd have to move to the right since entropy increases, which gives us a different (higher) $T_2$

\noteDefn{Isentropic efficiency for a turbine: $\eta _t = \frac{\left(\frac{\dot W}{\dot m}\right)_{\text{actual}}}{\left(\frac{\dot W}{\dot m}\right)_{\text{ideal}}}$ \tcblower For a compressor this would be $\eta _c = \frac{\left(\frac{\dot W}{\dot m}\right)_{\text{ideal}}}{\left(\frac{\dot W}{\dot m}\right)_{\text{actual}}}$}

* Assume constant $c_p$ then $\eta _t = \frac{h_2 - h_1}{h_{2s} - h_1} = \frac{c_p(T_2 - T_1)}{c_p(T_{2s} - T_1)} = \frac{T_2 - T_1}{T_{2s} - T_1}$
	* This is easy to measure and is typically provided by a turbine manufacturer (typically 80% to 90%)
* Do this in reverse and it works for a compressor
* For a nozzle it's defined in terms of KE: $\eta _{nozzle} = \frac{\frac{V_2^2}{2}}{\frac{V_{2s}^2}{2}}$

## Bernoulli's Equation

* Assume *inviscid* flow (no viscosity, no friction), so it can be modelled as a reversible flow
* Consider fluid entering a pipe at $V_1, P_1, z_1, T_1$ and exiting at $V_2, P_2, z_2, T_2$
* Assume flow is isentropic, incompressible
	* This is generally true for gases that aren't moving too fast
* This means $\Delta s = c\ln\frac{T_2}{T_1} = 0 \implies T_2 = T_1$
* $h_2 - h_1 = c(T_2 - T_1) + v(P_2 - P_1) = v(P_2 - P_1)$
* The energy balance equation becomes $\frac{P_2 - P_1}{\rho} + \frac{V_2^2 - V_1^2}{2} + g(z_2 - z_1) = 0$
	* Rearrange to $\frac{P_1}{\rho} + \frac{V_1^2}{2} + gz_1 = \frac{P_2}{\rho} + \frac{V_2^2}{2} + gz_2$
	* This means this is a constant

\noteDefn{Bernoulli's Equation: $\frac{P}{\rho} + \frac{V^2}{2} + gz = \text{const}$ (where $V$ is the velocity)}

* If we assume $z$ is roughly constant, then as velocity goes up, pressure goes down

