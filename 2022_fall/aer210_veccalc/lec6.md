# Lecture 6, Sep 16, 2022

## Surface Area

* Given $z = f(x, y)$ on region $R$, how do we find its surface area?
* Divide the surface into many subregions $S_i$ with area $\Delta S_i$
* For each subregion draw a tangent plane, the elementary region has area $\Delta T_i$ (think of a disco ball)
* $S \approx \sum _{i = 1}^n \Delta T_i \implies S = \lim _{\norm{P} \to 0} \sum _{i = 1}^n \Delta T_i \implies S = \iint _S\,\dT$
* Project subregion $T_i$ with area $\Delta T_i$ down to $R$ and get a rectangular subregion $R_i$ with area $\Delta A_i = \Delta y_i\Delta x_i$
	* $\Delta T_i$ is a parallelogram
	* The two vectors that define this parallelogram are $\vec a_i, \vec b_i$
	* $\vec a_i$ has slope $f_x(x_i, y_i)$, $\vec b_i$ has slope $f_y(x_i, y_i) \implies \vec a_i = \cvec{\Delta x_i}{0}{f_x(x_i, y_i)\Delta x_i}, \vec b_i = \cvec{0}{\Delta y_i}{f_y(x_i, y_i)\Delta y_i}$
* Cross product to get area: $\vec a_i \times \vec b_i = \cvec{-f_x(x_i, y_i)}{-f_y(x_i, y_i)}{1}\Delta x_i\Delta y_i$
	* $\Delta T_i = \norm{\vec a_i \times \vec b_i} = \sqrt{\left(f_x(x, y)\right)^2 + \left(f_y(x, y)\right)^2 + 1}\Delta x_i\Delta y_i$, and now we can integrate to get surface area

\noteImportant{The surface area of $z = f(x, y)$ on $R$ is $$S = \iint _R \sqrt{\left(f_x(x, y)\right)^2 + \left(f_y(x, y)\right)^2 + 1}\,\dA$$}

