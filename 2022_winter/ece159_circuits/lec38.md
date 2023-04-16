# Lecture 38, Apr 11, 2022

## Complex Power

* So far all of the types of power are real numbers; complex power is the only type of power that is complex
* The *complex power* for a sinusoidal AC circuit is defined as $\bm S = \frac{1}{2}\bm V\bm I^* = \bm V_{rms}\bm I_{rms}^*$ where $\bm V = V_m\angle \theta _v, \bm I = I_m\angle \theta _i$
	* Complex power also has units of volt-amps
* We can also write complex power as $\bm S = \frac{1}{2}(V_m\angle \theta _v)(I_m\angle -\theta _i) = \frac{1}{2}V_mI_m\angle (\theta _v - \theta _i)$
	* Recall the apparent power $S = \frac{1}{2}V_mI_m$, so the complex power has an amplitude equal to the apparent power
* Using Euler's formula, in rectangular form $\bm S = V_{rms}I_{rms}\cos(\theta _v - \theta _i) + jV_{rms}I_{rms}\sin(\theta _v - \theta _i)$
* Complex power is related to average/active and reactive power by $\bm S = P_{ave} + jQ$
* The power factor is the cosine of the angle of the complex power
* Consider an impedance $\bm Z = R + jX$, complex power is $\alignedeqntwo[t]{\bm S}{\bm V_{rms}\bm I_{rms}^*}{\bm Z\bm I_{rms}\bm I_{rms}^*}{(R + jX)\abs{\bm I_{rms}}^2}{RI_{rms}^2 + jXI_{rms}^2}{P_{ave} + Q}$
* $\bm S, P$ and $Q$ form a triangle in the complex plane
* Conservation of power: the algebraic sum of all the complex powers in a circuit is zero, $\sum _{k = 1}^n \bm S_k = 0$ where $n$ is the number of circuit elements
	* Since complex power has a real and imaginary component, conservation of power holds for both average and reactive power separately

