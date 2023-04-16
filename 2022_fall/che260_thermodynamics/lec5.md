# Lecture 5, Sep 19, 2022

## Enthalpy

* Consider a hot water tank
	* To do work with it, we can transfer heat to expand a gas, doing work
		* The amount of work depends on the internal energy
	* We can also use the water's pressure
		* If we open the bottom of the tank, we can get more work than if we open the top of the tank
		* The amount of work depends on the pressure
* The ability to do work by a system depends on its pressure and internal energy
* Consider a bit of water coming out of the tank with volume $V$, mass $m$, pressure $P$, area $A$, moving by a distance $L$
	* The force exerted by the system to push the liquid out is $F = PA$, so work done is $PLA$
	* This is called the *flow work* $W_{flow} = pV$
	* The flow work per unit mass is $w_{flow} = \frac{W_{flow}}{m} = \frac{PV}{m} = Pv$ where $v$ is the specific volume
	* The flow carries $u + pv$ where $u$ is the internal energy per unit mass of the water

\noteDefn{Enthalpy $H = U + PV$, is a measure of the potential to do work}

* Enthalpy is an extensive property with units of Joules
* Define the specific enthalpy $h = \frac{H}{m}$, an intensive property
* For an ideal gas $u$ is a function of $T$ only, so in this case $h = u + Pv = u + RT$ is a function of $T$ only
* Consider rate of mass $\dot m_1$ entering the system and $\dot m_2$ exiting the system
	* Rate of energy entering the system is $\dot m_1(u_1 + P_1v_1)$
	* Rate of energy exiting the system is $\dot m_2(u_2 + P_2v_2)$
* Consider an isovolumetric process; add heat $\delta Q$ to a system resulting in $\dd U$
	* Since this is a constant volume process $\delta w = 0$, so $\delta Q = \dd U$, the heat added is directly added to internal energy
* Consider an isobaric process; add heat $\delta Q$
	* The system is allowed to expand, so it does work $\delta W = -P\,\dV$
	* Part of the energy put in becomes work
	* $\delta Q + \delta W = \dd U \implies \delta Q = \dd U + P\,\dV$
	* Note $H = U + PV \implies \dd H = \dd U + P\,\dV + V\,\dd P = \dd U + P\,\dV$ for a constant pressure process
	* For an isobaric process the heat added is equal to the change in enthalpy

## Specific Heats

* Add heat $Q$ to a mass $m$, resulting in $\Delta T$, then the specific heat $c_{avg} = \frac{Q}{m\Delta T} = \frac{q}{\Delta T}$
* The relationship between $q$ and $\Delta T$ is not necessarily linear, so $c(T)$ is a function of temperature

\noteDefn{The specific heat $c(t) = \frac{\delta q}{\dd T}$}

* Consider heating a system at constant volume ($\delta q = \dd u$)
	* Define the specific heat at constant volume $c_v = \pdiffc{u}{T}{V}$
* Define the specific heat at constant pressure $c_p = \pdiffc{h}{T}{P}$
* For an ideal gas, we can write these as total derivatives since $h$ and $u$ are functions of $T$ only
* Note $h = u + RT \implies \diff{h}{T} = \diff{u}{T} + R \implies c_p = c_v + R$

\noteImportant{For an ideal gas, $c_p = c_v + R$}
\noteDefn{The specific heat ratio $\gamma = \frac{c_p}{c_v}$}

* Assume $c_p, c_v$ are constants, then $\Delta u = c_v\Delta T, \Delta h = c_p\Delta T$
	* Use $T_{avg}$ to look up values of $c_p, c_v$
	* If we don't know $T_2$, we can guess $T_2$, calculate $T_{avg}$ then iterate guess for $T_2$
* Liquids and solids are incompressible, so $c_p = c_v = c = \diff{u}{T}$
	* In this case $\dd h = \dd u + v\,\dd P$
	* $\dd u = c\,\dT$
	* $\Delta h = \int _{T_1}^{T_2} c\,\dT + \int _{P_1}^{P_2} v\,\dd P$, where $c$ and $v$ are both constants
* For incompressible substances enthalpy can be increased by adding heat or increasing the pressure
* If the process is neither isobaric nor isovolumetric:
	* $\Delta u = c_v(T_2 - T_1)$
	* $\Delta h = c_p(T_2 - T_1)$
	* $u$ and $h$ are properties that are path independent, so even if the process is neither isobaric nor isovolumetric, we can equate it to them

