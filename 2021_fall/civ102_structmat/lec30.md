# Lecture 30, Nov 29, 2021

## Properties of Stone

* Stone-like materials have different properties than wood or metal:
	* They are heavy and tend to be used in large structures, so there is significant self-weight to be considered
		* However, the added density could be good because it can stabilize the structure
	* Strong in compression but weak in tension, little to no ductility
	* Essentially the opposite of cables (stone is anti-rope)
	* Stone is durable and does not corrode like metal (however, with reinforced concrete, corrosion is still an issue)

## True Theory of Arches

* Stone is commonly used in arches; these must be designed so that the load can be transferred to the ground without any tensile stress
* Hooke summarized this with "As hangs a flexible cable, so, inverted, stand the touching pieces of an arch"
* Under a UDL the ideal shape for an arch becomes a parabola just like a cable in a suspension bridge
* With arches the supports are 2 pins, not a pin and a roller, because with a pin and a roller the arch would simply deform and work like a beam
	* With the 2 pins we can now have a horizontal compression
* If the arch is in the optimal shape then it will only carry compression
* If the arch is not in the perfect shape, then in addition to axial compression, there will also be bending moments
* The optimal shape for a hanging cable is known as the *thrust line*, which is the centroid of compression; even in other shapes, the thrust line is still parabolic and can be calculated
* Draw the parabola thrust line onto the arch, and if the thrust line fit inside the arch, then the arch will not collapse
	* We can compare the thrust line to the centroidal axis; in a perfect arch these two would line up perfectly
	* The distance between the thrust line and the arch centroid is $e$, the eccentricity
	* If the thrust line falls out of the cross section then the arch will fail

## Design for Combined Axial Load and Bending Moment

![Stone tower subjected to high wind forces](imgs/stone_tower.png)

* Stone's poor tensile strength makes it bad for resisting bending moments since these will cause tension on one side and compression on the other (which is why beams are usually not made of concrete on its own)
* Sometimes the high self-weight can actually help resist moments
* Consider the stone tower subjected to a high wind load, with unit density $\gamma$ and volume $V_0$; at the bottom it is subjected to axial compression from its self weight, so $\sigma _N = -\frac{N}{A} = -\frac{V_0\gamma}{A}$
	* Note that if the cross-sectional area is constant this is effectively $\sigma = h\gamma$
* The wind causes a bending moment $M$, and the flexural stresses caused by this can be calculated using $\sigma _M = \frac{My}{I}$, so on the left side there would be a flexural tension of $\sigma _M = \frac{My_{left}}{I}$
* If the tower is still linear elastic then these two effects can be combined to get $\sigma = -\frac{N}{A} + \frac{My_{left}}{I}$ at the left and $\sigma = -\frac{N}{A} - \frac{My_{right}}{I}$ on the right
* The compressive force from the tower's self weight essentially counteracts the flexural tension, so if the tower is heavy enough, the left side may remain in compression despite the high wind

