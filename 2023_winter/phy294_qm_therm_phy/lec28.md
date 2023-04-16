# Lecture 28 (2-11), Mar 23, 2023

## Ideal Gas (Sackur-Tetrode Formula)

* For a given $U$, how many microstates are there?
* $U = \sum _{i = 1}^N \frac{\vec p_i^2}{2m} \implies \sum _{i = 1}^N \vec p_i^2 = \sum _{i = 1}^N p_{xi}^2 + p_{yi}^2 + p_{zi}^2 = 2mU$
	* How many ways can be distribute this momentum to get the same $U$?
	* We want the sum of the squares of $3N$ numbers to equal $2mU$
	* This is a sphere that lives in $3N$-dimensional space, or $S^{3N - 1}$ in $\reals^{3N}$, with radius $r^2 = 2mU \implies r = \sqrt{2mU}$
* $p_x, p_y, p_z$ are all quantized in units of $\frac{\pi\hbar}{L}$ (where $L^3 = V$), like in the case of the infinite square well; these points form a grid in space, the sphere will hit some of these grid points, and each hit is a microstate
	* We only need the sphere to be close to these grid points
	* We expect that the number of hits is proportional to the area of the sphere, proportional to $r^{3N - 1}$, with $r$ defined by the energy
* The area of a $3N - 1$-dimensional sphere in $3N$ dimensions can be shown to be $\frac{2\pi^{\frac{3N}{2}}}{\Gamma\left(\frac{3N}{2}\right)}R^{3N - 1}$
	* If $\frac{3N}{2}$ is an integer this is $\frac{2\pi^{\frac{3N}{2}}}{\left(\frac{3N}{2} - 1\right)!}$
	* Therefore $\Omega(N, U) \sim \frac{2\pi^\frac{3}{2}N}{\left(\frac{3}{2}N - 1\right)!}\left(\sqrt{2mU}\right)^{3N - 1}$, but we have to fix it first:
		* The dimensions aren't consistent: to fix it, we divide $\sqrt{2mU}$ by a factor of $\frac{\pi\hbar}{L}$ first to make it unitless and make the units match
			* This basically converts the $p_i$ to $n_i$
		* The $n_i$ are always positive, so the $p_i$ must all be positive; this means we have to reduce the surface area by a factor of 2 for every axis
			* e.g. for a circle, if we restrict it to $x, y > 0$, we have to divide by a factor of 4; for a sphere, restricting it to the first quadrant divides by a factor of 8
		* The particles should be indistinguishable according to quantum mechanics, which means that if we swap the momenta of two particles, it stays in the same microstate
			* There are $N!$ ways to permute the momenta, which all lead to identical microstates, so we have to reduce $\Omega$ by a factor of $N!$
			* This is called the Gibbs factor, which he derived before QM
	* $\Omega(N, U) = \frac{2\pi^\frac{3}{2}N}{N!\left(\frac{3}{2}N - 1\right)!2^{3N}}\left(\frac{\sqrt{2mU}L}{\pi\hbar}\right)^{3N - 1}$
* Now to find the entropy $S = k\ln \Omega$
	* First use Stirling's approximation, $N! = \left(\frac{N}{e}\right)^N$ and ignore the -1
	* Substitute $L = V^\frac{1}{3}$
	* $\alignedeqntwo[t]{\Omega(N, U)}{\frac{e^N}{N^N}\frac{2}{(2^3)^N}\frac{2(\pi^\frac{3}{2})^N(e^\frac{3}{2})^N}{(3^\frac{3}{2})^N(N^\frac{3}{2})^N}\frac{V^N}{(\pi\hbar)^{3N}}\left((2mU)^\frac{3}{2}\right)^N}{\text{... I gave up ...}}$
	* $\alignedeqntwo[t]{S}{k\ln\Omega}{k\ln 2 + kN\ln\left(\left(\left(\frac{4\pi mU}{N}\right)^\frac{3}{2}\frac{1}{(2\pi\hbar)^3}\frac{V}{N}\right) + \frac{5}{2}\right)}{kN\ln\left(\left(\left(\frac{4\pi mU}{N}\right)^\frac{3}{2}\frac{1}{(2\pi\hbar)^3}\frac{V}{N}\right) + \frac{5}{2}\right)}$
		* This is known as the Sackur-Tetrode formula for the entropy of an ideal gas
	* Taking $\frac{1}{T} = \pdiff{S}{U} = Nk\frac{3}{2}\frac{1}{U} \implies U = \frac{3}{2}kNT$ which is the same as the one we got from equipartition
* What can we learn from this formula?
	* $S$ is on the same order as $kN$
	* For all the extensive quantities, e.g. $N, U, V$, if we double them, the entropy also doubles
	* $S$ increases with $U$, and levels off -- this is a normal system, the temperature increases with energy and we have a positive heat capacity
	* If we lower $U$ enough, then eventually the stuff inside the log will become less than 1, and we'll get a negative entropy, which is impossible -- therefore this formula does not work for gases with very low energy

