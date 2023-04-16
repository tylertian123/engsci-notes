# Lecture 7, Sep 22, 2022

## Triple Integrals

* Many ideas from double integrals carry over
* Given a continuous $w = f(x, y, z)$ over a 3D region $Q$ with volume $V$, break $V$ into sub-volumes $\Delta V_i$, choose any sample point within the region $P_i(x_i^*, y_i^*, z_i^*) \in \Delta V_i$, then
	* Define the lower sum $\sum _{i = 1}^n m_i\Delta V_i$ and upper sum $\sum _{i = 1}^n M_i\Delta V_i$
	* If the function is continuous then $\lim _{\norm{P} \to 0} \sum _{i = 1}^n f(x_i^*, y_i^*, z_i^*)\Delta V_i = \iiint _Q f(x, y, z)\,\dV$
	* Note $\norm{P}$ is now the largest diameter of all subvolumes
* Sometimes only one integration sign is used
* In Cartesian coordinates, $\iiint _Q f(x, y, z)\,\dV = \iiint _Q f(x, y, z)\,\dx\,\dy\,\dz$
* Suppose $f(x, y, z)$ is continuous over $Q = \Set{(x, y, z) | a \leq x \leq b, c \leq y \leq d, r \leq z \leq s}$, then $\iiint _Q f(x, y, z)\,\dV = \int _r^s\int _c^d\int _a^b f(x, y, z)\,\dx\,\dy\,\dz$
	* As with the double integral case, the order of integration can be freely rearranged
	* If $Q = \Set{(x, y, z) | (x, y) \in R, g_1(x, y) \leq z \leq g_2(x, y)}$, then$\iiint _Q f(x, y, z)\,\dV = \iint _R\int _{g_1(x, y)}^{g_2(x, y)} f(x, y, z)\,\dz\,\dA$

