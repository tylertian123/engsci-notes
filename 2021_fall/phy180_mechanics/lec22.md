# Lecture 22, Nov 3, 2021

## Two Dimensional Kinematics

* Velocity and acceleration in 2 dimensions can be decomposed into components
* The velocity $\vec{v}$ is always tangent to the trajectory
* Acceleration $\vec{a}$ can be decomposed into two components, one tangent to the trajectory (same direction as $\vec{v}$) which only accelerates the object, and one perpendicular to the trajectory (orthogonal to $\vec{v}$) which only changes the object's direction
	* This is true instantaneously; over a time interval, as the perpendicular component of acceleration changes the direction of velocity, more and more of the acceleration will go to increasing the velocity rather than changing its direction
* In multiple dimensions position $\vec{r}(t) = \cvec{x(t)}{y(t)}{z(t)}$, $\vec{v}(t) = \diff{}{t}\vec{r}(t) = \cvec{\diff{x}{t}}{\diff{y}{t}}{\diff{z}{t}}$ and so on for acceleration
	* The speed is the magnitude of $\vec{v}$
* When we differentiate/integrate to get from one to the other, we can do so for each component separately
* We typically want to find the simplest coordinate system, usually one that has no motion in one or more dimensions, in orders simplify the problem

## Projectile Motion

* The special case of constant acceleration where $\vec{a} = -g\jhat$
* Horizontal component of velocity is constant (ignoring air friction)
* Since the slope of the curve is $\diff{y}{x} = \frac{v_y}{v_x}$
* $\vec{r} = \frac{1}{2}\vec{a}t^2 + \vec{v}t \implies \twopiece{x = v_xt = v_0\cos\theta t}{y = -\frac{1}{2}at^2 + v_yt = -\frac{1}{2}gt^2  + v_0\sin\theta t}$; eliminate $t$ by substituting $t = \frac{x}{v_0\cos\theta}$ to get $y = x\tan\theta - \frac{gx^2}{2v_0^2\cos^2\theta}$
* To find the range, we solve for when $y = 0 \implies \frac{gx^2}{2v_0^2\cos^2\theta} = x\tan\theta \implies x = \frac{v_0^2}{g}\sin(2\theta)$ (use double angle identity $2\sin\theta\cos\theta = \sin(2\theta)$)
	* In order to maximize range $\sin(2\theta) = 1 \implies 2\theta = \frac{\pi}{2} \implies \theta = \frac{\pi}{4} = 45\degree$
* The max flight time only depends on $v_y$, and occurs when $y = 0 \implies v_0\sin\theta t = \frac{1}{2}gt^2 \implies t = \frac{2v_0\sin\theta}{g}$, so the object should be thrown straight up

## Decomposing Forces

* Example: Pulling someone on a swing; the force needed grows larger as the angle of the swing increases
* We can decompose the force being applied by the swing pivot into two components, one perpendicular the ground and one parallel to the ground
* As you pull the person back, the angle increases and the lateral component of the swing pivot force grows, which needs to be balanced out by the applied force
	* The vertical component of the swing pivot force is balanced by gravity; the diagonal force of the pivot has a vertical component to counteract gravity, and as a side effect this produces a horizontal component that must be balanced out by the applied force

