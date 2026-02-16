# Lecture 17, Feb 12, 2026

## Optimal Control Problem

* Consider the general discrete-time system $x(k + 1) = f(k, x(k), u(k))$ where $x(k) \in \mathcal X$, where the state space $\mathcal X$ is usually $\reals^n$ (but can be finite or infinite)
	* For $k \in {0, 1, \dots, N - 1}$, we want to select a control $\pi = \set{u(0), u(1), \dots, u(N - 1) | u(k) \in \mathcal U_k(x(k))}$, i.e. at each time we can select an input in a set based on our current state
	* Let $\Pi(x(0))$ denote the set of all admissible controls for the initial conditions $x(0)$
* Given $x(0) \in \mathcal X$ and $\pi \in \Pi(x(0))$, we define a cost $J^\pi(x(0)) = r_N(x(N)) + \sum _{k = 0}^{N - 1} r_k(x(k), u(k))$
	* $r_N(x(N)) \geq 0$ is the terminal cost and $r_k(x(k), u(k)) \geq 0$ are stage costs
* Our control objective is to find the optimal cost (*value function*) $J^*(x(0)) = \min _{\pi \in \Pi(x(0))} J^\pi(x(0))$ and an optimal control $\pi^* \in \Pi(x(0))$ such that $J^{\pi^*}(x(0)) = J^*(x(0))$, for each $x(0) \in \mathcal X$
	* Note that the optimal cost is unique, but the optimal control is not
	* In classical adaptive control we first find the optimal cost, and then use it to find the optimal control

\noteThm{\textit{Principle of Optimality:} Let $x(0) \in \mathcal X$ and suppose $\pi^* = \set{u^*(0), \dots, u^*(N - 1)} \in \Pi(x(0))$, with $\set{x(0), x^*(1), \dots, x^*(N)}$, then for any $j \in \set{1, \dots, N - 1}$, the control $\pi = \set{u^*(j), u^*(j + 1), \dots, u^*(N - 1)}$ and sequence of states $\set{x^*(j), x^*(j + 1), \dots, x^*(N)}$ is optimal for the sub-problem with $x^*(j)$ as initial condition.}

* Informally, this is stated as "the tail of the optimal control is optimal for the tail sub-problem"

