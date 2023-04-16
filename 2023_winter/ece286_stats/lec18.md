# Lecture 18, Feb 27, 2023

## Application: Renewable Energy & Electricity Markets

* Renewable energy operators are paid for power produced
* Penalties for uncertainty in power production
* Basic quantities:
	* At the start of the hour, wind forecasts power $\hat p$
	* Actually produces power $p$
	* Market price $\lambda$
	* Fees $u^+$ for overproduction, $u^-$ for underproduction
	* Total revenue is then $\tilde J = \lambda p - u^-(\hat p - p)^+ - u^+(p - \hat p)^+$ where $(\cdot)^+ = \max(\cdot, 0)$
* Suppose $p$ is distributed according to $f(p)$ and CDF $F(P)$; we want to maximize $J = E_p[\tilde J]$ over $\hat p$
* $E_p[\tilde J] = \lambda\intinf pf(p)\,\dd p - u^-\int _{-\infty}^{\hat p}(\hat p - p)f(p)\,\dd p - u^+\int _{\hat p}^{\infty} (p - \hat p)f(p)\,\dd p$
* $\alignedeqntwo[t]{\diff{J}{\hat p}}{-u^-\left(\intlinf{\hat p} f(p)\,\dd p + (\hat p - \hat p)f(p)\right) - u^+\left(\intuinf{\hat p} -f(p)\,\dd p - (\hat p - \hat p)f(p)\right)}{-u^-F(\hat p) + u^+(1 - F(\hat p))}$
* Solve for $\hat p$: $-u^-F(\hat p) + u^+(1 - F(\hat p)) = 0 \implies F(\hat p) = \frac{u^+}{u^- + u^+} \implies \hat p = F^{-1}\left(\frac{u^+}{u^- + u^+}\right)$
	* We know $F$ is invertible, because by definition $F$ is non-decreasing
* What does this tell us?
	* $F$ caps at 1, so if $u^+ \gg u^-$, the ratio is close to 1, therefore $\hat p \to F^{-1}(1) = \infty$
		* If the penalty for overproducing is way bigger than the penalty for underproducing, then it's better to forecast a very big number
	* Conversely $u^+ \ll u^- \implies \hat p \to F^{-1}(0) = -\infty$
		* If the penalty for underproducing is way bigger than the penalty for overproducing, then it's better to forecast a very small number
	* If $u^- = u^+$ then $\hat p = F^{-1}\left(\frac{1}{2}\right)$ which is the *median* of the distribution of $p$
* This is classically known as the newsvendor problem

