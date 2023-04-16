# Lecture 26, Nov 16, 2021

## Convergence

* The result of convergence is a single recommendation of the best design
* Key concepts:
	* Verification: How have you verified that your design is the best? Does the recommended design meet the requirements?
		* Show multiple concepts and show that you've gone through a rigorous process of comparison
		* Must meet the requirements
		* Validation: Taking a recommendation back to the stakeholders and asking does it meet their needs?
			* This verifies that your requirements are good in the first place
	* Prototyping and Research
	* Measuring and Comparing
	* Proxy Testing
	* Recommending a Design
* The design critique is a 5 minute presentation followed by 7 minutes of question and answer
	* Every member must speak for the presentation
	* Must demonstrate that you've compared the recommended design against at least 3 other credible candidate design concepts (things that could work but not as good)
		* Not necessarily the same as ones in alpha
		* Every concept must have a prototype
* Critical metrics should have consistent measuring processes
* Converging to a recommended design:
	1. Acknowledge that your preconceived idea of "best" may not be actually the best
		* Look at designs critically and don't be biased in your measurement process
	2. Figure out why exactly you think those ideas are "best", so you can codify these implicit criteria to better understand the requirements
	3. Gather data (measurement or research) to enable verification
		* What can I prototype? What do I need research for?
	4. Systematically compare the designs to determine whether they should remain candidates
		* Especially when the candidates are best in different aspects
	5. Eliminate some designs, refine some designs, refine the requirements and return to step 2
		* The outcome of convergence may be that there is no appropriate design that meets the requirements
		* Use your own judgement!

## Pairwise Comparison Matrices

* Codifying your biases and turning them into requirements
* Compare two candidates at a time, determine which is better, and do this across all candidate pairs to make a matrix of comparisons
* Two ways:
	1. Pick a specific requirement and compare based on just this alone
		* Approximate the utility curve, and use it and the metric measurements to compare two designs
		* In the end in each cell is either a 1 or a 0 -- the design is either better or worse
	2. Compare holistically as a design
		* Think about things as a whole
		* Talk out loud or take notes so you're concious about what you're thinking
		* Designate two champions that argue for each design and a recorder and run a pairwise comparison of the alternatives
			* The things that come out during this argument are noted and checked
			* The recorder marks down the characteristics that are being mentioned
* After marking down all the cells, sum up the "wins" for each design and pick out the ones with more wins
	* Review the ones that have very little wins and think about why: Did we consider all the requirements? Why was this idea included in the first place?

## Measurement Matrices

* Compute measurements according to metrics for each candidate
* Think about the precision needed to enable comparison -- don't spend time measuring them too precisely if that's not useful
* Measurements can be absolute or relative; if it's too hard to measure absolutely just figure out which design measures better
* The points of these is to enable comparison for selection, not to actually evaluate them in the real world

