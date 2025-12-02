# Lecture 32, Nov 26, 2025

## Passivity-Based Control

* As usual, consider the augmented robot model with a twice-differentiable reference signal $q^r(t)$ (which may not be constant)
* Choose a controller $u = M(q)\ddot q^r + C(q, \dot q)\dot q^r + B(q)\dot q + G(q) + K\dot{\tilde q}$ where $K$ is symmetric positive definite, $\tilde q = q^r - q$, $\dot{\tilde q} = \dot q^r - \dot q$
* This results in the closed-loop system $M(q)\ddot{\tilde q} + (C(q, \dot q) + K)\dot{\tilde q} = 0$
* Let $r = \dot{\tilde q}$, so the model becomes $M(q)\dot r + (C(q, \dot q) + K)r = 0$
	* What if we try the Lyapunov function $V = \frac{1}{2}r^TM(q)r$?
		* $\alignedeqntwo[t]{\dot V}{r^TM(q)\dot r + \frac{1}{2}r^T\dot M(q, \dot q)r}{r^T(-C(q, \dot q)r - Kr) + \frac{1}{2}r^T\dot Mr}{-r^TKr + \frac{1}{2}r^T(\dot M(q, \dot q) - 2C)r}{-r^TKr}$
		* This is negative definite in $r$, but we still need $\tilde q$, so this is still insufficient
* If we define $r = \dot{\tilde q} + \Lambda\tilde q$, where $\Lambda$ is a diagonal positive definite matrix, then if $r = 0$ for all time, then $\dot{\tilde q} + \Lambda\tilde q = 0$, which means $\dot{\tilde q} = -\Lambda\tilde q \implies \tilde q(t) = e^{-\Lambda t}\tilde q(0)$ which goes to zero
* Choose a new controller $u = M(q)(\ddot q^r + \Lambda\dot{\tilde q}) + C(q, \dot q)(\dot q^r + \Lambda\tilde q) + B(q)\dot q + G(q) + K(\dot{\tilde q} + \Lambda\tilde q)$
* The new equations of motion are $M(q)(\ddot{\tilde q} + \Lambda\dot{\tilde q}) + C(q, \dot q)(\dot{\tilde q} + \Lambda\tilde q) + K(\dot{\tilde q} + \Lambda\tilde q) = 0$ which, using the new definition of $r$, is $M(q)\dot r + (C(q, \dot q) + K)r = 0$
* Try the Lyapunov function $V = \frac{1}{2}r^TM(q)r + \tilde q^TP\tilde q$, where $P$ is a symmetric positive definite matrix that is to be determined
	* $V$ is positive definite at $(\tilde q, r) = (0, 0)$, and $\tilde q = 0 \implies r = \dot{\tilde q} + \Lambda\tilde q = \Lambda\tilde q$, so this is equivalent to being positive definite at $(\tilde q, \dot{\tilde q}) = 0$
	* $\alignedeqntwo[t]{\dot V}{-r^TKr + 2\tilde q^TP\dot{\tilde q}}{-(\dot{\tilde q} + \Lambda\tilde q)^TK(\dot{\tilde q} + \Lambda\tilde q) + 2\tilde q^TP\dot{\tilde q}}{-\dot{\tilde q}^TK\dot{\tilde q} - \dot{\tilde q}^TK\Lambda\tilde q - \tilde q^T\Lambda K\dot{\tilde q} - \tilde q^T\Lambda K\Lambda\tilde q + 2\tilde q^TP\dot{\tilde q}}{-\dot{\tilde q}^TK\dot{\tilde q} - \tilde q^T\Lambda K\Lambda\tilde q - 2\tilde q^T\Lambda K\dot{\tilde q} + 2\tilde q^TP\dot{\tilde q}}$
	* Now if we choose $P = \Lambda K$, then $\dot V = -\dot{\tilde q}^TK\dot{\tilde q} - \tilde q^T\Lambda K\Lambda\tilde q = -\cvec{\tilde q}{\dot{\tilde q}}^T\mattwo{\Lambda K\Lambda}{0}{0}{K}\cvec{\tilde q}{\dot{\tilde q}}$
	* Therefore we have $\dot V$ negative definite at the equilibrium, so the closed-loop system is asymptotically stable

