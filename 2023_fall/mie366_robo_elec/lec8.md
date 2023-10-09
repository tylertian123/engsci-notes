# Lecture 8, Oct 4, 2023

## Bode Plot Example

* $H(s) = -\frac{s(s + 100)(s + 10000)}{(s + 10)(s + 500)(s + 1000)}$
* Note the phase plot will be a bit more complex since the negative sign introduces a $180\degree$ phase shift
* For the magnitude plot:
	* Since the smallest pole/zero is at 10, we can use the simplification to find the initial magnitude
		* $K_{start} = (1)\frac{(100)(10000)}{(10)(500)(1000)} = \frac{1}{5} = -14\si{dB}$
	* The starting slope is $+20\si{dB}$ per decade from the single zero at zero frequency
* For the phase plot:
	* The starting phase shift is $90\degree$ from the zero at the origin, plus or minus $180\degree$ due to the negative sign; we will choose $-90\degree$

