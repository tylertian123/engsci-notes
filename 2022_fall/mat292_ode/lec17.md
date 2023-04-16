# Lecture 17, Oct 17, 2022

## First Order Linear Systems of Dimension $n$

* A general first order linear system can be described by $\vec{\bm x}' = \bm P(t) + \vec{\bm g}(t)$

\noteThm{Given $$\vec{\bm x}' = \bm P(t) + \vec{\bm g}(t), \vec{\bm x}(t_0) = \vec{\bm y_0}$$ and $\bm P(t), \vec{\bm g(t)}$ continuous over $t_0 \in (\alpha, \beta)$, then there exists a unique solution in the interval $(\alpha, \beta)$}

* Note $\bm P: \reals \mapsto \matdim{n}{n}$ and $\vec{\bm g}: \reals \mapsto \matdim{}{n}$
* We can always centre the problem, so from now we assume $\vec{\bm g}(t) = 0$

\noteThm{Principle of Superposition: Given $$\vec{\bm x}' = \bm P(t)\vec{\bm x}$$ and $\vec{\bm x}_1(t), \vec{\bm x}_2(t), \cdots, \vec{\bm x}_n(t)$ are solutions, then $$c_1\vec{\bm x}_1(t) + c_2\vec{\bm x}_2(t) + \cdots + c_n\vec{\bm x}_n(t)$$ is also a solution for any $c_1, c_2, \cdots, c_n$ \tcblower This makes the set of all solutions a vector space}

\noteDefn{Functions $\vec{\bm x}_1, \vec{\bm x}_2, \cdots, \vec{\bm x}_n$ are linearly independent if $$c_1\vec{\bm x}_1(t) + c_2\vec{\bm x}_2(t) + \cdots + c_n\vec{\bm x}_n(t) = \vec 0 \implies c_1 = c_2 = \cdots = c_n = 0$$}

\noteDefn{The Wronskian $$W[\vec{\bm x}_1, \vec{\bm x}_2, \cdots, \vec{\bm x}_n](t) = \det\begin{bmatrix}\vrule & \vrule & & \vrule \\ \vec{\bm x}_1 & \vec{\bm x}_2 & \cdots & \vec{\bm x}_n \\ \vrule & \vrule & & \vrule \end{bmatrix} = \det(\bm X(t))$$ \tcblower If $\det(\bm X(t)) \neq 0$ for all $t$, then the solutions are independent}

\noteThm{If $\vec{\bm x}_1, \vec{\bm x}_2, \cdots, \vec{\bm x}_n$ are linearly independent solutions, then any solution can be expressed as $$\vec{\bm x}(t) = c_1\vec{\bm x}_1(t) + c_2\vec{\bm x}_2(t) + \cdots + c_n\vec{\bm x}_n(t)$$ for some set of unique $c_1, c_2, \cdots, c_n$ \tcblower Such a set of $\vec{\bm x}_1, \vec{\bm x}_2, \cdots, \vec{\bm x}_n$ is known as the \textit{fundamental set} of the ODE}

* This set of $c_1, c_2, \cdots, c_n$ depends on the initial conditions: If $\vec{\bm x}(0) = \vec{\bm b}$, then $\vec{\bm c} = \bm X(0)^{-1}\vec{\bm b}$

