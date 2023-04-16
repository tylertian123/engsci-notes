# Lecture 8, Oct 6, 2021

## Matrices as Linear Transformations

* Projections can be written as the product of a vector and a projection matrix
* Generally, all linear transformations can be expressed as a matrix; to determine the matrix associated with a linear transformation, find $\mathcal{L}(\ihat)$, $\mathcal{L}(\jhat)$, $\mathcal{L}(\khat)$ (and so on for all bases) and put those as the columns of the matrix
	* Consider $\vec{v} = \cvec{v_1}{v_2}{\vdots} = v_1\vec{b}_1 + v_2\vec{b}_2 + \cdots$ where $\vec{b}_1 = \cvec{1}{0}{\vdots}{0}$, $\vec{b}_2 = \cvec{0}{1}{\vdots}{0}$, etc
	* By linearity $\mathcal{L}(\vec{v}) = v_1\mathcal{L}(\vec{b}_1) + v_2\mathcal{L}(\vec{b}_2) + \cdots$
	* Now consider the matrix-vector product $\matthreeb{\vert}{\vert}{\vert}{\mathcal{L}(\vec{b}_1)}{\mathcal{L}(\vec{b}_2)}{\cdots}{\vert}{\vert}{\vert}\vec{v}$
	* By definition this is equal to $v_1\mathcal{L}(\vec{b}_1) + v_2\mathcal{L}(\vec{b}_2) + \cdots$ which is equal to $\mathcal{L}(\vec{v})$
	* Therefore $\mathcal{L}$ is represented by the matrix $\matthreeb{\vert}{\vert}{\vert}{\mathcal{L}(\vec{b}_1)}{\mathcal{L}(\vec{b}_2)}{\cdots}{\vert}{\vert}{\vert}$, so every linear transformation has an associated matrix
* Conversely all matrix transformations are also linear
* Some famous transformations:
	* $I$ -- The identity transformation, which takes every vector to itself; the identity matrix has 1s down the diagonal and 0s everywhere else
	* $O$ -- The zero transformation, which takes every vector to zero; the zero matrix has all zeroes

## Why We Multiply Matrices the Way We Do

* Let $T_1$ and $T_2$ be two linear transformations
* The transformation of $T_1$ followed by $T_2$ is $T_2(T_1(\vec{v}))$; note order is important here
* $T_2(T_1(\vec{v})) = M_2(M_1\vec{v})$ where $M_2$ is the matrix for transformation $T_2$ and $M_1$ is the matrix for transformation $T_1$
* Therefore the matrix product $M_2M_1$ represents the result of applying two linear transformations, one after the other
* $A\matthreeb{\vert}{\vert}{\vert}{\vec{b_1}}{\vec{b_2}}{\cdots}{\vert}{\vert}{\vert} = \matthreeb{\vert}{\vert}{\vert}{A\vec{b_1}}{A\vec{b_2}}{\cdots}{\vert}{\vert}{\vert}$
* Example: Define a transformation $T_\theta$ that takes every vector in $\mathbb{R}^2$ and rotates it counterclockwise by $\theta$; the matrix for this transformation is $\mattwo{\cos \theta}{-\sin \theta}{\sin \theta}{\cos \theta}$

