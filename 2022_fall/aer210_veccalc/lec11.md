# Lecture 11, Sep 30, 2022

## Change of Variables in Multiple Integrals

* Consider the single variable case for $\int 2x\sqrt{x^2 + 1}\dx$; let $x = x(u) \implies x = \sqrt{u - 1} \implies \diff{x}{u} = \frac{1}{2\sqrt{u - 1}} \implies \int 2x\sqrt{x^2 + 1}\dx = \int 2\sqrt{u - 1}\sqrt{u}\frac{1}{2\sqrt{u - 1}}\,\du = \int \sqrt{u}\,\du$
	* This transformation from $x$ to a function of $u$ is one-to-one
* Before we can do this for multiple integrals, what does $\dx = \frac{1}{2\sqrt{u - 1}}\,\du$ mean?
	* We converted $f(x)$ to $f(u)$, so that the corresponding points in each have the same value of $f$
	* This alone doesn't make the integrals equal because $\Delta x \neq \Delta u$ since $\Delta u$ is stretched or compressed
	* For small $\Delta u$ w have $\frac{\Delta x}{\Delta u} = \diff{x}{u} \implies \Delta x = \diff{x}{u}\Delta u$
	* $\diff{x}{u}$ can be viewed as the scaling factor between the two areas
* Consider $\iint _R f(x, y)\,\dA$, change variables $x = g(u, v), y = h(u, v)$ assuming $g, h$ have continuous first partials and a 1-to-1 mapping
	* The distortion on each $\Delta A$ can be calculated using the Jacobian, the determinant of the local first derivative matrix

\noteDefn{The Jacobian of a transformation $$x_1 = x_1(u_1, u_2, \cdots, u_n), x_2 = x_2(u_1, u_2, \cdots, u_n), \cdots, x_n = x_n(u_1, u_2, \cdots, u_n)$$ is $$J = \pdiff{(x, y)}{(u, v)} \equiv \begin{vmatrix}\pdiff{x_1}{u_1} & \pdiff{x_1}{u_2} & \cdots & \pdiff{x_1}{u_n} \\ \pdiff{x_2}{u_1} & \pdiff{x_2}{u_2} & \cdots & \pdiff{x_2}{u_n} \\ \vdots & \vdots & \ddots & \vdots \\ \pdiff{x_n}{u_1} & \pdiff{x_n}{u_2} & \cdots & \pdiff{x_n}{u_n}\end{vmatrix}$$ \tcblower For a 2D change of variables $x = g(u, v), y = h(u, v)$, $$J = \mattwo[v]{g_u}{g_v}{h_u}{h_v}$$}
\noteImportant{Under a change of variables $x = g(u, v), y = h(u, v)$, $$\iint _R f(x, y)\,\dA_R = \iint _S f(u, v)\abs*{\pdiff{(x, y)}{(u, v)}}\dA_S = \iint _S f(g(u, v), h(u, v))\abs*{\pdiff{(x, y)}{(u, v)}}\,\du\,\dv$$ where $R$ is on the $x$-$y$ plane, $S$ is on the $u$-$v$ plane, assuming: \begin{enumerate}\item $f$ is continuous \item $g$ and $h$ have continuous first partials \item The transformation is 1-to-1 \item The Jacobian $\pdiff{(x, y)}{(u, v)}$ is nonzero\end{enumerate} Note the absolute value around the Jacobian.}

* To do the transformation, rewrite $x$ and $y$ in terms of $u$ and $v$, replace $\dA$ with $\pdiff{(x, y)}{(u, v)}\,\du\,\dv$, and change the bounds of integration to reflect the new region

