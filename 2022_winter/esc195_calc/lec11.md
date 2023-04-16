# Lecture 11, Feb 4, 2022

## Areas in Polar Coordinates

* Let $r = \rho(\theta)$ and $\alpha \leq \theta \leq \beta$; to find the area we can consider small slides that are sectors of a circle
	* Consider a small $\Delta\theta$; we can approximate the area by a circular sector: $\Delta A = \pi a^2 \cdot \frac{a\Delta \theta}{2\pi} = \frac{1}{2}a^2\Delta\theta$
	* Therefore area is given by $A = \frac{1}{2}\int _\alpha^\beta [\rho(\theta)]^2\,\dtheta$
* Example: $r = 1 - \cos\theta$ (a cardioid oriented along the $x$ axis, to the left of the $y$ axis)
	* $\alignedeqntwo[t]{A}{\frac{1}{2}\int _0^{2\pi} (1 - \cos\theta)^2\,\dtheta}{\frac{1}{2}\int _0^{2\pi} (1 - 2\cos\theta + \cos^2\theta)\,\dtheta}{\frac{1}{2}\int _0^{2\pi} (\frac{3}{2} - 2\cos\theta + \frac{1}{2}\cos (2\theta))\,\dtheta}{\frac{1}{2}\inteval{\frac{3}{2}\theta - 2\sin\theta + \frac{1}{4}\sin(2\theta)}{0}{2\pi}}{\frac{3}{2}\pi}$
* For an area that lies between two polar curves we simply have $A = \frac{1}{2}\int _\alpha^\beta [\rho _1^2 - \rho _2^2]\,\dtheta$
* Example: $r^2 = 4\cos(2\theta)$ (Lemniscate oriented along the $x$ axis) and $r = 1$
	* Lemniscate only exists for $-\frac{\pi}{4} \leq r \leq \frac{\pi}{4}$ due to the root
	* Find intersections: $4\cos(2\theta) = 1^2 \implies \theta = \pm 0.659\si{rad}$ or $\pi \pm 0.659\si{rad}$
	* Use symmetry
	* $\alignedeqntwo[t]{A}{\int _{-0.659}^{0.659} (4\cos(2\theta) - 1)\,\dtheta}$

## Arc Lengths in Polar Coordinates

* Parameterize the curve with $\theta$ and then use the parametric formula: $\twopiece{x = r(\theta)\cos\theta}{y = r(\theta)\sin\theta}$
* $\alignedeqntwo[t]{s}{\int _\alpha^\beta \sqrt{\left(\diff{x}{\theta}\right)^2 + \left(\diff{y}{\theta}\right)^2}\,\dtheta}{\int _\alpha^\beta \sqrt{\left(\diff{r}{\theta}\cos\theta - r\sin\theta\right)^2 + \left(\diff{r}{\theta}\sin\theta + r\cos\theta\right)^2}\,\dtheta}{\int _\alpha^\beta \sqrt{r^2 + \left(\diff{r}{\theta}\right)^2}\,\dtheta}$

## Sequences

* A sequence is just a special function where the domain is limited to usually the positive integers (sometimes zero is included, and rarely negative numbers)
* Example: $f(x) = \frac{1}{x}$ is a function, $f(n) = a_n = \frac{1}{n} = \Set{1, \frac{1}{2}, \frac{1}{3}, \cdots}$ is a sequence
	* Curly brackets usually denote a sequence
* A sequence can be *bounded* above, below, or not at all
	* e.g. $\Set{\frac{1}{n}}$ is bounded above by 1, below by 0
* Sequences are collections of numbers; non-numbers such as infinity can't be part of a sequence
* Similar to function definitions, $\Set{a_n}$ is:
	* Increasing iff $a_n < a_{n + 1}$
	* Non-decreasing iff $a_n \leq a_{n + 1}$
	* Decreasing iff $a_n > a_{n + 1}$
	* Non-increasing iff $a_n \geq a_{n + 1}$
	* A sequence satisfying any of these is called a *monotonic sequence*
* Example: $a_n = 2^n \implies \frac{a_{n + 1}}{a_n} = 2 > 1 \implies a_{n + 1} > a_n$ so the sequence is monotonically increasing
	* To prove that this sequence is unbounded we follow a process similar to a limit at infinity
	* Find $k$ such that $a_k > M$ for any $M$: $2^k > M \implies k > \frac{\ln M}{\ln 2}$
	* Since we've already shown that the sequence is increasing, $a_k > M \implies a_m > M$ if $m > k$

