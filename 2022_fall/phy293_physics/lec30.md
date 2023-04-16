# Lecture 30 (2-14), Nov 28, 2022

## Special Relativity Definitions

* Define two dimensionless quantities, $\beta$ and $\gamma$
	* $\beta = \frac{v}{c}$
	* $\gamma = \frac{1}{1 - \beta^2} = \frac{1}{1 - \frac{v^2}{c^2}}$
	* $\gamma$ is close to 1 when velocity is not close to $c$; when $v$ approaches $c$ $\gamma$ grows very quickly and diverges
		* When $\gamma \approx 1$ the problem is non-relativistic
	* When $\beta \ll 1$ we can use the Taylor expansion and write $\gamma = (1 - \beta^2)^{-\frac{1}{2}} \approx 1 + \frac{\beta^2}{2}$
* Usually time is plotted on the vertical axis and space on the horizontal axis
	* If we plot out the trajectory of light in both directions we get two lines
	* Define a *light cone* as the region between the lines of the trajectory of light
		* Events in the negative light cone can influence events at the origin
		* Events at the origin can influence events in the positive light cone
	* When we take this to multiple dimensions, the "light triangle" becomes a light cone as we introduce other dimensions
* We scale the axes of the spacetime diagram so that they have the same units, so that the light cone lines have slope 1
* On a spacetime diagram within a light cone we can draw *world lines*, the trajectory of an object in spacetime
	* Nothing (starting at the origin) can be outside the light cone since that means it'd be going faster than the speed of light

## The Light Clock and Time Dilation

* Consider reference frames $s$ and $s'$ moving horizontally with velocity $v$; an experiment is happening inside $s'$ where an observer reflects light between two mirrors a height of $h$ apart
* In $s'$, $\Delta t' = \frac{2h}{c}$
* In $s$, light has to travel diagonally since $s'$ is moving horizontally relative to $s$
	* When light is reflected from the first mirror, $s'$ has moved by an amount $\frac{v(\Delta t)}{2}$; when the light is detected again $s'$ moves another amount
		* Since light has to travel a longer distance, but the speed of light is the same, so time must increase!
	* $\left(\frac{c\Delta t}{2}\right)^2 = \left(\frac{v\Delta t}{2}\right)^2 + h^2 \implies \Delta t^2(c^2 - v^2) = 4h^2 \implies \Delta t = \frac{2h}{\sqrt{c^2 - v^2}} = \frac{2h}{c\sqrt{1 - \frac{v^2}{c^2}}} = \frac{2h}{c}\gamma = \gamma\Delta t'$
	* $\gamma > 1$ so $\Delta t' > \Delta t$, i.e. a time interval measured in $s'$ is shorter than a time interval measured in $s$
	* Time has been "dilated" for the observer outside $s'$
* The observer in $s'$ records the *proper time*; everyone else records a dilated time
	* $\Delta t'$ is the proper time since it's the time measured at the same place as the event, often written as $\Delta t_0$
* $\Delta t = \gamma\Delta t_0$
* We see evidence of this in muon decay

