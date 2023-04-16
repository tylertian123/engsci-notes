# Lecture 31 (2-15), Nov 29, 2022

## Length Contraction

* Consider reference frames $s$ and $s'$ moving with velocity $v$ in the $x$ direction; we try to measure the length $l$ of a train car in $s'$
* If we want to do this in $s$, we can take the time when the start of the train passes the observer, and another time when the end passes the observer
	* This gives us a $\Delta t$ and $l = v\Delta t$
* In $s'$, $l' = v\Delta t'$
* In this case $\Delta t$ is proper time so $\Delta t' = \gamma\Delta t \implies l' = \frac{l}{\Delta t}\Delta t' = \gamma l \implies l = \frac{l'}{\gamma}$
* The *proper length* is length as measured in a resting reference frame; in this case $l'$ is the proper length
	* The observed length $l$ is shorter, by a factor of $\frac{1}{\gamma}$
* $l = \frac{l_0}{\gamma}$ where $l_0$ is the proper length (length measured in the rest frame) and $l$ is the length as observed from a moving frame

## Lorentz Transformation

* The relativistic version of the Galilean transformation that addresses time dilation and length contraction
	* Connects $(x, y, z, t) \leftrightarrow (x', y', z', t')$
* Consider motion only in the $x$ direction, between reference frames $s$ and $s'$ with constant velocity $v$
* Consider an even in $s'$ with coordinates $(x', t')$
	* In the $s$ frame $x = x' + vt$ under Galilean transformation, but $x'$ should be length contracted so $x = \frac{x'}{\gamma} + vt$
	* In $s'$ we have $\frac{x}{\gamma} = x' + vt'$
	* $\twopiece{x' = \gamma(x - vt)}{x = \gamma(x' + vt')}$
	* $x = \gamma(\gamma x - \gamma vt) + \gamma vt' = \gamma^2(x - vt) + \gamma vt'$
	* $(1 - \gamma^2)x = -\gamma^2 vt + \gamma vt'$
	* $t' = \frac{1 - \gamma^2}{\gamma v}x + \gamma t = \gamma\left(t - \frac{v}{c^2}x\right)$
* The complete transformation: $\fourpiece{x' = \gamma(x - vt)}{y' = y}{z' = z}{t' = \gamma\left(t - \frac{v}{c^2}x\right)}$
	* $\fourpiece{x = \gamma(x' + vt')}{y = y'}{z = z'}{t = \gamma\left(t' + \frac{v}{c^2}x'\right)}$
* What about velocity transformations?
	* Consider a particle with velocity $u_x', u_y'$ in $s'$, what is $\vec u$, as measured from $s$?
	* $u_x = \frac{\Delta x}{\Delta t}$ and from the Lorentz transformation $\frac{\Delta x}{\Delta t} = \frac{\gamma(\Delta x + v\Delta t')}{\gamma\left(\Delta t' + \frac{v}{c^2}\Delta x'\right)} = \frac{\frac{\Delta x'}{\Delta t'} + v}{1 + \frac{v}{c^2}\frac{\Delta x'}{\Delta t'}} = \frac{u_x' + v}{1 + \frac{v}{c^2}u_x'}$
	* Similarly $u_y = \frac{\Delta y}{\Delta t} = \frac{\Delta y'}{\gamma\left(\Delta t' + \frac{v}{c^2}\Delta x'\right)} = \frac{u_y'}{\gamma\left(1 + \frac{v}{c^2}u_x'\right)}$

