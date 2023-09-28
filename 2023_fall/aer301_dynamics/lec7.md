# Lecture 7, Sep 28, 2023

## Dynamics

* Kinematics was the study of the geometry of motion without regard for the laws of nature; now we move on to dynamics, where we attempt to describe the laws of nature
* We know that the law of inertia does not hold in an accelerating or rotating reference frame; what about Newton's second law?
* $\uvec f = m\uvec a = m\uvec r^\ddota$, with the derivative taken with respect to some inertial frame $\vcx F_I$
	* In another frame $\vcx F_b$, $\alignedeqntwo[t]{\uvec f}{mv^\dota}{m(\uvec v^\dotb + \uvec\omega^{bI} \times \uvec v)}{m\uvec r^\ddota}{m(\uvec r^\ddotb + 2\uvec\omega^{bI} \times \uvec r^\dotb + {\uvec\omega^{bI}}^\dotb \times \uvec r + \uvec\omega^{bI} \times (\uvec \omega^{bI} \times \uvec r))}$
	* So in $\vcx F_b$, $m\uvec r^\ddotb = \uvec f - 2\uvec\omega^{bI} \times \uvec r^\dotb - {\uvec\omega^{bI}}^\dotb \times \uvec r + \uvec\omega^{bI} \times (\uvec \omega^{bI} \times \uvec r)$
	* We can see this broken down into the Coriolis, tangential, and centrifugal forces

