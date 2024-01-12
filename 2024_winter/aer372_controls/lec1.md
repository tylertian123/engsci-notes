# Lecture 1, Jan 8, 2024

## Taxonomy of Control Systems

* A control system maintains important process/plant characteristics at desired targets despite external noise, perturbations and uncertainties
* Control systems can be natural or artificial (human-made), manual or automatic; we focus on automatic systems
* *Regulatory control* maintains the plant at a fixed setpoint despite external noise, disturbances, and system uncertainties
* *Tracking (servo) control* tracks the plant's output to a desired trajectory
* *Open-loop* control systems rely only on existing knowledge of the system and not the system's output; issues:
	* System variation: if the system changes, the dynamics will be different, so the controller fails
	* Unsatisfactory dynamics: cannot alter the system dynamics
	* External disturbances and noise: cannot adapt to external disturbances
* *Closed-loop (feedback)* control systems determine the control actions based on the measurements of the plat's output
	* Benefits:
		* *Robustness*: ability to work despite unknown or inaccurate plant models, external disturbances, and noise
			* A robust system is both not very *sensitive* (i.e. doesn't change a lot if system parameters change) and good at *disturbance regulation/rejection* (i.e. eliminating disturbances/noise)
			* Note we usually distinguish between disturbance and noise based on frequency (high frequency disturbances are referred to as noise)
		* Ability to enhance system dynamics and improve *performance* (regulation or tracking)
	* However, they are more complex, and *stability* can be an issue -- if the controller is not designed properly, it can work against the goal
* In *classic* feedback control:
	* System parameters are either invariant or varies insignificantly
	* Control actions rely on immediate and not future values of the plant output
	* No guarantees can be made about optimality
	* Relies on a (roughly) linear relationship between input or output, in the operational range or close vicinity of the nominal operating point
		* This implicitly assumes we operate near the nominal output
* In summary, we want our controllers to be *robust*, *stable*, and have the desired transient and steady-state *performance*
* *Devices* are modular components of a process (e.g. sensors); the *process* is the dynamic system we want to control, without the actuator; the *plant* is the process with actuators, but not the controller; the *system* is everything, including plant and controller
	* Note these definitions are not universal

