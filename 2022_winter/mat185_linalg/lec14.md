# Lecture 14, Feb 14, 2022

## Row Dimension Equals Column Dimension

* Lemma I: Let $\bm A \in \matdim{m}{n}$, then $\row \tilde{\bm A} = \row \bm A$ (where $\tilde{\bm A}$ is the row-reduced echelon form of $\bm A$), so $\dim \row \tilde{\bm A} = \dim \row \bm A$, and the nonzero rows of $\tilde{\bm A}$ form a basis for $\row \tilde{\bm A} = \row \bm A$
	* Proof:
		* $\tilde{\bm A} = \bm E_n\cdots\bm E_1\bm A = \bm E\bm A$; since $E_i$ are elementary matrices they are invertible, therefore $\bm E$ is invertible, so by Prop. I, $\row \tilde{\bm A} = \row \bm A$
		* To show the rows of $\tilde{\bm A}$ form a basis, we show linear independence and span
			* The nonzero rows span $\row \tilde{\bm A} = \row \bm A$ because the zero rows add nothing to the span
			* The rows are linearly independent because there is only one nonzero entry in each column with a leading 1
* Lemma II: Let $A \in \matdim{m}{n}$, then (1) the columns with leading ones in $\tilde{\bm A}$ is a basis for $\col \tilde{\bm A}$, and (2) the columns in $\bm A$ *corresponding* to the columns with leading ones in $\tilde{\bm A}$ is a basis for $\col \bm A$
	* In other words, $\col \tilde{\bm A} \neq \col \bm A$, but we can get a basis for $\col \bm A$ by taking the columns in $\bm A$ that correspond to columns with leading ones in $\tilde{\bm A}$
	* As a result $\dim \col \tilde{\bm A} = \dim \col \bm A$
	* Proof (1):
		* Independence: The columns with leading ones in $\tilde{\bm A}$ are independent because they are a subset of the standard basis for $\matdim{m}{}$
		* Generation: They also span $\tilde{\bm A}$ because the columns without leading ones can be expressed as a linear combination of the columns with leading ones
	* Proof (2): ($\bm c_i$ denotes columns in $\bm A$, $\bm c_i'$ denotes columns in $\tilde{\bm A}$, $\bm c_{ji}'$ denotes column $i$ with leading one in $\tilde{\bm A}$, $\bm c_{ji}$ denotes the column in $\bm A$ corresponding to column $i$ with leading one in $\tilde{\bm A}$)
		* Independence: $\tilde{\bm A} = \bm E\bm A \implies \rvec{\bm c_1'}{\cdots}{\bm c_n'} = \rvec{\bm E\bm c_1}{\cdots}{\bm E\bm c_n} \implies \bm c_i' = \bm E\bm c_i \implies \bm c_i = \bm E^{-1}\bm c_i'$ so the set of columns in $\bm A$ corresponding to the leading ones columns in $\tilde{\bm A}$ are linearly independent as they are related by an invertible matrix by Prop. II
		* Generation: Let $\bm y = \sum _{i = 1}^n \mu _i\bm c_i \in \col \bm A; y = \sum _{i = 1}^n \mu _j(\bm E^{-1}\bm c_j') = E^{-1}\left(\sum _{i = 1}^n \mu _j\bm c_j'\right) \in \col \tilde{\bm A}$; but we've previously shown that the columns with leading ones form a basis for $\col \tilde{\bm A}$, so $E^{-1}\left(\sum _{i = 1}^n \mu _j\bm c_j'\right) = E^{-1}\left(\sum _{i = 1}^n \eta _i\bm c_{ji}\right) = \sum _{i = 1}^n E^{-1}\eta _i\bm c_{ji}' = \sum _{i = 1}^n \eta _i\bm c_{ji}$
* Lemma II gives us two methods of making a basis from a spanning set: making the vectors the rows of a matrix, reducing the matrix and then taking the nonzero rows as the basis, or making the vectors the columns, reducing the matrix and then taking the columns corresponding to columns with leading ones
* Theorem I: Let $\bm A \in \matdim{m}{n}$, then $\dim \row \bm A = \dim \col \bm A$
	* Proof: $\dim \row \bm A = \dim \row \tilde{\bm A} = r = \dim \col \tilde{\bm A} = \dim \col \bm A$

