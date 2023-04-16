# Lecture 23, Mar 11, 2022

## Vector Derivatives and Integrals

* The derivative of a vector function is defined as $\vec f'(t) \equiv \lim _{h \to 0} \frac{\vec f(t + h) - \vec f(t)}{h}$
* Derivative can be taken componentwise: $\vec f'(t) = f_1'(t)\ihat + f_2'(t)\jhat + f_3'(t)\khat$
	* Proof: $\alignedeqntwo[t]{\vec f'(t)}{\lim _{h \to 0} \frac{\vec f(t + h) - \vec f(t)}{h}}{\lim _{h \to 0}\left[\frac{f_1(t + h) - f_1(t)}{h}\ihat + \frac{f_2(t + h) - f_2(t)}{h}\jhat + \frac{f_3(t + h) - f_3(t)}{h}\khat\right]}{\lim _{h \to 0} \frac{f_1(t + h) - f_1(t)}{h}\ihat + \lim _{h \to 0} \frac{f_2(t + h) - f_2(t)}{h}\jhat + \lim _{h \to 0} \frac{f_3(t + h) - f_3(t)}{h}\khat}{f_1'(t)\ihat + f_2'(t)\jhat + f_3'(t)\khat}$
* Integrals can also be defined componentwise as $\int _a^b \vec f(t)\,\dt = \left(\int _a^b f_1(t)\,\dt\right)\ihat + \left(\int _a^b f_2(t)\,\dt\right)\jhat + \left(\int _a^b f_3(t)\,\dt\right)\khat$
* All ordinary derivative and integral properties apply:
	* $\int _a^b \vec c \cdot \vec f(t)\,\dt = \vec c \cdot \int _a^b \vec f(t)\,\dt$
	* $\norm*{\int _a^b \vec f(t)\,\dt} \leq \int _a^b \norm*{\vec f(t)}\,\dt$

## Differentiation Formulas

* Define a composition function $(\vec f \circ u)(t) = \vec f(u(t))$
	* Note this composition can't go the other way around, because $\vec f$ takes in a scalar and $u$ takes in a vector, so $u(\vec f(t))$ makes no sense
* Differentiation rules:
	1. $(\vec f + \vec g)'(t) = \vec f'(t) + \vec g'(t)$
	2. $(\alpha \vec f)'(t) = \alpha \vec f'(t)$
	3. $(u\vec f)'(t) = u(t)\vec f'(t) + u'(t)\vec f(t)$
	4. $(\vec f \cdot \vec g)'(t) = \vec f(t) \cdot \vec g'(t) + \vec f'(t) \cdot \vec g(t)$
	5. $(\vec f \times \vec g)'(t) = \vec f(t) \times \vec g'(t) + \vec f'(t) \times \vec g(t)$
		* Note that for this one, order matters since cross product is non-commutative
	6. $(\vec f \circ u)'(t) = u'(t)\vec f(u(t))$
* Example: $\vec r = x\ihat + y\jhat + z\khat$
	* Define $r \equiv \norm*{\vec r} = \sqrt{\vec r \cdot \vec r} = \sqrt{x^2 + y^2 + z^2} \implies \vec r \cdot \vec r = r^2$
	* $\vec r \cdot \vec r = r^2 \implies \diff{\vec r}{t} \cdot \vec{r} + \vec{r} \cdot \diff{\vec r}{t} = 2r\diff{r}{t} \implies \vec r \cdot \diff{\vec r}{t} = r\diff{r}{t}$
