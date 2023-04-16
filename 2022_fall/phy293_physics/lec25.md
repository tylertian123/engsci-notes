# Lecture 25 (2-9), Nov 15, 2022

## Copenhagen Interpretation Revisited

* The energy of a system is indeterminate until the measurement
	* Before the measurement, the wavefunction is a superposition of many eigenstates (e.g. $\psi _1, \psi _2, \psi _3, \cdots$)
* Measurements of the total energy will give the expectation value of $\hat H$
	* Each individual measurement will only give you $E_1, E_2, \cdots$ in quantized levels, but the probabilities of each energy makes it so that on average you measure the expectation value
* When the measurement happens, the wavefunction collapses to a certain eigenstate

## $\psi _n$ Form an Orthonormal Basis

* Orthonormality of $\psi _n$:
	* Define the inner product as $\int \psi _n^*\psi _m\,\dx$
	* Orthonormality means that $\int \psi _n^*\psi _m\,\dx = \delta _{mn}$ where $\delta _{mn}$ is the Kronecker delta
		* When $n = m$ since $\psi$ is normalized this is trivially true
		* Consider the infinite square well, then $\int \psi _n^*\psi _m\,\dx = \frac{2}{a}\int _0^a \sin\left(\frac{n\pi x}{a}\right)\sin\left(\frac{m\pi x}{a}\right)\,\dx = \delta _{mn}$
* Completeness:
	* Any arbitrary function can be expressed as some linear combination of $\psi _n$
	* $f(x) = \sum _{n = 1}^\infty c_n\psi _n$
	* For the infinite square well, this is $\sqrt{\frac{2}{a}}\sum _{n = 1}^\infty c_n\sin\left(\frac{n\pi x}{a}\right)$
		* This is a Fourier series, so this proves completeness
* Using these, we can show $\int \psi _m^*f(x)\,\dx = \sum _{n = 1}^\infty c_n\int \psi _m^*\psi _n\,\dx = \sum _{n = 1}^\infty \delta _{mn} = c_m$

## Interpretation of $c_n$

* $\braket{\hat H} = \sum _{n = 1}^\infty \abs{c_n}^2E_n$
* $\abs{c_n}^2$ is the "weight" of each energy

