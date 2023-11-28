# Lecture 17, Nov 14, 2023

## Calculus of Variations -- The Brachistochrone Problem

* Consider a ball starting at point $A = (x_1, y_1)$, rolling under the influence of gravity to point $B = (x_2, y_2)$; what is the shape of the curve that minimizes the travel time?
* We want to find $y(x)$ such that $y(x_1) = y_1, y(x_2) = y_2$ and the travel time $T = \int _A^B\,\dt$ is minimized
	* Consider a differential curve element $\ds$; $\diff{s}{t} = v$ so $\dt = \frac{\ds}{v}$
	* $\ds = \sqrt{\dx^2 + \dy^2} = \sqrt{1 + \left(\diff{y}{x}\right)^2}\,\dx$
	* We can find $v$ by conservation of energy: $\frac{1}{2}mv^2 + mgy = E \implies v = \sqrt{2g(y_0 - y)}$
	* The problem becomes:
		* Minimize $\frac{1}{\sqrt{2g}}\int _{x_1}^{x_2} \sqrt{\frac{1 + (y')^2}{y_0 - y}}\,\dx$ over $y(x)$
		* Subject to $y(x_1) = y_1, y(x_2) = y_2$
* We can generalize this to minimizing $I = \int _{x_1}^{x_2} F(y, y', x)\,\dx$
	* $I$ is a *functional* -- a function that takes a function and gives a number
	* How do we minimize with respect to an entire function?
* Let $y^*(x)$ be a minimum, and let $y(x) = y^*(x) + \epsilon\eta(x)$, where $\epsilon$ is small and $\eta(x)$ is any function subject to $\eta(x_1) = \eta(x_2) = 0$ (so our boundary conditions are satisfied)
	* $y' = {y^*}' + \epsilon\eta' \implies F(y, y', x) = F(y^* + \epsilon\eta, {y^*}' + \epsilon\eta', x)$
	* $I = \Phi(\epsilon) = \int _{x_1}^{x_2} F(y^* + \epsilon\eta, {y^*}' + \epsilon\eta', x)\,\dx$ and $\epsilon = 0$ must be a minimum, if $y^*$ is a minimum
	* Therefore the necessary condition is $\eval{\diff{\Phi}{\epsilon}}{\epsilon = 0} = 0$
* $\alignedeqntwo[t]{\diff{F}{\epsilon}}{\pdiff{F}{y}\diff{y}{\epsilon} + \pdiff{F}{y'}\diff{y'}{\epsilon}}{\pdiff{F}{y}\eta + \pdiff{F}{y'}\eta'}$
	* $\alignedeqntwo[t]{\eval{\diff{\Phi}{\epsilon}}{\epsilon = 0}}{\int _{x_1}^{x_2}\left(\pdiff{F}{y}\eta + \pdiff{F}{y'}\eta'\right)\,\dx}{\inteval{\pdiff{F}{y'}\eta}{x_1}{x_2} + \int _{x_1}^{x_2} \left[\pdiff{F}{y} - \diff{}{x}\left(\pdiff{F}{y'}\right)\right]\eta\,\dx}{\int _{x_1}^{x_2} \left[\pdiff{F}{y} - \diff{}{x}\left(\pdiff{F}{y'}\right)\right]\eta\,\dx}$
		* Note we applied integration by parts and used the boundary conditions $\eta(x_1) = \eta(x_2) = 0$
	* Since this is always equal to 0 and $\eta$ can be anything, we can conclude that the part inside the brackets must always be zero
		* This is can be proven and is known as the *Fundamental Lemma of Variational Calculus* 
* Therefore the optimality condition is $\diff{}{x}\left(\pdiff{F}{y'}\right) - \pdiff{F}{y} = 0$
	* Notice that this is identical to Lagrange's equation in a conservative system
	* This is the *Euler-Lagrange Equation*
* An alternative way to derive this is to let $\delta y = y - y^*$ (which behaves like $\epsilon\eta$, then we would have $\delta I = 0$; we refer to this as a *stationary value* for $I$
	* $\delta$ is the *variational operator*; think of it as taking the Taylor expansion of a function
		* $\delta F = \pdiff{F}{y}\delta y + \pdiff{F}{y'}\delta y'$
		* Note derivatives, integrals, and $\delta$ commute
		* $\delta\left(\diff{y}{x}\right) = \diff{}{x}(\delta y)$
		* $\delta\int f\,\dx = \int\delta f\,\dx$
	* $\delta I = \int _{x_1}^{x_2} \delta F(y, y', x)\,\dx = \int _{x_1}^{x_2} \left(\pdiff{F}{y}\delta y + \pdiff{F}{y'}\delta y'\right)\,\dx= 0$
	* We can then apply integration by parts and use $\delta y(x_1) = \delta y(x_2) = 0$, and apply the fundamental lemma as normal

## Hamiltonian Mechanics

* *Hamilton's Principle*: the motion of a system, under the influence of conservative forces, from time $t_1$ to $t_2$, is given by the stationary value of the functional $I = \int _{t_1}^{t_2} L\,\dt$, where $L = T - V$
	* Under non-conservative forces, we instead have $\delta\int _{t_1}^{t_2} L\,\dt + \int _{t_1}^{t_2}\delta W_{\striangle}\,\dt = 0$, where $\delta W_{\striangle}$ is the virtual work done by non-conservative forces
	* This is the *extended Hamilton's principle*
* Hamilton's principle, like Newton's laws and Lagrange's principle, is an equivalent description of classical mechanics; all 3 apply at each instance in time
	* Unlike the other two however, Hamiltonian mechanics looks at an interval of time, while the other two methods look at an instant in time
* The *Hamiltonian* is defined by $H = \sum _k \dot q_kp_k - L(\bm q, \dot{\bm q}, t)$, where $p_k = \pdiff{L}{\dot q_k}$ is the generalized momentum of each coordinate
	* $\dd H = \sum _k \left(p_k\,\dd\dot q_k + \dot q_k\,\dd p_k - \pdiff{L}{q_k}\,\dd q_k - \pdiff{L}{\dot q_k}\,\dd\dot{q_k}\right) - \pdiff{L}{t}\,\dt$
	* For a conservative system, $\diff{}{t}\left(\pdiff{L}{\dot q_k}\right) = \pdiff{L}{q_k} \implies \dot p_k = \pdiff{L}{q_k}$
	* $\dd H = \sum _k\left(\dot q_k\,\dd p_k - \dot p_k\,\dd q_k\right) - \pdiff{L}{t}\,\dt$
		* We have shown that any differential in $H$ is given by differentials in $\bm p$, $\bm q$ and $t$
		* Therefore $H = H(\bm q, \bm p, t)$ and has no dependence on $\dot q$
	* By the chain rule, $\dd H = \sum _k\left(\pdiff{H}{p_k}\,\dd p_k + \pdiff{H}{q_k}\,\dd q_k\right) + \pdiff{H}{t}\,\dt$
		* Therefore $\dot q_k = \pdiff{H}{p_k}, \dot p_k = -\pdiff{H}{q_k}$
		* These are known as *Hamilton's Canonical Equations*, and can serve as an alternative formulation of mechanics

