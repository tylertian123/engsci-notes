# Lecture 33, Apr 5, 2023

## Transformer EMFs

* In the case of transformer EMFs the surface's relationship with $\vec B$ says constant
* $V_{emf} = -N\pdiff{\Phi}{t} = -N\iint _S \pdiff{}{t}\vec B \cdot \dd\vec s$
	* The $\Phi$ is total flux flowing through the loop; this includes both applied and the flux caused by the induced EMF
	* The induced EMF/current, through self inductance, will also cause its own EMF
	* $V_{emf} = -\pdiff{\Phi _{net}}{t} = -\pdiff{}{t}(\Phi _{app} + \Phi _{ind})$
* We can account for the effect of the induced current by including an inductor, $V = L\diff{I_{ind}}{t}$, so $V_{emf} = RI_{ind} + L\diff{I_{ind}}{t}$
* In general to actually find the induced current we need to solve a differential equation; but often we will just ignore the effects of the induced current, so $I_{ind} \approx \frac{V_{emf}}{R}$
	* This is a reasonable assumption when the self-inductance $L$ is small or $\diff{I}{t}$ is small

\noteImportant{At lower frequencies, self-inductance can be ignored; however, at higher frequencies, self-inductance must be accounted for through differential equations as they can have major impacts on overall behaviour}

