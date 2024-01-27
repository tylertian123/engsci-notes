# Lecture 5, Jan 26, 2024

## Principal Component Analysis (PCA)

\noteDefn{\textit{Dimensionality Reduction}: Given a dataset $\mathcal D = \set{\bm x^{(i)}}_{i = 1}^N$ where $\bm x^{(i)} \in \reals^D$, find a mapping $f \colon \reals^D \mapsto \reals^d$ where $d < D$ is a lower dimensional space.}

* Dimensionality reduction is a type of unsupervised learning
	* PCA is a dimensionality reduction technique
	* Other techniques can include autoencoders, etc
* Dimensionality reduction can be used for a number of purposes:
	* Saving computational time/memory (helps with the curse of dimensionality)
	* Reduces overfitting
	* Visualize high-dimensional datasets
* We're essentially trying to create a summary of the data
* PCA is one of the only dimensionality reduction techniques with a closed-form solution
* PCA uses a linear model with the form $\bm z = \bm U^T(\bm x - \bm b)$ where $\bm U \in \reals^{D \times d}$ is an orthonormal matrix and $\bm b \in \reals^D$
	* These orthonormal columns form a basis for a subspace $\mathcal S$
	* The projection of $\bm x$ onto $\mathcal S$ is the point $\tilde{\bm x} \in \mathcal S$ closes to $\bm x$ (this is known as the *reproduction* of $\bm x$
	* $\bm z$ is the *representation* or *code* of $\bm x$
* Choose $\bm b = \frac{1}{N}\sum _{i = 1}^N \bm x^{(i)}$
* Finding a general matrix $\bm U$ is challenging, so we will start with a single column vector $\bm u$
	* We aim to minimize the reconstruction error: $\mathcal L(\bm u, \bm b) = \frac{1}{N}\sum _{i = 1}^N \norm{\bm x^{(i)} - (\bm u\bm u^T(\bm x^{(i)} - \bm b) + \bm b)}_2^2$
		* $\hat{\bm x}^{(i)} = \bm u\bm z + \bm b = \bm u\bm u^T(\bm x - \bm b) + \bm b$
	* If the data is centered then $\bm b = \bm 0$, so $\mathcal L(\bm u) = \frac{1}{N}\sum _{i = 1}^N \norm{\bm x^{(i)} - \bm u\bm u^T\bm x^{(i)}}_2^2$
* Expanding the reconstruction error:
	* $\alignedeqntwo[t]{\mathcal L(\bm u)}{\frac{1}{N}\sum _{i = 1}^N (\bm x^{(i)} - \bm u\bm u^T\bm x^{(i)})^T(\bm x^{(i)} - \bm u\bm u^T\bm x^{(i)})}{\frac{1}{N}\sum _{i = 1}^n - 2{\bm x^{(i)}}^T\bm u\bm u^T\bm x^{(i)} + {\bm x^{(i)}}^T\bm u\bm u^T\bm u\bm u^T\bm x^{(i)} + \text{const}}{\frac{1}{N}\sum _{i = 1}^N -{\bm x^{(i)}}^T\bm u\bm u^T\bm x^{(i)} + \text{const}}$
	* So we can formate the problem as minimizing $-\frac{1}{N}\sum _{i = 1}^N {\bm x^{(i)}}^T\bm u\bm u^T\bm x^{(i)}$ subject to $\bm u^T\bm u = 1$
	* Equivalently, maximize $\frac{1}{N}\sum _{i = 1}^N {\bm x^{(i)}}^T\bm u\bm u^T\bm x^{(i)} = \frac{1}{N}\sum _{i = 1}^N \norm{\bm z^{(i)}}_2^2$ subject to $\bm u^T\bm u = 1$
* Note the mean of $\bm z$ is zero since we centered $\bm x$ so the objective function is equivalent to $\frac{1}{N}\sum _{i = 1}^N\norm{\bm z^{(i)} - \bar{\bm z}}_2^2$
	* Minimizing the reconstruction error is equivalent to maximizing the variance of the code vectors
* $\alignedeqntwo[t]{\frac{1}{N}\sum _{i = 1}^N \norm{\bm z^{(i)}}_2^2}{\frac{1}{N}\sum _{i = 1}^N \bm u^T(\bm x^{(i)} - \bm\mu)(\bm x^{(i)} - \bm\mu)^T\bm u}{\bm u^T\left[\frac{1}{N}\sum _{i = 1}^N(\bm x^{(i)} - \bm\mu)(\bm x^{(i)} - \bm\mu)^T\right]\bm u}{\bm u^T\bm\Sigma\bm u}{\bm u^T\bm Q\bm\Lambda\bm Q^T\bm u}{\bm a^T\bm\Lambda\bm a}{\sum _{j = 1}^D\lambda _j\bm a_j^2}$
	* We can decompose $\bm\Sigma$ since it is symmetric positive definite, as it is the empirical covariance matrix
	* $\bm a = \bm Q^T\bm u$ is a change of basis to the eigenbasis of $\bm\Sigma$
* Assuming all $\lambda _i$ are sorted and distinct, we can choose $a_1 = \pm 1$ and $a_j = 0$ (since the first eigenvalue is the largest eigenvalue) in order to maximize the objective
	* Therefore $\bm u = \bm Q\bm a = \bm q_1$ which is just the top eigenvector
	* More generally, we can show that the $k$th principal component is given by the $k$th eigenvector of $\bm\Sigma$ (Courant-Fischer Theorem)
* Alternative derivation: we want to maximize $a$
	* The Lagrangian is $\mathcal L(\bm u, \gamma) = \bm u^T\bm\Sigma\bm u + \gamma(1 - \bm u^T\bm u)$
	* $\del _{\bm u}\mathcal L = (\bm\Sigma + \bm\Sigma^T)\bm u - 2\gamma\bm 1\bm u = 0 \implies 2\bm\Sigma\bm u = 2\gamma\bm u \implies \bm\Sigma\bm u = \gamma\bm u$
* We can also perform PCA with SVD:
	* If $\bm X$ is a data matrix written in centered form, then the covariance matrix is $\bm\Sigma = \frac{1}{N}\bm X^T\bm X$
	* Using an SVD, we can write $\bm\Sigma = \bm V\bm S_1\bm U_1^T\bm U_1\bm S\bm V^T = \frac{1}{N}\bm V\bm S_1^2\bm V^T$
	* Since this is equal to $\bm Q\bm\Lambda\bm Q^T$ and spectral decompositions are unique, we must have that the columns of $\bm V$ are the principal components and $\frac{\bm S_1^2}{N} = \bm\Lambda$
	* So to construct the PCA we can just take the first $d$ columns
	* Using SVD is faster and more stable
* Note the code vectors given by PCA are de-correlated (i.e. their covariance matrix is diagonal)

