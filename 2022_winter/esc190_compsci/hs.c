#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sift_down(int *data, int count, int i) {
    while (i < count) {
        int lc = i * 2 + 1, rc = i * 2 + 2;
        // Both children exist
        if (rc < count) {
            int min_i = data[lc] < data[rc] ? lc : rc;
            // Swap with smaller child
            if (data[i] > data[min_i]) {
                int temp = data[i];
                data[i] = data[min_i];
                data[min_i] = temp;
                i = min_i;
            }
            else {
                break;
            }
        }
        // Only left child exists
        else if (lc < count && data[i] > data[lc]) {
            int temp = data[i];
            data[i] = data[lc];
            data[lc] = temp;
            i = lc;
        }
        // Leaves
        else {
            break;
        }
    }
}

int remove_min(int *data, int count) {
    int ret = data[0];
    count --;
    data[0] = data[count];
    sift_down(data, count, 0);
    return ret;
}

void heap_sort(int *data, int count) {
    int *buf = (int*) malloc(count * sizeof(int));
    memcpy(buf, data, count * sizeof(int));
    // Heapify
    for (int i = count - 1; i >= 0; i--) {
        sift_down(buf, count, i);
    }
    
    int c = count;
    for (int i = 0; i < count; i++) {
        data[i] = remove_min(buf, c--);
    }
}


int main() {
    int arr[] = {98,7,27,61,0,55,93,68,47,21,40,25,88,24,16,31,80,3,91,23,26,53,24,32,74,21,57,73,6,9,81,56,94,61,70,91,92,95,53,26,62,34,6,99,11,36,89,29,33,44,73,48,43,35,53,46,68,93,39,36,46,7,69,73,18,47,25,95,40,25,80,20,29,7,8,71,58,5,52,56,77,27,12,55,10,26,89,35,71,5,97,72,64,42,93,51,83,33,18,90};
    int len = sizeof(arr) / sizeof(arr[0]);
    heap_sort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
