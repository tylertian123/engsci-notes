# Lecture 30, Nov 26, 2021

## Exponential Growth and Decay

* When a quantity changes at a rate proportional to the quantity itself, $\diff{f}{t} = kf(t)$, and this leads to exponential growth or decay of $f(t) = Ce^{kt}$ where $C$ is the initial condition
	* $k = \frac{1}{f}\diff{f}{t}$, using the chain rule backwards this is equal to $\diff{}{t}\ln f$
	* Integrating both sides, $\ln f = kt + C \implies f = e^{kt + c} = Ce^{kt}$
	* $C$ is the initial value since $f(0) = Ce^0 = C$
	* $k$ is the growth or decay constant
* We can also characterize exponential growth by the doubling time: $2P_0 = P_0e^{kt_2} \implies t_2 = \frac{\ln 2}{k}$

### Radioactive Decay

* $\diff{N}{t} = -kN$ where $k$ is always a positive
* $N(t) = N(0)e^{-kt}$
* Here we use the half-life and it basically works the exact same way with $t_{\frac{1}{2}} = \frac{\ln 2}{k}$
* Example: A year ago we had 4kg of a radioactive material; now we have 3kg. How much did we have 10 years ago?
	* $t = 0$ 10 years ago, therefore $4 = N_0e^{-9k}$ and $3 = N_0e^{-10k}$
	* Dividing the equations we get $\frac{4}{3} = e^{k(-9 + 10)} = e^{k} \implies k = \ln\frac{4}{3} \approx 0.288$
	* $N_0 = 4e^{9k} = 53.3\si{kg}$
	* The half life is $\frac{\ln 2}{k} = 2.4$ years

### Compound Interest

* If interest is compounded at fixed intervals, then $V(t) = V(0)(1 + i)^t$ where $i$ is the interest rate
	* If we shorten this interval by $n$ times then $V(t) = V(0)\left(1 + \frac{i}{n}\right)^{tn}$
	* $\lim _{n \to \infty}\left(1 + \frac{i}{n}\right)^{nt} = \lim _{n \to \infty}\left(1 + \frac{1}{\frac{n}{i}}\right)^{\frac{n}{i}it}$, with the substitution $m = \frac{n}{i}$ it becomes $\lim _{m \to \infty} \left[\left(1 + \frac{1}{m}\right)^m\right]^{it} = e^{it}$
	* Therefore at the maximum rate of compounding, $V(t) = V(0)e^{it}$

### Drug Metabolism

* Drug metabolism can also be modelled as the rate of elimination being proportional to the current concentration, which leads to exponential decay $C_0e^{-kt}$
* Typically we want to maintain the concentration of the drug in the blood between some therapeutic level and some other toxic level
* Using this model we can time the injection of the drugs so it stays between the two levels

## Population Growth: The Logistic Model

* $\diff{P}{t} = kP$ is not a very accurate model of the population growth because it implies that the population grows exponentially without bound
* Usually population growth tends to approach 0 as the population reaches some carrying capacity due to various factors
* The *logistic model* models population as $\diff{P}{t} = kP\left(1 - \frac{P}{M}\right)$ with $M$ as the carrying capacity or max population
	* As $P$ approaches $M$ the growth slows down, and when $P = M$, $\diff{P}{t} = 0$ and the population stops growing
* Integrating both sides: $\int \frac{1}{P\left(1 - \frac{P}{M}\right)}\,\dt = k\int \,\dt$
	* Note that $\frac{1}{P\left(1 - \frac{P}{M}\right)} = \frac{M}{P(M - P)} = \frac{1}{P} + \frac{1}{M - P}$
	* $\alignedimp[t]{\int \frac{1}{P\left(1 - \frac{P}{M}\right)}\,\dt = k\int \,\dt}{\int \frac{1}{P} + \frac{1}{M - P}\,\dd P = \ln\abs{P} - \ln\abs{M - P} = kt + C}{\ln\abs*{\frac{P}{M - P}} = kt + C}{\frac{P}{M - P} = \pm e^{kt + c}}{\frac{M - P}{P} = Ae^{-kt}}{P(t) = \frac{M}{1 + Ae^{-kt}}}$
	* Where $A = \frac{M - P_0}{P_0}$ and $P_0 = P(0)$
