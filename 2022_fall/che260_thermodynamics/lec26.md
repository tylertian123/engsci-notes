# Lecture 26, Nov 15, 2022

## More On Finned Surfaces

* Why does longer hair not lead to more heat transfer?
	* $k$ for hair is very low, so longer hair leads to a negligible amount of additional heat transfer
	* The additional hair creates a boundary layer that effectively lowers $h$ leading to less convection
* Consider cylindrical fins, increasing the diameter from $d$ to $2d$ results in $\frac{\dot Q'}{\dot Q} = 2^\frac{3}{2}$, an increase in the total heat transfer
	* For heat flux however we get $\frac{\dot q'}{\dot q} = 2^{-\frac{1}{2}}$, which is lower
	* When designing a heat sink it might be better to have a larger number of smaller fins
		* Note: Having fins that are too small might break up the flow and change $h$, leading to worse performance

## Finite Length Fins

* Method 1: Consider an adiabatic tip (insulated tip)
	* No heat transfer at the tip means the temperature at the tip must be constant
	* $\eval{\diff{T}{x}}{x = L} = \eval{\diff{\theta}{x}}{x = L} = 0$
	* $\theta(x) = c_1e^{ax} + c_2e^{-ax} \implies \diff{\theta}{x} = c_1ae^{ax} - c_2ae^{-ax}$
	* Plug in the initial condition, $0 = c_1ae^{aL} - c_1ae^{-aL}$
	* At $x = 0, \theta = \theta _b$, so $\theta _b = c_1 + c_2$
	* Solving yields $\frac{\theta(x)}{\theta _b} = \frac{\cosh(a(L - x))}{\cosh(aL)}$
	* Solving for $\dot Q$ using Fourier's law yields $\sqrt{hPkA_c}(T_s - T_\infty)\tanh(aL)$
		* Note $\tanh(L) \to 1$ as $L \to \infty$, so this approaches the infinitely long fin equation as the fin gets longer
* Method 2: Use the "corrected length"
	* Have the convection coming out of the tip be idealized as coming out from the fin side
	* Imagine extending the fin by $\Delta L$ such that the additional side area $\Delta LP$ equals the size of the tip cross-section, now we can assume the tip is adiabatic
	* Corrected length is $L_c = L + \frac{A_c}{P}$
	* Use this $L_c$ with the adiabatic tip solution for $T, \theta$
	* Note this only works well if $A_c \ll L$ so the extension is minimal

\noteSummary{For a fin with finite length $L$ and an insulated tip, then $$\frac{\theta(x)}{\theta _b} = \frac{T(x) - T_\infty}{T_b - T_\infty} = \frac{\cos(a(L - x))}{\cosh(aL)}$$ where $$a = \sqrt{\frac{hP}{kA_c}}$$ and the total heat transfer through the fin is $$\dot Q = \sqrt{hPkA_c}(T_s - T_\infty)\tanh(aL)$$ For fins with cross sectional area small relative to the length and non-adiabatic tip, use the corrected length $L_c = L + \frac{A_c}{P}$}

## Fin Efficiency

* The most "efficient" fin would have effectively infinite conductivity, so $T(x) = T_b$ for all $x$ so that the convection along the fin is maximized
* In this case the heat transfer is just convection at uniform temperature, $\dot Q_{max} = hA_{fin}(T_b - T_\infty) = hPL(T_b - T_\infty)$ ignoring the fin tip
* Define the fin efficiency as $\eta _{fin} = \frac{\dot Q}{\dot Q_{max}}$
	* This is equal to $\frac{\sqrt{hPkA_c}(T_b - T_\infty)}{hPL(T_b - T_\infty)} = \frac{1}{aL}$ for an infinitely long fin
	* For an adiabatic tip $\frac{\sqrt{hPkA_c}(T_b - T_\infty)\tanh(aL)}{hPL(T_b - T_\infty)} = \frac{\tanh(aL)}{aL}$
	* As $L$ increases, $\eta _{fin}$ approaches 0
* The fin effectiveness is defined as $\varepsilon _{fin} = \frac{\dot Q_{fin}}{\dot Q_0}$ where $\dot Q_0$ is the heat transfer without the fin, which would be $hA_c(T_b - T_\infty)$
	* For an infinitely long fin $\varepsilon _{fin} = \sqrt{\frac{kP}{hA_c}}$
* To increase the fin effectiveness, maximize $k$ and $\frac{P}{A_c}$
* When $h$ goes up, the fin effectiveness goes down; fins are the most effective with low $h$
	* e.g. if we have a boundary between air and water, it's better to have the fin on the air side since $h$ in air is much lower
* Rule of thumb: Fins are worth it if $\varepsilon \geq 2$

