# Lecture 29, Nov 21, 2022

## Impulse Functions

* For some number $\epsilon$ we can define a delta epsilon function $\delta _\epsilon(t) = \frac{u_0(t) - u_\epsilon(t)}{\epsilon} = \twocond{\frac{1}{\epsilon}}{0 \leq t \leq \epsilon}{0}{\text{otherwise}}$
* The Dirac delta function is $\lim _{\epsilon \to 0} \delta _\epsilon(t)$
	* At a single point, the value is infinite
	* The integral over the peak is 1
* $\laplace{\delta _\epsilon(t)} = \laplace{\frac{u_0(t) - u_\epsilon(t)}{\epsilon}} = \frac{1 - e^{-\epsilon s}}{\epsilon s}$
* Consider $y'' + y = I_0\delta _\epsilon(t), y(0) = 0, y'(0) = 0$
	* $\laplace{y'' + y'} = (s^2 + 1)Y(s)$
	* $Y(s) = \frac{I_0}{\epsilon}(1 - e^{-\epsilon s})\frac{1}{s(s^2 + 1)}$
	* Let $H(s) = \frac{1}{s(s^2 + 1)} \implies h(t) = 1 - \cos(t)$
	* $Y(s) = \frac{I_0}{\epsilon}(H(s) - e^{-\epsilon s}H(s)) \implies y(t) = \frac{I_0}{\epsilon}\left(u_0(t)(1 - \cos(t)) - u_\epsilon(t)(1 - \cos(t - \epsilon))\right)$
	* $y_\epsilon(t) = \threecond{0}{t \leq 0}{\frac{I_0}{\epsilon}(1 - \cos(t))}{0 \leq t \leq \epsilon}{\frac{I_0\left(\cos(t - \epsilon) - \cos(t)\right))}{\epsilon}}{t > \epsilon}$
	* $\lim _{\epsilon \to 0} y_\epsilon(t) = y(t) = \twocond{0}{t \leq 0}{-I_0\diff{}{t}\cos(t)}{t > 0} = \twocond{0}{t \leq 0}{I_0\sin(t)}{t > 0}$
	* $y(t) = I_0u(t)\sin(t)$

## The Dirac Delta Function

\noteDefn{The Dirac delta function is the function $\delta(t)$ with the following properties:
\begin{itemize}
	\item $\delta(t - t_0) = 0$ whenever $t \neq t_0$
	\item $\int _a^b \delta(t - t_0)\,\dt = \twocond{1}{a \leq t_0 \leq b}{0}{\text{otherwise}}$
	\item $\int _a^b f(t)\delta(t - t_0)\,\dt = f(t_0)$
\end{itemize}}

* Using the sifting property, we have $\laplace{\delta(t - t_0)} = e^{-st_0}$ and so $\laplace{\delta(t)} = 1$

