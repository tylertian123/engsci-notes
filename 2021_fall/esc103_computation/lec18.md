# Lecture 18, Nov 22, 2021

## Initial Value Problems

* An IVP is a differential equation attached with initial conditions that allow for a particular solution
* General problem: Given $\diff{y}{t} = y'(t) = cy(t)$ where $c$ is a scalar and $y(0) = y_0$ solve for $y(t)$ for $t > 0$
* We begin with $y(t) = y_0e^{ct}$, so $\diff{y}{t} = cy_0e^{ct} = cy(t)$ so it satisfies the DE; since $y(0) = y_0e^0 = y_0$ it also satisfies the initial conditions
* Generalizing this we have given $y'(t) = f(t, y(t))$ and $y(0) = y_0$
* In this course we will focus on the numerical approach to solving this equation
* We start with the initial value $y(0) = y_0$, and now we can evaluate $f(t, y(t))$ to obtain a slope and take a step forward by some amount $\Delta t$ and use the first derivative information to find the $y$ value for this new point, and repeat until the desired $t$ is reached

## Reducing the Error

* To reduce the error we can try to get a better slope estimate
* We can take $S = \frac{1}{2}(S_L + S_R)$ where $S_L = f(t_n, y_n)$ and $S_R = f(t_{n + 1}, y_{n + 1})$, with $y_{n + 1}$ estimated using the first method, i.e. take slope to be the average of the two points

