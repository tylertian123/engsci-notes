# Lecture 13, Oct 13, 2021

## Inelastic Collision From Other Frames

* Kinetic energy of $f$ as observed by $A$ is $K_f = K_{cm} = \frac{1}{2}m(v_{Af} - v_{AZ})^2$; true for both initial and final states in a collision
* $k_{f_i} = K_{cm,i} + \frac{1}{2}m(v_{Af} - v_{cm})^2$
* $k_{f_f} = K_{cm,f} + \frac{1}{2}m(v_{Af} - v_{cm})^2$
* The same amount of kinetic energy can be converted into internal energy in all frames
* The additional kinetic energy as observed from other frames cannot be converted to internal energy even in totally inelastic collisions
	* This is the *unavailable/unconvertible* kinetic energy, and is required for momentum conservation

## Convertible Kinetic Energy

* $\abs{\Delta k} = \Delta E_{int}$ since in the center of momentum frame ($Z$) we can convert all the kinetic energy as there is no momentum
* We can convert this to other frames by adding an additional term for $K_{F,tot} = K_{Z,tot} + \frac{1}{2}m_{tot}(v_{cm,f})^2$
	* The $K_{Z, tot}$ is the convertible part and $\frac{1}{2}m_{tot}(v_{cm,f})^2$ is not convertible
* $K_{conv} = K_{f,tot} - \frac{1}{2}m_{tot}v_{cm,f}^2$ so we can apply a correction to see how much energy is convertible by subtracting off the kinetic energy of the center of momentum frame
* Application: Particle colliders
	* If you collide particles against a fixed target, a large part of the kinetic energy is unconvertible since the momentum needs to be maintained
	* However, if you collide particles against a moving particle such that the collision is in the centre of momentum frame, all the kinetic energy is now convertible

## Reduced/Effective Mass

* $K_{conv}$ is a frame independent quantity; how is this related to $v_{12}$, the relative velocity of the two participants in the collision, which is also frame independent?
* $\alignedeqntwo[t]{K_{conv}}{K_{tot} - \frac{1}{2}m_{tot}v_{cm}^2}{\frac{1}{2}m_1v_1^2 + \frac{1}{2}m_2v_2^2 - \frac{1}{2}m_{tot}\left(\frac{m_1v_1 + m_2v_2}{m_{tot}}\right)^2}$
* $2m_{tot}K_{conv} = (m_1 + m_2)(m_1v_1^2 + m_2v_2^2) - (m_1v_1^2 + m_2v_2^2 + 2m_1m_2v_1v_2) = m_1m_2(v_2 - v_1)^2$
* $K_{conv} = \frac{1}{2}\frac{m_1m_2}{m_1 + m_2}(v_2 - v_1)^2 = \frac{1}{2}\mu v_{12}^2$ where $\mu$ is $\frac{m_1m_2}{m_1 + m_2}$ which is the *reduced/effective mass*

## Interactions

* In an isolated system, the total momentum before, after, and during a collision stays the same, but the kinetic energy does not
* Since objects don't maintain constant relative speed during the entire collision, the total kinetic energy changes, even for elastic collisions
* If the collision is elastic, the kinetic energy is the same before and after a collision, but it is still decreased during a collision
* At some point during the collision $\Delta v = 0$; there is no way to tell whether the collision is elastic or inelastic by only looking at what happens before this point
* The kinetic energy lost during the collision is converted into internal energy; for elastic collisions some of this energy comes back
* If we're looking at it from the centre of momentum frame, in the middle of the collision all the kinetic energy is converted into internal energy

