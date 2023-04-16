# Lecture 10, Feb 1, 2023

## Specifications vs. Requirements

* Design specifications capture prototype details
	* As opposed to design requirements, which specify what the prototype needs to do but not how it's done
	* Specifications are detailed and contain what components to use, how they are used, etc
* Requirements are about determining conceptual designs; specifications define how the prototype is actually built using components
* The line between requirements and specifications can be situational

## Systems Integration

* Partitioning: Integrate and test in small chunks
	* Test small parts before testing the whole system
	* Test only when parts can be reliably connected, i.e. make sure interfaces are ready before testing
* Forethought: Plan integration from the start
	* Integration is a key design activity, not an afterthought
	* Limit design concepts from the start by considering interfacing needs
	* Plan out order of development using this
* Limitation: Integration of subsystems necessarily reduces their flexibility
	* Subsystem design space is bound by interfacing needs
* Intentional process: backup, isolate, inspect, revert and rollback

