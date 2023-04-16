# Lecture 25, Nov 17, 2021

## Circular Motion

* There are two kind of circular motion: rotations, where the axis is within the object, and revolutions, where the axis is external and out side the object
* With circular motion we can change our coordinate system to use directions that are more convenient
	* Use polar coordinates $(r, \theta)$ to describe coordinates instead of Cartesian coordinates allows us to only consider $\theta$ if the radius remains constant
	* $x = r\cos \theta$ and $y = r\sin \theta$
* Objects in circular motion experience acceleration even when the rate of rotation and radius are constant; we have to fall back to $\vec{v}(t) = \diff{\vec{r}}{t}$ and $\vec{a}(t) = \diff{\vec{v}}{t} = \diffn{2}{\vec{r}}{t}$
* $T$ is the period (time for one revolution), $\omega$ is the angular frequency in radians per second (not revolutions per second), $\omega = \frac{2\pi}{T}$
* Define $\diff{\theta}{t} = \omega(t)$ -- $\theta$ is the rotational analogue of position and $\omega$ is the rotational analogue of velocity
* Define $\diff{\omega}{t} = \alpha(t)$, the rotational analogue of acceleration

## Uniform Circular Motion

* Motion around a circle with constant radius at a constant speed
* Speed is circumference over time, so $\norm*{\vec{v}} = \frac{2\pi r}{T} = \frac{2\pi r}{\frac{2\pi}{\omega}} = \omega r$, i.e. speed is angular speed times radius
* The $x$ and $y$ positions over time follow a cosine and sine curve respectively since $\vec{r} = r\cvec{\cos(\omega t)}{\sin(\omega t)}$
	* Note angle $\theta = \omega t$ since constant angular velocity
* $\vec{v}(t) = \diff{\vec{r}}{t} = \diff{}{t}\cvec{r\cos \theta}{r\sin \theta} = r\diff{\theta}{t}\cvec{-\sin \theta}{\cos \theta}$
* $\alignedeqntwo[t]{\vec{a}(t)}{\diff{\vec{v}}{t}}{r\diffn{2}{\theta}{t}\cvec{-\sin \theta}{\cos \theta} + r\diff{\theta}{t}\cvec{\diff{\theta}{t} -\cos \theta}{\diff{\theta}{t} -\sin \theta}}{r\diffn{2}{\theta}{t}\cvec{-\sin \theta}{\cos \theta} - r\left(\diff{\theta}{t}\right)^2\cvec{\cos \theta}{\sin \theta}}{r\alpha\cvec{-\sin \theta}{\cos \theta} - r\omega^2\cvec{\cos \theta}{\sin \theta}}$
	* From these directions we can break $\vec{\alpha}$ into two components and define $\vec{a}(t) = \vec{a}_t + \vec{a}_r$ where $\vec{a}_t = r\alpha\cvec{-\sin \theta}{\cos \theta}$, which is parallel to $\vec{v}$, and $\vec{a}_r = -r\omega^2\cvec{\cos \theta}{\sin \theta}$, which is opposite to the direction of $\vec{r}$
	* $\vec{a}_r$ is an inwardly directed acceleration that changes the direction of $\vec{v}$ to keep it in a circle (but not the magnitude); it is referred to as the *centripetal acceleration*
	* $\vec{a}_t$ changes only the magnitude of $\vec{v}$ and speeds the object up or slows it down in circular motion
	* These two directional accelerations are always orthogonal to each other
	* The magnitude of $\norm*{\vec{a}_r} = r\omega^2 = \frac{v^2}{r}$, and $\norm*{\vec{a}_t} = r\alpha$
* We can make our lives even easier by making our axes move as well, with the tangential axis being always tangent to the circle of motion and the radial axis being aligned with the radius, and the $z$ axis going out of plane; with this configuration we can do things more naturally without breaking them up into components
* The advantage of using $\omega$ instead of $\vec{v}$ is that in a spinning object, every point has the same $\omega$ but not the same $\vec{v}$

## Angular Kinematics

* The kinematic equations have rotational analogues
* For a constant $\alpha$ (angular acceleration):
	* $\alpha(t) = \alpha _0$
	* $\omega(t) = \alpha _0t + \omega _0$
	* $\theta(t) = \frac{1}{2}\alpha _0t + \omega _0t + \theta _0$
	* And all the other ones
