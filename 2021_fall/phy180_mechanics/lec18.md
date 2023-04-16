# Lecture 18, Oct 25, 2021

## Systems of Interacting Objects

* If two masses are connected by a spring and you push on one of them, what happens to the system?
* What happens to the individual blocks is hard to determine, but the acceleration of the centre of mass is equal to the force over the total mass, because all internal forces cancel out
* The centre of mass of a system behaves like a rigid body so it can be used as a simplification
* The impulse is then equal to $\vec{J} = m_{tot}\Delta \vec{v}_{cm}$

## Terminal Velocity/Free Fall

* Objects in free fall are slowed by air resistance; at low speeds this drag force is proportional to speed, and at higher velocities the airflow becomes turbulent and the drag force becomes quadratic
* Since drag force increases as velocity increases, at some point the force of gravity balances with the drag force and the object stops accelerating
* $v_T = \frac{mg}{b}$ for laminar flow or $v_T = \sqrt{\frac{mg}{c}}$ for turbulent flow
* In the case of laminar flow, when approaching terminal velocity, $F = m\diff{v}{t} = mg - bv = v_Tb - bv \implies \diff{v}{t} = -\frac{b}{m}(v - v_T)$ since $v_T = \frac{mg}{b}$; $\frac{b}{m}$ is a property of the falling object, so define $\tau = \frac{m}{b} \implies \diff{v}{t} = -\frac{1}{\tau}(v - v_T)$
	* $\tau$ is a time constant characteristic of how fast the object approaches $v_T$
* This is a differential equation and ends up being a decaying exponential

