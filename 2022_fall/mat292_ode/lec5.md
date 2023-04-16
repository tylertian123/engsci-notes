# Lecture 5, Sep 16, 2022

## Rocket Science

* Consider Earth with radius $R$, rocket with mass $m$ at height $x$ with velocity $v$, and gravitational acceleration $g$
* Given $ma = F, v(0) = v_0$ as the initial rocket velocity
	* The force of gravity is $\frac{mgR^2}{(R + x)^2}$, since for $x = 0 \implies \frac{mgR^2}{R^2} = mg$ is the gravitational force on the Earth's surface
	* This gives $ma = F = -\frac{mgR^2}{(R + x)^2}$ (since gravity works in the negative direction)
* The equation of motion is $\diff{v}{t} = \frac{gR^2}{(R + x)^2}$
	* Applying the chain rule: $\diff{v}{t} = \diff{v}{x}\diff{x}{t} = \diff{v}{x}v$
	* Using this we can eliminate $t$
	* Note by doing this we get a first order ODE, whereas making $a = \diffn{2}{x}{t}$ gives us a second order ODE
* $v\diff{v}{x} = -\frac{gR^2}{(R + x)^2}, v(0) = v_0$
	* Note here $v(0) = v_0$ means the velocity at position 0 instead of time 0
* Solution: $\alignedimp[t]{v\diff{v}{x} = -\frac{gR^2}{(R + x)^2}}{\frac{1}{2}v^2 = \frac{gR^2}{R + x} + C}{v(x) = \pm\sqrt{\frac{2gR^2}{R + x} + C}}$
	* $v(0) = v_0 \implies \sqrt{2gR + C} = v_0 \implies C = v_0^2 - 2gR$
	* Final solution: $v = \pm\sqrt{\frac{2gR^2}{R + x} + v_0^2 - 2gR}$
* What is the maximum altitude $x_{max}$ reached?
	* $v(x_{max}) = 0 \implies \frac{2gR^2}{R + x} + v_0^2 = 2gR \implies x_{max} = \frac{v_0^2R}{2gR - v_0^2}$
* Given $x_{max}$, what $v_0$ do we need?
	* $v_0 = \sqrt{2gR\frac{x_{max}}{R + x_{max}}}$
* The escape velocity is then $\lim _{x_{max} \to \infty} v_0 = \sqrt{2gR}$

