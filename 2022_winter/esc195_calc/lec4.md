# Lecture 4, Jan 17, 2022

## Trigonometric Integrals

### Powers of Sines and Cosines

* When we have powers of sines and cosines, try to convert it to only one $\sin$ and the rest $\cos$ or one $\cos$ and the rest $\sin$ to u-sub
* Even powers can be converted using $\sin^2 x + \cos^2 x = 1$
	* Example: $\alignedeqntwo[t]{\int \cos^3 x\,\dx}{\int \cos^2 x\cos x\,\dx}{\int (1 - \sin^2 x)\cos x\,\dx}{\int (1 - u^2)\,\du}{u - \frac{1}{3}u^3 + C}{\sin x - \frac{1}{3}\sin^3 x + C}$
* For odd powers, separate a single factor and convert the remaining even power
	* Example: $\alignedeqntwo[t]{\int \sin^5 x\cos^2 x\,\dx}{\int (1 - \cos^2 x)^2\sin x\cos^2 x\,\dx}{-\int (1 - u^2)^2 u^2\,\du}{-\frac{u^3}{3} + 2\frac{2u^5}{5} - \frac{u^7}{7} + C}{-\frac{1}{3}\cos^3 x + \frac{2}{5}\cos^5 x - \frac{1}{7}\cos^7 x + C}$
* Half-angle identities: $\alignedimp[t]{\cos(2x) = \cos^2 x - \sin^2 x}{\cos(2x) + 1 = 2\cos^2 x}{\cos^2 x = \frac{1}{2}(1 + \cos(2x))}$ and $\alignedimp[t]{\cos(2x) = \cos^2 x - \sin^2 x}{1 - \cos(2x) = 2\sin^2 x}{\sin^2 x = \frac{1}{2}(1 - \cos(2x))}$
	* Example: $\alignedeqntwo[t]{\int _0^\pi \sin^2 x\,\dx}{\frac{1}{2}\int _0^\pi 1 - \cos(2x)\,\dx}{\inteval{\frac{1}{2}\left(x - \frac{1}{2}\sin(2x)\right)}{0}{\pi}}{\frac{1}{2}\pi}$
	* Example: $\alignedeqntwo[t]{\sin^4 x\,\dx}{\int (\sin^2 x)^2\,\dx}{\int \left(\frac{1}{2}(1 - \cos(2x))\right)^2\,\dx}{\frac{1}{4}\int \left(1 + \cos^2(2x) - 2\cos(2x)\right)\,\dx}{\frac{1}{4}\int \left(1 + \frac{1}{2}(1 + \cos(4x)) - 2\cos(2x)\right)\,\dx}{\frac{1}{4}\int \left(\frac{3}{2} + \frac{1}{2}\cos(4x) - 2\cos(2x)\right)\,\dx}{\frac{1}{4}\left(\frac{3}{2}x - \sin(2x) + \frac{1}{8}\sin(4x)\right) + C}{\frac{3}{8}x - \frac{1}{4}\sin(2x) + \frac{1}{32}\sin(4x) + C}$
* Remember $\sin x\cos x = \frac{1}{2}\sin(2x)$
* Summary of strategy for $\int \sin^m x\cos^n x\,\dx$:
	* If $m$ is odd, save one sine factor and convert the rest to cosine; likewise for $n$
	* If both powers are even, use the half angle identities

### Powers of Secant and Tangent

* Similar to sine and cosine since $\diff{}{x}\tan x = \sec^2 x$; use identity $1 + \tan^2 x = \sec^2 x$
* Remember $\diff{}{x}\sec x = \tan x\sec x$
* Example: $\alignedeqntwo[t]{\int \tan^6 x\sec^4 x\,\dx}{\int \tan^6 x\sec^2 x(1 + \tan^2 x)\,\dx}{\int u^6(1 + u^2)\,\du}{\frac{u^7}{7} + \frac{u^9}{9} + C}{\frac{1}{7}\tan^7 x + \frac{1}{9}\tan^9 x + C}$
* Example: $\alignedeqntwo[t]{\int \tan^5 x\sec^7 x\,\dx = \int \tan^4 x\sec^6 x\sec x\tan x\,\dx}{\int (\sec^2 x - 1)^2\sec^6 x\sec x\tan x\,\dx}{\int (u^2 - 1)^2u^6\,\du}{\frac{u^11}{11} - 2\frac{u^9}{9} + \frac{u^7}{7} + C}{\frac{1}{11}\sec^11 x - \frac{2}{9}\sec^9 x + \frac{1}{7}\sec^7 x + C}$
* Remember $\int \tan x\,\dx = \ln\abs{\sec x} + C$ and $\int \sec x\,\dx = \ln\abs{\sec x + \tan x} + C$
* For $\int \tan^m x\sec^n x\,\dx$:
	* For even power of $\sec$, save one $\sec^2 x$, convert the rest to tangent, and substitute $u = \tan x$
	* For odd power of $\tan$, save one $\tan$ for a $\tan x\sec x$, cover the rest of $\tan^2$ to secant, then substitute $u = \sec x \implies \du = \tan x\sec x\,\dx$
