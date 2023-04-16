# Lecture 7, Oct 4, 2021

## Linear Transformations

* Definition: A linear transformation $\mathcal{L}$ is a function that maps a vector in $\mathbb{R}^n$ to a vector in $\mathbb{R}^m$ with the following properties (more formally a linear transformation is $\mathcal{L}: \mathbb{R}^n \to \mathbb{R}^m$, if $\vec{v}, \vec{w} \in \mathbb{R}^n$ then $\mathcal{L}(\vec{v}), \mathcal{L}(\vec{w}) \in \mathbb{R}^m$):
	1. $\mathcal{L}(c\vec{v}) = c\mathcal{L}(\vec{v})$
	2. $\mathcal{L}(\vec{v} + \vec{w}) = \mathcal{L}(\vec{v}) + \mathcal{L}(\vec{w})$
* Examples:
	* A transformation $T_1$ that adds a constant vector to every vector is **not** a linear transformation (violates both properties)
	* $y(x) = mx + b$ is **not** a linear transformation
	* A transformation $T_2$ that projects every vector $\vec{w} \in \mathbb{R}^3$ onto a given vector $\vec{v} \in \mathbb{R}^3$ is a linear transformation
		* Proof is too long so it's not copied down
	* A transformation $T_3$ that takes the length of every vector **not** a linear transformation (fails property 1 because $c$ could be negative, fails property 2 because of the triangle *inequality*)

