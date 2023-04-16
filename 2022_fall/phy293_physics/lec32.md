# Lecture 32 (2-16), Dec 1, 2022

## Relativistic Doppler Shift

* For classical waves the observed frequency is $f = \frac{f_0}{1 - \frac{v_{src}}{v_{wave}}}$ for a source moving towards an observer
* For a relativistic frequency shift, we need to take time dilation into account
	* $f = \frac{1}{\gamma}\frac{f_0}{1 - \frac{v_s}{v_w}} = f_0\sqrt{\frac{1 + \frac{v}{c}}{1 - \frac{v}{c}}} = f_0\sqrt{\frac{1 + \beta}{1 - \beta}} = f_0\sqrt{\frac{c + v}{c - v}}$
	* For a source moving away, flip the signs
* Example: Redshift of stars suggests that they're moving away

## Relativistic Momentum

* Consider a simple collision of two particles with mass $m$, colliding head-on with speed $u$ towards each other; after the collision both particles change to the $y$ direction
	* $\vec u_{1,i} = (u, 0, 0)$
	* $\vec u_{2,i} = (-u, 0, 0)$
	* Total momentum $\vec p_{tot} = 0$
	* After the collision the first particle becomes $\vec u_{1,f} = (0, u, 0)$ and the second particle becomes $\vec u_{2,f} = (0, -u, 0)$ so that $\vec p_{tot} = 0$ is conserved
* Now consider frame $s'$ moving with velocity $v = u$ (i.e. a frame moving with particle 1 pre-collision)
	* Before the collision $\vec u_{2i}'$ is the only particle moving
	* The velocity of this particle would be $u_x' = \frac{u_x - v}{1 - \frac{u_xv}{c^2}} = \frac{-u - u}{1 - \frac{(-u)u}{c^2}} = \frac{-2u}{1 + \frac{u^2}{c^2}}$
	* $\vec p' = \frac{-2mu}{1 + \frac{u^2}{c^2}}\hat x$
	* After the collision, both particles have both an $x$ and $y$ component
	* $u_{xf}' = \frac{u_{xf} - v}{1 - \frac{u_{xf}v}{c^2}} = \frac{0 - u}{1 - 0} = -u$
	* $u_{yf}' = \frac{u_y}{\gamma\left(1 - \frac{u_xv}{c^2}\right)} = \frac{u}{\gamma}$
	* $\vec p' = m(-u)\hat x + m\frac{u}{\gamma}\hat y + m(-u)\hat x + m\frac{-u}{\gamma}\hat y = -2mu\hat x$
	* Momentum is seemingly not conserved, which violates our first postulates that all laws of physics stay the same
* Therefore we need to use a new definition of momentum
* Define the relativistic momentum $\vec p = \gamma _pm\vec u$ where $\gamma _p = \frac{1}{\sqrt{1 - \frac{u^2}{c^2}}}$
	* With this definition our momentum is now conserved

