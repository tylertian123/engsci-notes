# Lecture 25, Mar 18, 2022

## Cramer's Rule

* Cramer's Rule (Maclaurin-Cramer Rule): The solution to $\bm A\bm x = \bm b$ where $\bm A \in \matdim{n}{n}$ is given by $x_i = \frac{\det \bm A_i}{\det \bm A}$ where $\bm x_i$ are the components of $\bm x$ and $\bm A_i$ is $\bm A$ with column $i$ replaced by $\bm b$, if $\det \bm A \neq 0$
	* $\bm A_i = \rvec{\bm c_1}{\cdots}{\bm b}{\cdots}{\bm c_n}$
	* $\bm b = \bm A\bm x = \rvec{\bm c_1}{\cdots}{\bm c_n}\bm x = \sum _{j = 1}^n x_j\bm c_j$
	* $\alignedeqntwo[t]{\det \bm A_i}{\det \rvec{\bm c_1}{\cdots}{\sum _{j = 1}^n x_j\bm c_j}{\cdots}{\bm c_n}}{\det \rvec{\bm c_1}{\cdots}{x_i\bm c_i + \sum _{\substack{j = 1 \\ j \neq i}}^n x_j\bm c_j}{\cdots}{\bm c_n}}{\det \rvec{\bm c_1}{\cdots}{x_i\bm c_i}{\cdots}{\bm c_n}}{x_i\det \rvec{\bm c_1}{\cdots}{\bm c_i}{\cdots}{\bm c_n}}{x_i\det \bm A}$
	* Provided that $\det \bm A \neq 0$, we have $\det \bm A_i = x_i\det \bm A \implies x_i = \frac{\det \bm A_i}{\det \bm A}$
	* Note the sum is just adding multiples of other columns, which does not change the determinant as per determinant properties
* Cramer's rule is computationally inefficient for larger matrices ($\mathcal O((n + 1)!)$ operations if taking determinants recursively); Gaussian elimination is much better for larger matrices ($\mathcal O(n^3)$ operations)
	* For smaller matrices it might be faster; in general this depends on the matrix itself (e.g. number of zeros)

## Cofactors and Adjoints

* Definition: The $(i, j)$ cofactor of $\bm A \in \matdim{n}{n}$ is $c_{ij}(\bm A) = (-1)^{i + j}\det \bm M_{ij}(\bm A)$
	* Using the cofactor, the determinant can be written as $\sum _{j = 1}^n a_{kj}c_{kj}$, true for any $k$
* $\sum _{j = 1}^n a_{ij}c_{kj} = \twocond{\det \bm A}{k = i}{0}{k \neq i}$
	* Proof: Consider $\bm A' \in \matdim{n}{n}$ which is $\bm A$ with row $k$ replaced with row $i$
		* $\det \bm A' = 0$ because rows are not independent
		* Using the Laplace expansion about row $k$: $\det \bm A' = 0 = \sum _{j = 1}^n a_{kj}'c_{kj}(\bm A') = \sum _{j = 1}^n a_{ij}c_{kj}(\bm A)$
			* $a_{kj}' = a_{ij}$ because we replaced row $k$ by row $i$
			* $c_{kj}(\bm A') = c_{kj}(\bm A)$ because row $k$ was eliminated in the calculation of the cofactor so the minors are the same
* $\sum _{j = 1}^n a_{ij}c_{kj}$ is like taking $\bm A\bm C^T$ where $\bm C = \cvec{c_{kj}}$ is the cofactor matrix
* $\twocond{\det \bm A}{k = i}{0}{k \neq i}$ is just $(\det \bm A)\bm 1$
* $\bm A\bm C^T = (\det \bm A)\bm 1$
* Definition: The *adjoint* of $\bm A$ is $\adj \bm A = \bm C^T$
	* Also known as the *adjugate*
* Theorem VIII: $\bm A(\adj \bm A) = (\det \bm A)\bm 1 = (\adj \bm A)\bm A$
	* If $\bm A$ is invertible then $\bm A^{-1} = \frac{1}{\det \bm A}\adj \bm A$
* $\det(\adj \bm A) = (\det \bm A)^{n - 1}$
* If $\bm A$ is non-invertible, then $(\adj \bm A)\bm A = \bm 0 \implies \col \bm A \subseteq \Null \adj \bm A$; if $\bm A \neq \bm 0$, $\dim \col \bm A \geq 1 \implies \dim \Null \adj \bm A \geq 1$
	* $n - \rank \adj \bm A = \dim \Null \adj \bm A \implies \rank \adj \bm A < n \implies \adj \bm A$ is not invertible
	* $\det(\adj \bm A) = 0$ so the previous equation still holds

