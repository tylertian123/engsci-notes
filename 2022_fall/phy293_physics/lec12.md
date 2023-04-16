# Lecture 12, Oct 4, 2022

## Fourier Analysis of Standing Waves

* A solution for standing waves follows $\omega _n = \frac{n\pi v}{L}$ (identical boundaries) or $\omega _n = \frac{n\pi v}{2L}$ (mixed boundaries, odd $n$ only)
	* Boundary at $x = 0$ determines the type of spacial function ($\sin$ or $\cos$)
	* Boundary at $x = L$ determines the allowed modes
	* The displacement is described by $y(x, t) = (A_n\sin(k_nx) + B_n\cos(k_nx))\cos(\omega _nt)$
* Superposition principle: adding two waves together still gives us another wave
	* This means $Y(x, t) = \sum _n\cos(\omega _nt)(A_n\sin(k_nx) + B_n\cos(k_nx))$, the superposition of all standing waves, is a valid wave
	* Let's use only sines, then in general $y(x, t) = \sum _n A_n\sin\left(\frac{n\pi}{L}x\right)\cos(\omega _nt)$
* Any initial shape of the string $y(x, 0) = \sum A_n\sin\left(\frac{n\pi}{L}x\right) = f(x)$ can be written as such a superposition; to determine the actual values of $A_n$ we need, we can apply Fourier analysis
* Notice the properties:
	* $\int _0^L\sin^2\left(\frac{n\pi}{L}x\right)\,\dx = \frac{L}{2}$
	* $\int _0^L\sin\left(\frac{n\pi}{L}x\right)\sin\left(\frac{m\pi}{L}x\right)\,\dx = \twocond{0}{m \neq n}{1}{m = n}$
* Then we can multiply both sides of the superposition by $\sin\left(\frac{m\pi}{L}x\right)$ and integrate, to get $\int _0^L f(x)\sin\left(\frac{n\pi}{L}x\right)\,\dx = \int _0^L\sum _n\sin\left(\frac{n\pi}{L}x\right)\sin\left(\frac{m\pi}{L}x\right)\,\dx = A_n\frac{L}{2}$

\noteImportant{The coefficients $A_n$ for the Fourier series $$\sum A_n\sin\left(\frac{n\pi}{L}x\right)$$ can be obtained by $$A_n = \frac{2}{L}\int _0^L f(x)\sin\left(\frac{n\pi}{L}x\right)\,\dx$$
Where:
\begin{enumerate}
	\item $n$ is the mode number
	\item $A_n$ is the coefficient, or the amplitude of the $n$th mode
	\item $L$ is the length of the string
	\item $f(x)$ is the function describing the standing wave pattern observed
\end{enumerate}
Note the integral is over the whole system, so the bounds may change depending on the setup of the system}

