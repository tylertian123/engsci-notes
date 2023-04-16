# Lecture 24 (2-7), Mar 13, 2023

## Einstein Solid

* Consider a collection of $N$ particles, with each particle being in a fixed harmonic oscillator potential; each particle's potential is independent of other particles
* Recall the allowed energy levels are $\hbar\omega\left(n + \frac{1}{2}\right)$, so each particle is described by its energy level $n = 0, 1, 2, \cdots$
	* $n$ is also called the number of *quanta* in the given state
* The overall energy of the system is $U = \hbar\omega \sum _{i = 1}^N n_i + \frac{\hbar\omega}{2}N$
	* Note we will ignore the $\frac{1}{2}$ since it's only a constant offset that makes no difference
* This makes our microstate $\Set{n_1, \cdots, n_N}$ and our macrostate $q = \sum _{i = 1}^N n_i$
	* Unlike in the electronic paramagnet, now we have a (countably) infinite number of microstates since $n_i$ has no upper limit
	* This is much more realistic because in real systems there will be a small number of particles with a lot of energy (but the energy also can't be infinite)
* What is the multiplicity $\Omega(q, N)$?
	* If we think of each of the particles as a box, and $q$ as the total number of balls (each ball is an energy unit), this becomes a partitioning problem of how many ways we can put $q$ identical balls into $N$ boxes
	* We can consider each "divider" between two partitions as an item, then each permutation of the dividers and the "balls" is one microstate; there are $N - 1$ dividers
	* However we can swap around the dividers and the balls and the microstate is the same, so we need to divide through by the number of ways to permute the dividers, and the ways to permute the balls
	* $\Omega(q, N) = \frac{(N - 1 + q)!}{(N - 1)!q!}$

## Two Einstein Solids Together

* For a single system, by the postulate of SM, the probability of any accessible microstate given a macrostate $q$ is $\frac{1}{\Omega(q, N)}$
* Consider bring together two Einstein solids with $N_A, q_A$ and $N_B, q_B$, initially isolated from the world and each other, then brought into contact
	* We will allow for an unspecified processes to bring this system to TD equilibrium (however in our simple model this can never happen)
* The combined system will be a single system with $N = N_A + N_B, q = q_A + q_B$
	* In equilibrium the two systems still have number of particles $N_A, N_B$ but the energy can flow; we don't know what the individual energies are, we just know $q_A' + q_B' = q = q_A + q_B$
	* In thermal equilibrium, what are the probabilities of different values of $q_A', q_B'$ occurring?
* In the combined system, all microstates are equally likely; for a given value of $q_A'$, what is the multiplicity?
	* The total multiplicity is $\Omega(q_A', N_A)\Omega(q - q_A', N_B)$, which is directly proportional to the probability of the macroscopic distribution $q_A'$ since each microstate is equally likely
	* The key takeaway is that the more microstates correspond to a given distribution, the more likely that distribution is
	* It turns out that the distribution giving the largest value of $\Omega(q_A', N_A)\Omega(q - q_A', N_B)$ is when the energy is evenly divided so that the average energy per particle is the same in both solids
	* In the limit as $N \to \infty$, the probability distribution becomes delta functions

