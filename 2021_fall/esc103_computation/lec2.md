# Lecture 2, Sep 15, 2021

## Vector Properties

* Suppose you have 3 vectors $\vec{v}, \vec{w}, \vec{z}$ in $\mathbb{R}^3$, for scalars $c, d, e$
	* The picture of all linear combinations $c\vec{v}$ is a line, $c\vec{v} + d\vec{w}$ is a plane, $c\vec{v} + d\vec{w} + e\vec{z}$ is all of $\mathbb{R}^3$ assuming independence
* Vectors are linearly independent when they cannot be expressed as linear combinations of others
* Vector magnitude $\norm*{\vec{v}} = \sqrt{v_1^2 + v_2^2 + \cdots}$
	* Properties of magnitudes (and all norms in general):
		1. $\norm*{c\vec{v}} = \abs{c}\norm*{\vec{v}}$
		2. $\norm*{\vec{v}} \iff \vec{v} = \vec{0}$
* A unit vector $\hat{v}$ is any vector with length 1
	* In $\mathbb{R}^3$ the well known unit vectors are $\hat{i}, \hat{j}, \hat{k}$ but there are an infinite number of them
	* Vectors can be made into unit vectors (normalized) by dividing by their magnitude: $\hat{v} = \frac{\vec{v}}{\norm*{\vec{v}}}$

## Distance Between Points

* To calculate the distance between two points, we first need to establish a coordinate system, with an origin and axis directions (basis vectors?)
* Make vectors $\vv{OP_1}$ and $\vv{OP_2}$ where $O$ is the origin, and $\vv{P_1P_2}$, which we want the magnitude of
* $\vv{OP_1} + \vv{P_1P_2} = \vv{OP_2} \implies \vv{P_1P_2} = \vv{OP_2} - \vv{OP_1}$ then find $\norm*{\vv{P_1P_2}}$

## Dot Product

* Definition: The *dot product* $\vec{v} \cdot \vec{w} = \sum _{i = 1}^n v_iw_i$ (sum of products of each corresponding pair); note the dot product of vectors is a scalar, so it is sometimes referred to as the *scalar product*

