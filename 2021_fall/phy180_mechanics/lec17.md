# Lecture 17, Oct 21, 2021

## Newtons Laws From Momentum Conservation

* Newton's first law (isolated objects stay at rest/in motion) is a result of momentum being conserved in an isolated system
* Newton's second law ($F = ma$, definition of force) is a result of differentiating momentum $\diff{p}{t}$
* Newton's third law (every force has an equal and opposite reaction) is a result of differentiating $\Delta p_1 = -\Delta p_2$

## Superposition of Forces

* Forces can be superimposed; the result of several forces on an object is an acceleration equal to the sum of the accelerations caused by the individual accelerations

## Springs and Tension

* Springs extend to generate forces and pull loads into equilibrium
* The force generated by a spring as the result of a displacement is proportional to the magnitude of displacement (Hooke's law)
* This is only valid for a limited range of extensions and contractions

## Impulse

* $\vec{a} = \frac{\Delta \vec{v}}{\Delta t} \implies m\vec{a} = m\frac{\Delta \vec{v}}{\Delta t} = \frac{\Delta \vec{p}}{\Delta t}$
* We define $\Delta \vec{p} = \vec{J}$, the *impulse* (change in momentum)
* Since $\sum \vec{F} = m\vec{a}$, so $\vec{J} = \Delta t\sum \vec{F}$
* If force varies over time then $\vec{J} = \int _{t_i}^{t_f} \sum \vec{F}(t)\,\dt$
* As area under the acceleration curve is change in velocity, area under the force curve is impulse

## Example: Tennis Racket Launching Ball

* Suppose a tennis racket hits a ball (0.20kg) and immediately after the collision the ball has an acceleration of $9g$ upwards, how much force needs to be applied by the racket?
	* $\sum F = F_{Eb}^G + F_{rb}^C = m_ba \implies F_{rb}^C - m_bg = 9m_bg \implies F_{rb}^C = 10m_bg$
		* Note superscripts are used to indicate type of force (**G**ravity, **C**ontact), and subscripts are used to denote the objects (**E**nvironment on ball, **r**acket on ball)
	* Substitute $m_b = 0.20\si{kg} \implies F_{rb}^C = 20\si{N}$

