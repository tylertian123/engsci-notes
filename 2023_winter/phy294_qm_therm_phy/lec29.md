# Lecture 29 (2-12), Mar 24, 2023

## When is a Gas No Longer Ideal?

* $S(U, N, V) = kN\left(\ln\left(\frac{V}{N}\left(\frac{4\pi mU}{2Nh^2}\right)^\frac{3}{2}\right) + \frac{5}{2}\right)$
* From this we can get $\frac{1}{T} = \pdiff{S}{U} = Nk\frac{3}{2}\frac{1}{U}$ so $U = \frac{3}{2}kNT$
* Written in terms of temperature, $S(T, N, V) = kN\left(\ln\left(\frac{V}{N}\left(\frac{2\pi mkT}{h^2}\right)^\frac{3}{2}\right) + \frac{5}{2}\right)$
* For sufficiently low $T$ this will give us a negative entropy, so some assumption must have been violated for a very cold gas
* The thermal de Broglie wavelength is $\lambda = \frac{h}{\sqrt{mkT}}$ (the regular de Broglie wavelength but with $p = \sqrt{mkT}$)
	* Larger mass and temperature decreases the thermal de Broglie wavelength
* Using $\lambda$ and $l^3 = \frac{V}{N}$, we get $S(T, N, V) \sim kN\ln\frac{l^3}{\lambda^3}$
	* $l$ is the typical distance between particles
	* The ideal gas holds whenever $l \gg \lambda$ -- that is, the typical distance between the particles is much larger than their de Broglie wavelength
	* When $l \gg \lambda$, the particles don't feel the quantum effects of the particles; when the two are comparable, quantum effects become important
* We can make a gas a "quantum gas" either by increasing the density (decreasing $l$) or lowering the temperature (increasing $\lambda$)
	* This is why we said that the ideal gas law only works when the gas is "not too cold" and "not too dense"

## Statistical Definition of Volume

* Recall that to define temperature, we considered two systems being brought together where only energy can be exchanged; to define pressure, we consider the same case, but now volume can be exchanged (i.e. one system expands while the other contracts)
* Consider 2 systems, with $N_1, N_2, V_1, V_2, E_1, E_2$, and $V_1 + V_2 = V, E_1 + E_2 = E$ are both fixed; we wish to find the equilibrium state (that is, we want to maximize $S_{tot} = S_1 + S_2$, subject to $E_1, V_1$)
* $S = S_1(E_1, V_1, N_1) + S_2(E - E_1, V - V_1, N_2)$
	* First, we need $\pdiff{S}{E_1} = \pdiff{S}{V_1} = 0$
	* As we previously studied, $\pdiff{S}{E_1} = 0$ gives us $\pdiff{S_1}{E_1} = \pdiff{S_2}{E_2} \implies \frac{1}{T_1} = \frac{1}{T_2}$
	* $\pdiff{S}{V_1} = \pdiff{S_1}{V_1} + \pdiff{S_2}{(V - V_1)}(-1) = 0 \implies \pdiff{S_1}{V_1} - \pdiff{S_2}{V_2} = 0$
	* Therefore equilibrium occurs when $\pdiff{S_1}{V_1} = \pdiff{S_2}{V_2}$, subject to $V_1 + V_2 = V$
	* $\pdiff{S}{V}$ has units of pressure over temperature
* This allows us to define the pressure $p$ such that $\frac{p}{T} = \pdiff{S}{V}$, so that two systems come to equilibrium in volume when the pressure of the two systems are equal
* Let's plug in our new definition of pressure into the Sackur-Tetrode formula
* $\frac{p}{T} = \pdiff{S}{V} = \frac{kN}{V}$
* Rearrange this and we get $pV = NkT$ which is the ideal gas law!
* Note that in order to have exchange of volume, there must be exchange of energy (because moving the wall would do work); the problem of exchanging volume without exchanging energy is ill-defined

