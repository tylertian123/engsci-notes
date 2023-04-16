# Lecture 3, Sep 9, 2022

## Formal Definition of the Double Integral

### Rectangular Regions

\begin{note-definition}
Let $z = f(x, y)$ be defined on $R = \Set{(x, y) | a \leq x \leq b, c \leq y \leq d}$, then the double integral of $f$ over $R$ is $$\iint _R f(x, y)\,\dA = \iint _R f(x, y)\,\dx\,\dy = \lim _{\norm{P} \to 0} \sum _{i = 1}^N f(x_i^*, y_i^*)\Delta A_i$$ where:
\begin{itemize}
	\item The region $R$ is divided into $N$ rectangular regions, with region $i$ having dimensions $\Delta x_i$ by $\Delta y_i$, and area $\Delta A_i = \Delta x_i\Delta y_i$
	\item $(x_i^*, y_i^*)$ is a point in region $i$
	\item $\Delta d_i$ is the length of the diagonal of region $i$
	\item The norm of the partition $\norm{P} = \max(\Delta d_i)$ for $i = 1, 2, \cdots, N$
\end{itemize}
\end{note-definition}

* $\sum _{i = 1}^N m_i\Delta x_i\Delta y_i \leq \sum _{i = 1}^N f(x_i^*, y_i^*)\Delta x_i\Delta y_i \leq \sum _{i = 1}^N M_i\Delta x_i\Delta y_i$ where $m_i/M_i$ is the minimum/maximum value of $f$ over region $i$
	* Convergence is guaranteed by $m_i \to M_i$ as $\norm{P} \to 0$, which is guaranteed by the continuity of $f$ over $R$
* If $f$ is continuous over $R$, this limit always exists and is the same for any way of dividing and sampling $R$, and $f$ is said to be integrable over $R$

\begin{note-definition}
Double sum definition: $$\iint _R f(x, y)\,\dA = \iint _R f(x, y)\,\dx\,\dy = \lim _{\norm{P} \to 0} \sum _{j = 1}^m\sum _{i = 1}^n f(x_{ij}^*, y_{ij}^*)\Delta A_i$$ where:
\begin{itemize}
	\item The region $R$ is divided into an $n$ by $m$ grid of rectangular regions, with region $ij$ being $\Delta x_i$ by $\Delta y_j$, with an area of $\Delta A_{ij} = \Delta x_i\Delta y_j$
	\item $(x_{ij}^*, y_{ij}^*)$ is a point in region $ij$
	\item $\Delta d_{ij}$ is the length of the diagonal of region ${ij}$
	\item The norm of the partition $\norm{P} = \max(\Delta d_{ij})$ for $\twopiece{i = 1, 2, \cdots, n}{j = 1, 2, \cdots, m}$
\end{itemize}
\end{note-definition}

### Non-Rectangular Regions

\begin{note-definition}
Let $f(x, y)$ be defined and rectangular on a region $R$, then:
\begin{itemize}
	\item Divide the region into $N$ rectangular regions such that the regions are completely within $R$ (some of $R$ is omitted at the boundaries), then $\sum _{i = 1}^N \Delta A_i \leq A$ and $\sum _{i = 1}^N m_i\Delta A_i \leq V$ where $A$ is the actual area of $R$, $V$ is the actual volume
	\item Divide the region into $M$ rectangular regions such that the $R$ is completely covered (some regions extend past $R$ at the boundaries), then $\sum _{i = 1}^N \Delta A_j \geq A$ and $\sum _{j = 1}^M M_j\Delta A_j \geq V$
\end{itemize}

$$\iint _R f(x, y)\,\dx\,\dy = \lim _{\norm{P} \to 0}\sum _{i = 1}^N f(x_i^*, y_i^*)\Delta A_i = \lim _{\norm{P} \to 0}\sum _{j = 1}^M f(x_j^*, y_j^*)\Delta A_j$$

\tcblower

A double sum can also be used, then $\iint _R f(x, y)\,\dx\,\dy = \lim _{\norm{P} \to 0} \sum _{j = 1}^M\sum _{i = 1}^N f(x_{ij}^*, y_{ij}^*)\Delta x_i\Delta y_j$
\end{note-definition}

