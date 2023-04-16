# Lecture 34, Apr 10, 2023

## Example: Transformers

* From a magnetic circuit perspective we have 2 sources, $N_1i_1$ and $N_2i_2$, and a resistance $R_c = \frac{l_c}{\mu _r\mu _0S}$
* We obtain $N_1i_1 - N_2i_2 = R_c\Phi _{tot}$ by KVL
* Making the approximation that $\mu _r \to \infty$ we get the relation for an ideal transformer: $\frac{i_1}{i_2} = \frac{N_2}{N_1}$
* In reality, the core will not be perfect and there will be flux leakage so this relation is not exact
* With higher frequencies this becomes more noticeable, and we also see a phase shift in the output
	* We have losses in the wire resistances, hysteresis loss, eddy current losses, self-inductances (which become problematic at higher frequencies), etc
* The transformer becomes less ideal as frequency increases, with reduced output amplitude and increased phase shift
* Idealized formulas work fine for power distribution systems which are typically 60 Hz, but at higher frequencies approximations fall apart

## Eddy Currents

* Changing $\vec B$ leads to a changing $\vec E$, which will induce a $\vec J$ in a conducting material
* These are referred to as "eddy currents" since they circulate
* Consider an applied field $\vec B(t) = B_0\cos(\omega t)\hat a_z$ on a cylinder made of a lossy material with conductivity $\sigma$
	* $\del \times \vec E = -\pdiff{\vec B}{t} = B_0\omega\sin(\omega t)\hat a_z$
	* $\frac{1}{r}\left(\pdiff{}{r}(rE_\phi) - \pdiff{E_r}{\phi}\right) = B_0\omega\sin(\omega t)\hat a_z$
	* We can deduce $\pdiff{E_r}{\phi} = 0$ and so $\vec E = \frac{B_0\omega r\sin(\omega t)}{2}\hat a_\phi$
	* This gives us eddy currents $\vec J = \frac{\sigma B_0\omega r\sin(\omega t)}{2}\hat a_\phi$
* These eddy currents generate fields of their own that oppose the original field; this causes the effect of a magnet falling slower in a metallic tube
	* This can be used in applications such as frictionless braking
	* However one disadvantage is that the braking force reduces as the speed slows, since the braking force is proportional to the rate of change of the field

