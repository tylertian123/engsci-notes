# Lecture 17, Oct 18, 2022

## Refrigerators

* A refrigerator is a device that takes heat from a low-temperature region to a higher temperature region, when being supplied with work
	* Essentially a heat engine working in reverse
* Heat $Q_C$ is taken from the cold reservoir $T_C$ and heat $Q_H$ is rejected to the hot reservoir $T_H$, while work $W$ is going in
* A liquid absorbs latent heat when it evaporates, and rejects heat when condensing
	* Using a low-pressure evaporator and high-pressure compressor, we can make the condensation temperature higher than the evaporation temperature since $T_{sat}$ is dependent on $P$

## Carnot Refrigerator

* A Carnot refrigerator is the theoretical maximumly efficient refrigerator
* Condenser $T = T_H + \Delta T$ feeds into a turbine, then an evaporator with $T = T_C - \Delta T$, then a compressor and back into the condenser

\noteDefn{The Coefficient of Performance for a refrigerator: $\text{cop}_R = \frac{Q_C}{W_{net}}$}

* Energy balance: $W_{net} = Q_H - Q_C \implies \text{cop}_R = \frac{Q_C}{Q_H - Q_C} = \frac{1}{\frac{Q_H}{Q_C} - 1}$
* Entropy balance for Carnot cycle: $\frac{Q_H}{T_H} - \frac{Q_C}{T_C} = 0 \implies \frac{Q_H}{Q_C} = \frac{T_H}{T_C}$
* Therefore $\text{cop}_R = \frac{1}{\frac{T_H}{T_C} - 1}$
	* Since $T_H > T_C$, $\text{cop}_R > 0$, i.e. you always need to supply work to a refrigerator
		* This is stated in the Clausius statement
	* Typically it is greater than 1
		* For typical domestic refrigeration it is 2-3
	* Note $\lim _{T_H \to T_C} \text{cop}_R = \infty$; i.e. the smaller the temperature difference, the better the performance
* Notice that as $T_C \to 0, \text{cop}_R \to 0$, so as $T_C$ approaches absolute zero, we need more and more work; we can never reach absolute zero because that would require infinite work
	* This is the counterpart to how thermal efficiency $\eta _{th} \to \infty$ as $T_C \to 0$
* Heat pumps use refrigerators as heating devices
	* The heat added is $Q_H = Q_C + W_{net}$ for heat pumps while regular heating has $Q_H = W_{net}$, so heat pumps are significantly more efficient
* Define the coefficient of performance for a heat pump to be $\text{cop}_{HP} = \frac{Q_H}{W_{net}}$, which works out to $\frac{1}{1 - \frac{T_C}{T_H}}$
	* Since $\frac{T_C}{T_H} < 1$, $\text{cop}_{HP} > 1$
	* As $T_C \to T_H$, the performance increases -- this is why heat pumps are less effective in colder climates
	* A solution is ground-coupled heat pumps, which draw heat from inside the ground instead of the outside air
* We can design refrigerators/heat pumps such that they can be easily reversed, so in the summer we can use it as an AC, and in the winter as a heater

## Carnot Principles

1. The efficiency of a reversible heat engine is always greater than that of an irreversible engine operating between the same temperatures
	* Consider two engines, one reversible and one irreversible, connected to the same temperatures
	* If work from the reversible engine, $W_R$, is less than the work from the irreversible engine, $W_I$, then $Q_{C,I} < Q_{C,R}$
	* Consider if we ran the reversible engine as a refrigerator, and put the resulting heat into the irreversible engine, and use the irreversible engine to drive the reversible engine
	* This gives us a device that interacts only with one thermal reservoir and gives us work directly, which makes it a perpetual motion machine
2. The efficiency of all reversible engines operating between the same two temperatures are the same
	* Efficiency depends only on temperatures, not engine design, in a reversible engine
	* This can be proven in exactly the same way

