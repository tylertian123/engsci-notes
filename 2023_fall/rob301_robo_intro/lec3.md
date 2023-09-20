# Lecture 3, Sep 14, 2023

## Taxonomy of Robotics

* A common paradigm is that of "sense, plan, act" which we will use in this course
	* Sometimes these stages are combined with no clear boundaries, such as neural networks or learning-based paradigms
* The typical chain of processing is perception \textrightarrow{} information processing \textrightarrow{} mapping \textrightarrow{} localization \textrightarrow{} planning \textrightarrow{} navigation \textrightarrow{} action
	* Perception is done through basic sensors such as odometry, gyroscopes, IMUs, etc and rich sensors such as cameras, lidars, tactile sensors, etc
	* Information processing involves reducing noise, antialiasing, and fusion of sensor measurements
	* Mapping involves locating features and landmarks and creating a map of the environment
	* Localization uses the map to determine where we are on the map with techniques such as Kalman filtering, particle filtering (Monte Carlo) or Bayesian localization
		* Localization and mapping can be combined into SLAM (simultaneous localization and mapping), which solves the chicken-and-egg problem
	* Planning involves pathfinding, with techniques such as Voronoi diagrams, cell decomposition and potential fields
	* Navigation involves following the planned path; it can be methodical and map-based or behaviour-based which is reactive (e.g. behaviour trees)
	* Action directly controls actuators, e.g. PID control
* Levels of autonomy:
	* Assistant: fully supervised and teleoperated
		* Unilateral teleoperation involves no feedback, bilateral has position feedback only and multilateral has force feedback as well
		* Teleoperation faces issues with interfacing, time delays and flexibility
	* Apprentice: able to execute low-level tasks unsupervised
	* Associate: able to execute elements of tasks autonomously (but cannot break down large tasks)
	* Agent: fully autonomous

