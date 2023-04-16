# Lecture 18, Feb 28, 2022

## Taylor's Theorem

* When is a function actually equal to its Taylor expansion?
	* Define a partial sum for the Taylor series: $T_n(x) = \sum _{i = 0}^n \frac{f^{(i)}(a)}{i!}(x - a)^i$ (the n-th degree Taylor polynomial of $f$ about $a$)
	* Define the remainder as $R_n(x) = f(x) - T_n(x)$
* Theorem: If $f(x) = T_n(x) + R_n(x)$ and $\lim _{n \to \infty} R_n(x) = 0$ then $f$ is equal to its Taylor series expansion
* Taylor's Theorem: Given $f', f'', \cdots, f^{(n + 1)}$ exists and are continuous on an open interval $I$, and $a \in I$, then $\forall x \in I, f(x) = T_n(x) + R_n(x)$ where $R_n(x) = \frac{1}{n!}\int _a^x f^{(n + 1)}(t)(x - t)^n\,\dt$
	* Proof:
		* Consider: $\int _a^b f'(t)\,\dt = f(b) - f(a)$ by FTC
		* Integration by parts: $\alignedeqntwo[t]{\int _a^b f'(t)\,\dt}{\inteval{f'(t)(t - b)}{a}{b} - \int _a^b f''(x)(t - b)\,\dt}{f'(a)(b - a) + \int _a^b f''(t)(b - t)\,\dt}{f'(a)(b - a) + \inteval{-\frac{(b - t)^2}{2}f''(t)}{a}{b} + \int _a^b \frac{(b - t)^2}{2}f'''(t)\,\dt}{f'(a)(b - a) + f''(a)\frac{(b - a)^2}{2!} + \int _a^b \frac{(b - t)^2}{2}f'''(t)\,\dt}{\cdots}$
		* Applying this $n$ times: $\int _a^b f'(t)\,\dt = \sum _{i = 1}^n \frac{(b - a)^i}{i!}f^{(i)}(a) + \int _a^b \frac{(b - t)^n}{n!}f^{(n + 1)}(t)\,\dt = f(b) - f(a)$
		* Let $x = b \implies f(x) = \sum _{i = 0}^n \frac{(x - a)^i}{i!}f^{(i)}(a) + R_n(x)$ where $R_n(x) = \int _a^x \frac{(x - t)^n}{n!}f^{(n + 1)}(t)\,\dt$
* To prove that a function is equal to its Taylor series we need to prove $\lim _{n \to \infty} R_n(x) = \lim _{n \to \infty} \int _a^x \frac{(x - t)^n}{n!}f^{(n + 1)}(x)\,\dt = 0$; the integral form is not always the most convenient to work with
	* If we can bound the derivative: For $\abs{f^{(x + 1)}(t)} \leq M$ for $a < t < x$: $\abs{R_n(x)} \leq \alignedeqn[t]{\abs*{\int _a^x \frac{M(x - t)^n}{n!}\,\dt}}{\abs*{M\inteval{\frac{(x - t)^{n + 1}}{(n + 1)!}}{a}{x}}}{M\frac{\abs{x - a}^{n + 1}}{(n + 1)!}}$
	* Or using the MVT, $R_n(x) = \frac{f^{(n + 1)}(c)(x - a)^{n + 1}}{(n + 1)!}$ for $c \in (a, x)$
* Example: Prove $e^x$ is equal to the sum of its Taylor series
	* $f^{(n + 1)}(t) = e^t$
	* For a Taylor series about 0 the range is $0 < t < x \implies e^t < e^x = M$, or $x < t < 0 \implies e^t < 1 = M$
	* $R_n(x) \leq \frac{e^xx^{n + 1}}{(n + 1)!} \underset{n \to \infty}{\to} 0$ (by sequence limit 4)
	* Since the remainder goes to 0 the Taylor series converges to $e^x$ for all $x$

## Taylor Series Examples

