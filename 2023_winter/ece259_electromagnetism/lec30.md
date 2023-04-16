# Lecture 30, Mar 29, 2023

## Magnetic Circuits

* In a magnetic circuits, sources are MMF, $V_m = NI_0$ where $I_0$ is the current and $N$ is the number of loops
	* The direction of the winding determines the direction of the source
* Reluctance $R = \frac{L}{\mu S}$ is analogous to resistance in an electric circuit
* The magnetic flux $\Phi _i$ through the cross-section is analogous to electric current
* Permeability $\mu$ is analogous to conductivity $\sigma$ in an electric circuit
* The usual laws of circuits apply:
	* $\sum _j V_{mj} = \sum _k R_k\Phi _k$ for a loop, like KVL
	* $\sum _i \Phi _i = 0$ for a node, like KCL
* Using the normal circuit analysis techniques (nodal, mesh analysis), we can find all fluxes
* To find the field, we assume a constant $B$ in each cross section, so $B = \frac{\Phi}{S}$

## Self and Mutual Inductance

* The field created by a current can cause fluxes in its own loop, or other loops

\noteDefn{\textit{Inductance} is defined as the amount of flux produced by a source per unit source, $$L = \frac{\Lambda}{I} = \frac{N\Phi}{I}$$ where $\Lambda = N\Phi$ is the \textit{flux linkage}; it is the dual of capacitance \tcblower Both self and mutual inductance exist, with $$L_{ab} = \frac{N_b\Phi_{ab}}{I_a}$$ denoting the inductance in $b$ caused by $a$}

* Mutual inductances $L_{12} = L_{21}$
* Example: self-inductance of a toroid, magnetic core with $N$ cores carrying current $I_0$
	* First find the current, from there find the field, then flux, then inductance
	* Using Ampere's law with a contour aligned with the field, $2\pi rB = \mu _r\mu _0N_1I_1 \implies \vec B = \frac{\mu _r\mu _0N_1I_1}{2\pi r}\hat a_\phi$
	* Integrate across the cross-section, $\Phi _{11} = \iint \vec B_1 \cdot \dd\vec s_1 = \int _0^h\int _a^b \frac{\mu _r\mu _0N_1I_1\hat a_\phi}{2\pi r} \cdot \hat a_\phi\,\dr\,\dz$
	* Result: $L_{11} = \frac{\mu _r\mu _0 N_1^2h}{2\pi}\ln\frac{b}{a}$
	* Notice:
		* More turns directly leads to greater inductance
		* Greater area also leads to greater inductance
		* This only depends on geometry and material, never the current, etc

