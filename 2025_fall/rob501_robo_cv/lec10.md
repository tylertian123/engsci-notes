# Lecture 10, Oct 3, 2025

## Review Lecture

* Important content by lecture:
	* Lecture 2 (mathematical foundations)
		* Different types of linear transformations and what properties they preserve, what situations they come up in
		* Rotations in 3D (properties of $SO(3)$) and representations (matrix, Euler, axis-angle, quaternion)
	* Lecture 3 (probability and regression)
		* Conditional probability (Bayes' rule)
		* Linear regression, standard linear least squares formulation and solution
		* RANSAC algorithm: working principles, expected/required number of trials to get an outlier-free sample with some probability
	* Lecture 4 (optics)
		* Ideal pinhole camera model
		* Definition of the camera reference frame, optical axis, image plane, principal point
		* Projective map
		* Camera matrices (intrinsics and extrinsics), projecting onto the image plane
		* Lens distortion model
		* Optical effects that degrade images (vignetting, other effects)
	* Lecture 5 (image operations)
		* Point operations (thresholding, brightness, contrast, gamma adjustment, histogram equalization)
		* Linear filtering (convolutions, separable filters)
		* Nonlinear filtering (band-pass, bilateral)
		* Geometric transformations (viewpoint transformation and bilinear interpolation)
		* Regularization?
	* Lecture 6 (image features: detection and description)
		* Important characteristics of features (saliency, locality, repeatability, compactness)
		* Various feature detectors, classical (Harris, SIFT, SURF, FAST, BRISK, BRIEF, ORB) and learned (LIFT)
	* Lecture 7 (image features: matching)
		* Feature descriptor distance functions (SSD between patches, hamming distance, Euclidean distance)
		* Rejecting outliers (RANSAC, ratio test)
		* Binary classification evaluation (confusion matrix, ROC curve)
		* Matching techniques (hashing, $k$-D trees)
		* KLT tracker (local matching) as alternative to matching through the whole image
	* Lecture 8 (camera pose estimation) ($\star$)
		* Perspective-n-point: problem definition
		* Direct linear transform to solve the homography (as an approximation)
		* Nonlinear least squares (iterative algorithm)
		* Regressing rotations (Wahba problem, Euler angles and rotation matrix/axis-angle formulation)
	* Lecture 9 (stereo)
		* Epipolar geometry (epipolar planes, lines, epipolar point)
		* Stereo preprocessing pipeline (stereo rectification)
		* Stereo camera model (depth from disparity)
		* Foreshortening problem
		* Basic idea of stereo matching algorithms (local vs. global algorithms, window size)
		* Learning based state-of-the-art methods

