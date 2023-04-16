# Lecture 13, Oct 6, 2022

## Energy of a Wave

* The wave's energy consists of both kinetic and potential energy
	* The potential energy comes from the bending of the string against tension
	* If the string has linear mass density $\mu$ and tension $\tau$ and a small segment has unstretched (i.e. horizontal) length $\dd x$, extended length $\dd s$
	* $\dd K = \frac{1}{2}\mu\dd x\left(\pdiff{y}{t}\right)^2$
	* Potential energy derivation is much more ugly but $\dd U = \frac{1}{2}\tau\dd x\left(\pdiff{y}{x}\right)^2$
* Let's analyze the energy of the $n$th mode: using $y_n(x, t) = A_n\sin\left(\frac{n\pi}{L}x\right)\cos(\omega _nt)$ and integrate over the length of the string
* Total energy is $E = \frac{1}{4}\mu\omega _n^2A_n^2L$
	* Notice, $\mu L$ is mass, and $A_n\omega _n$ is velocity of the oscillation
	* The $\frac{1}{4}$ is due to averaging
	* Note $\omega _n = \frac{n\pi v}{L}$ so $\omega _n^2$ is proportional to $n^2$
* If we integrate to one wavelength $E = \frac{1}{2}\mu\omega _n^2A_n^2\frac{L}{n} = \frac{1}{4}\mu\omega _n^2A_n^2\lambda _n$
* The power is $P = \frac{E_n}{T} = \frac{1}{4}\mu\omega _n^2A_n^2v$
	* Recall $\mu v = Z$ is the impedance

## Reflected Power

* The incident wave has power $Z_1A_i^2\omega^2$
* Reflected wave has $Z_1A_r^2\omega^2 = Z_1A_i^2R\omega^2$
* The average transmitted power is $Z_2A_t^2\omega^2 = Z_2(A_iT)^2\omega^2$
* The reflected power ratio is then $\frac{Z_1A_i^2R\omega^2}{Z_1A_i^2\omega^2}R^2$, sometimes defined as $R_e$
* The transmitted power ratio is then $T_e = \frac{Z_2}{Z_1}T^2$, *not* $T^2$!
* If we add $R^2 + \frac{Z_2}{Z_1}T^2$ we get 1, which shows conservation of energy
	* Therefore we can also define energy transmission coefficient as $T_e = 1 - R_e$

\noteSummary{Recall the amplitude reflection and transmission coefficients $R \equiv \frac{A_r}{A_i}, T \equiv \frac{A_t}{A_i}$ where $$R = \frac{Z_1 - Z_2}{Z_1 + Z_2}, T = \frac{2Z_1}{Z_1 + Z_2}$$ The power reflection and transmission coefficients are $$R_e \equiv \frac{P_r}{P_i} = R^2, T_e = \frac{P_t}{P_i} = \frac{Z_2}{Z_1}T^2$$ related by $T_e + R_e = 1$}

