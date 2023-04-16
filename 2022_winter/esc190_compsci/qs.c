// Quicksort

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void qs(int *arr, int start, int stop) {
	if (stop - start < 2) {
		return;
	}
	int pivot = arr[stop - 1];
	int i = start, j = stop - 2;
	while (i <= j) {
		for (; arr[i] <= pivot && i <= j; i ++);
		for (; arr[j] > pivot && i <= j; j --);
		if (i <= j) {
			swap(arr + i, arr + j);
		}
	}
	swap(arr + i, arr + stop - 1);
	qs(arr, start, i);
	qs(arr, i + 1, stop);
}


#include <stdio.h>

int arr[] = {98,7,27,61,0,55,93,68,47,21,40,25,88,24,16,31,80,3,91,23,26,53,24,32,74,21,57,73,6,9,81,56,94,61,70,91,92,95,53,26,62,34,6,99,11,36,89,29,33,44,73,48,43,35,53,46,68,93,39,36,46,7,69,73,18,47,25,95,40,25,80,20,29,7,8,71,58,5,52,56,77,27,12,55,10,26,89,35,71,5,97,72,64,42,93,51,83,33,18,90};

int main() {
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	qs(arr, 0, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

