# Lecture 12, Feb 15, 2024

## Stability of LTI Systems

* For a transfer function $H(s) = K_H\frac{\prod _{i = 1}^m (s - z_i)}{\prod _{j = 1}^n (s - p_j)}$, the impulse response will look like a sum of exponentials, $y(t) = \sum _{j = 1}^n C_je^{p_j t}$ (assuming poles are distinct)
	* The coefficients $C_j$ depend on the initial conditions and locations of zeroes
	* If a pole is repeated $k$ times, we will have terms $C_{j_0}e^{p_j} + C_{j_1}te^{p_j} + \dots + C_{j_{k - 1}}t^{k - 1}e^{p_j}$
	* The system response is bounded if and only if all $\Re(p_j) \leq 0$ (regardless of repeating poles); hence any poles in the RHP are unstable

\noteDefn{We define three types of stability for systems:
\begin{itemize}
	\item \textit{Bounded-Input-Bounded-Output} (BIBO) Stability: Any bounded input generates a bounded output (with no requirement on convergence).
	\item \textit{Asymptotic} Stability: Any inital condition generates an output which approaches for zero as time approaches infinity.
	\item \textit{Marginal} (or \textit{Neutral}) Stability: Any initial condition generates an output which is bounded (for a zero input).
\end{itemize}}

* Asymptotic stability is a generally stronger form of stability than BIBO
	* All asymptotically stable systems are also BIBO stable
* For all LTI systems, all BIBO systems are also asymptotically stable
* If any poles are exactly on the imaginary axis, then if they are non-repeating, the system is marginally/neurally stable, but if they are repeating, then the system is unstable
	* This will result in either a constant output or a free oscillator
* The *Routh-Hurwitz* stability criterion can be used to identify the stability of a system without explicitly factoring the characteristic equation
	* Consider the characteristic equation $s^n + a_1s^{n - 1} + a_2s^{n - 2} + \dots + a_{n - 1}s + a_n$
	* If all poles are in the LHP, then all coefficients $a_i$ are positive and real
		* Therefore if any $a_i \leq 0$, then the system is always unstable (or marginally stable)
	* If all $a_i > 0$, we need to form the *Routh array* to check for stability
		* The array consists of $n + 1$ rows, with row $i$ corresponding to $s^i$
		* Row $n$ contains $1, a_2, a_4, \dots$
		* Row $n - 1$ contains $a_1, a_3, a_5, \dots$
		* Row $n - 2$ contains $b_1, b_2, b_3, \dots$ where:
			* $b_1 = -\frac{1}{a_1}\det\mattwo{1}{a_2}{a_1}{a_3}$
			* $b_2 = -\frac{1}{a_1}\det\mattwo{1}{a_4}{a_1}{a_5}$
			* $b_3 = -\frac{1}{a_1}\det\mattwo{1}{a_6}{a_1}{a_7}$
		* Row $n - 3$ contains $c_1, c_2, c_3, \dots$ where:
			* $c_1 = -\frac{1}{b_1}\det\mattwo{a_1}{a_3}{b_1}{b_2}$
			* $c_2 = -\frac{1}{b_1}\det\mattwo{a_1}{a_5}{b_1}{b_3}$
			* $c_2 = -\frac{1}{b_1}\det\mattwo{a_1}{a_7}{b_1}{b_4}$
		* For $x_i$, consider the $2 \times 2$ matrix formed by taking column 1 and column $i + 1$ of the two previous rows, take the negative of its determinant and divide by the bottom left entry
			* We treat any missing entries as zeroes
			* This means for each row starting from $n - 2$, we will get one fewer element (zero entry) per row
			* By row 1 we are left with only one element
			* For row 0 we still have one element, obtained by treating the missing entry as a zero when calculating the determinant
			* Past row 0 all entries will be zero, so we stop
		* Note: all elements of each row can be divided by a common factor to simplify computation
	* A system is stable if and only if all elements in the first column of the Routh array are positive
	* The number of roots in the RHP is equal to the number of sign changes in the first column of the Routh array
	* Note the two special cases:
		* One of the elements in the first column is zero
			* Replace this element by some small positive value $\var\epsilon$ and construct the rest of the array
			* Take the limit $\var\epsilon \to 0^+$ and check the sign of the first column
		* An entire row is zero
* Example: unity feedback system, with a PI controller $K + \frac{K_I}{s}$, and a plant $\frac{1}{(s + 1)(s + 2)}$
	* For what values of $K$ and $K_I$ is the closed-loop system stable?
	* $H(s) = \frac{\left(K + \frac{K_I}{s}\right)\left(\frac{1}{(s + 1)(s + 2)}\right)}{1 + \left(K + \frac{K_I}{s}\right)\left(\frac{1}{(s + 1)(s + 2)}\right)} = \frac{Ks + K_I}{s^3 + 3s^2 + (2 + K)s + K_I}$
	* From this we can see that a necessary condition is $K_I > 0$ and $K > -2$, but this is not a sufficient condition
	* Form the Routh array:
		* $\begin{array}{lcc} \text{Row 3} & 1 & (2 + K) \\ \text{Row 2} & 3 & K_I \\ \text{Row 1} & (6 + 3K - K_I)/3 & \\ \text{Row 0} & K_I & \end{array}$
	* To have all terms in the first row be positive, we require $K_I > 0$ and $K > \frac{1}{3}K_I - 2$
	* Note that for this system, even if we took $K_I = 0$, because we'd have a pole at 0 and zero at 0, they cancel out and the overall system is still stable

