# Lecture 35, Apr 8, 2022

## Multivariable Optimization Example: Rocket Science

* Tsiolkovsky's Rocket Equation: $\Delta v = I_{sp}\ln\frac{m_i}{m_f}$
	* $\Delta v$ is the momentum change given to the rocket
	* $I_{sp}$ is the specific impulse of the fuel (i.e. speed of exhaust gases)
	* $m_i$ and $m_f$ are the initial and final mass
* Escape velocity of the Earth is about $\Delta v \approx 11\si{km/s}$; $I_{sp} \approx 3.2\si{km/s}$ for common rocket fuel
* For a single stage rocket: $\frac{m_i}{m_f} = \exp\left(\frac{11}{3.2}\right) = 31.1 \implies \frac{m_{fuel}}{m_i} = \frac{m_i - m_f}{m_i} = 1 - \frac{m_f}{m_i} = 0.97$
	* 97% of the rocket would have to be fuel for the rocket to break escape velocity
	* Comparison: Aluminum beverage can is 96%
* What if we limit fuel to be 80% of the total weight?
* Break down $m_i = A + M_s + M_f$ where $A$ is the payload, $M_s$ is the rocket structure, $M_{fuel}$ is the fuel
	* Define $S = \frac{M_s}{M_s + M_{fuel}}$ as the structure factor, i.e. the fraction of the mass without payload that's the structure
	* Define rocket mass $M_r = M_s + M_{fuel}$
	* $\frac{m_i}{m_f} = \frac{A + M_s + M_{fuel}}{A + M_s} = \frac{A + M_r}{A + SM_r} \implies \Delta v = I_{sp}\ln\left(\frac{A + M_r}{A + SM_r}\right)$
		* If we plug in $S = 0.2$ and $I_{sp}$ from before, without any payload this would give $\Delta v = 5.15\si{km/s}$
* Given a 3-stage rocket, how can we optimize the sizes of the 3 stages to minimize the total rocket mass?
	* Let the 3 stages have masses $M_1, M_2, M_3$ and the same structure factor $S$
	* The first stage has initial mass $A + M_1 + M_2 + M_3$; after the fuel is expended, $M_1 \to SM_1$, then the second stage has mass $A + M_2 + M_3$ and so on
	* $\alignedeqntwo[t]{\Delta v_{tot}}{\Delta v_1 + \Delta v_2 + \Delta v_3}{I_{sp}\left[\ln\left(\frac{A + M_1 + M_2 + M_3}{A + SM_1 + M_2 + M_3}\right) + \ln\left(\frac{A + M_2 + M_3}{A + SM_2 + M_3}\right) + \left(\frac{A + M_3}{A + SM_3}\right)\right]}$
* Problem: Given $A$, $\Delta v$, $I_{sp}$, and $S$ for a 3 stage rocket, find $M_1, M_2, M_3$ such that $M_r = f(M_1, M_2, M_3) = M_1 + M_2 + M_3$ is minimized, subject to the constraint of the rocket equation above
	* Constraint: $g(M_1, M_2, M_3) = \ln\left(\frac{A + M_1 + M_2 + M_3}{A + SM_1 + M_2 + M_3}\right) + \ln\left(\frac{A + M_2 + M_3}{A + SM_2 + M_3}\right) + \left(\frac{A + M_3}{A + SM_3}\right) = \frac{\Delta v}{I_{sp}}$
	* $\nabla f = (1, 1, 1)$
	* $g = \ln(A + M_1 + M_2 + M_3) - \ln(A + SM_1 + M_2 + M_3) + \ln(A + M_2 + M_3) - \ln(A + SM_2 + M_3) + \ln(A + M_3) - \ln(A + SM_3)$
	* For $M_1: \lambda\pdiff{f}{M_1} = \pdiff{g}{M_1} \implies \lambda = \frac{1}{A + M_1 + M_2 + M_3} - \frac{S}{A + SM_1 + M_2 + M_3}$
	* For $M_2: \lambda\pdiff{f}{M_2} = \pdiff{g}{M_2} \implies \lambda = \frac{1}{A + M_1 + M_2 + M_3} - \frac{1}{A + SM_1 + M_2 + M_3} + \frac{1}{A + M_2 + M_3} - \frac{S}{A + SM_2 + M_3}$
	* For $M_3: \lambda\pdiff{f}{M_3} = \pdiff{g}{M_3} \implies \lambda = \frac{1}{A + M_1 + M_2 + M_3} - \frac{1}{A + SM_1 + M_2 + M_3} + \frac{1}{A + M_2 + M_3} - \frac{1}{A + SM_2 + M_3} + \frac{1}{A + M_3} - \frac{S}{A + SM_3}$
	* Subtracting the third from the second equation gives: $0 = \frac{1}{A + SM_2 + M_3} - \frac{S}{A + SM_2 + M_3} + \frac{S}{A + SM_3} - \frac{1}{A + M_3} \implies -\frac{S}{A + SM_3} = \frac{1 - S}{A + SM_2 + M_3} - \frac{1}{A + M_3}$
		* $-\frac{S(A + M_3)}{A + SM_3} = \frac{(1 - S)(A + M_3)}{A + SM_2 + M_3} - 1 = \frac{A + M_3 - SA - SM_3 - A - SM_2 - M_3}{A + SM_2 + M_3} = -\frac{S(A + M_2 + M_3)}{A + SM_2 + M_3}$
		* $\frac{A + M_3}{A + SM_3} = \frac{A + M_2 + M_3}{A + SM_2 + M_3}$
		* Note these are the things inside $\ln$ in the second and third terms in $g$
	* Subtracting the second equation from the first and going through the same steps, we obtain the relation $\frac{A + M_2 + M_3}{A + SM_2 + M_3} + \frac{A + M_1 + M_2 + M_3}{A + SM_1 + M_2 + M_3}$
		* These are the arguments in $\ln$ in the first and second terms in $g$
	* This basically tells us that $\frac{m_i}{m_f}$ should be the same for each stage of the rocket
	* Let $N = \frac{A + M_3}{A + SM_3} \implies \frac{\Delta v}{I_{sp}} = 3\ln N \implies N = \exp\left(\frac{\Delta v}{3I_{sp}}\right)$
	* $M_3 = A\frac{N - 1}{1 - SN}, M_2 = (A + M_3)\frac{N - 1}{1 - SN}, M_1 = (A + M_2 + M_3)\frac{N - 1}{1 - SN}$

