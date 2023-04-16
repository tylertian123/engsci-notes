# Lecture 20, Mar 4, 2022

## The Binomial Series

* Binomial theorem: $(a + b)^k = \sum _{n = 0}^k \binom{k}{n}a^{k - n}b^n$ where $\binom{k}{n} = \frac{k(k - 1)(k - 2)\cdots(k - n + 1)}{n!} = \frac{k!}{(k - n)!n!}$ and $\binom{k}{0} = 1$
* Consider $(1 + x)^k = \sum _{n = 0}^k \binom{k}{n} x^n$ which is a power series
* With the binomial theorem, we assumed that $k$ is a positive integer; now we show that this works for all values of $k$ but the series becomes infinite
* Using the Maclaurin series for $(1 + x)^k$:
	* Derivatives:
		* $f(x) = (1 + x)^k \implies f(0) = 1$
		* $f'(x) = k(1 + x)^{k - 1} \implies f'(0) = k$
		* $f''(x) = k(k - 1)(1 + x)^{k - 2} \implies f''(0) = k(k - 1)$
		* $f^{(n)}(0) = k(k - 1)(k - 2)\cdots(k - n + 1)$
	* $f(x) = \sum _{n = 0}^\infty \frac{k(k - 1)(k - 2)\cdots(k - n + 1)}{n!}x^n = \sum _{n = 0}^\infty \binom{k}{n}x^n$
	* Notice that if $k$ is a positive integer, then at $n = k + 1$ we get a zero term in the derivative, which truncates the series
* Ratio test: $\abs*{\frac{a_{n + 1}}{a_n}} = \abs*{\frac{k - n}{n + 1}x} \underset{n \to \infty}{\to} \abs{x}$
	* The binomial series converges for $\abs{x} < 1$
	* For the endpoints:
		* $k \leq -1 \implies I = (-1, 1)$
		* $-1 < k < 0 \implies I = (-1, 1]$
		* $k \geq 0 \implies I = [-1, 1]$
* Example: $f(x) = \frac{1}{\sqrt{2 + x}} = (2 + x)^{-\frac{1}{2}} = \frac{1}{\sqrt{2}}\left(1 + \frac{x}{2}\right)^{-\frac{1}{2}} \implies k = -\frac{1}{2}$
	* $f(x) = \frac{1}{\sqrt{2}} \sum _{n = 0}^\infty\binom{-\frac{1}{2}}{n}\left(\frac{x}{2}\right)^n = \frac{1}{\sqrt{2}}\left(1 - \frac{1}{2}\frac{x}{2} + \frac{3}{4}\frac{\left(\frac{x}{2}\right)^2}{2!} + \cdots\right)$
	* Radius of convergence: $\abs*{\frac{x}{2}} < 1 \implies \abs{x} < 2, R = 2$
	* Since $-1 < k = -\frac{1}{2} < 0$ the interval of convergence is $(-2, 2]$
* Linearization: If we take the first degree Taylor polynomial we get $(1 + x)^k \approx 1 + kx$

## Fourier Series

* Fourier series allow us to represent any periodic function as an infinite sum of sines and cosines
* Definition: A function is periodic with period $T$ if $f(t + T) = f(t)$ for all $t$
	* The smallest $T$ for which this holds is called the *fundamental period*
	* e.g. $\cos(\pi t)$ has a fundamental period of 2; $\sin(2\pi t)$ has a fundamental period of 1; $\cos(\pi t) + \sin(2\pi t)$ has a fundamental period of 2, the larger of the 2 periods
* Theorem: Let $f(t)$ be a piecewise continuous and piecewise differentiable periodic function with fundamental period $T$, then $f(t) = \frac{a_0}{2} + \sum _{n = 1}^\infty a_n\cos(n\omega t) + b_n\sin(n\omega t)$ where $\omega = \frac{2\pi}{T}$ (known as the *Fourier* series of $f$)
	* Note: Piecewise differentiability means we only have a finite number of places where the function is not differentiable
	* $a_0$ is divided by 2 to allow us to write a single definition for the $a_n$s
	* $a_n, b_n$ are known as the Fourier coefficients; finding a Fourier series is all about finding these coefficients
