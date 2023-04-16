# Lecture 11, Oct 3, 2022

## Isentropic Processes

* For incompressible substances $\Delta s = c_{avg}\ln\frac{T_2}{T_1}$, then for an isentropic process $\Delta s = 0 \implies T_2 = T_1$
* Internal irreversibility: something within the system converting work into heat
	* An isentropic system is internally reversible
	* In some process, the less entropy you generate, the better it is (the ideal case would be completely isentropic)
* For an ideal gas $\Delta s = 0 \implies c_v\ln\frac{T_2}{T_1} = -R\ln\frac{v_2}{v_1} \implies \frac{T_2}{T_1} = \left(\frac{v_1}{v_2}\right)^\frac{R}{c_v}$
	* Recall $\gamma = \frac{c_p}{c_v}$ and $c_p - c_v = R$ so $\frac{T_2}{T_1} = \left(\frac{v_1}{v_2}\right)^{\gamma - 1}$
	* We can also show that $\frac{T_2}{T_1} = \left(\frac{P_2}{P_1}\right)^\frac{\gamma - 1}{\gamma}$
	* Combining the two we get $\frac{P_2}{P_1} = \left(\frac{v_1}{v_2}\right)^\gamma \implies P_1v_1^\gamma = P_2v_2^\gamma = \text{const}$
	* This is the equation for a polytropic process!

\noteImportant{A polytropic process ($Pv^n = \text{const}$) is isentropic if $n = \gamma$}

\noteSummary{For an isentropic process:
\begin{itemize}
	\item $\frac{T_2}{T_1} = \left(\frac{v_1}{v_2}\right)^{\gamma - 1}$
	\item $\frac{T_2}{T_1} = \left(\frac{P_2}{P_1}\right)^\frac{\gamma - 1}{\gamma}$
	\item $\frac{P_2}{P_1} = \left(\frac{v_1}{v_2}\right)^\gamma$
\end{itemize}
Where $\gamma = \frac{c_p}{c_v}$}

## Entropy Balance in a Control Mass

* $\Delta S = S_{in} - S_{out} + S_{gen}$, at equilibrium this is equal to 0
	* Entropy can be transferred in by heating the system and transferred out by cooling it down
* If the system is internally reversible, then $\Delta S = S_{in} - S_{out}$
* On a rate basis $\diff{S}{t} = \dot S_{in} - \dot S_{out} + \dot S_{gen}$
	* For a control mass the only way entropy can be transferred is via heat, so $\dot S_{heat} = \frac{\dot Q}{T}$ ($T$ is the temperature of the boundary where heat crosses)
	* $\diff{S}{t} = \sum _j \frac{\dot Q_j}{T_j} + \dot S_{gen}$ where $T_j$ are the local temperatures of the boundaries at which the heat crosses

