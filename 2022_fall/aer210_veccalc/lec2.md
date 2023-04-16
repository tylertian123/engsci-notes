# Lecture 2, Sep 9, 2022

## More General Regions

\noteDefn{
\begin{itemize}
	\item Type 1 region: $R = \set{(x, y) | a \leq x \leq b, g_1(x) \leq y \leq g_2(x)}$
	\item Type 2 region: $R = \set{(x, y) | c \leq y \leq d, h_1(y) \leq x \leq h_2(y)}$
\end{itemize}
Where $g_1, g_2, h_1, h_2$ are continuous}

* Type 1 regions: hard boundaries in $x$, continuous varying boundaries in $y$
	* $V = \int _a^b\int _{g_1(x)}^{g_2(x)} f(x, y)\,\dy\,\dx$
* Type 2 regions: hard boundaries in $y$, continuous varying boundaries in $x$
	* $V = \int _c^d\int _{h_1(y)}^{h_2(y)} f(x, y)\,\dx\,\dy$
* When the region of integration is neither, it can be cut up into type 1 and 2 regions
* When dealing with these, it's useful to first draw the planar region $R$
* Sometimes it can be much easier to integrate along one axis first, and then the other
	* e.g. $z = e^{x^2}$ over $y = x, 0 \leq x \leq 1$ is much easier to integrate along $y$ first

