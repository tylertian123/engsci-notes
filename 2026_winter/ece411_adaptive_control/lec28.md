# Lecture 28, Mar 19, 2026

## The Regulator Problem -- Partial Measurement

* If we don't have full measurement (only $e(k)$ is measureable), we need to build an observer for $\cvec{x(k)}{w(k)}$, so we can use our earlier design
* Consider the composite system: $\begin{aligned}[t] \cvec{x(k + 1)}{w(k + 1)} &= \mattwo{A}{E}{0}{S} + \cvec{B}{0}u(k) &&= A_c\cvec{x(k)}{w(k)} + B_cu(k) \\ e(k) &= \rvec{C}{D}\cvec{x(k)}{w(k)} &&= C_c\cvec{x(k)}{w(k)} \end{aligned}$
* We need the following assumptions:
	1. $(A, B)$ is controllable
	2. $(C, A)$ is observable
	3. $\left(\rvec{C}{D}, \mattwo{A}{E}{0}{S}\right)$ is observable
		* Note that we can assume this without loss of generality because if the composite system is unobservable, this means we have exosystem states which don't impact the error at all; we can then use a Kalman decomposition to eliminate the redundant states to make the overall system observable
* Now we have the observer: $\begin{aligned}[t] \hat x(k + 1) &= A\hat x(k) + Bu(k) + E\hat w(k) + L_1(e(k) - \hat e(k)) \\ \hat w(k + 1) &= S\hat w(k) + L_2(e(k) - \hat e(k)) \\ \hat e(k) &= C\hat x(k) + D\hat w(k) \end{aligned}$
	* This observer is our internal model
* Let the estimation errors $\tilde x(k) = \hat x(k) - x(k), \tilde w(k) = \hat w(k) - w(k)$
	* The dynamics are $\alignedeqntwo[t]{\cvec{\tilde x(k + 1)}{\tilde w(k + 1)}}{\left(\mattwo{A}{E}{0}{S} - \cvec{L_1}{L_2}\rvec{C}{D}\right)\cvec{\tilde x(k)}{\tilde w(k)}}{(A_c - LC_c)\cvec{\tilde x(k)}{\tilde w(k)}}$
* The overall system block diagram is depicted below:

\makebox[\textwidth]{
\begin{tikzpicture}[auto, node distance=2cm, >=latex]

    % --- LOCAL STYLE DEFINITIONS ---
    \begin{scope}[
        block/.style = {draw, fill=white, rectangle, minimum height=2em, minimum width=4em},
        controlblock/.style = {draw, fill=white, rectangle, inner sep=2pt},
        input/.style = {coordinate},
        output/.style= {coordinate},
        sum/.style   = {draw, fill=white, circle, inner sep=2pt}
    ]

        % --- NODES ---
        \node [input] (start) {};
        \node [coordinate, right=0.6cm of start] (split_r) {};
        
        % Summation node
        \node [sum, right=0.8cm of split_r] (sum_e) {};
        
        % Controller
        \node [controlblock, right=0.8cm of sum_e] (controller) {
            \small
            $\begin{aligned} 
            \hat x(k + 1) &= A\hat x(k) + Bu(k) + E\hat w(k) + L_1(e(k) - \hat e(k)) \\ 
            \hat w(k + 1) &= S\hat w(k) + L_2(e(k) - \hat e(k)) \\ 
            \hat e(k) &= C\hat x(k) + D\hat w(k) \\ 
            u(k) &= K\hat x(k) + (\Gamma - K\Pi)\hat w(k) 
            \end{aligned}$
        };
        
        % Plant
        \node [controlblock, right=1.0cm of controller] (plant) {
            \small
            $\begin{aligned}
            x(k + 1) &= Ax(k) + Bu(k) + d(k) \\
            y(k) &= -Cx(k)
            \end{aligned}$
        };
        
        \node [output, right=0.8cm of plant] (y_out) {};
        
        % Exosystem
        \node [block, above=0.5cm of controller] (exo) {
            \small
            $\begin{aligned} 
            w(k+1) &= Sw(k) \\ 
            d(k) &= Ew(k) 
            \end{aligned}$
        };

        % --- CONNECTIONS ---
        % Reference input label below to avoid overlap
        \draw [-] (start) -- node [below, pos=0.4] {$\alignedeqn{r(k)}{Dw(k)}$} (split_r);
        
        % Path to Summation with '+' mark
        \draw [->] (split_r) -- node [pos=0.9, above left] {\tiny $+$} (sum_e);
        \draw [->] (split_r) |- (exo);
        
        \draw [->] (sum_e) -- node {$e(k)$} (controller);
        
        % u(k) enters left
        \draw [->] (controller) -- node [above] {$u(k)$} (plant.west);
        
        % d(k) enters top
        \draw [->] (exo) -| node [pos=0.3, above] {$d(k)$} (plant.north);
        
        \draw [->] (plant) -- node [name=y] {$y(k)$} (y_out);

        % Feedback Loop with '-' mark
        \draw [->] (y) -- ++(0,-2.0) -| node [pos=0.95, right] {\tiny $-$} (sum_e);

    \end{scope}
\end{tikzpicture}
}
