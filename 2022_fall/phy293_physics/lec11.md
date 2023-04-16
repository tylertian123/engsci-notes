# Lecture 11, Oct 3, 2022

## Standing Waves

* Standing waves occur when the system is constrained in some form (fixed or free ends)
* The simplest standing wave just has the entire string oscillate up and down together (half wavelength)
	* Particles in the middle move a lot, with little pressure change; particles near the end don't really move but there is a lot of pressure change
* The next standing wave has one entire wavelength
	* The amplitude decreases
	* Frequency doubles from the first mode
* The next mode has 1.5 wavelengths, then 2 wavelengths, and so on
	* All these modes can exist at the same time
* If the ends are open then the entire pattern shifts and the most displacement happens at the ends instead (pattern is simply shifted)
* If one end is closed and the other is open, we can't fit a half wavelength anymore, so the modes have $0.25, 0.75, 0.125$ wavelengths and so on
	* However between the first and second modes the frequency triples

## Standing Waves Mathematically

* The solution is in the form of $y(x, t) = f(x)\cos(\omega t + \phi _i)$
	* $f(x)$ describes the amplitude along the wave
* Plugging the solution into the wave equation we get $v^2\pdiffn{2}{f}{x} = -\omega^2f(x)$
	* $\omega = k = \frac{2\pi}{\lambda}$
* The general solution must be $f(x) = A\sin(kx) + B\cos(kx)$
	* With the boundary condition that $x(0) = 0$ and $x(L) = 0$ we have $B = 0$
	* This gives us discrete solutions $\omega _n = \frac{n\pi v}{L}$ for a string fixed at both ends
	* $y(x, t) = A_n\sin\left(\frac{n\pi}{L}x\right)\cos(\omega _nt)$
* With both ends fixed $k_n = \frac{\pi n}{L}, \lambda _n = \frac{2L}{n}$
	* First mode fits a half wavelength (fundamental frequency)
	* Second mode fits a full wavelength (2nd harmonic or 1st overtone)
	* Difference in frequency between consecutive harmonics is $\Delta f = f_1 = \frac{v}{2L}$
	* $f_n = nf_1$
* For longitudinal standing waves $\Delta x(x, t) = A_{SW}\sin(kx)\sin(\omega t)$
	* What we actually hear is not $\Delta x$ but $\Delta P$
	* Pressure and particle displacement are 90 degrees out of phase, i.e. pressure change is maximum where displacement is minimum
	* Displacement nodes are always locations of pressure antinodes
* For a system open at both ends $x(0) = y_0, x(L) = y_0 \implies A = 0$
	* $y(x, t) = A_n\cos\left(\frac{n\pi}{L}x\right)\cos(\omega _nt), \omega _n = \frac{n\pi v}{L}$
* If the boundaries are not perfect you'd get a superposition of the two
* Frequencies for a system open on both ends have the same frequencies as the closed boundary one but shifted so that displacement is maximum on the ends
* For mixed boundaries, only odd harmonics are present
	* Fundamental frequency has a quarter of a wavelength $f_1 = \frac{v}{4L}$
	* Next is the third harmonic, then the 5th harmonic and so on

