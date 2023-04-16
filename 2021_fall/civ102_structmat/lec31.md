# Lecture 31, Nov 30, 2021

## Concrete

* Concrete has the advantage of being able to be cast into any shape
* Cement is to concrete as flour is to cake: concrete is made of a combination of materials, including cement, water, sand, aggregate (rocks), and admixtures (additives to change the concrete's properties)
	* Cement is the expensive part, made of limestone, heated to remove carbon dioxide, and ground into a powder
	* Adding water to this basically gives you artificial stone
* Concrete can be made inexpensively and locally but produces a lot of carbon dioxide
* When concrete cures, it does not dry, instead it undergoes a chemical reaction that consumes the water and produces heat
* Concrete is either cast or placed, not poured; it is gently laid down so that the aggregate doesn't all sink to one place

## Material Properties of Concrete

* Concrete exhibits linear elasticity in compression until about 40% of its ultimate compressive stress, and is fully linear elastic in tension until it fails by cracking
	* The full stress-strain curve in compression for concrete looks like a parabola
	* Stone usually does not have the curve (only concrete does)
	* The yield strain of steel and concrete are similar
* The notation for stresses in concrete are different, with $f$ representing axial stresses and $v$ representing shear stresses (instead of $\sigma$ and $\tau$)
* The compressive strength of concrete is denoted $f_c'$
	* Compressive strengths higher than $40\si{MPa}$ is high strength concrete (as opposed to normal strength); high strength concrete can have compressive strengths exceeding $100\si{MPa}$
	* The prime denotes the testing method (size, age, machine, etc)
* Since performing tensile tests on stone-like materials is difficult, often cracking stresses are obtained using empirical equations that relate compressive strength to these quantities
* The tensile/cracking strength of concrete is related to its compressive strength by $f_t' = 0.33\sqrt{f_c'}$
	* Note that $f_c'$ *must* be in $\si{MPa}$, because the square root means that $0.33$ has dimensions
* For normal strength concrete, the Young's modulus relates to compressive strength by $E_c = 4730\sqrt{f_c'}$
	* Again $f_c'$ must be in $\si{MPa}$
	* Note that even though 4730 seems precise it's actually not

## Reinforcing Steel

* Reinforcing steel bars or *rebar* are bent and tied together to form cages to strengthen the concrete; concrete without steel is called plain concrete and concrete with steel is reinforced concrete
* Deformed bars have ribs on the bar to mechanically connect to the concrete (so the concrete grabs onto the bar)
	* This allows us to assume that the steel strain is equal to the concrete strain
* Rebar is made of mild steel with $E_s = 200000\si{MPa}$ and a yield strength of $f_y = 400\si{MPa}$ in both tension and compression (note: different countries have different standards; most other places use $f_y = 500\si{MPa}$)
* Rebar has standard sizes with designations; the bar number roughly refers to the diameter
	* The M in the names mean metric
* We assume that rebar has a flat yield plateau with no strain hardening because to get strain hardening requires strains that are not realistic

## Reinforced Concrete

* Concrete reinforced with steel behaves similarly in compression but is much better in tension
* Once the concrete cracks, the steel carries the tension and it yields, making the material much more ductile and able to carry much more tension
	* The shape of the stress-strain response after cracking is complex
* More steel leads to more cracks, which distributes the tension more evenly across more narrow cracks instead of one big crack

