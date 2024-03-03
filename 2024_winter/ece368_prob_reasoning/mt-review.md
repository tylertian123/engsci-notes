# Midterm Review, Mar 1, 2024

## 2019 Midterm Q2

* Suppose that $x_1, \dots, x_n$ are IID realizations of a uniform RV on $[\theta - 1, \theta + 1]$, where $\theta$ is an unknown parameter.

### Part (a)

* Suppose that $n = 6$ and $(x_1, x_2, x_3, x_4, x_5, x_6) = (5.5, 6.1, 6.8, 5.2, 6.0, 5.7)$; what is the MLE of $\theta$ given $x_1, \dots, x_6$?
* $f(x | \theta) = \twocond{\frac{1}{2}}{x \in [\theta - 1, \theta + 1]}{0}{\text{otherwise}}$
* $f(x_1, \dots, x_6 | \theta) = f(x_1 | \theta)\dots f(x_n | \theta) = \twocond{\frac{1}{2^6}}{\theta - 1 < \theta _i < \theta + 1, i = 1, \dots, 6}{0}{\text{otherwise}}$
* This means $\max x_i - 1 < \theta$ and $\min x_i + 1 > \theta$ for the likelihood to be nonzero, but it is constant otherwise
* Therefore any $\theta$ in the range $[5.8, 6.2]$ is valid

### Part (b)

* Suppose that now $\theta$ has a prior distribution that is uniform on $[0, 6]$; what is the MAP estimate of $\theta$?
* $f(\theta) = \twocond{1/6}{0 < \theta < 6}{0}{\text{otherwise}}$
* $f(\bm x | \theta)f(\theta) = \twocond{\frac{1}{2^6 \cdot 6}}{\max x_i - 1 < \theta < \min x_i \text{ and } 0 < \theta < 6}{0}{\text{otherwise}}$
* Since now we impose $0 < \theta < 6$, the MAP estimate is now any value in $[5.8, 6.0]$

### Part (c)

* Given the data and prior in the previous parts, what is the LMS estimate?
* $\hat\theta _\text{LMS} = E[\Theta | \bm x] = \int \theta f(\theta | \bm x)\,\dtheta$
* $f(\theta | \bm x) = \frac{f(\bm x | \theta)f(\theta)}{f(x)} = \twocond{\frac{c}{2^6 \cdot 6}}{5.8 < \theta < 6}{0}{\text{otherwise}}$
* If we carry out the integral we find that $\hat\theta _\text{LMS} = 5.9$

