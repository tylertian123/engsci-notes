# Lecture 24, Nov 3, 2022

## Heat Conduction in Cylinders and Spheres

* Consider a cylinder with a $z$ axis and a radial axis $r$, with pipe length $L$
	* For a long pipe $\diff{T}{z} \ll \diff{T}{c}$ so we can assume 1D heat conduction
* We want to solve the heat conduction equation to get $T(r)$
* Recall $\pdiff{}{r}\left(r\pdiff{T}{r}\right) = 0$ at steady state, with boundary conditions $T(r_1) = T_1, T(r_2) = T_2$
	* Integrate: $r\diff{T}{r} = c_1 \implies \diff{T}{r} = \frac{c_1}{r}$
	* Integrate again: $T(r) = c_1\ln r + c_2$
	* Apply boundary conditions:
		* $T_1 = c_1\ln r_1 + c_2, T_2 = c_1\ln r_2 + c_2$
		* Take the difference: $T_1 - T_2 = c_1\ln\frac{r_1}{r_2}$
		* $c_1 = \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}$
		* Plug this back in and we get $T_2 = \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}} + c_2$ so $c_2 = T_2 - \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\ln r_2$
		* Plug back in and simplify: $T(r) = \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\ln(r) - \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\ln r_2 + T_2$
		* $T(r) = \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\ln\frac{r}{r_2} + T_2$
* Consider heat transfer, which is constant at steady state
	* $\dot Q_{cond} = -kA_1\eval{\diff{T}{r}}{r = r_1} = -kA_2\eval{\diff{T}{r}}{r = r_2}$
	* $\diff{T}{r} = \frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\frac{1}{r}$
	* $\dot Q_{cond} = -k(2\pi r_1L)\left(\frac{T_1 - T_2}{\ln\frac{r_1}{r_2}}\frac{1}{r_1}\right) = \frac{2\pi Lk}{\ln\frac{r_2}{r_1}}(T_1 - T_2)$
* Define the thermal resistance of a cylinder as $R = \frac{T_1 - T_2}{\dot Q} = \frac{\ln\frac{r_2}{r_1}}{2\pi Lk}$
* For a sphere, we can do a similar derivation and get $R = \frac{r_2 - r_1}{4\pi r_1r_2k}$

\noteSummary{For 1D heat conduction in a cylinder: $$T(r) = \frac{T_1 - T_2}{\ln\left(\frac{r_1}{r_2}\right)}\ln\left(\frac{r}{r_2}\right) + T_2$$ which gives a thermal resistance of $$R_{\text{cylinder}} = \frac{\ln\left(\frac{r_2}{r_1}\right)}{2\pi Lk}$$ For a sphere this is $$R_{\text{sphere}} = \frac{r_2 - r_1}{4\pi r_1r_2k}$$ For heat convection and radiation, the equations are the same as the Cartesian case, but note areas are no longer constant}

## Convection in Cylinders and Spheres

* Consider water in a pipe, with water $T_{\infty,1}$ and inner heat transfer coefficient $h_1$ and surrounding air $T_{\infty,2}$ and outer $h_2$
* For the total heat transfer we need to consider the convection from the water to the pipe, conduction through the pipe and convection to the outside air
* The main thing to watch out for is that the areas are not constant in cylindrical coordinates
* $R_{total} = \frac{1}{2\pi r_1Lh_1} + \frac{\ln\frac{r_2}{r_1}}{2\pi Lk} + \frac{1}{2\pi r_2Lh_2}$

