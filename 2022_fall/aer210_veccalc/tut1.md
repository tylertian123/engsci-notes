# Tutorial 1, Nov 3, 2022

## The Need For Dimensional Analysis

* Can help us do fewer experiments by grouping them
* Allows us to extrapolate experiments on a small scale to results on a much larger scale 

## Dimensions

* *Dimension*: A qualitative description of a physical quantity
* $[\cdots]$ means to take the dimensions of
* There are two types of dimensions:
	* Primary dimensions: dimension that are not formed by other dimensions
		* e.g. mass, length, time (MLT): $[\text{mass}] = M, [\text{length}] = L, [\text{time}] = T$
		* We can also choose other systems of primary dimensions, e.g. force, length, time
			* However we can't include force in the MLT system since force can be expressed as a combination of mass, length and time
		* In heat transfer we also have temperature $[\text{temperature}] = \theta$
	* Secondary dimensions: dimensions that are derived from the primary dimensions
		* e.g. density or pressure in the MLT system
			* $[\rho] = \frac{M}{L^3}$
			* In the FLT system $[\rho] = \frac{FT^2}{L}\frac{1}{L^3} = \frac{FT^2}{L^4}$
* Buckingham Pi Theorem: The number of $\pi$ terms is equal to the number of variables minus the minimum number of required reference dimensions
	* We call dimensionless numbers $\pi$ terms, e.g. $\pi _1 = \frac{L}{D}, \pi _2 = \frac{AD}{C^2}$
	* Reference dimensions are *usually* the primary dimensions
	* e.g. if $A = f_1(B, C, D, E, F)$ and we describe this system using the reference dimensions $M, L, T$, then the number of $\pi$ terms is $6 - 3 = 3$
		* This allows us to say $\pi _1 = f_2(\pi _2, \pi _3)$
		* This allowed us to simplify the problem so it's easier for us to do experiments
* To determine $\pi$ terms we use the method of repeating variables

## Method of Repeating Variables

1. List all the *independent* variables that are involved in the problem
	* e.g. velocity, density, length
	* They have to be independent, e.g. we can't have both diameter and cross-sectional area of a pipe
2. Express each variable in terms of primary dimensions
	* e.g. express density as $[\rho] = ML^{-3}$ in MLT
3. Determine the required number of Pi terms using the Buckingham Pi Theorem
	* e.g. $[A] = \frac{M}{L^3}, [B] = \frac{M}{L^3T^2}, [C] = \frac{MT}{L^3}$
4. Choose some repeating variables, such that the number of repeating variables is equal to the number of reference dimensions
	* The choice of repeating variables is fairly arbitrary, except:
		* We can't select the dependent variable
		* The repeating variables must cover all reference dimensions
		* Each variable must be dimensionally independent (i.e. you can't construct one dimension by multiplying together or dividing others)
	* e.g. if we have $A = f(B, C, D, E, F)$ in MLT, then we need to select 3 repeating variables, but we can't pick $A$ and the ones we pick must cover $M$, $L$, and $T$
5. Form a $\pi$ term by multiplying each of the non-repeating variables by some combination of the repeating variables raised to powers such that the combination is dimensionless
	* e.g. if we select $B, C, D$ as repeating variables, we need to do so for $A, E, F$
		* $\pi _i = AB^{x_i}C^{y_i}D^{z_i}$
		* We need to select $x_i, y_i, z_i$ such that the combination is dimensionless
6. Check that the $\pi$ terms are dimensionless
7. Express a new relationship among $\pi$ terms
	* e.g. $A = f_1(B, C, D, E, F) \implies \pi _1 = f_2(\pi _2, \pi _3)$

## Example

* We would like to find the pressure difference per unit length with a flow with velocity $V$, density $\rho$, viscosity $\mu$, between two pressures $p_1$ and $p_2$ separated by distance $L$
* Using the method of repeating variables:
	1. Variables:
		* $\frac{\Delta p}{L} = f(V, D, \rho, \mu)$
	2. Expressing in primary dimensions:
		* $\left[\frac{\Delta p}{L}\right] = \frac{ML}{T^2}\frac{1}{L^2}\frac{1}{L} = \frac{M}{T^2L^2}$
		* $[V] = \frac{L}{T}$
		* $[D] = L$
		* $[\rho] = \frac{M}{L^3}$
		* $[\mu] = \frac{M}{LT}$
	3. Buckingham Pi Theorem
		* 5 variables, 3 reference dimensions gives us 2 Pi terms
	4. Choose repeating variables
		* We need to choose 3
		* We can choose $\rho, V, D$
	5. Form Pi terms
		* We need 2 $\pi$ terms
		* $\pi _1 = \frac{\Delta p}{L}\rho^aV^bD^c = \frac{M}{T^2L^2}\frac{M^a}{L^{3a}}\frac{L^b}{T^b}L^c = M^{1 + a}L^{-2 - 3a + b + c}T^{-2 - b}$
			* This gives a system $\threepiece{1 + a = 0}{-2 - 3a + b + c = 0}{-2 - b = 0}$ which gives $a = -1, b = -2, c = 1$
			* $\pi _1 = \frac{\left(\frac{\Delta p}{L}\right)D}{\rho V^2}$
		* For $\pi _2$ we can use a similar process
			* $\pi _2 = \frac{\mu}{\rho VD}$
	6. Check dimensions of $\pi$ terms
	7. Express the new relationship
		* $\pi _1 = f_2(\pi _2)$
		* $\frac{\left(\frac{\Delta p}{L}\right)D}{\rho V^2} = f_2\left(\frac{\mu}{\rho VD}\right)$
		* Now we only need to find one relationship instead of the 3 relationships before!

