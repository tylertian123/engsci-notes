# Tutorial 5, Oct 15, 2021

* $P_e = P_{crit} = \frac{\pi^2 EI}{L^2}$
* For a beam cross section $I = \frac{bh^3}{12}$ where $h$ is the height and $b$ is the width, and the bending axis is horizontal ($b$ is along the bending axis)
* Strong vs weak bending use different axes
* When compressing a beam it always buckles so to bend in the direction with less $I$

## Buckling Lab

* For this experiment $E = 73000\si{MPa}$
* Vertical axis is normalized to be $\frac{P}{A}$ (stress) and the horizontal axis is normalized to use $\frac{L}{r}$, where $r$ is the *radius of gyration* ($\frac{L}{r}$ is the *slenderness ratio*)
* Type is Short or Long
* $t$ is the thickness of the aluminum strip

| Type      | t (mm) | W (mm) | L (mm) | I ($\si{mm^4}$) | $P_e$ (N) | Exp $P_e$ (N) | Test/Prediction |
| --------- | ------ | ------ | ------ | --------------- | --------- | ------------- | --------------- |
| S1        | 3.29   | 12.74  | 100    | 37.8            | 2724      | 2136          | 0.78            |
| S2        | 3.30   | 12.75  | 99     | 38.2            | 2807      | 2200          | 0.78            |
| S3        | 3.30   | 12.76  | 100    | 38.2            | 2753      | 2160          | 0.78            |
| $S_{avg}$ | 3.30   | 12.75  | 99.7   | 38.7            | 2761      | 2165          | 0.78            |
| L1        | 3.20   | 25.41  | 199    | 69.4            | 1262      | 920           | 0.73            |
| L2        | 3.21   | 25.44  | 200    | 70.1            | 1263      | 960           | 0.76            |
| L3        | 3.20   | 25.40  | 199    | 69.4            | 1262      | 864           | 0.68            |
| $L_{avg}$ | 3.20   | 25.42  | 199    | 69.6            | 1262      | 914           | 0.72            |

## Observations

* Buckling happens without warning
* Strengths are systematically off, indicating something more than random noise
* The longer ones are twice as long and twice as wide, which means they are about half as strong

