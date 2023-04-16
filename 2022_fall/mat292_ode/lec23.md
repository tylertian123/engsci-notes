# Lecture 23, Oct 31, 2022

## The Laplace Transform

\noteDefn{The Laplace transform of a function $f(t)$ is $$F(s) = \laplace{f}(s) = \int _0^{\infty} e^{-st}f(t)\,\dt$$}

* The Laplace transform is analogous to a change of coordinates in linear algebra
	* We're taking a function $f(t)$ to get back another function $F(s)$
	* This integral of the product of functions is akin to a dot product, but for functions; $e^{-st}$ is a basis
		* We like a basis of $e^{-st}$ because its derivative is proportional to itself

### Example Transforms

* $\alignedeqntwo[t]{\laplace{1}}{\int _0^{\infty} e^{-st}\,\dt}{\inteval{-\frac{1}{s}e^{-st}}{0}{\infty}}{\lim _{A \to \infty} \left(-\frac{e^{-sA}}{s} + \frac{1}{s}\right)}{\frac{1}{s}, s > 0}$
* $\alignedeqntwo[t]{\laplace{e^{(a + ib)t}}}{\int _0^\infty e^{-st}e^{(a + ib)t}\,\dt}{\inteval{\frac{1}{a - s + ib}e^{((a - s) + ib)t}}{0}{\infty}}{\lim _{A \to \infty} \left(\frac{e^{((a - s) + ib)A}}{a - s + ib} - \frac{1}{a - s + ib}\right)}{\frac{1}{s - (a + ib)}, s > a}$
* $\alignedeqntwo[t]{\laplace{\sin t}}{\laplace{\frac{e^{it} - e^{-it}}{2i}}}{\frac{1}{2i}\laplace{e^{it}} - \frac{1}{2i}\laplace{e^{-it}}}{-\frac{1}{2i}\frac{1}{-s + i} + \frac{1}{2i}\frac{1}{-s - i}}{-\frac{1}{2i}\frac{-s - i - (-s + i)}{(-s)^2 - i^2}}{-\frac{1}{2i}\frac{-2i}{s^2 + 1}}{\frac{1}{s^2 + 1}}$
* In reality we just look these up from a table

### Linearity of the Laplace Transform

\noteThm{The Laplace transform is linear: $$\laplace{c_1f_1(t) + c_2f_2(t)} = c_1\laplace{f_1(t)} + c_2\laplace{f_2(t)}$$ \tcblower If $\laplace{f_1}$ exists for $t > s_1$ and $\laplace{f_2}$ exists for $t > s_2$ then the linear combination exists for $t > \max(s_1, s_2)$}

