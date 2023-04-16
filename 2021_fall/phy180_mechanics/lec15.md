# Lecture 15, Oct 18, 2021

## Interaction Ranges

* All interactions (e.g. magnetic, collisions) have different ranges
* Some interactions are long-range (e.g. magnetic, gravitational) and work without requiring "contact"
* Other interactions are short-range and only work when objects are "contacting" (e.g. collisions)

## Fundamental Interactions

* Electromagnetism and gravity can be characterize by fields
* Moving the charges generates waves in the field
* Strong and weak interactions are caused by fundamental particles such as pions
* Out of the 4 fundamental interactions, gravity is the weakest by many orders of magnitude
* Weak interactions cause the spontaneous decay of nuclei

## Nondissipative Interactions

* In any closed system $\Delta E = \Delta K + \Delta U + \Delta E_s + \Delta E_{th} = 0$
* For a non-dissipative system $\Delta E_s = \Delta E_{th} = 0$, i.e. energy is only converted between kinetic and potential forms
* The *mechanical energy* of a system $E_{mech} = K + U$ is the sum of the kinetic and potential energy; for a closed, nondissipative system then $\Delta E_{mech} = 0$
* Example: a cart-spring collision is nondissipative; $\Delta K_{cart} = -\Delta U_{spring}$ as the cart slows down and energy is stored in the spring
* Potential energy is only a function of position $U(x)$ and as a result not depend on the path taken (conservative force); we can calculate this function
* Principle of Potential Energy: **The parts of any closed system always tend to accelerate in the direction that lowers the system's potential energy.**

## Local Gravitational Potential Energy

* Suppose a ball falls from $x_i$ to $x_f$
* $\Delta U_G = -\Delta K_{ball}$ and $a_x = -g$
* $\Delta t = \frac{-\Delta v_x}{g}$
* $\Delta x = v_i\Delta t - \frac{1}{2}g\Delta t^2$, substitute $\Delta t$
* $\alignedeqntwo[t]{\Delta x}{v_i\frac{-\Delta v_x}{g} - \frac{1}{2}g\left(\frac{\Delta v_x}{g}\right)^2}{\frac{-\Delta v_x}{2g}\left[2v_{xi} + (v_{xf} - v_{xi})\right]}{\frac{-\Delta v_x}{2g}(v_{xi} + v_{xf})}{\frac{-(v_{xf} - v_{xi})}{2g}(v_{xi} + v_{xf})}{-\frac{1}{2g}(v_{xf}^2 - v_{xi}^2)}$
* $mg\Delta x = -\frac{1}{2}m(v_{xf}^2 - v_{xi}^2) \implies mg\Delta x + \Delta K_{ball} = 0$ and since $\Delta U_G + \Delta K_{ball} = 0$, $\Delta U_G = mg\Delta x$

## Dissipative Interactions

* With dissipative interactions, the energy is not a function of position (e.g. friction); reactions are nonreversible
* $\Delta E = \Delta K + \Delta U + \Delta E_{th}$, if no reversible potential energy, then $\Delta E = \Delta E_{th} + \Delta K = 0 \implies \Delta K = -\Delta E_{th}$, and $E_{th}$ is not a function of position
* Example: Totally elastic collision where $\Delta K = 0$ has $\Delta E_{th} = 0$; for totally collisions, $\Delta K = \frac{1}{2}\mu v_{21,i}(e^2 - 1)$,so $\Delta E_{th} = \frac{1}{2}\mu v_{21,i}(1 - e^2)$

