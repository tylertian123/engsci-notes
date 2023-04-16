# Lecture 35, Apr 12, 2023

## Motional EMFs

* We can think of it in 2 perspectives, either due to changing magnetic flux $V_{emf} = -\pdiff{\Phi}{t}$ or from a perspective of magnetic force $\vec F_m = q\vec u \times \vec B$
* Electrons in a moving conductor will have some velocity due to the movement of the conductor as a whole, so in the presence of a field they experience a force, causing an EMF
* This gives us $V_{emf} = \oint _C \frac{\vec F_m \cdot \dd\vec l}{q} = \oint _C (\vec u \times \vec B) \cdot \dd\vec l$
	* The $\vec u$ only exists on the moving parts of the conductor, so we can ignore any stationary parts
	* Note electrons have negative charge
* Application note: if we have a loop rotating in a uniform magnetic field, then $\vec B \cdot \dd\vec S$ will vary as $\cos(\omega t)$, so we will produce a sinusoidal AC voltage
	* $V_{emf} = B_0S\omega\sin(\omega t)$
	* Note the amplitude scales directly with frequency, and the output frequency is the same as the input frequency of the turning
	* What if we used an AC current to produce the field in the first place?
		* The EMF will now be the total EMF, a combination of both the transformer and motional EMFs
		* $V_{emf} = -N\pdiff{\Phi}{t} = -N\pdiff{}{t}\iint B_0\sin(\omega t)\hat a_z \cdot \dd\vec s$
		* The dot product introduces another cosine, so we end up integrating the product of a sine and cosine
		* This gives us a resulting voltage that varies with a frequency of $2\omega t$

