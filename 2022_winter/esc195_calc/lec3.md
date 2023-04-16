# Lecture 3, Jan 14, 2022

## Integration By Parts

* The integral counterpart to the product rule
* $\alignedimp[t]{\diff{}{x}[f(x)g(x)] = f(x)g'(x) + g(x)f'(x)}{\int \left(f(x)g'(x) + g(x)f'(x)\right)\,\dx = \int \diff{}{x}f(x)g(x)\,\dx}{\int f(x)g'(x)\,\dx + \int g(x)f'(x)\,\dx = f(x)g(x)}{\int f(x)g'(x)\,\dx = f(x)g(x) - \int g(x)f'(x)\,\dx}$
* Let $u = f(x), v = g(x) \implies \du = f'(x)\,\dx, \dv = g'(x)\,\dx \implies \int u\,\dv = uv - \int v\,\du$
* Example: $\alignedeqntwo[t]{\int x\sin x\,\dx}{f(x)g(x) - \int g(x)f'(x)\,\dx}{x(-\cos x) - \int 1 \cdot (-\cos x)\,\dx}{-x\cos x + \sin x + C}$
* Integration by parts should simplify the integral; choose $f(x)$ so it becomes simpler when differentiated, and $g(x)$ so that it is easy to integrate
* Example: $\alignedimp[t]{\int \ln x\,\dx}{x\ln x - \int x \cdot \frac{1}{x}\,\dx}{x\ln x - x + C}$
* Integration by parts can be applied multiple times if the resulting integral is still not quite simple
* Sometimes we get back the original integral: $\alignedimp[t]{\alignedeqntwo[t]{\int e^x\sin x\,\dx}{-e^x\cos x + \int e^x\cos x\,\dx}{-e^x\cos x + e^x\sin x - \int e^x\sin x\,\dx}}{2\int e^x\sin x\,\dx = e^x(\sin x - \cos x) + C'}{\int e^x\sin x\,\dx = \frac{1}{2}e^x(\sin x - \cos x) + C}$
	* Remember when subtracting $\int f(x)\,\dx - \int f(x)\,\dx \neq 0$, because there is still an integration constant!
* For definite integrals, $\int _a^b f(x)g'(x)\,\dx = \inteval{f(x)g(x)}{a}{b} - \int _a^b g(x)f'(x)\,\dx$
	* The first term there is a boundary term
* Example: $\alignedeqntwo[t]{\int _0^1 \tan^{-1} x\,\dx}{\inteval{x\tan^{-1}x}{0}{1} - \int _0^1 \frac{x}{1 + x^2}\,\dx}{\frac{\pi}{4} - \frac{1}{2}\int _{t = 0}^{t = 1} \frac{1}{u}\,\du}{\frac{\pi}{4} - \inteval{\frac{1}{2}\ln(1 + x^2)}{0}{1}}{\frac{\pi}{4} - \frac{1}{2}\ln 2}$
* Using integration by parts, we can prove reduction formulas:
	* $\int \sin^n x\,\dx = -\frac{1}{n}\cos x\sin^{n - 1}x + \frac{n - 1}{n}\int \sin^{n - 2}x\,\dx$, $n \geq 2$
	* $\alignedimp[t]{\alignedeqntwo[t]{\int \sin^n x\,\dx}{\sin^{n - 1}x\sin x\,\dx}{-\cos x\sin^{n - 1}x - \int (n - 1)\sin^{n - 2}x\cos x \cdot -\cos x\,\dx}{-\cos x\sin^{n - 1}x + (n - 1)\int \sin^{n - 2}x\cos^2 x\,\dx}{-\cos x\sin^{n - 1}x + (n - 1)\int \sin^{n - 2}x(1 - \sin^2 x)\,\dx}{-\cos x\sin^{n - 1}x + (n - 1)\int \sin^{n - 2}x\,\dx - (n - 1)\int \sin^n x\,\dx}}{n\int \sin^n x\,\dx = -\cos x\sin^{n - 1}x + (n - 1)\int \sin^{n - 2}x\,\dx}{\int \sin^n x\,\dx = -\frac{1}{n}\cos x\sin^{n - 1}x + \frac{(n - 1)}{n}\int \sin^{n - 2}x\,\dx}$

