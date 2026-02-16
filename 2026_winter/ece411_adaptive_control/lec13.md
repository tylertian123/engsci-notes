# Lecture 13, Feb 3, 2026

## Theoretical Justification of Error Models

\noteDefn{The \textit{$l_\infty$-norm} of a discrete signal $x: \naturals _0 \to \reals^n$ is $$\norm{x}_{l_\infty} = \sup _{k \geq 0}\norm{x(k)}$$ We denote $x(k) \in l_\infty$ if $\norm{x}_{l_\infty}$ exists (i.e. is finite).}

\noteDefn{The \textit{$l_2$-norm} of a discrete signal $x: \naturals _0 \to \reals^n$ is $$\norm{x}_{l_2} = \sqrt{\sum _{k = 0}^\infty \norm{x(k)}^2}$$ We denote $x(k) \in l_2$ if $\norm{x}_{l_2}$ exists (i.e. is finite).}

* The intuition is that $l_\infty$ means that the signal is bounded, while $l_2$ means that the signal has finite energy
	* e.g. the signal $x(k) = 1$ is $x \in l_\infty$ but $x \notin l_2$; the signal $x(k) = a^k, \abs{a} < 1$ is $x \in l_\infty$ and $x \in l_2$ since this infinite sum converges
	* $l_2$ signals must be decaying for the sum to converge

