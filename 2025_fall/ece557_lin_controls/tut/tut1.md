# Tutorial 1, Sep 15, 2025

* 3 approaches to control:
	* State space -- pioneered by Kalman
	* Transfer function -- classical approach
	* Behavioural -- data-driven approach (instead of explicit modelling)
* Consider a standard RLC circuit
	* From KVL: $u - Ri - L\diff{i}{t} - v = 0$
	* From KCL: $i = C\diff{v}{t}$
	* Input $u$ is the voltage across a voltage source
	* Method 1: $0 = u - RC\diff{v}{t} - L\diff{}{t}\left(C\diff{v}{t}\right) - v$
		* $-LC\diffn{2}{v}{t} - RC\diff{v}{t} - v + u = 0$
		* This is the *input-output* form of the system
		* Let $\bm x = \cvec{v}{\diff{v}{t}}$
		* $\dot{\bm x} = \cvec{\diff{v}{t}}{\diffn{2}{v}{t}} = \cvec{\diff{v}{t}}{\frac{1}{LC}(-RC\diff{x}{t} - x + u)} = \mattwo{0}{1}{-\frac{1}{LC}}{-\frac{R}{L}}\bm x + \cvec{0}{\frac{1}{LC}}u = \bm A\bm x + \bm Bu$
		* Now we construct the output equation since we cannot directly measure all components of $\bm x$
		* $y = v = \rvec{1}{0}\bm x + 0u = \bm Cx + Du$
	* Method 2: $\cvec{0}{0} = \cvec{-L\diff{i}{t} - Ri - v + u}{-C\diff{i}{t} + i}$
		* $0 = \mattwo{-L}{0}{0}{-C}\diff{}{t}\cvec{i}{v} + \mattwo{-R}{-1}{1}{0}\cvec{i}{v} + \cvec{1}{0}u$
		* This is similar to the input-output form we had before, but in a vector form
	* Generally the number of state variables we need is the number of derivatives times the number of variables
		* In the first method we used a second derivative, and only $v$ as output
		* In the second method we used only first order derivatives but both $v$ and $i$ as output

