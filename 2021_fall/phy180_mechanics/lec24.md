# Lecture 24, Nov 15, 2021

## Work in Multiple Dimensions

* In multiple dimensions power is generalized from $P = Fv$ to $P = \vec{F} \cdot \vec{v}$
* Power is the rate of change of mechanical energy
* In one dimension $K = \frac{1}{2}mv^2 \implies \diff{K}{t} = \frac{1}{2}m\diff{}{t}v^2 = mv\diff{v}{t} = mva = Fv$
* In multiple dimensions $K = \frac{1}{2}m\norm*{\vec{v}}^2$ where $\norm*{\vec{v}}^2 = v_x^2 + v_y^2 + v_z^2$, so $\diff{K}{t} = \frac{1}{2}m\diff{}{t}\norm*{\vec{v}}^2 = \frac{1}{2}m(2v_xa_x + 2v_ya_y + 2v_za_z) = F_xv_x + F_yv_y + F_zv_z = \vec{F} \cdot \vec{v}$
* Using the dot product $\vec{F} \cdot \vec{v} = F_xv_x + F_yv_y + F_zv_z = \norm*{\vec{F}}\norm*{\vec{v}}\cos \theta$, which computes the velocity of the point of application in the direction of the applied force
	* Example: The earth orbiting around the sun does no work, because the gravitational force pulling it inwards is perpendicular to the displacement of the Earth
* Generalizing this to work, $\dd W = P\,\dt = \vec{F} \cdot \Delta \dd\vec{r}$ and taking the integral we obtain work as a line integral: $W = \int \vec{F} \cdot \dd\vec{r}$
	* To actually compute this integral we need to parameterize $\vec{r}(t)$, and turn $\dd\vec{r}$ into $\cvec{\dx}{\dy}{\dz}$, each of which expressed in terms of $\dt$, so the integral can now be computed
	* $\int \vec{F} \cdot \dd\vec{r} = \int \vec{F} \cdot \diff{\vec{r}}{t}\,\dt$ and $\diff{\vec{r}}{t}$ is just the velocity

## Force Created by Potential Energy

* Recall that systems always accelerate towards lower potential every
* Since $\dd K = W\,\dt = F\,\dx$, thus $\dd U = -F\,\dx$ and $F = -\diff{U}{x}$
* So if we know the change in potential energy then we know the force
* In multiple dimensions $F_x = -\pdiff{U}{x}, F_y = -\pdiff{U}{y}$, etc
* If we write force as a vector then $\vec{F} = -\pdiff{U}{x}\ihat + -\pdiff{U}{y}\jhat$, which is the *gradient* of $U$, $\vec{F} = -\vec\nabla U$, thus force is the gradient of potential
	* e.g. gravitational potential $U(x, y) = mgy \implies \vec{F} = \cvec{0}{-mg}$, or a spring $U(x, y) = \frac{1}{2}kx^2 \implies \vec{F} = \cvec{-kx}{0}$
* Forces derived from the gradient of a potential are *conservative*; $U + K$ is always conserved
* With a conservative force the work done is independent of the path taken, by the fundamental theorem of calculus for line integrals

