# Lecture 34, Dec 7, 2021

## Reinforced Concrete Design Example

* What are the predicted: failure load $f$ and failure mode (flexural? shear?) for the 2 beams tested at UofT?
* Beams:
	* YB2000/0
		* Simply supported, no shear reinforcement
		* Rectangular cross-section, $2000\si{mm}$ tall $300\si{mm}$ wide, $d = 1890\si{mm}$
		* 6 bars at the bottom (30M bars, $f_y = 457\si{MPa}$), 3 bars at the top (20M bars, $f_y = 433\si{MPa}$), no shear reinforcement
		* $5400\si{mm}$ from midpoint load $P$ to supports
		* $f_c' = 36.6\si{MPa}, E_c = 28000\si{MPa}, \gamma = 24\si{kN/m^3}$
	* YB2000/4
		* Same dimensions
		* Vertical shear reinforcement, one leg of $A_v = 129\si{mm^2}$, $s = 590\si{mm}$, $f_{yt} = 468\si{MPa}$
* Analysis:
	1. Reactions, SFD, BMD: Consider both self-weight and applied load (same for both beams)
		* Span of $1080\si{m}$, not considering the bit past the supports
		* Self-weight causes $w = 14.4\si{kN/m}$
		* Reaction forces due to self-weight are $77.8\si{kN}$ at each support
		* BMD due to self-weight is a parabola with peak $\frac{wL^2}{8} = 210\si{kN.m}$
		* Point load causes reaction forces of $\frac{P}{2}$ (max shear), and max bending moment of $\frac{PL}{4} = 2.7P$
		* Combining the two SFDs and BMDs, the peak shear is at the support $V = \left(77.8 + \frac{P}{2}\right)\si{kN}$, and the peak moment $M = \left(210 + 2.7P\right)\si{kN.m}$ is at the middle
	2. Bending strength check (same for both beams since the shear reinforcement does not affect bending)
		* No safety factors since we're trying to predict the failure load
		* $n = \frac{E_s}{E_c} = \frac{200000\si{MPa}}{28000\si{MPa}} = 7.14$
		* $\rho = \frac{A_s}{bd} = \frac{6 \cdot 700\si{mm^2}}{300\si{mm} \cdot 1890\si{mm}} = 0.00741 = 0.741\%$
		* $n\rho = 0.0529 \implies k = \sqrt{(n\rho)^2 + 2n\rho} - n\rho = 0.277$ (depth of compression is $27.7\%$ of $d$)
		* $jd = 1750\si{mm}$
		* $j = 1 - \frac{1}{3}k = 0.908$
			* The design code assumes $j = 0.9$
		* $f_s = \frac{M}{A_sjd} = f_y$ at bending failure due to yield (strain hardening ignored)
		* Steel yielding happens at $M = f_yA_sjd = 3292\si{kN.m} = 210 + 2.7P \implies P = 1141\si{kN}$
		* Concrete crushing skipped since from experience it won't govern; on an exam note down the assumption if this is not being checked
	3. Shear strength
		* For YB2000/0:
			* $A_v = 0 \implies V_s = 0 \implies V_{ult} = V_c = \frac{230\sqrt{f_c'}}{1000 + 0.9d}b_wjd = \frac{230\sqrt{366}}{1000 + 0.9d} \cdot 300 \cdot 1750 = 265\si{kN}$
			* $265\si{kN} = 77.8 + \frac{P}{2} \implies P = 374\si{kN}$
			* Since this is smaller, it governs
			* The actual experiment failed at $P = 463\si{kN}$ (ratio of observed to predicted is 1.2)
		* For YB2000/4:
			* Check whether there is enough shear reinforcement: $\frac{A_vf_{yt}}{b_ws} \geq 0.06\sqrt{f_c'}$, for this beam this doesn't quite work
				* This beam was designed before the new rules, so we're going to assume there is enough shear reinforcement anyway (don't do this at work or on the exam!)
			* $V_c = 0.18\sqrt{f_c'}b_wjd = 538\si{kN}$
			* $V_s = \frac{A_vf_{yt}j}{s}\cot 35\degree = 250\si{kN}$
			* $V_{ult} = V_c + V_s = 558 + 250 = 808\si{kN} = 77.8 + \frac{P}{2} \implies P = 1460\si{kN}$
			* Since this is higher than the $P$ from flexure, flexure governs for this beam
			* Note that $V_{max}$ was not checked because of time, but should be done!
* Note the significant increase in failure load by adding the shear reinforcement

