# Lecture 18, Nov 15, 2023

## Applications of DFS -- Cycle Detection

\noteThm{\textit{White-Path-Theorem} (WPT): For all graphs $G$ and all DFS of $G$, $v$ becomes a descendant of $u$ if and only if at the time $d[u]$ the DFS discovers $u$, there exists a path from $u$ to $v$ that consists of entirely white nodes.}

* Proof of WPT: consider any $G$ and any DFS of $G$
	* Suppose $v$ is a descendant of $u$:
		* Let the discovery path from $u$ to $v$ be $u \to u_1 \to \cdots \to u_k \to v$
		* At the time $d[u]$ when $u$ is discovered, all the other nodes on the path have not yet been discovered
		* Therefore all the nodes in the discovery path are white, so there exists a white path from $u$ to $v$
	* Suppose at time $d[u]$ when $u$ is discovered, there exists a white path from $u$ to $v$
		* Claim: all nodes in this path, including $v$, will become descendants of $u$
		* Suppose there is at least one node along this path that does not become a descendant of $u$; let $z$ be the closest node to $u$ in the path that does not become a descendant of $u$
		* Let $w$ be the node before $z$ in this graph; since $w$ is closer to $u$ than $z$, it must be either $u$ or a descendant of $u$
		* We know $d[u] < d[z]$ because $z$ is white when $u$ was discovered
		* We know $d[z] < f[w]$ because there is an edge from $w$ to $z$
		* We know $f[w] \leq f[u]$ because $w$ is either a descendant of $u$, or $u$ itself
		* Therefore $d[u] < d[z] < f[w] \leq f[u]$; because $z$ was discovered between the discovery and exploration of $u$, so $d[u] < d[z] < f[z] < f[u]$, but this means $z$ is a descendant of $u$
		* This leads to a contradiction, so all nodes in the path will become descendants of $u$
* Now that we have proven WPT we can use it for cycle detection

\noteThm{A directed graph $G$ has a cycle if and only if any/every DFS of $G$ has a back edge.}

* Proof: consider any directed $G$ and any DFS of $G$
	* Suppose the DFS of $G$ has a back edge $(v, u)$
		* $v$ is a descendant of $u$ in the DFS, so there is a discovery path $u$ to $v$
		* Hence we have a cycle by going from $u$ to $v$ via the discovery path, and then back to $u$ via the back edge
	* Suppose $G$ has a cycle $C$
		* Let $u$ be the first node in $C$ that the DFS discovers
		* Let $v$ be the node right before $u$ in $C$
		* At time $d[u]$ when the DFS discovers $u$, all nodes in the path from $u$ to $v$ in C are still white, including $v$ (since $u$ is the first node in the entire cycle that is discovered)
		* By WPT, $v$ eventually becomes a descendant of $u$ in the DFS
		* When $v$ becomes a descendant of $u$, we explore it, it has an edge to $u$; this is a back edge, since $v$ is a descendant of $u$
* After we do a DFS, how do we figure out whether an edge $(u, v)$ is a back edge?
	* When we go down the edge, we can check that both $u$ and $v$ are grey
	* If we're already done the DFS, then we can check whether $d[v] < d[u] < f[u] < f[v]$

