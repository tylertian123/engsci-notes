# Lecture 1, Sep 13, 2021

## Introduction to Vectors

* Vectors: direction, magnitude, units; scalars: magnitude, sign
* Core of linear algebra involves 2 operations: Adding vectors and scaling vectors
* Course notation: vector from $p$ (tail) to $q$ (head) is expressed as $\vec{v} = \vv{PQ} = \cvec{v_1}{v_2}$ (arrowhead is complete)
	* Row vectors are not equal to column vectors: $\cvec{v_1}{v_2} \neq \rvec{v_1}{v_2}$
* Standard position for vectors is tail at the origin

## Vector Operations

* Adding vectors: $\cvec{v_1}{v_2} + \cvec{w_1}{w_2} = \cvec{v_1 + w_1}{v_2 + w_2}$
	* Geometrically this puts the tail of one vector at the head of another
* Scaling vectors: $c\cvec{v_1}{v_2} = \cvec{cv_1}{cv_2}$
	* This makes the vector longer or shorter/flips it
* When one vector is a scalar multiple of another, they're parallel $\vec{v} \parallel \vec{w}$
* The zero vector is $\vec{v} - \vec{v} = \vec{0}$
* A linear combination of two vectors $\vec{v}$ and $\vec{w}$ is $c\vec{v} + d\vec{w}$ for any $c$ and $d$

## Vector Properties

1. $\vec{v} + \vec{w} = \vec{w} + \vec{v}$ (commutative)

