# Lecture 18, Feb 13, 2026

## Dynamic Programming (Finite Time Horizon)

* Using the principle of optimality, the dynamic programming algorithm computes the optimal cost backwards in time:
	* At each time step, we compute the optimal cost for all possible values of $x(k)$, using the principle of optimality and the optimal cost for all values of $x(k)$ in the next step
	* $J_N(x(N)) = r_N(x(N)), \forall x(N) \in \mathcal X$
		* For the final time step, the optimal cost is simply the terminal cost for each possible value of the state
	* $J_k(x(k)) = \min _{u(k) \in \mathcal U(x(k))} \set{r(x(k), u(k)) + J_{k + 1}(f(x(k), u(k)))}, \forall x(k) \in \mathcal X$
		* For all previous time steps, the optimal cost is obtained by choosing among all possible inputs $u(k)$ for each possible value of the state, using the future costs computed before
	* The optimal input sequence $\pi^*$ can then be recovered by noting which input we chose at each time step

\begin{center}
\begin{tikzpicture}[
    shorten >=1pt, 
    node distance=3cm, 
    on grid, 
    auto,
    state/.style={circle, draw, minimum size=1cm},
	% Force ALL edges and loops to use the same thickness and arrow
    every edge/.style={draw, thick, -Stealth},
    every loop/.style={thick, -Stealth, shorten >=1pt}
]

    % Define the states
    \node[state] (X1) {$x_1$};
    \node[state] (X2) [right=of X1] {$x_2$};
    \node[state] (X3) [below right=of X2] {$x_3$};

    % Define the transitions
    \path 
        % From X1
        (X1) edge [loop above] node {$u_1$} (X1)
             edge node {$u_2$} (X2)
        
        % From X2
        (X2) edge [bend left] node {$u_3$} (X3)
        
        % From X3
        (X3) edge [bend left] node {$u_2$} (X1)
             edge [bend left] node {$u_3$} (X2);

\end{tikzpicture}
\end{center}

* Example: consider the finite state discrete time system above, with the terminal cost being zero for all states, and all other costs are 1, except $r(x_1, u_1) = 0$; consider a finite horizon optimal control problem with $N = 2$; compute $J_i$ for $i = 0, 1, 2$ using the dynamic programming algorithm
	* We have $\mathcal X = \set{x_1, x_2, x_3}$, $u(x_1) = \set{u_1, u_2}, u(x_2) = \set{u_3}, u(x_3) = \set{u_3, u_2}$
	* Starting from $k = 2$, $J_2(x_1) = J_2(x_2) = J_2(x_3) = r_N(x(N)) = 0$ since all terminal costs are zero
	* For $k = 1$:
		* $\alignedeqntwo[t]{J_1(x_1)}{\min \set{r(x_1, u_1) + J_2(f(x_1, u_1)), r(x_1, u_2) + J_2(f(x_1, u_2))}}{\min \set{0 + J_2(x_1), 1 + J_2(x_2)}}{0}$
		* $J_1(x_2) = r(x_2, u_3) + J_2(f(x_2, u_3)) = 1$ since there is only one connection
		* Similarly $J_1(x_3) = 1$
	* For $k = 0$:
		* $\alignedeqntwo[t]{J_0(x_1)}{\min\set{r(x_1, u_1) + J_1(x_1), r(x_1, u_2) + J_1(x_2)}}{\min\set{0, 1}}{0}$
			* This makes sense since the optimal policy starting at $x_1$ is to stay there forever and get zero cost
		* $\alignedeqntwo[t]{J_0(x_2)}{r(x_2, u_3) + J_1(x_3)}{2}$
		* $\alignedeqntwo[t]{J_0(x_3)}{\min\set{r(x_3, u_2) + J_1(x_1), r(x_3, u_3) + J_1(x_2)}}{\min\set{1, 2}}{1}$

