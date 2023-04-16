# Lecture 33 (2-17), Dec 5, 2022

## Relativistic Energy

* Use work-KE theorem
* $W = \int _i^f \vec F \cdot \dd\vec s$
* Consider 1D movement from rest at $(x_0, 0)$ to $(x, t)$ where it has velocity $u$; we apply a force $F(x)$ to move the particle by $\dx$
	* $W = \int _{x_0}^x F(x)\,\dx$
	* To find the force, we can start with the momentum since $F = \diff{p}{t}$
	* $\diff{p}{t} = \diff{}{t}\frac{mu}{\sqrt{1 - \frac{u^2}{c^2}}} = \frac{m}{\left(1 - \frac{u^2}{c^2}\right)^\frac{3}{2}}\diff{u}{t}$
	* Also notice $u = \diff{x}{t}$ so $W = \int _{x_0}^x \diff{p}{t}\,\dx = \int _{x_0}^x \frac{m}{\left(1 - \frac{u^2}{c^2}\right)^\frac{3}{2}}\diff{u}{t}\,\dx = \int _{x_0}^x \frac{m}{\left(1 - \frac{u^2}{c^2}\right)^\frac{3}{2}}\diff{u}{t}u\,\dt = \int _{x_0}^x \frac{mu}{\left(1 - \frac{u^2}{c^2}\right)^\frac{3}{2}}\,\du$
	* The final result is $W = \frac{mc^2}{\sqrt{1 - \frac{u^2}{c^2}}} - mc^2 = mc^2(\gamma _p - 1)$
* The kinetic energy for a particle with velocity $u$ is $K = mc^2(\gamma _p - 1)$
	* We can check that $K = 0$ for $u = 0$
	* In the limit $\frac{u}{c} \ll 1$, we can use a Taylor series to get $\gamma _p \approx 1 + \frac{u^2}{2c^2}$ so $K = \frac{u^2}{2c^2}mc^2 = \frac{1}{2}mu^2$, which is the classic kinetic energy
* We can rearrange this to get $\gamma _pmc^2 = K + mc^2$
	* $mc^2$ is a form of energy that's still there even when $u = 0$ -- this is the *rest energy* of the particle, which is energy that comes from the mass of the particle alone
		* We can also think of mass as a form of "potential energy"
		* Example: the binding energy of a hydrogen atom is $-13.6\si{eV}$; this means that the hydrogen atom is actually lighter than $m_p + m_e$, by $\SI{2.5e-35}{kg}$
	* $\gamma _p mc^2$ is then the total energy
* $E = \gamma _pmc^2 = (\gamma _p - 1)mc^2 + mc^2$
* Now can we connect $p$ and $E$?
	* $E^2 = (\gamma _pmc^2)^2 = \frac{m^2c^4}{1 - \frac{u^2}{c^2}} = m^2c^4\left(\frac{1 - \frac{u^2}{c^2} + \frac{u^2}{c^2}}{1 - \frac{u^2}{c^2}}\right) = m^2c^4 + \frac{m^2u^2c^2}{1 - \frac{u^2}{c^2}} = m^2c^4 + m^2c^4 = (pc)^2 + (mc^2)^2$
		* Therefore $E = \sqrt{(pc)^2 + (mc^2)^2}$
* We can also additionally define $\vec\beta _p = \frac{\vec u}{c} = \frac{\vec pc}{E}$
	* If we use energy units of $\si{eV}$, then we can use momentum units of $\si{eV/c}$ and mass units of $\si{eV/c^2}$
* Notice $\frac{u}{c} = \frac{pc}{E}$, so if we know $p$ or $E$, we can calculate the other, and then calculate $\frac{u}{c}$ to find $u$

