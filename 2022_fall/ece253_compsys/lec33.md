# Lecture 33, Dec 5, 2022

## Hold Time Violation

* We also want to calculate for hold time violations, which are dictated by the *shortest* path between flip flops
	* Whereas the previous one did not consider hold time, this does not consider setup time
* In this case the data tries to race ahead of the clock (race through) and change $D$ of the sink during the hold time of the previous signal
* Constraint: $t_h + \Delta \leq t_{CQ} + t_{\text{logic,min}}$
	* $t_h + \Delta$ is the amount of time required for $D$ of the sink to be stable, from the rising edge of the source clock
	* $t_{CQ} + t_{\text{logic,min}}$ is the time between rising edge of the source clock and the signal propagating to $D$ of the sink
* In order to prevent this, we need to delay the change of $D$, sometimes by inserting additional logic to increase $t_{\text{logic,min}}$
* Note this is unrelated to clock frequency

