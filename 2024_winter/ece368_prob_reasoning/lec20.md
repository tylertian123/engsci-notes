# Lecture 20, Apr 1, 2024

## Hidden Markov Models

* Suppose we have a linear Markov chain $Z_1, \dots, Z_N$, and instead of being able to observe $Z_i$ directly, we instead observe $X_1, \dots, X_N$, where $p(x_i | z_i)$ is known, i.e. we observe the states with some noise
	* e.g. sequence of speech, robot locations, pixels in handwriting, etc
	* We'd like to perform inference on this, such as MAP estimation like we did with graphical models before
	* $p(z_1, \dots, z_N, x_1, \dots, x_N) = p(\bm z | \bm x)p(\bm x) = p(z_1)\prod _{n = 2}^N p(z_n | z_{n - 1})\prod _{m = 1}^N p(x_m | z_m)$
		* This gives the joint distribution of states and measurements

![Illustration of a hidden Markov model.](./imgs/lec20_1.png){width=60%}

