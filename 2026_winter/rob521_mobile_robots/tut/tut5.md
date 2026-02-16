# Tutorial 5, Feb 11, 2026

* Consider $x \in \mathcal N(\mu _x, \sigma _x^2)$ and $y = f(x) = (x + b)^2$
	* Show that $\mu _y = (\mu _x + b)^2 + \sigma _x^2$
		* Rewrite $x = \mu _x + \delta x$ where $\delta x \sim N(0, \sigma _x^2)$
		* $\alignedeqntwo[t]{\mu _y}{E[y]}{E[(x + b)^2]}{E[(\mu _x + \delta x + b)^2]}{E[(\mu _x + b)^2 + 2(\mu _x + b)\delta x + \delta x^2]}{(\mu _x + b)^2 + 2(\mu _x + b)E[\delta x] + E[(0 - \delta x)(0 - \delta x)]}{(\mu _x + b)^2 + \sigma _x^2}$
			* Note that $E[\delta x] = 0$ since it's zero mean, and $E[\delta x^2]$ is the same as the variance of $\delta x$ which is $\sigma _x^2$ by definition
		* Notice that we've reached an interesting conclusion that the mean of $y$ is dependent on the variance of $x$
	* Find $\bar\mu$ via linearization and show that it is biased
		* $\pdiff{f}{x} = 2(x + b)$
		* $y \approx f(\mu _x) + \eval{\pdiff{f}{x}}{x = \mu _x}\delta x = (\mu _x + b)^2 + 2(\mu _x + b)\delta x = y_\text{lin}$
		* $\bar \mu _y = E[y_\text{lin}] = (\mu _x + b)^2$ once again since $E[\delta x] = 0$
		* Notice that $\mu _y - \bar\mu _y = \sigma _x^2$, so our linearized mean has a bias and we don't recover the true mean
* $x, y$ are uncorrelated if $E[xy] = E[x]E[y]$; starting from the definition of $\sigma _{xy}$, show that this is equivalent to $\sigma _{xy} = 0$
	* Let $E[x] = \mu _x, E[y] = \mu _y$
	* $\alignedeqntwo[t]{\sigma _{xy}}{E[(x - \mu _x)(y - \mu _y)]}{E[xy - \mu _xy - \mu _yx - \mu _x\mu _y]}{E[xy] - \mu _xE[y] - \mu _yE[x] + \mu _x\mu _y}{E[xy] - \mu _x\mu _y - \mu _y\mu _x + \mu _x\mu _y}{E[xy] - \mu _x\mu _y}{0}$

