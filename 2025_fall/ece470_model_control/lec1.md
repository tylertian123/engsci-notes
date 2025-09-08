# Lecture 1, Sep 3, 2025

* The 5 basic problems of robotics:
	1. Forward kinematics: find the pose of the end effector given joint states
	2. Inverse kinematics: given a desired end effector pose, find the joint states
		* Solution is often not unique (underdetermined problem)
	3. Dynamics: Derive a mathematical model for simulation and control design
		* We will arrive at a canonical model
	4. Motion planning: given a target pose, plan a path for the end effector (joint states as a function of time) so that it reaches the goal while avoiding collisions
	5. Control: design feedback controllers to execute the planned motions (reference signals) with accuracy, speed and robustness

