# Lecture 26, Nov 22, 2021

## Forces in Circular Motion

* Since there is an acceleration towards the centre of motion, there must be a force $\frac{mv^2}{r}$ pushing the object towards the centre (centripetal force)
	* This means that as radius increases the force needed to pull the object into circular motion decreases (at the extreme for an object moving in a straight line the radius is effectively infinite)
		* Smaller radii means more change in direction per unit time (for the same $\omega$) so the vector change in velocity is greater
	* As velocity increases the centripetal force also increases

## Banked Curves

* On a banked curve, the normal force now has a component towards the middle of the track and the vector is tilted
* The component towards the middle becomes the centripetal force
* The vertical component of normal force needs to be large enough to balance out gravity
* The masses cancel out and $\tan \theta = \frac{v^2}{gr}$

## Rotational Inertia

* Objects are harder to rotate the further you are from their centre of mass, so both radius and mass affects inertia for rotation
* For example you hold a hammer from the end, far away from its centre of mass, so you can store more energy and momentum in it for the strike
* The kinetic energy of a point mass that's revolving is $K = \frac{1}{2}mv^2 = \frac{1}{2}m(r\omega)^2 = \frac{1}{2}(mr^2)\omega^2$
	* Comparing this to $\frac{1}{2}mv^2$ we see that $mr^2$ is the equivalent of $m$, so we write it as $I = mr^2$ and the angular kinetic energy $K_{rot} = \frac{1}{2}I\omega^2$
	* $I$ is the *rotational inertia*
* Rotational momentum works in the same way; if an object of mass $m$ moves at speed $v$ in a straight line and then strikes another object with the same mass, all the momentum will be transferred, so the second object now has momentum $mv = mr\omega \implies rmv = I\omega$
	* Define $I\omega$ as the *angular momentum*
	* Since $\omega = \frac{v}{r}$ the further along the radius of object 2 that object 1 hits, the easier it is to set object 2 into rotational motion, so we say that objects have more rotational momentum if their radius is further
	* Note since $I\omega = rmv$ an object moving linearly has angular momentum if we can define $r$; these objects have angular momentum because they are able to set objects into rotational motion
	* For a particle moving linearly we define $r$ as the perpendicular distance from the line of action of the particle and the rotational axis, or the cross product of the object's velocity and the radius vector
* Angular momentum is a conserved quantity

## Computing Rotational Energy

* If we apply $K = \frac{1}{2}mv^2$ to all particles, then for a rotating object the kinetic energy of the whole object is $K = \frac{1}{2}I\omega^2$ where $I = \int r^2\,\dd m$
	* Since every point in the object has the same $\omega$, this is a constant
	* Each piece of the object has energy $\frac{1}{2}v^2\,\dd m = \frac{1}{2}I\omega^2$ where the $I$ for this piece is $r^2\,\dd m$
	* Since $\omega$ is a constant we can pull it out of the integral to get $\frac{1}{2}\omega^2 \int r^2\,\dd m$
	* Caveat: The object cannot deform since that would change the $r$
	* To compute this integral we say $\dd m = \rho\,\dV = \rho\,\dx\,\dy\,\dz$ so for a 3D object this becomes a triple integral $\iiint r^2\rho(x, y, z)\,\dx\,\dy\,\dz$
		* Generalizes to other dimensions
* Example: Linear thin rod (effectively 1 dimensional) $I = \int r^2\,\dd m = \rho\int _a^b x^2\,\dx = \frac{1}{3}\rho(b^3 - a^3)$, and if the object is $L$ long and attached to the axis this is equal to $\frac{1}{3}\rho L^3$
	* Note: Since density $\rho = \frac{m}{L}$, this is also equal to $\frac{1}{3}mL^2$