* Example: Maclaurin series for $\cos x$
	* $f(x) = \cos x \implies f(0) = 1$
	* $f'(x) = -\sin x \implies f'(0) = 0$
	* $f''(x) = -\cos x \implies f''(0) = -1$
	* $f'''(x) = \sin x \implies f'''(x) = 0$
	* $f''''(x) = \cos x$ so the cycle repeats
	* $\cos x = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + \cdots$ because all the odd terms are zero
	* Use ratio test to determine radius of convergence (all $x$)
	* Note for all derivatives the magnitude is always $\leq 1$: $\abs{R_n(x)} \leq \abs*{\frac{x^{n + 1}}{(n + 1)!}} \underset{n \to \infty}{\to} 0$ so the Taylor series sum to $\cos x$
* As long as the derivative doesn't tend to infinity, $R_n$ always goes to $0$
* Since the coefficients of a Taylor series are unique we can obtain them in other methods; e.g. differentiating the series of $\cos x$ to get $\sin x$ or multiplying by $x$ to get $x\sin x$
* Example: Taylor series for $\cos x$ about $\frac{17\pi}{4}$
	* This series is useful despite the series for $\cos x$ converging for all $x$ due to rate of convergence
	* Derivatives:
		* $f(x) = \cos x \implies f\left(\frac{17\pi}{4}\right) = \frac{1}{\sqrt{2}}$
		* $f'(x) = -\sin x \implies f\left(\frac{17\pi}{4}\right) = -\frac{1}{\sqrt{2}}$
		* $f''(x) = -\cos x \implies f\left(\frac{17\pi}{4}\right) = -\frac{1}{\sqrt{2}}$
		* $f'''(x) = \sin x \implies f\left(\frac{17\pi}{4}\right) = \frac{1}{\sqrt{2}}$
		* $f''''(x) = \cos x \implies f\left(\frac{17\pi}{4}\right) = \frac{1}{\sqrt{2}}$
		* There are two negatives and two positives alternating so we need to use 2 sums
	* $\cos x = \frac{1}{\sqrt{2}} - \frac{1}{\sqrt{2}}\left(x - \frac{17\pi}{4}\right) - \frac{1}{\sqrt{2}}\frac{\left(x - \frac{17\pi}{4}\right)^2}{2!} + \cdots$
	* $\cos x = \sum _{n = 0}^\infty \frac{1}{\sqrt{2}}(-1)^n\frac{\left(x - \frac{17\pi}{4}\right)^{2n}}{(2n)!} + \sum _{n = 0}^\infty \frac{1}{\sqrt{2}}(-1)^{n + 1}\frac{\left(x - \frac{17\pi}{4}\right)^{2n + 1}}{(2n + 1)!}$
* Example: Prove $\ln(1 + x) = \sum _{n = 1}^\infty \frac{(-1)^{n + 1}x^n}{n}$ for $x \in (-1, 1]$
	* Derivatives:
		* $f(x) = \ln(1 + x)$
		* $f'(x) = \frac{1}{1 + x}$
		* $f''(x) = \frac{-1}{(1 + x)^2}$
		* $f'''(x) = \frac{2}{(1 + x)^3}$
		* $f^{(n)}(x) = \frac{(-1)^{n + 1}(n - 1)!}{(1 + x)^n}$
	* We can't bound this derivative in $-1 < x \leq 1$ because as $x$ tends to $-1$ the derivative shoots off to infinity, so we need to work with the integral form
	* $\alignedeqntwo[t]{R_n(x)}{\frac{1}{n!}\int _0^x f^{(n + 1)}(t)(x - t)^n\,\dt}{\frac{1}{n!}\int _0^x (-1)^{n + 1}\frac{n!}{(1 + t)^{n + 1}}(x - t)^n\,\dt}{(-1)^n \int _0^x \frac{(x - t)^n}{(1 + t)^{n + 1}}\,\dt}$
	* For $0 \leq x \leq 1$: $\abs*{R_n(x)} = \int _0^x \frac{(x - t)^n}{(1 +t)^{n + 1}}\,\dt \leq \int _0^x (x - t)^n\,\dt = \frac{x^{n + 1}}{n + 1} \underset{n \to \infty}{\to} 0$ since $x < 1$
	* For $-1 < x < 0$: $\alignedeqntwo[t]{\abs*{R_n(x)}}{\abs*{\int _0^x\frac{(x - t)^n}{(1 +t)^{n + 1}}\,\dt}}{\int _x^0 \left(\frac{t - x}{1 + t}\right)^n \frac{1}{1 + t}\,\dt}$
		* Apply MVT: $\int _x^0 \left(\frac{t - x}{1 + t}\right)^n \frac{1}{1 + t}\,\dt = \left(\frac{z - x}{1 + z}\right)^n \frac{1}{1 + z}(-x)$, where $x < z < 0$ and $-x$ is the interval width $b - a$
		* To show $\frac{z - x}{1 + z} < 1$: $\alignedimp[t]{\abs{x} < 1}{\abs{x} - \abs{z} < 1 - \abs{z}}{\frac{\abs{x} - \abs{z}}{1 - \abs{z}} < 1}{\frac{-x + z}{1 + z} < 1}{\frac{z - x}{1 + z} < 1}$
		* $\lim _{n \to \infty}\left(\frac{z - x}{1 + z}\right)^n = 0 \implies R_n(x) = \left(\frac{z - x}{1 + z}\right)^n \frac{1}{1 + z}(-x) \underset{n \to \infty}{\to} 0$

