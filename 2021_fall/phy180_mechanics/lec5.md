# Lecture 5, Sep 20, 2021

## Projectile Motion in 1D

* "Projectile": any object launched with some initial velocity $v_0$; modelled by $x_f = x_i + v_it_f + \frac{1}{2}at_f^2$
* A projectile launched upwards with $v_i$ and a projectile launched downwards with $-v_i$ have the same downward speed when the projectile passes through the starting point
	* $x_f = x_i \implies v_it + \frac{1}{2}at^2 = 0$ and $v(t) = v_i - gt \implies t = \frac{v(t) - v_i}{-g} = \frac{v_i - v}{g} \implies 0 = v_i\left(\frac{v_i - v}{g}\right) - \frac{1}{2}g\left(\frac{v_i - v}{g}\right)^2 = \left(\frac{v_i - v}{g}\right)\left[v_i - \frac{1}{2}g\left(\frac{v_i - v}{g}\right)\right] = \left(\frac{v_i - v}{g}\right)\left[v_i - \frac{1}{2}\left(v_i - v\right)\right]$, zero when $v = -v_i$ or $v = v_i$

## Inclined Planes and Free Fall

* Galileo observed that the ratio $\frac{x_i}{t_i^2}$ was constant; i.e. the position is proportional to time squared, when the object is rolling down an inclined plane
	* This ratio is a function of theta: $ax = g\sin \theta$
* When the plane is at $90\degree$, the object is in free fall

## Instantaneous Acceleration

* $a = \diff{v}{t} = \diff{}{t}\left(\diff{x}{t}\right) \equiv \diffn{2}{x}{t}$
* The instantaneous acceleration is the "curvature" of the position function (related? equal to? the actual curvature $\kappa = \frac{1}{R}$)

