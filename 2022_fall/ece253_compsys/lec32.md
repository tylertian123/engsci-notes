# Lecture 32, Dec 1, 2022

## Timing Analysis

* So far we've assumed that our gates operate with zero delay, but this is not true
* Capacitance of wires and gates introduce delay, which determines the clock speed
* Consider:

```sv
module muxDFF(input logic w, r, L, E, clock,
			  output logic Q);
	always_ff @(posedge clock)
		if (L)
			Q <= r;
		else if (E)
			Q <= w;
endmodule

module shift4(input logic [3:0] SW, KEY,
			  output logic [3:0] LEDR);
	logic [3:0] Q;
	muxDFF u3(KEY[0], SW[3], KEY[2], KEY[1], KEY[3], Q[3]);
	muxDFF u2(Q[3], SW[2], KEY[2], KEY[1], KEY[3], Q[2]);
	muxDFF u1(Q[2], SW[1], KEY[2], KEY[1], KEY[3], Q[1]);
	muxDFF u0(Q[1], SW[0], KEY[2], KEY[1], KEY[3], Q[0]);
	assign LEDR = Q;
endmodule
```

* What is the maximum clock frequency at which this circuit can operate?
	* $t_{CQ}$ is the "clock to Q" propagation delay, time delay from clock change to output observed
	* There are also delays through the muxes before we're ready to load $D$ again
* Timing analysis for the flip flops:
	* *Setup time* ($t_{su}$): $D$ has to have been stable for some amount of time before the clock edge
	* *Hold time* ($t_h$): $D$ has to be held stable for some amount of time after the clock edge
* The minimum clock period $T_{min} = t_{CQ} + t_{mux} + t_{mux} + t_{su}$
	* The signal must propagate through the first flip flop and then two muxes, and then be stable for some amount of time
	* $F_{max} = \frac{1}{T_{min}}$
* When doing the analysis we look at flip-flop to flip-flop paths, from a source to a sink, and we find the longest path

## Clock Skew

* It is possible for the clock edge to not arrive at the same time to all the flip flops
	* On a large chip there can be significant delay in the wires
* On a diagram this is shown as a box with a delta in it, to show the possibility of skew
* We measure the skew time as $t_{\text{skew}} =$ arrival time of clock at the sink - arrival time of clock at the source
	* The sink takes its input from the output of the source
* Skew can be positive or negative
	* Positive skew allows us to operate at a higher frequency, since this gives more time between the rising edge of the source clock to the next rising edge of the sink clock
	* Negative skew gives a lower maximum frequency
	* The effective period is reduced/elongated by the skew time

## Set-Up Time Violation

* Find all paths between flip flops, and look for the longest such path, including setup time
* Another way to think about the setup-time violation is that the logic is too slow for the data to arrive at the input of the sink before the clock changes
* The constraint is $t_{min} \geq t_{CQ} + t_{\text{logic,max}} + t_{su} + \Delta$

