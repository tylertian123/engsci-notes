# Lecture 21, Oct 27, 2022

## One Dimensional Heat Conduction Equation

* Consider heat conduction $x \to x + \Delta x$, surface area at $x$ is $A_x$; what is the temperature as a function of $x$?
* $\diff{h}{t} = mc_p\pdiff{T}{t} = \rho Vc_p\pdiff{T}{t} = \rho c_pA\dx\pdiff{T}{t}$
* Energy balance: $\rho c_pA\dx\pdiff{T}{t} = \dot Q_x - \dot Q_{x + \Delta x}$
	* In terms of heat flux, $\dot q_xA_x - \dot q_{x + \Delta x}A_{x + \Delta x}$
	* $\rho c_p\pdiff{T}{t} = -\frac{1}{A}\left(\frac{\dot q_xA_x - \dot q_{x + \Delta x}A_{x + \Delta x}}{\Delta x}\right)$
	* Take the limit $\Delta x \to 0$: $\rho c_p\pdiff{T}{t} = -\frac{1}{A}\pdiff{(\dot qA)}{x}$

### Cartesian Coordinates

* Consider Cartesian coordinates, constant area, then we can simplify this as $\rho c_p\pdiff{T}{t} = -\pdiff{\dot q}{x}$
* Putting this into Fourier's law, $\dot q = -k\diff{T}{x}$, we get $\rho c_p\pdiff{T}{t} = -\pdiff{}{x}\left(-k\pdiff{T}{x}\right)$
	* With a constant $k$, we get $\rho c_p\pdiff{T}{t} = k\pdiffn{2}{T}{x}$
	* Alternatively $\pdiff{T}{t} = \frac{k}{\rho c_p}\pdiffn{2}{T}{x} = \alpha\pdiffn{2}{T}{x}$
* $\alpha = \frac{k}{\rho c_p}$ is the thermal diffusivity, with units of $\si{m^2/s}$
	* Higher $k$ conducts heat well so the gradient is sharper
	* $\rho c_p$ stores energy well, so a lot of heat can enter the system without changing the temperature much
	* $\alpha = \SI{1.11e-4}{m^2/s}$ for copper, $\alpha = \SI{3.4e-7}{m^2/s}$
* For steady state, $\pdiff{T}{t} = 0$ so $\alpha\pdiffn{2}{T}{x} = 0$
	* Integrate this and we get that $\pdiff{T}{x}$ is a constant

### Cylindrical Coordinates

* In the radial direction Fourier's law is $\dot q = -k\pdiff{T}{r}$
* $A = 2\pi rL$
* $\rho c_p\pdiff{T}{t} = -\frac{1}{2\pi rL}\left(\pdiff{}{r}\left(2\pi r L\left(-k\pdiff{T}{r}\right)\right)\right) = \frac{k}{r}\pdiff{}{r}\left(r\pdiff{T}{r}\right)$
* $\pdiff{T}{t} = \frac{\alpha}{r}\pdiff{}{r}\left(r\pdiff{T}{r}\right)$
* For steady state, this simplifies to $\frac{\alpha}{r}\pdiff{}{r}\left(r\pdiff{T}{r}\right) = 0 \implies r\pdiff{T}{r} = 0$

### Spherical Coordinates

* $A = 4\pi r^2$, $\dot q = -k\pdiff{T}{r}$
* Doing the same derivation gets us $\rho c_p\pdiff{T}{t} = \frac{k}{r^2}\pdiff{}{r}\left(r^2\pdiff{T}{r}\right)$
* $\pdiff{T}{t} = \frac{\alpha}{r^2}\pdiff{}{r}\left(r^2\pdiff{T}{r}\right)$

\noteSummary{1D heat flow equations:
\begin{itemize}
	\item Cartesian coordinates: $$\pdiff{T}{t} = \alpha\pdiffn{2}{T}{x}$$
	\item Cylindrical coordinates (radial): $$\pdiff{T}{t} = \frac{\alpha}{r}\pdiff{}{r}\left(r\pdiff{T}{r}\right)$$
	\item Spherical coordinates (radial): $$\pdiff{T}{t} = \frac{\alpha}{r^2}\pdiff{}{r}\left(r^2\pdiff{T}{r}\right)$$
\end{itemize}
where $\alpha$ is the thermal diffusivity, $\alpha = \frac{k}{\rho c_p}$ \tcblower
In general, $$\pdiff{T}{t} = \frac{\alpha}{r^n}\pdiff{}{r}\left(r^n\pdiff{T}{r}\right)$$ where $n = 0$ for Cartesian, $n = 1$ for cylindrical and $n = 2$ for spherical}