* Note $\int _{-\frac{T}{2}}^\frac{T}{2} \cos(n\omega t)\,\dt = \twocond{0}{n \neq 0}{T}{n = 0}$ as the positive and negative parts exactly cancel each other out
* Similarly $\int _{-\frac{T}{2}}^\frac{T}{2} \sin(n\omega t)\,\dt = 0$
* $\int _{-\frac{T}{2}}^\frac{T}{2} \cos(m\omega t)\cos(n\omega t)\,\dt = \int _{-\frac{T}{2}}^\frac{T}{2} \sin(m\omega t)\sin(n\omega t)\,\dt = \twocond{0}{m \neq n}{\frac{T}{2}}{m = n}$
* $\int _{-\frac{T}{2}}^\frac{T}{2} \cos(m\omega t)\sin(n\omega t)\,\dt = 0$
	* See section 7.2
* To find the Fourier coefficients, we multiply the series through by sine or cosine and then integrate, so that all terms except for the one we want go to zero
	* $\int _{-\frac{T}{2}}^\frac{T}{2} f(t)\cos(m\omega t)\,\dt = \int _{-\frac{T}{2}}^\frac{T}{2} a_m\cos(m\omega t)\cos(m\omega t)\,\dt + \sum \int _{-\frac{T}{2}}^\frac{T}{2} a_n\cos(m\omega t)\cos(n\omega t)\,\dt = \frac{T}{2}a_m$
* Fourier coefficients are given by $a_n = \frac{2}{T}\int _{-\frac{T}{2}}^\frac{T}{2} f(t)\cos(n\omega t)\,\dt, b_n = \frac{2}{T}\int _{-\frac{T}{2}}^\frac{T}{2} f(t)\sin(n\omega t)\,\dt$
	* $n = 0, 1, \cdots$ for $a_n$ but starts at $1$ for $b_n$
		* For $n = 0$, $b_0$ is just $0$ so we skip it
		* Notice that for $n = 0$, $a_0 = \frac{2}{T}\int _{-\frac{T}{2}}^\frac{T}{2} f(t)\,\dt$ which is just the average value of $f$ over one period (times 2)
* Example: Triangle function with height of $\pi$ and period of $2\pi$, with peak at the origin
	* $T = 2\pi, \omega = \frac{2\pi}{T} = 1$
	* The function can be represented by $f(t) = \pi - \abs{t}, t \in [-\pi, \pi]$
	* $\alignedeqntwo[t]{b_n}{\frac{2}{2\pi}\int _{-\pi}^\pi f(t)\sin(n\omega t)\,\dt}{\frac{1}{\pi}\int _{-\pi}^\pi (\pi - \abs{t})\sin(nt)\,\dt}{\frac{1}{\pi}\left(\int _{-\pi}^\pi \pi\sin(nt)\,\dt - \int _{-\pi}^0 (-t)\sin(nt)\,\dt - \int _0^\pi t\sin(nt)\,\dt\right)}{-\frac{1}{\pi}\left(-\frac{1}{n^2}\inteval{\sin(nt) - nt\cos(nt)}{-\pi}{0} + \frac{1}{n^2}\inteval{\sin(nt) - nt\cos(nt)}{0}{\pi}\right)}{0}$
		* This makes sense because the triangle function is an even function, but the $b_n$ terms correspond to sines which are odd, so they shouldn't have any contribution
	* $\alignedeqntwo[t]{a_n}{\frac{2}{2\pi}\int _{-\pi}^\pi f(t)\cos(n\omega t)\,\dt}{2\frac{1}{\pi}\int _0^\pi (\pi - t)\cos(nt)\,\dt}{\threecond{\pi}{n = 0}{0}{n \neq 0\text{ and odd}}{\frac{4}{\pi n^2}}{n \neq 0 \text{ and even}}}$
	* $f(t) = \frac{\pi}{2} + \sum _{k = 1}^\infty \frac{4}{\pi(2k - 1)^2}\cos((2k - 1)t)$
	* Note $f(0) = \pi = \frac{\pi}{2} + \sum _{k = 1}^\infty \frac{4}{\pi(2k - 1)^2} \implies \frac{\pi^2}{8} = 1 + \frac{1}{3^2} + \frac{1}{5^2} + \cdots$
* Example: $f(t) = t^2, t \in [-\pi, \pi]$
	* $T = 2\pi, \omega = \frac{2\pi}{T} = 1$
	* This is an even function so $b_n = 0$
	* $a_0 = \frac{1}{\pi}\int _{-\pi}^\pi t^2\,\dt = \frac{2\pi^2}{3}$
	* $a_n = \frac{2}{2\pi}\int _{-\pi}^\pi t^2\cos(nt)\,\dt = \twocond{-\frac{4}{n^2}}{n\text{ odd}}{\frac{4}{n^2}}{n\text{ even}}$
	* $f(t) = \frac{\pi^2}{3} + \sum _{n = 1}^\infty \frac{4}{n^2}(-1)^n\cos(nt)$