* We may have to integrate by parts; example: $\alignedeqntwo[t]{\int \sec^3 x\,\dx}{\sec x\tan x - \int (\sec x\tan x)\tan x\,\dx}{\sec x\tan x - \int \sec x(\sec^2 x - 1)\,\dx}{\sec x\tan x - \int \sec^3 x\,\dx + \ln\abs{\sec x + \tan x} + C}$
	* Now we can solve for $\int\sec^3 x\,\dx$ since it appears on both sides

### Product-To-Sum

* Integrals of the form $\int \sin(mx)\cos(nx)\,\dx$, $\int \sin(mx)\sin(nx)\,\dx$ or $\int \cos(mx)\cos(nx)\,\dx$ can be solved using the product-to-sum identities
* $\sin A\sin B = \frac{1}{2}(\cos(A - B) - \cos(A + B))$
* $\cos A\cos B = \frac{1}{2}(\cos(A - B) + \cos(A + B))$
* $\sin A\cos B = \frac{1}{2}(\sin(A - B) + \sin(A + B))$

## Trigonometric Substitution

* Inverse substituting $x$ for a trig function could simplify radicals of some forms
* $\sqrt{a^2 - x^2}$: Substitute $x = a\sin\theta \implies \alignedeqntwo[t]{\sqrt{a^2 - x^2}}{\sqrt{a^2 - a^2\sin^2 \theta}}{a\sqrt{1 - \sin^2 \theta}}{a\abs{\cos\theta}}$
* $\sqrt{a^2 + x^2}$: Substitute $x = a\tan\theta \implies \alignedeqntwo[t]{\sqrt{a^2 + x^2}}{\sqrt{a^2 + a^2\tan^2 \theta}}{a\sqrt{1 + \tan^2 \theta}}{a\abs{\sec\theta}}$
* $\sqrt{x^2 - a^2}$: Substitute $x = a\sec\theta \implies \alignedeqntwo[t]{\sqrt{x^2 - a^2}}{\sqrt{a^2\sec^2 \theta + a^2}}{a\sqrt{\sec^2 \theta - 1}}{a\abs{\tan\theta}}$
	* Alternatively, use the hyperbolic substitution $x = \cosh^2 t \implies \alignedeqntwo[t]{\sqrt{x^2 - a^2}}{\sqrt{a^2(\cosh^2 t - 1)}}{a\sinh t}$
* Example: $\alignedeqntwo[t]{\int \frac{\sqrt{9 - x^2}}{x^2}\,\dx}{\int \frac{3\cos\theta}{9\sin^2\theta}2\cos\theta\,\dtheta}{\int \cot^2\theta\,\dtheta}{\int (\csc^2\theta - 1)\,\dtheta}{-\cot\theta - \theta + C}$
	* To return this to $x$, $x = 3\sin \theta \implies \sin\theta = \frac{x}{3} \implies \theta = \sin^{-1}\left(\frac{x}{3}\right)$; draw a triangle with the right sides and we get $\cot\theta = \frac{\sqrt{9 - x^2}}{x}$
	* For definite integrals we can just change the limits of integration to avoid having to convert back
* Example: Find the area of the ellipse $\frac{x^2}{a} + \frac{y^2}{b} = 1$
	* By symmetry we only need to worry about one quadrant where $x, y \geq 0$, so solving for $y$ we have $y = \frac{b}{a}\sqrt{a^2 - x^2}$
	* Substitute $x = a\sin \theta \implies \dx = a\cos\theta\,\dtheta$; change the bounds of integration: $x = a\sin\theta = 0 \implies \theta = 0, x = a\sin\theta = a \implies \sin\theta = 1 \implies \theta = \frac{\pi}{2}$
	* $\alignedeqntwo[t]{A = 4\int _0^a \frac{b}{a}\sqrt{a^2 - x^2}\,\dx}{4\frac{b}{a}\int _0^{\frac{\pi}{2}} a\cos\theta \cdot a\cos\theta\,\dtheta}{4ab\int _0^{\frac{\pi}{2}} \cos^2\,\dtheta}{4ab\int _0^{\frac{\pi}{2}} \frac{1}{2}(1 + \cos(2\theta))\,\dtheta}{2ab\inteval{\theta + \frac{1}{2}\sin(2\theta)}{0}{\frac{\pi}{2}}}{\pi ab}$

