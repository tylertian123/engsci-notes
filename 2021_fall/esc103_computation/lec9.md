# Lecture 9, Oct 13, 2021

## Proving Trig Identities Using Matrices

* Rotation matrix: $T_\theta = \mattwo{\cos \theta}{-\sin \theta}{\sin \theta}{\cos \theta}$
* Define the composition $T_\theta(T_\theta(\vec{v})) = \mattwo{\cos \theta}{-\sin \theta}{\sin \theta}{\cos \theta}\mattwo{\cos \theta}{-\sin \theta}{\sin \theta}{\cos \theta} = \mattwo{\cos^2 \theta - \sin^2 \theta}{-2\sin \theta\cos \theta}{2\sin \theta\cos \theta}{\cos^2 \theta - \sin^2\theta}$
* Since $T_\theta(T_\theta(\vec{v})) = T_{2\theta} = \mattwo{\cos 2\theta}{-\sin 2\theta}{\sin 2\theta}{\cos 2\theta}$ but $T_\theta(T_\theta(\vec{v})) = \mattwo{\cos^2 \theta - \sin^2 \theta}{-2\sin \theta\cos \theta}{2\sin \theta\cos \theta}{\cos^2 \theta - \sin^2\theta}$, we can conclude $\twopiece{\sin 2\theta = 2\sin\theta \cos\theta}{\cos 2\theta = \sin^2 \theta - \cos^2 \theta}$

## Eigenvalues & Eigenvectors

* Certain vectors do not change direction (remain parallel) when transformed by a linear transformation; they are the *eigenvectors* of that transformation, and the amount they are scaled by are the *eigenvalues*
* $A\vec{v} = \lambda \vec{v}$, where $\vec{v}$ is an eigenvector and $\lambda$ is an eigenvalue
* Example: For a transformation that projects every vector onto a fixed vector, every vector parallel to the fixed vector is an eigenvector of the transformation with eigenvalue 1; every vector orthogonal to it is an eigenvector of the transformation with eigenvalue 0
* The number of eigenvalues (note: these can be complex) is always the same as the dimension of the matrix (note: nonsquare matrices don't have eigenvalues)
* To find eigenvectors, note $A\vec{v} = \lambda \vec{v} \implies A\vec{v} - \lambda \vec{v} = 0 \implies A\vec{v} - \lambda I\vec{v} = 0 \implies (A - \lambda I)\vec{v} = 0$, so the eigenvectors are the null space of $A - \lambda I$
	* Note that this null space is only nontrivial if $\det(A - \lambda I) = 0$, so we can find eigenvalues by finding the values of $\lambda$ that make $\det(A - \lambda I) = 0$

