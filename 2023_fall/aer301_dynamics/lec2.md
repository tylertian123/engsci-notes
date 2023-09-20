# Lecture 2, Sep 12, 2023

## Frames of Reference

* In this course, we restrict our analysis to dextral (right-handed) orthonormal frames of reference/bases
* Any vector $\uvec v$ can be expressed in any basis: $\uvec v = v_1\uvec a_1 + v_2\uvec a_2 + v_3\uvec a_3$
	* $v_1, v_2, v_3$ are the coordinates of $\uvec v$ in the basis $\uvec a$
* As an alternative notation, consider $\uvec v = \vectrix{F}^T\bm v = v_1\uvec a_1 + v_2\uvec a_2 + v_3\uvec a_3$, where $\bm v = \cvec{v_1}{v_2}{v_3}$ and $\vectrix F = \cvec{\uvec a_1}{\uvec a_2}{\uvec a_3}$
	* $\vcx F$ is a matrix of vectors, so we call it a *vectrix*
	* We can also write this as $\uvec v = \bm v^T\vcx F$ which gives the same result
* We can now define various operations using vectrix notation:
	* $\uvec u \cdot \uvec v = (\bm u^T\vcx F) \cdot (\vcx F^T\bm v) = \bm u^T(\vcx F \cdot \vcx F^T)\bm v = \bm u^T\bm 1\bm v = \bm u^T\bm v$
		* Note that $\vcx F \cdot \vcx F^T = \matthreeb{\uvec a_1 \cdot \uvec a_1}{\uvec a_1 \cdot \uvec a_2}{\uvec a_1 \cdot \uvec a_3}{\uvec a_2 \cdot \uvec a_1}{\uvec a_2 \cdot \uvec a_2}{\uvec a_2 \cdot \uvec a_3}{\uvec a_3 \cdot \uvec a_1}{\uvec a_3 \cdot \uvec a_2}{\uvec a_3 \cdot \uvec a_3} = \bm 1$ because the basis in $\vcx F$ is orthonormal
		* This definition is consistent with our usual definition of an inner product
	* $\uvec u \times \uvec v = (\bm u^T\vcx F) \times (\vcx F^T\bm v) = \bm u^T(\vcx F \times \vcx F^T)\bm v = (u_2v_3 - u_3v_2)\uvec a_1 + (u_3v_1 - u_1v_3)\uvec a_2 + (u_1v_2 - u_2v_1)\uvec a_3$
		* Note that $\vcx F \times \vcx F^T = \matthreeb{\uvec a_1 \times \uvec a_1}{\uvec a_1 \times \uvec a_2}{\uvec a_1 \times \uvec a_3}{\uvec a_2 \times \uvec a_1}{\uvec a_2 \times \uvec a_2}{\uvec a_2 \times \uvec a_3}{\uvec a_3 \times \uvec a_1}{\uvec a_3 \times \uvec a_2}{\uvec a_3 \times \uvec a_3} = \matthreeb{0}{\uvec a_3}{-\uvec a_2}{-\uvec a_3}{0}{\uvec a_1}{\uvec a_2}{-\uvec a_1}{0}$ where we have assumed right-handedness
		* Also note that $\uvec u \times \uvec v = -\uvec v \times \uvec u \iff \bm u^\times\bm v = -\bm v^\times\bm u$, i.e. the cross product is anti-commutative
		* This definition is also consistent with our usual definition for cross product
		* Alternatively $\uvec u \times \uvec v = \vcx F^T\cvec{u_2v_3 - u_3v_2}{u_3v_1 - u_1v_3}{u_1v_2 - u_2v_1} = \vcx F^T\bm u^\times\bm v$ where $\bm u^\times = \matthreeb{0}{-u_3}{u_2}{u_3}{0}{-u_1}{-u_2}{u_1}{0}$
			* $\bm u^\times$ is also known as the skew-symmetric form of $\bm u$ since $(\bm u^\times)^T = -\bm u^\times$
			* Also note that as expected $\det(\bm u^\times) = 0$ (in fact the determinant of any odd-dimensioned skew-symmetric matrix is zero)
	* $\uvec u \cdot \uvec v \times \uvec w = \bm u^T\vcx F \cdot (\vcx F^T\bm v^\times\bm w) = \bm u^T\bm v^\times\bm w$
		* This is called the triple product and represents the volume of a parallelepiped formed by the 3 vectors
	* $\uvec u \times (\uvec v \times \uvec w) = \bm u^T\vcx F \times (\vcx F^T\bm v^\times\bm w) = \vcx F^T\bm u^\times\bm v^\times\bm w$
	* $(\uvec u \times \uvec v) \times \uvec w = (\bm u^\times\bm v)^T\vcx F \times \vcx F^T\bm w = \vcx F^T(\bm u^\times\bm v)^\times\bm w$
		* Notice that this is in general not the same as the result above, so the cross product is not associative
* Consider two frames $a$ and $b$, then $\uvec v = \vcx F_a^T\bm v_a = \vcx F_b^T\bm v_b$; how do we relate $\bm v_a$ and $\bm v_b$?
	* $\vcx F_a^T\bm v_a = \vcx F_b^T\bm v_b \implies \vcx F_a \cdot \vcx F_a^T\bm v_a = \vcx F_a \cdot \vcx F_b^T\bm v_b \implies \bm v_a = \vcx F_a \cdot \vcx F_b^T\bm v_b = \bm C_{ab}\bm v_b$
	* $\bm C_{ab}$ is our transformation matrix from $b$ to $a$
	* Expanded: $\bm C_{ab} = \matthreeb{\uvec a_1 \cdot \uvec b_1}{\uvec a_1 \cdot \uvec b_2}{\uvec a_1 \cdot \uvec b_3}{\uvec a_2 \cdot \uvec b_1}{\uvec a_2 \cdot \uvec b_2}{\uvec a_2 \cdot \uvec b_3}{\uvec a_3 \cdot \uvec b_1}{\uvec a_3 \cdot \uvec b_2}{\uvec a_3 \cdot \uvec b_3} = \matthreeb{\cos(\theta _{11})}{\cos(\theta _{12})}{\cos(\theta _{13})}{\cos(\theta _{21})}{\cos(\theta _{22})}{\cos(\theta _{23})}{\cos(\theta _{31})}{\cos(\theta _{32})}{\cos(\theta _{33})}$
	* Note some properties of $\bm C_{ab}$:
		* $\bm C_{ab}\bm C_{ba} = \bm C_{aa} = \bm 1$, so $\bm C_{ab} = \bm C_{ba}^{-1}$
		* $\bm C_{ab} = \vcx F_a \cdot \vcx F_b^T = (\vcx F_b \cdot \vcx F_a^T)^T = \bm C_{ba}$
		* Therefore $\bm C_{ab}^{-1} = \bm C_{ab}^T$
		* Since $\bm C^T\bm C = \bm 1$ for all rotation matrices, $\det \bm C^2 = 1$ so $\det\bm C = 1$
			* Note the determinant of $\bm C$ can be negative when going from a left-handed to a right-handed frame and vice versa but we will not consider these in this course

