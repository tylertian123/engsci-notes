# Lecture 10, Oct 11, 2023

## Circuit From Transfer Function Example

* $H(s) = -\frac{s(s + 100)(s + 10000)}{(s + 10)(s + 500)(s + 1000)}$
* Note the features:
	* Zero at the origin
	* Negative pure gain with $\abs{K} = 1$, so $\abs{K_1}\abs{K_2}\abs{K_3} = 1$, therefore we need an odd number of inverting op-amp stages
		* Note if we only care about matching the magnitude plot, then the negative sign doesn't matter for us
* Group the poles and zeros into the 3 stages:
	* Note we want to group them so that the distance between the pole and zero is minimized in each pairing
	* $H_1(s) = K_1\frac{s}{s + 10}, H_2(s) = K_2\frac{s + 100}{s + 500}, H_3(s) = K_3\frac{s + 10000}{s + 1000}$
	* Splitting the pure gains among the stages, we want to keep the gain of each stage close to 1
* First stage: $H_1(s) = K_1\frac{s}{s + 10}$
	* Note if we try an RC series combination, we will have a zero at $\frac{1}{R_1C_1}$; to achieve a zero at the origin, we need an infinite $R_1$, which means the signal cannot get through
		* Note we could still use RC parallel
	* Try an RL series combination: $H(s) = -\frac{L_2}{L_1}\frac{s + \frac{R_2}{L_2}}{s + \frac{R_1}{L_1}}$
		* $\frac{R_2}{L_2} = 0 \implies R_2 = 0$, i.e. $R_2$ will be a short; $L_2$ can be chosen freely, so we can match it with $L_1$ to achieve a gain of 1
		* $\frac{R_1}{L_1} = 10$ but this is unachievable!
			* Note if we try our largest possible inductor of $500\si{mH}$, it would still require a resistor as small as $5\si{\ohm}$, which is outside our range
			* The small resistor means a very low input impedance in this stage, which could lead to considerable loading effects on whatever input goes into this stage
		* Note we could have anticipated this since 10 is a relatively small pole location, so a capacitor would do better (whereas an inductor would do better for a higher frequency pole)
		* To fix this, we could:
			* Try a more complex combination of RLC (i.e. mixing up inductors and capacitors in the feedback/input path); this is the most optimal but complex
			* Break this into two stages; this is a valid on a test but is suboptimal
			* Change the matching of poles and zeroes (swapping the pole at 10 with a higher frequency one)
		* e.g. we can swap the pole at 10 with a pole at 500
			* $H(s) = \frac{s}{s + 500}$
			* $\frac{R_1}{L_1} = 500 \implies L_1 = 200\si{mH}, R_1 = 100\si{\ohm}$, which is marginally acceptable
			* Choose $L_2 = L_1 = 200\si{mH}$ so this stage has a pure gain of -1 (note we can come back and pick another value later to balance out the gains)
			* In reality, we should probably use the pole at 1000 instead so we can get less extreme values
* Second stage: $H_2(s) = K_2\frac{s + 100}{s + 10}$ (note we swapped in the pole from the previous stage)
	* The low frequency pole is difficult to realize with any RL combination, so we will use an RC combination
	* Using RC series: $H_2(s) = \frac{R_4}{R_3}\frac{s + \frac{1}{R_3C_3}}{s + \frac{1}{R_4C_4}}$
		* $\frac{1}{R_3C_3} = 100 \implies C_3 = 0.1\si{\micro F}, R_3 = 100\si{k\ohm}$
		* Try setting $R_4 = R_3 \implies \frac{1}{R_4C_4} = 10 \implies C_4 = 1\si{\micro F}$
* Third stage: $H_3(s) = K_3\frac{s + 10000}{s + 1000}$
	* In this case both the zero and pole are near the range where capacitors and inductors work well
	* Use RC series again: $H_3(s) = \frac{R_6}{R_5}\frac{s + \frac{1}{R_5C_5}}{s + \frac{1}{R_6C_6}}$
		* $C_6 = 1\si{nF}, R_6 = 100\si{k\ohm}$
		* $R_5 = R_6 = 100\si{k\ohm} \implies C_5 = 10\si{nF}$
* Since each stage has a pure gain of 1, the overall gain is 1, which matches what we need; moreover, since we used an odd number of stages, we also matched the negative sign
* It's good to draw out the circuit at the very end to check for problematic open circuits and shorts, or extreme gains or attenuations

