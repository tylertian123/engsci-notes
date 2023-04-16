# Lecture 9, Sep 27, 2022

## More on Entropy

* Suppose we have a pure substance at absolute zero; all the molecules go to their lowest energy state
	* This means we only have 1 microstate, so $S = k\ln \Omega = 0$
* Entropy, unlike energy, has an absolute zero value
* At the molecular level this can be derived; but on a macroscopic level it needs to be a postulate

\noteDefn{The Third Law of Thermodynamics: The entropy of a pure substance in thermodynamic equilibrium is zero at a temperature of $0\si{K}$}

## The State Postulate

* How much information is contained in the state of a system? Is there a minimum list of variables from which you can calculate everything else?
	* We need mass of the system and its energy
	* We need one property for each mode of work (e.g. boundary work is specified by the volume; spring work is specified by the spring compression, etc)
		* *Simple compressible systems* are systems where the only mode of work is boundary work; for these we only need the volume
	* We need heat transfer, which can be specified by the internal energy $U$ (since we already have work)

\noteDefn{The State Postulate: The equilibrium state of a pure, simple compressible system is completely described by its: mass $m$, volume $V$ and internal energy $U$}

* Since entropy is a property this means $S = S(U, V, m)$
* Define the *specific entropy* $s = \frac{S}{m}$, which is a function of volume and energy: $s = s(u, v)$
	* Or $u = u(s, v)$ or $v = v(u, s)$
* In general to fix the state of a pure, simple compressible system, we need two independent intensive properties
* These 4 postulates are all we need to develop thermodynamics

## Entropy Changes With Heat and Work

* Transfer of heat creates entropy, but work does not, why?
* Consider the energy levels $\varepsilon _i$ each with $n_i$ molecules: $U = \sum _i n_i\varepsilon _i \implies \dd U = \sum _i \varepsilon _i\dd n_i + \sum _i n_i\dd\varepsilon _i$
	* $\dd n_i$ is a change in the number of molecules in each level -- the rearrangement of molecules in energy levels
		* This would correspond to heating up the gas to shift the peak of the Maxwell-Boltzmann distribution to the right
		* The shifting of the distribution means now there are new energy states occupied, increasing the number of microstates
	* $\dd\varepsilon _i$ is a change of the energy of the energy levels
		* This would correspond to lifting up the gas so every energy state now has more potential energy (the entire distribution gets shifted evenly)
		* This does not occupy new energy states, so the number of microstates stays the same
	* $\delta W = \sum _i n_i\dd\varepsilon _i, \delta Q = \sum _i \varepsilon _i\dd n_i \implies \dd U + \delta W + \delta Q$

## Reversible and Irreversible Processes

* A process that produces no entropy is reversible; conversely a process that process entropy is irreversible
	* e.g. in a rapid compression the molecules near the piston are compressed more than the others, which increases their energy by a greater amount; some molecules are shifted into higher energy states and entropy increases
	* On the other hand a quasi-static process has all the molecules compressed the same amount, moving the energies up but not redistributing them, so no entropy is created
* In reality all real processes are irreversible and generate entropy
* The universe is an isolated system, so $\Delta S > 0$
	* Initially all mass and energy is concentrated in a single point, which has very low entropy; after the big bang energy and mass are dispersing and energy increases
	* The universe tends to equilibrium, where all mass and energy are evenly distributed; at this point there is no more energy and mass gradient, so no work can be done and no processes happen

## "Order" and "Disorder"

* When we say something is "orderly" and "disorderly", how do we actually define this?
	* e.g. a deck of hards has $52!$ of shuffling, and every combination has a probability of $1/52!$ but why do we think some are more "orderly" than others?
* We would need to define our microstates and macrostates
	* Microstates in this case is every combination of the cards
	* Microstates need to be changing randomly
	* The macrostate can be any macroscopic property, e.g. the number of black cards in the top half of the deck divided by 26
* Correct statement: *Isolated* systems that are *randomly alternating between microstates* go spontaneously from a macrostate that corresponds to a smaller number of microstates to a macrostate with a larger number of microstates
	* It's incorrect to say that systems simply go from being highly organized to being disorganized

\begin{note-summary}
\subsection{The Postulates of Classical Thermodynamics}

The Fundamental Concepts:
\begin{itemize}
	\item Mass $m$
	\item Volume $V$
	\item Energy $U$
	\item Entropy $S$
\end{itemize}

The Four Postulates:
\begin{itemize}
	\item First Law: $Q + W + \Delta E$
	\item Second Law: $\Delta S \geq 0$ for an isolated system
	\item Third Law: $S = 0$ for a pure substance at absolute zero
	\item State Postulate: $S = S(U, V, m)$
\end{itemize}

From these fundamental concepts and postulates, we can define everything else.
\end{note-summary}

