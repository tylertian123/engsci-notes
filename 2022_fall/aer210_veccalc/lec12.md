# Lecture 12, Sep 30, 2022

## Change of Variables in Double Integrals Examples

* Example: Change a double integral from rectangular to polar coordinates
	* $x = r\cos\theta, y = r\sin\theta$
	* $J = \mattwo[v]{\pdiff{x}{r}}{\pdiff{x}{\theta}}{\pdiff{y}{r}}{\pdiff{y}{\theta}} = \mattwo[v]{\cos\theta}{-r\sin\theta}{\sin\theta}{r\cos\theta} = r\cos^2\theta + r\sin^2\theta = r$
	* $\iint _R f(x, y)\,\dA = \iint _S f(r\cos\theta, r\sin\theta)\abs*{\pdiff{(x, y)}{(r, \theta)}}\,\dr\,\dtheta = \iint _S f(r\cos\theta, r\sin\theta)\,r\,\dr\,\dtheta$

## Change of Variables in Triple Integrals

\noteDefn{The Jacobian for a 3D transformation $x = g(u, v, w), y = h(u, v, w), z = l(u, v, w)$ is $$\pdiff{(x, y, z)}{(u, v, w)} = \matthreev{\pdiff{x}{u}}{\pdiff{x}{v}}{\pdiff{x}{w}}{\pdiff{y}{u}}{\pdiff{y}{v}}{\pdiff{y}{w}}{\pdiff{z}{u}}{\pdiff{z}{v}}{\pdiff{z}{w}}$$}

\noteImportant{Under a change of variables $x = g(u, v, w), y = h(u, v, w), z = l(u, v, w)$, $$\iiint _R f(x, y, z)\,\dV = \iiint _S f(g(u, v, w), h(u, v, w), l(u, v, w))\abs*{\pdiff{(x, y, z)}{(u, v, w)}}\,\du\,\dv\,\dw$$ with the same assumptions as in the double integral case}

## Successive Transformations

* If $x = x(u, v), y = (u, v)$ and $u = u(s, t), v = v(s, t)$, we can transform from $x, y$ to $s, t$
* $\pdiff{(x, y)}{(s, t)} = \pdiff{(x, y)}{(u, v)}\pdiff{(u, v)}{(s, t)}$

## Back Transformations

* The Jacobian associated with the inverse of a transformation is the inverse of the Jacobian of that transformation
* $\pdiff{(x, y)}{(u, v)} = \frac{1}{\pdiff{(u, v)}{(x, y)}}$
* Knowing the backward transformation $u = f(x, y), v = g(x, y)$ we can calculate $\pdiff{(u, v)}{(x, y)}$ and use that to find $\pdiff{(x, y)}{(u, v)}$ without having to explicitly calculate $x(u, v), y(u, v)$


