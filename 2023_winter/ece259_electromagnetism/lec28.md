# Lecture 28, Mar 24, 2023

## Magnetic Field Boundary Conditions

* Like the case with the electric field, we wish to find the boundary conditions for the tangential and normal $\vec B$ fields across a boundary, between medium $\mu _1$ and medium $\mu _2$, with the normal pointing from medium 2 to medium 1
* We can apply Gauss's law $\oiint _S \vec B \cdot \dd\vec s = 0$ to an infinitely short cylinder right on the boundary, we can conclude that $B_{n1} - B_{n2} = 0 \implies B_{n1} = B_{n2}$
	* In terms of magnetic field intensity, $\vec B = \mu _r\mu _0\vec H \implies \mu _{r1}H_{n1} = \mu _{r2}H_{n2}$
* For the tangential fields we can use an Amperian loop with width $\Delta L$ right on the boundary, so $\oint _C \vec H \cdot \dd\vec l = H_{t2}\Delta L - H_{t1}\Delta L = I_{enc} = J_s\Delta L$ where $J_s$ is the surface current density on the boundary
	* This gives us $H_{t2} - H_{t1} = J_s$ or more formally $\hat n_2 \times (\vec H_1 - \vec H_2) = \vec J_s$

\noteSummary{Boundary conditions for magnetic fields across two mediums (with surface normal pointing from material 2 to material 1): For the normal component: $$B_{n1} = B_{n2} \implies \mu _{r1}H_{n1} = \mu _{r2}H_{n2}$$ For the tangential component: $$H_{t2} - H_{t1} = J_s$$ for a $J_s$ normal to the tangential component, or $$\hat n_2 \times (\hat H_1 - \hat H_2) = \vec J_s$$}

* Due to this, as the field travels from a material with a low $\mu$ to one with high $\mu$, it will be bent towards the surface (tangential component becomes larger)
	* For ferromagnetic materials $\mu _r$ can be really high, so the field becomes essentially entirely tangential
	* This can be used to perform magnetic shielding

