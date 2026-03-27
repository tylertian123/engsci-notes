# Tutorial 10, Mar 23, 2026

* To model the exosystem we often need to discretize a continuous time signal by sampling, since in real life the external signals are usually continuous time
	* Example: $r(t) = u(t) \to r(k) = 1$
		* $r(k + 1) = r(k) = 1$
		* Therefore we let $w(k) = r(k), w(0) = 1, w(k + 1) = w(k)$
	* Example: $r(t) = t \to r(k) = kT$
		* $r(k + 1) = kT + T = r(k) + T$
		* $r(k + 2) = kT + 2T = r(k + 1) + T = r(k + 1) + (r(k + 1) - r(k)) = 2r(k + 1) - r(k)$
		* Let $w(k) = \cvec{r(k)}{r(k + 1)} \implies w(k + 1) = \mattwo{0}{1}{-1}{2}w(k), r(k) = \rvec{1}{0}w(k)$
		* $w(0) = \cvec{r(0)}{r(1)} = \cvec{0}{T}$
	* Example: $r(t) = \alpha\sin(\omega t) + \beta\cos(\omega t) \to r(k) = \alpha\sin(\omega Tk) + \beta\cos(\omega Tk)$
		* $\alignedeqntwo[t]{r(k + 1)}{\alpha\sin(\omega Tk + \omega T) + \beta\cos(\omega TK + \omega T)}{\alpha\sin(\omega Tk)\cos(\omega T) + \alpha\cos(\omega Tk)\sin(\omega T) + \beta\cos(\omega Tk)\cos(\omega T) - \beta\sin(\omega Tk)\sin(\omega T)}$
		* Let $w(k) = \cvec{\sin(\omega Tk)}{\cos(\omega Tk)} \implies w(k + 1) = \mattwo{\cos(\omega T)}{\sin(\omega T)}{-\sin(\omega T)}{\cos(\omega T)}w(k), r(k) = \rvec{\alpha}{\beta}w(k)$
	* To generate $r(t) = 4 - \sin(t) + \cos(t)$, we can have $w(k) = \cvec{4}{\sin(Tk)}{\cos(Tk)}, w(k + 1) = \matthree{1}{0}{0}{0}{\cos(T)}{\sin(T)}{0}{-\sin(T)}{\cos(T)}w(k)$ with $w(0) = \cvec{4}{0}{1}$

