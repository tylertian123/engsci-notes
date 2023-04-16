# Lecture 24, Nov 3, 2022

## Definition of the Laplace Transform (again)

* So far the solutions to first order and second order ODEs all seem to contain exponentials and sinusoids
* Can we transform these solutions to something nicer?
* The Fourier transform: $\fourier{f}(\omega) = \int _{-\infty}^\infty e^{-i\omega t}f(t)\,\dt$
	* This takes you from the time domain to the frequency domain
	* Can be though of as a dot product between the function of various sines and cosines of various frequencies
	* If we have a sine or a cosine, we get a very simple representation when taken to the frequency domain
	* However the Fourier transform doesn't work well with exponentials, which is why we need the Laplace transform
* The Laplace transform: $\laplace{f}(s) = \int _0^\infty e^{-st}f(t)\,\dt$
	* Note $\laplace{f}(\sigma + i\omega) = \int _0^\infty e^{-(\sigma + i\omega)t}f(t)\,\dt$
		* When $\sigma = 0$, we get the Fourier transform
	* The Fourier transform is a slice of the Laplace transform
	* The Fourier transform can only handle sines and cosines, which are pure oscillations that do not decay or grow, whereas with the Laplace transform we can also handle decaying exponentials
		* This makes it suitable for functions that appear in ODEs

## Existence of the Laplace Transform

* $f(t)$ needs to be piecewise continuous for the integration to be possible
* $f(t)$ must not dominate the $e^{-st}$, otherwise the integral will diverge
* If $\abs{f(t)} \leq Ke^{at}$ for $t < M$, then the Laplace transform exists if and only if $a < s$
	* We can show this using the limit comparison test

\noteThm{The Laplace transform $\laplace{f}(s)$ exists for $s > a$ if:
\begin{enumerate}
	\item $f$ is piecewise continous on $0 \leq t \leq A$ for any positive $A$
	\item $f$ is of exponential order so that $\abs{f(t)} \leq Ke^{at}$ when $t \geq M$
\end{enumerate}}

* Proof: $\laplace{f}(s) = \int _0^\infty e^{-st}f(t)\,\dt = \int _0^M e^{-st}f(t)\,\dt + \int _M^\infty e^{-st}f(t)\,\dt$
	* The first part exists by hypothesis 1, the second exists by hypothesis 2

