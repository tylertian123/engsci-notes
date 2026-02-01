# Lecture 7, Jan 20, 2026

## Lyapunov's Method

* Note: assume without loss of generality that $\bar x = 0$ in the definitions below

\noteDefn{A continuous function $V: \reals^n \mapsto \reals$ is \textit{positive definite} at $x = 0$ if $V(0) = 0$ and $V(x) > 0$ for all $x \neq 0$.
\tcblower
$V$ is \textit{positive semidefinite} at $x = 0$ if $V(0) = 0$ and $V(x) \geq 0$ for all $x$, i.e. the function can be zero at nonzero locations.}

* Note that these definitions can be adjusted accordingly if studying a nonzero $\bar x$ equilibrium
* We can similarly define negative definite and negative semidefinite using the same conditions but for $-V(x)$

\noteDefn{A function $\kappa: [0, \infty) \mapsto [0, \infty)$ is a \textit{class $\mathcal K_\infty$ function} if it has the properties:
\begin{enumerate}
	\item $\kappa(0) = 0$
	\item $\kappa$ is stricty increasing on $[0, \infty)$
	\item $\lim _{x \to \infty} \kappa(s) \to \infty$
\end{enumerate}}

\noteDefn{A function $V: \reals^n \mapsto \reals$ is \textit{radially unbounded} if there exists a function $\kappa: [0, \infty) \mapsto [0, \infty)$ of class $\mathcal K_\infty$ such that $V(k, x) \geq \kappa(\norm{x})$ for all $k \geq 0, x \in \reals^n$.}

* Intuitively, being radially unbounded means that if we go out along any ray from the origin, the function keeps increasing and never flattens out
	* A positive definite function that is not radially unbounded would flatten out along some direction, i.e. it would have a level set that goes out to infinity
	* This is important since Lyapunov's method works similarly to a gradient descent, so if the function becomes flat we can "get stuck"
* Note that a more restrictive definition would be $V(k, x) \geq c_1\norm{x}^2$, i.e. a quadratic bound, which works in the cases we will be examining but not in general
* Let $\Delta V$ denote the change in $V$ along a particular solution of $x(k)$, called the *forward difference*
	* For time-invariant systems, we define $\Delta V = \Delta V(x)$ to be a function of only the state $x$
		* $\Delta V(x) = \Delta V(x(k)) = V(x(k + 1)) - V(x(k)) = V(f(x)) - V(x)$
	* For time-varying systems, we define $\Delta V = \Delta V(k, x)$ with a dependence on $k$ as well
		* $\Delta V(k, x) = \Delta V(k, x(k)) = V(k + 1, x(k + 1)) - V(k, x(k)) = V(k + 1, f(k, x(k))) - V(k, x(k))$
	* This is the analogue of $\dot V$ in continuous time

\noteThm{\textit{Main Theorem of Lyapunov:} Suppose there exists a positive definite \textit{Lyapunov function} $V: \naturals _0 \times \reals^n \mapsto \reals$ such that $V(k, 0) = 0, \forall k$, and let $\bar x = 0$ be an equilibrium, then:
\begin{enumerate}
	\item If $\Delta V(k, x)$ is negative semi-definite in $x$, then $\bar x = 0$ is stable.
	\item If $\Delta V(k, x)$ is negative definite in $x$, then $\bar x = 0$ is asymptotically stable. Moreover if $V$ is radially unbounded, then $\bar x = 0$ is globally asymptotically stable.
\end{enumerate}}

* Notice that the Lyapunov function is a function of $x$ and $k$ for time-dependent systems, or a function of just $x$ for time-invariant systems
* Example: Consider the system $x(k + 1) = \mattwo{0.5}{0}{0}{0.5}x(k)$; prove that the equilibrium $\bar x = \cvec{0}{0}$ is GAS
	* Consider the Lyapunov function $V(x) = x_1^2 + x_2^2$
		* Selecting the appropriate Lyapunov function is the most important part; when in doubt, try a quadratic
	* Clearly $V(x)$ is positive definite at $\bar x = (0, 0)$
	* Also, $V(x)$ is radially unbounded (check level sets or use the fact that $V(x) \geq c_1\norm{x}^2$
	* Compute the forward difference: $\alignedeqntwo[t]{\Delta V(x)}{V(x(k + 1)) - V(x(k))}{x_1^2(k + 1) + x_2^2(k + 1) - x_1^2(k) - x_2^2(k)}{\frac{1}{4}x_1^2(k) + \frac{1}{4}x_2^2(k) - x_1^2(k) - x_2^2(k)}{-\frac{3}{4}(x_1^2(k) + x_2^2(k))}$
	* $\Delta V(k, x(k))$ is negative definite, so by Lyapunov's theorem and the above conditions $\bar x = (0, 0)$ is GAS
* Example: Consider the nonlinear system $x(k + 1) = -x(k) + x^3(k)$; show that $\bar x = 0$ is stable (note that it is not GAS in this case)
	* Consider the Lyapunov function $V(x) = x^2$, which is clearly positive definite and radially unbounded
	* Forward difference: $\alignedeqntwo[t]{\Delta V(x)}{V(x(k + 1)) - V(x(k))}{x^2(k + 1) - x^2(k)}{(-x(k) + x^3(k))^2 - x^2(k)}{x^2(k) - 2x^4(k) + x^6(k) - x^2(k)}{-(2 - x^2(k))x(k)^4}$
	* Notice that if $\abs{x} < \sqrt 2$ we have a positive $\Delta V$, but once it gets larger the sign flips, so this is only negative definite within this reduced domain
	* Therefore we conclude that if we restrict the domain to $\set{x: \abs{x} < \sqrt 2}$, then $\bar x = 0$ is asymptotically stable, but not GAS; outside of this domain, we lose stability