* Example: $\diff{}{t} \frac{\vec r}{r}$
	* This is a unit vector in the direction of $\vec r$; even though the magnitude is constant, the derivative can be nonzero since the direction can change
	* $\alignedeqntwo[t]{\diff{}{t} \frac{\vec r}{r}}{\frac{1}{r}\diff{\vec r}{t} - \frac{1}{r^2}\diff{r}{t}\vec r}{\frac{1}{r^3}\left(r^2 \diff{\vec r}{t} - r\diff{r}{t}\vec r\right)}{\frac{1}{r^3}\left((\vec r \cdot \vec r)\diff{\vec r}{t} - \left(\vec r \cdot \diff{\vec r}{t}\right)\vec r\right)}{\frac{1}{r^3}\left(\left(\vec r \times \diff{\vec r}{t}\right) \times \vec r\right)}$
		* Note we used the relationship $(\vec a \times \vec b) \times \vec c = (\vec c \cdot \vec a)\vec b - (\vec c \cdot \vec b)\vec a$

## Curves

* $\vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat$
* The derivative $\vec r'(t)$ is interpreted geometrically as a vector pointing in the tangent direction of the curve
* Definition: Let $C$ be parameterized by $\vec r(t) = x(t)\ihat + y(t)\jhat + z(t)\khat$ and be differentiable; then $\vec r'(t) = x'(t)\ihat + y'(t)\jhat + z'(t)\khat$ (if not $\vec 0$) is tangent to $C$ at $(x(t), y(t), z(t))$ and $\vec r'(t)$ points in the direction of increasing $t$
* Example: Find tangent to $\vec r(t) = (1 + 2t)\ihat + t^3\jhat + \frac{t}{2}\khat$ at $(9, 64, 2)$
	* First find the $t$ value: $\vec{r}(4) = (9, 64, 2)$
	* $\vec r'(t) = 2\ihat + 3t^3\jhat + \frac{1}{2}\khat \implies \vec r'(4) = 2\ihat + 48\jhat + \frac{1}{2}\khat$
	* The tangent line is $\vec{R}(q) = 9\ihat + 64\jhat + 2\khat + q\left(2\ihat + 48\jhat + \frac{1}{2}\khat\right)$
* Define the *unit tangent vector* as $\vec{T}(t) \equiv \frac{\vec r'(t)}{\norm*{\vec r'(t)}}$
	* Note $\vec T(t) \cdot \vec T(t) = 1$ since $\vec T$ is a unit vector
	* Differentiating this leads to $\vec T'(t) \cdot \vec T(t) = 0$
	* $\vec T'(t)$ is always in the perpendicular direction to $\vec T$; this is because $\vec T$ has a constant magnitude so the derivative can only represent a change in direction, which is always perpendicular
	* $\vec T'(t)$ is telling you the direction that the curve is curving, similar to how the second derivative tells you whether the function is concave up or down

## Arc Length

* Extended to 3D, arc length is $\int _a^b \sqrt{(x'(t))^2 + (y'(t))^2 + (z'(t))^2}\,\dt = \int _a^b \norm*{\vec r'(t)}\,\dt$
* Example: Circular helix $\vec r(t) = 3\sin(t)\ihat + 3\cos(t)\jhat + 4t\khat$ for $t \in [0, 2\pi]$
	* $\vec r'(t) = 3\cos(t)\ihat - 3\sin(t)\jhat + 4\khat$
	* $\norm*{\vec r'(t)} = \sqrt{9\cos^2 t + 9\sin^2 t + 16} = 5$
	* $\int _0^2\pi \norm*{\vec{r}'(t)}\,\dt = 10\pi$
* Sometimes a curve is parameterized with respect to arc length instead of $t$
* Example: $\vec r(t) = t^2\ihat + t^2\jhat - t^2\khat$ from $(0, 0, 0)$
	* $\alignedeqntwo[t]{s}{\int _0^t \norm*{\vec r'(\tau)}\,\dtau}{\int _0^t \sqrt{4\tau^2 + 4\tau^2 + 4\tau^2}\,\dtau}{\int _0^3 2\sqrt{3}\tau\,\dtau}{\sqrt{3}t^2}$
	* $s = \sqrt{3}t^2 \implies t^2 = \frac{s}{\sqrt{3}} \implies \vec r(s) = \frac{s}{\sqrt 3}\ihat + \frac{s}{\sqrt 3}\jhat - \frac{s}{\sqrt 3}\khat$

