# Lecture 28, Nov 25, 2021

## Free Rotation

* When an object is allowed to rotate and translate freely, it will rotate around its centre of mass
* The centre of mass undergoes essentially no rotation and is in translational motion only; the translational and rotational movements are essentially uncoupled
* This means we can decompose the kinetic energy into two parts: the translational kinetic energy of the centre of mass, and the rotational kinetic energy of the rest of the object

## Extended Free Body Diagrams

* In an EFBD both rotation and translation are considered
* The rotation and translation are decoupled by separating it into the centre of mass translation and rotation about the centre of mass
* Show both the torques (forces with a lever arm about the rotational axis) and other forces that pass through the centre of mass
	* In a regular FBD all forces are shown to act on the centre of mass, but in an EFBD the forces have lever arms
	* The EFBD can be used to calculate both translational acceleration and angular acceleration

## Vector Nature of Rotation

* Rotations in 3D can be described by a vector where the magnitude of that vector is the rotational angle/speed/acceleration and the direction is the axis of rotation
* $\theta$, $\omega$ and $\alpha$ essentially only have two dimensions, counterclockwise or clockwise
* By convention counterclockwise rotation is positive and clockwise motion is negative
* The direction of the rotation vector (in or out of the plane) determines the direction of rotation; use the right hand rule (curl your right hand's fingers in the direction of rotation, then the thumb points in the direction of the rotation vector)
* This vector describes the direction, magnitude, and axis of rotation so it completely describes the rotation
* Angular momentum $\vec{L}$ can now be considered as the cross product $\vec{L} = \vec{r} \times \vec{p}$, just like torque $\vec{\tau} = \vec{r} \times \vec{F}$
	* Like torque we can consider either the angle between the lever arm and the linear momentum, or the perpendicular lever arm
	* Since the cross product points out of the plane, the angular momentum vector is pointed in the direction of the axis of rotation

## Relationship Between $\vec{L} = I\vec{\omega}$ and $\vec{L} = \vec{r} \times \vec{p}$

* Consider a point mass in revolutionary motion with radius $\vec{r}$ and velocity $\vec{v}$
* We know $\vec{v} = \norm{\vec{r}}\vec{\omega}$
* Let $\hat{r}$ be the unit vector in the radial direction and $\hat{t}$ be the unit vector in the tangential direction, and $\hat{z}$ be the unit vector pointing out of the plane of rotation
* $\vec{L} = \vec{r} \times \vec{p} = r\hat{r} \times mv\hat{t} = rmv\hat{r} \times \hat{t} = rmv\hat{z} = r^2m\omega\hat{z} = I\vec{\omega}$
* For an extended object we can sum up all the small pieces of the mass for $\vec{L} = \sum I_i\vec{\omega} = I\omega\hat{z}$

