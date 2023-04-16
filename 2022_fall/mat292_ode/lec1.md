# Lecture 1, Sep 8, 2022

* Modelling temperature of a boba cup on a hot day: $u(t)$ where $T_0$ is the surrounding temperature
	* $u$ is the dependent variable, $t$ is the independent variable
* What is the problem with the following models?
	* $u' = u^2$
		* Temperature increases forever
	* $u' = u'' + 2u$
		* No dependence on the surrounding temperature
	* $u' = u - T_0$
		* $u$ does not approach $T_0$
	* $u' = T_0 - u$
		* The environment is not taken into account (e.g. if the type of liquid changed, the equation can't account for it)
* Newton's Law of Cooling: The rate of change of temperature is negatively proportional to the difference between the temperature difference between the object and its surroundings
	* $u' = -k(u - T_0)$
		* $k$ is the transmission coefficient

\noteNote{Newton was an avid boba drinker$^\text{[citation needed]}$}

* Solution:
	* $\alignedimp[t]{\diff{u}{t} = -k(u - T_0)}{\frac{\diff{u}{t}}{u - T_0} = -k}{\diff{}{t}\ln\abs{u - T_0} = -k}{\ln\abs{u - T_0} = -kt + C}{u - T_0 = Ae^{-kt}}{u = Ae^{-kt} + T_0}$
	* This gives us a family of curves, all with different initial conditions (*integral curves*)
	* In general we know $u(0)$ or $u(t_0)$ for some $t_0$ so we can solve for $A$

