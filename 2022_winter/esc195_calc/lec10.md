# Lecture 10, Feb 1, 2022

## Polar Coordinates

* $[r, \theta]$ instead of $(x, y)$; if $r > 0$, point is $\abs{r}$ from origin on ray of angle $\theta$; if $r < 0$, point is $\abs{r}$ from origin on ray of angle $\theta + \pi$
* Polar coordinates are not unique:
	1. The pole or origin $[0, \theta]$ for all $\theta$
	2. $[r, \theta ] = [r, \theta + 2\pi n]$ for $n \in \mathbb{Z}$
	3. $[r, \theta] = [-r, \theta + (2n + 1)\pi]$ for $n \in \mathbb{Z}$
* Transformation: $\twopiece{x = r\cos\theta}{y = r\sin\theta}$
* In reverse $\twopiece{r = \pm \sqrt{x^2 + y^2}}{\theta = \arctan\frac{y}{x}}$ (be careful about the range of $\arctan$)
	* Example: $(1, 2) = [\sqrt 5, 1.107]$, $(1, -2) = [\sqrt 5, -1.107]$, but since the range of $\arctan$ is $(-\frac{\pi}{2}, \frac{\pi}{2})$, the point $(-1, 2) = [-\sqrt 5, -1.107]$
* Useful when system has some kind of rotational symmetry
* Example:
	* Lines through the origin: $\theta = \alpha$
	* Vertical line $x = a \implies r\cos\theta = a \implies r  = a\sec\theta$
	* Horizontal line $y = b \implies r\sin\theta = b \implies r = b\csc\theta$
	* General line $ax + by + c = 0 \implies r(a\cos\theta + b\sin\theta) + c = 0$
* Example: $r = 6\sin\theta$
	* $r^2 = 6r\sin\theta \implies x^2 + y^2 = 6y \implies x^2 + y^2 - 6y + 9 = 9 \implies x^2 + (y - 3)^2 = 9$
* Symmetry about x axis is given by $[r, \theta] \to [r, -\theta]$; symmetry about y is given by $[r, \theta] \to [r, \pi - \theta]$; symmetry about origin is $[r, \pi + \theta]$

## Graphing in Polar Coordinates

* Example: $r = \frac{1}{2} + \cos\theta$
	* $0 \leq \theta \leq 2\pi$ due to the periodic nature
	* Find values of $\theta$ that make $r = 0$: $\cos = -\frac{1}{2} \implies \theta = \frac{2\pi}{3}, \frac{4\pi}{3}$
	* Local max and min values of $r$: $\diff{r}{\theta} = -\sin\theta = 0 \implies \theta = 0, \pi, 2\pi$; at $0, 2\pi \implies r = \frac{3}{2}$; at $\pi \implies r = -\frac{1}{2}$
	* Values on the x/y axis: $\theta = \frac{\pi}{2}, \frac{3\pi}{2}$ is in the direction of the y axis; $r = \frac{1}{2}$
	* Symmetry: $\frac{1}{2} + \cos(-\theta) = \frac{1}{2}\cos\theta$, symmetry about $x$; $\frac{1}{2} + \cos(\pi - \theta) \neq \frac{1}{2} + \cos\theta$, not symmetric about $y$; $\frac{1}{2}\cos(\pi + \theta) \neq \frac{1}{2}\cos\theta$, not symmetric about the origin
	* Break the curve into sections based on where $r = 0$
	* Interval $\theta \in [0, \frac{2\pi}{3}]$
		* $r$ positive, $\diff{r}{\theta} = -\sin\theta < 0$, so radius starts at $\frac{3}{2}$ and decreases to 0 at $\theta = \frac{2\pi}{3}$
	* This shape is called a Limaçon and this one has an inner loop
* Types of curves:
	1. Circles, e.g. $r = -2\cos\theta$ is a circle of radius 1 on the left of the y axis
		* $\cos$ -- x axis crosses it, $\sin$ -- y axis crosses it
			* Can also think of this as $\cos$ is symmetric about $\theta \to -\theta$ so the circle must lie on the $x$ axis
		* Negative coefficient swaps from right of axis to left of axis or top of axis to bottom of axis
		* Coefficient out front is 2 times the radius
	2. Cardioids: $r = a + a\cos\theta$
		* Same thing with the orientation for sine or cosine
		* Special case of a Limaçon, looks like a heart shape
	3. Limaçons: $r = a + b\sin\theta$
		* Same thing with orientation
		* $a > b$ means we have a heart shape that never quite touches the origin
		* $a < b$ means we get an inner loop as the curve crosses the origin
	4. Lemniscates: $r^2 = a\sin(2\theta)$
		* Only exists for particular values of $\theta$ due to the $r^2$
		* Has 2 petals, sine oriented on the $\theta = \frac{\pi}{4}$ line, cosine oriented along the $x$ axis
	5. Petal curves: $r = a\sin(n\theta)$ for $n$ a positive integer
		* $n$ petals for odd $n$, $2n$ petals for even $n$
		* Think of the $n = 1$ case -- this is a circle, so only 1 petal, so for odd $n$ we have $n$ petals; in the other case we get $2n$ petals
		* This is because for an odd number of petals when we go from $0$ to $2\pi$ we draw over the entire shape twice, but with even petals there is no overlap

## Intersection of Polar Curves

* Mostly straightforward but we need to watch out for a few things
* Example: $\twopiece{r = \sin\theta}{r = -\cos\theta}$
	* $\sin\theta = -\cos\theta \implies \theta = \frac{3\pi}{4}, \frac{7\pi}{4}$
	* $x = r\cos\theta = -\cos^2\frac{3\pi}{4} = -\frac{1}{2}$
	* $y = r\sin\theta = \sin^2\frac{3\pi}{4} = \frac{1}{2}$
	* Similarly at $\frac{7\pi}{4}$ we get $\left(-\frac{1}{2}, \frac{1}{2}\right)$
	* Notice these two points of intersection give us the same point
* Usually we should try to sketch the curve out
	* In the above example $r = \sin\theta$ is a circle tangent to the $x$ axis and $r = -\cos\theta$ is a circle tangent to the $y$ axis to the left
	* We do get two points of intersection but one is the origin -- what did we do wrong?
	* Both curves actually go through the origin, but they do so at different values of $\theta$!
	* We hit $\left(-\frac{1}{2}, \frac{1}{2}\right)$ because both of these circles are overlapping twice over $[0, 2\pi]$
* To check that two curves intersect at the origin, we need to check whether both curves go through the origin at some point for any $\theta$

## Tangents to Polar Curves

* First parameterize the curve: $r = r(\theta) \implies x = r(\theta)\cos\theta, y = r(\theta)\sin\theta$
* Recall for parametric curves the slope of the tangent is $\frac{y'}{x'}$ so $\diff{y}{x} = \frac{\diff{y}{\theta}}{\diff{x}{\theta}} = \frac{\diff{r}{\theta}\sin\theta + r\cos\theta}{\diff{r}{\theta}\cos\theta - r\sin\theta}$