* When $t$ is small, the growth is exponential, and then the growth slows down and approaches $M$ exponentially

## Linear Equations

* A first-order linear ODE can be written in the form of $y' + p(x)y = q(x)$
* All first order linear ODEs have a general solution
* Example: $xy' + y = x^2$
	* Writing this in the standard form: $y' + \frac{1}{x}y = x$ for $x \neq 0$
	* The left hand side is the product rule applied to $xy$: $(xy)' = xy' + y$
	* So the equation becomes $(xy)' = x^2 \implies \int (xy)'\,\dx = \int x^2\,\dx \implies xy = \frac{x^3}{3} + C \implies y = \frac{x^2}{3} + \frac{C}{x}$
	* In general, we want to turn the left hand side into a product rule expression
* To set up the general case, set up $H(x) = \int p(x)\,\dx$ (don't worry about constants for this)
* Therefore $\diff{}{x} e^{H(x)} = p(x)e^{H(x)}$
* Putting this back into the equation: $\diff{}{x}ye^{H(x)} = y'e^{H(x)} + ye^{H(x)}p(x) = e^{H(x)}(y' + p(x)y)$, and $y' + p(x)y$ is just the left hand side of our equation, so it equals $q(x)$
	* $e^{H(x)}$ is known as the *integrating factor*, and by multiplying the equation through by this factor, we end up with $\diff{}{x}ye^{H(x)} = e^{H(x)}q(x)$
* $ye^{H(x)} = \int e^{H(x)}q(x)\,\dx + C$, so our final answer is $y = e^{-H(x)}\left(\int e^{H(x)}q(x)\,\dx + C\right)$
	* Usually the constant of integration is put in at the first stage there so that we don't forget about it
* To solve these equations:
	1. Write the equation explicitly in the form of $y' + p(x)y = q(x)$ and determine $p(x)$ and $q(x)$
	2. Find the integrating factor $e^{H(x)} = e^{\int p(x)\,\dx}$
	3. Multiply the equation by the integrating factor
	4. Integrate both sides
	5. Isolate for $y$
* Example: $y' + 2y = 4 \implies p(x) = 2, q(x) = 4$, so the integrating factor is $e^{2x}$, and $e^{2x}y' + 2e^{2x}y = 4e^{2x} \implies \diff{}{x}(e^{2x}y) = 4e^{2x} \implies e^{2x}y = 4\int e^{2x}\,\dx + C = 2e^{2x} + C$ so the final answer is $y = 2 + Ce^{-2x}$
	* We can see that the solution can be separated into 2 parts, one part as a particular solution ($y = 2$), and the other for solving $y' + 2y = 0$ -- this will come back in second order linear ODEs
* Example: Newton's law of cooling
	* $\diff{T}{t} = -k(T - \tau)$, the change in temperature is proportional to the difference in temperature between the object and its surroundings
		* Note the negative sign indicates that if the object is hotter than its surroundings then its temperature will decrease
	* $T' + kT = k\tau \implies p(t) = k, q(t) = k\tau$
	* Integrating factor $e^{H(t)} = e^{kt}$
	* $\diff{}{t}\left(e^{kt} + T\right) = e^{kT}k\tau$
	* $T = e^{-kt}\left(\int e^{kt}k\tau\,\dt + C\right) = \tau + Ce^{-kt}$
* To summarize, $y' + p(x)y' = q(x)$ has solution $y = e^{-\int p(x)\,\dx}\left[\int e^{\int p(x)\,\dx}q(x)\,\dx + C\right]$

