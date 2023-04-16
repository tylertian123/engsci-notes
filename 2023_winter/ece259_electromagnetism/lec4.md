# Lecture 4, Jan 16, 2023

## Example: Electric Field Above a Charged Disk

* Charged disk of radius $a$ with total charge $Q$, measured at a point $P(0, 0, h)$
	1. $\vec E_{tot} = \iint \dd\vec E = \iint _S \frac{(\vec R - \vec R')}{4\pi\varepsilon _0\norm{\vec R - \vec R'}^2}\,\dd Q'$
	2. $\dd Q'$ is the differential charge, $\rho _s\,\ds'$; in this case $\ds = \ds_z$ so $\dd Q' = \rho _sr'\,\dphi'\dr' = \frac{Q}{\pi a^2}r'\,\dphi'\dr'$
	3. $\vec R = h\hat a_z$; $\vec R' = r'\hat a_r$ so $\vec R - \vec R' = -r'\hat a_r + h\hat a_z = -r'\cos\phi'\hat a_x - r'\sin\phi'\hat a_y + h\hat a_z$
	4. $\iint \dd \vec E = \int _0^a\int _0^{2\pi} \frac{\frac{Q}{\pi a^2}r'}{4\pi\varepsilon _0\left((r')^2 + h^2\right)^\frac{3}{2}}(-r'\cos\phi'\hat a_x - r'\sin\phi'\hat a_y + h\hat a_z)\dphi'\dr'$
	5. The disk is symmetric about the $z$ axis, so there will only be a $z$ component in the total field
	6. $\iint _S \dd\vec E = \frac{Qh\hat a_z}{4\pi(\pi a^2)\varepsilon _0}\int _0^a\int _0^{2\pi} \frac{r'}{((r')^2 + h^2)^\frac{3}{2}}\,\dphi'\dr' = \frac{\rho _s}{2\varepsilon _0}\left(\frac{h}{\abs{h}} - \frac{h}{\sqrt{a^2 + h}}\right)\hat a_z$
* In general the steps are:
	1. Select a coordinate system
	2. Find $\dd Q'$
	3. Find $\vec R, \vec R'$ and $\vec R - \vec R'$
	4. Write out the integral
	5. Look for symmetry before evaluating the integral!
	6. Integrate
* Note if we take $r \to \infty$ we effectively have an infinite plate of charge, then we get $\vec E_{tot} = \pm \frac{\rho _s}{2\varepsilon _0}\hat a_z$

