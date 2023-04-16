# Lecture 33, Dec 5, 2022

## Piecewise Continuous Functions as Vectors

* The set of piecewise continuous functions on $(a, b)$ is denoted by $\text{PC}[a, b]$
* This set is closed under scalar multiplication and addition, so it forms a vector space
* We define the *inner product* of two members of $\text{PC}[a, b]$ as $\braket{f, g} = \int _a^b f(x)g(x)\,\dx$
	* The inner product is like a more generalized dot product
	* The usual properties of dot products are also satisfied: commutativity, linearity, distributivity, and $\braket{f, f} = 0$ if and only if $f = 0$
* Using the inner product we can define the *norm* as $\norm{f} = \sqrt{\braket{f, f}} = \sqrt{\int _a^b (f(x))^2\,\dx}$
* $f, g \in \text{PC}[a, b]$ are *orthogonal* if $\braket{f, g} = \int _a^b f(x)g(x)\,\dx = 0$

\noteDefn{A set of functions $$S = \Set{\phi _1(x), \phi _2(x), \cdots} \in \text{PC}[a, b]$$ are orthogonal if $$\braket{\phi _n, \phi _m} = 0, n \neq m$$ and orthonormal if $$\norm{\phi _n} = 1, \forall n$$ i.e. $\braket{\phi _n, \phi _m} = \delta _{mn}$}

## Fourier's Theorem

* An important orthonormal set on $\text{PC}[-L, L]$ is $\Set{\sqrt{\frac{2}{L}}\frac{1}{2}, \sqrt{\frac{1}{L}}\sin\left(\frac{m\pi x}{L}\right), \sqrt{\frac{1}{L}}\cos\left(\frac{m\pi x}{L}\right), \cdots : m \in \naturals}$
	* $\int _{-\pi}^\pi \sin(nx)\cos(mx)\,\dx = \int _{-\pi}^\pi \sin(nx)\sin(mx)\,\dx = \int _{-\pi}^\pi \cos(nx)\sin(mx)\,\dx = \delta _{mn}\pi$

\noteThm{Fourier's Theorem: suppose $f$ is periodic with period $2L$, $f, f' \in \text{PC}[-L, L]$, then $f$ can be expressed as a Fourier series: $$f(x) = \frac{a_0}{2} + \sum _{m = 1}^\infty \left(a_m\cos\left(\frac{m\pi x}{L}\right) + b_m\sin\left(\frac{m\pi x}{L}\right)\right)$$ with Fourier coefficients given by \begin{align}a_0 &= \frac{1}{L}\Braket{f(x), 1} \\ a_m &= \frac{1}{L}\Braket{f(x), \cos\left(\frac{m\pi x}{L}\right)} \\ b_m &= \frac{1}{L}\Braket{f(x), \sin\left(\frac{m\pi x}{L}\right)}\end{align}}

* The Fourier theorem is the direct analogue of the fact that you can represent a vector in another basis by taking the dot product of the vector with each of the basis vectors if the basis is orthonormal
	* A Fourier transform is nothing but a change of basis
* In the case of the discrete Fourier transform, $Ff = \hat f$, and due to orthonormality $F^T\hat f = f$

