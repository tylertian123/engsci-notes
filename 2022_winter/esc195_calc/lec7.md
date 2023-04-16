# Lecture 7, Jan 25, 2022

## Arc Length

* Consider a curve $y = f(x)$ for $x \in [a, b]$, where $y'(x)$ exists; how do we define the length of the curve?
	* Approximate the curve by more and more finer straight line segments
	* With $\Delta x$ between segments the length of each segment is $s_i = \sqrt{\Delta x_i^2 + \Delta y_i^2}$
	* We may simplify this using the MVT; recall that $\frac{\Delta y_i}{\Delta x_i} = y'(x_i^*)$ for some $x_i^* \in [x_i, x_i + \Delta x_i]$ so $\Delta y_i = y'(x_i^*)\Delta x_i$
	* $s_i = \sqrt{\Delta x_i^2 + (f'(x_i^*)\Delta x_i)^2} = \sqrt{1 + (f'(x_i^*))^2}\Delta x_i$
	* Convert to integral for total length: $s = \int _a^b \sqrt{1 + (f'(x))^2}\,\dx$
* Example: $f(x) = x^{\frac{3}{2}}$ for $x \in [0, 44]$
	* $f'(x) = \frac{3}{2}x^\frac{1}{2} \implies \alignedeqntwo[t]{s}{\int _0^{44} \sqrt{1 + \frac{9}{4}x}\,\dx}{\inteval{\frac{4}{9} \cdot \frac{2}{3}\left(1 + \frac{9}{4}x\right)^\frac{1}{2}}{0}{44}}{296}$
* Arc length integrals can be messy due to the square root; analytic solutions can only be found for a small set of functions

## Surfaces of Revolution

* Side surface area of a cut off cone: $A = \pi(r + R)l$ where $r$ is the smaller radius, $R$ is the bigger radius and $l$ is the slant height
* Rotate the curve $f(x)$ around the $x$ axis to generate a surface; how do we find this area?
	* Cut into pieces, each piece is a cut off cone so the area is $A_i = \pi(f(x_{i - 1}) + f(x_i))s_i = \pi(f(x_{i - 1}) + f(x_i))\sqrt{1 + (f'(x_i^*))^2}\Delta x_i$
	* Use IVT to simplify $f(x_{i - 1}) + f(x_i)$: there exists some $x_i^{**}$ such that $f(x_{i - 1}) + f(x_i) = 2f(x_i^{**})$
	* $A_i = 2\pi f(x_i^{**})\sqrt{1 + (f'(x_i^*))^2}\Delta x_i$
	* $A = \int _a^b 2\pi f(x)\sqrt{1 + (f'(x))^2}\,\dx$
* Example: $f(x) = \sqrt{x}$ over $x \in [0, 1]$
	* $f'(x) = \frac{1}{2}x^{-\frac{1}{2}} \implies \alignedeqntwo[t]{A}{\int _0^1 2\pi\sqrt{x}\sqrt{1 + \frac{1}{4x}}\,\dx}{\pi \int _0^1 \sqrt{4x + 1}\,\dx}{\frac{\pi}{6}\left(5^\frac{3}{2} - 1\right)}$
* Example: $f(x) = \frac{1}{x}$ over $x \in [1, \infty)$
	* Finite volume, infinite surface area (Gabriel's horn)
	* We can use a comparison test to demonstrate that this integral diverges

## Applications to Physics and Engineering

### Hydrostatic Pressure

* When an object is submerged in liquid it experiences a pressure force always perpendicular to the surface; the magnitude of force is $\rho gd$ where $\rho$ is the density, $g$ is the gravitational constant and $d$ is the depth
* Consider a plate submerged vertically ($x$ axis going down with $0$ at the surface of the water)
	* $F_i = w(x_i^*)\Delta x_i \cdot \rho gx_i^*$ (area term times force term)
	* Taking the limit we get the integral $F = \int _a^b \rho gxw(x)\,\dx$
* Example: Circular water main with 1 meter radius; if we cap the pipe when its half filled with water, how much force will be pushing on the cap?
	* Since the pipe is half filled take the middle of the pipe as $x = 0$
	* Width of the pipe is $2\sqrt{1 - x^2}$ by Pythagorean theorem
	* $\alignedeqntwo[t]{F}{2\int _0^1 \rho gx\sqrt{1 - x^2}\,\dx}{2\rho g\inteval{-\frac{1}{3}\left(1 - x^2\right)^\frac{3}{2}}{0}{1}}{\frac{2}{3}\rho g}{\frac{2}{3}\si{m^3} \cdot 1000\si{kg/m^3} \cdot 9.8\si{m/s^2}}{6533\si{N}}$

