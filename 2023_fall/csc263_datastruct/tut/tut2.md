# Tutorial 2, Sep 22, 2023

## Heapify

* The \textsc{Max-Heapify} operation restores heap property for a single element by swapping it with the greater of its two children if needed, and then recursing on that child
	* The precondition is that the left and right subtrees are valid heaps
* Define a procedure \textsc{Build-Heap}, which takes any arbitrary array, and then turns it into a valid max-heap by calling \textsc{Max-Heapify} on every element, in reverse, starting from halfway through the array
	* The second half of the array is ignored because those nodes will all be leaves, so they are already valid max-heaps
	* Note we have to go in reverse to satisfy the precondition for \textsc{Max-Heapify}
* We know \textsc{Build-Heap} is at least $\Omega(n)$; if we give it an array that's already a valid heap, it will still traverse it
* The upper bound is clearly at most $O(n\log n)$ but can we do better?
	* Calling \textsc{Max-Heapify} on a node on level $d$ takes $O(h - d)$
	* In the worst scenario, every single node calls \textsc{Max-Heapify} and recurses down every single level
		* The runtime would be $\sum _{d = 0}^{h - 1} 2^dc(h - d)$, since there are $2^d$ nodes in level $d$ and each performs $h - d$ operations
		* Let $i = h - d$ so we have $\sum _{i = 1}^h 2^{h - i}i = c2^h\sum _{i = 1}^h \frac{i}{2^i}$
			* Recall $\sum _{i = 1}^\infty x^i = \frac{1}{1 - x} \implies \sum _{i = 1}^\infty ix^{i - 1} = \frac{1}{(1 - x)^2} \implies \sum _{i = 1}^\infty ix^i = \frac{x}{(1 - x)^2}$
			* Therefore $\sum _{i = 1}^h \frac{i}{2^i} < \sum _{i = 1}^\infty \frac{i}{2^i} = \frac{\frac{1}{2}}{\left(1 - \frac{1}{2}\right)^2} = 2$
			* So our overall bound is $2c2^h = 2c2^{\log n} = 2cn = O(n)$

