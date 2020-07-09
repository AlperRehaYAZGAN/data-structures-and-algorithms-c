#include <stdio.h>
#include <stdlib.h>

/**
 * Alper Reha YAZGAN
 * Heap Array Max Sort Example Code
 * 09.07.2020
 */

void addToHeapArray(int heapArr[], int currSize, int value);

void heapSort(int heapArr[], int arrSize);

void heapify(int heapArr[], int arrSize, int index);

void swap(int *pFirst, int *pSecond);

int main() {
    // size is 16 but defined 15 so firstly add element to array
    int heapArr[16] = {100, 93, 80, 70, 60, 50, 58, 6, 7, 9, 10, 22, 99, 48, 75, 82};
    int currSize = sizeof(heapArr) / sizeof(heapArr[0]); // find array size
    addToHeapArray(heapArr,currSize,91); // add element to array.
    currSize = sizeof(heapArr) / sizeof(heapArr[0]); // find array size
    heapSort(heapArr, currSize); // sort.
    printf("Heapified. You can see the process in debug mode.");
    return 0;
}

// main function to do heap sort
void heapSort(int heapArr[], int arrSize) {
    // Build heap (rearrange array)
    int i = 0;
    for (i = arrSize / 2 - 1; i >= 0; i--) {
        heapify(heapArr, arrSize, i);
    }

    // One by one extract an element from heap
    // use it for get sorted list.
    for (i = arrSize - 1; i > 0; i--) {
        // Move current root to end
        swap(&heapArr[0], &heapArr[i]);

        // call max heapify on the reduced heap
        heapify(heapArr, i, 0);
    }
}

void heapify(int heapArr[], int arrSize, int index) {
    /*
     * int indexTop = index -1;
    int indexRight = (2 * index);
    int indexLeft = (2 * index) -1;

    if(heapArr[indexLeft]) {
        if(heapArr[indexTop] > heapArr[indexLeft]) {
        }
    }else if(heapArr[indexRight]) {
        if(heapArr[indexTop] > heapArr[index]) {
        }
    }
     * */

    int current = index; // Initialize largest as root
    int indexLeft = 2 * index + 1; // left = 2*i + 1
    int indexRight = 2 * index + 2; // right = 2*i + 2

    // If left child is larger than root
    if (indexLeft < arrSize && heapArr[indexLeft] > heapArr[current]) {
        current = indexLeft;
    }
    // If right child is larger than largest so far
    if (indexRight < arrSize && heapArr[indexRight] > heapArr[current]) {
        current = indexRight;
    }
    // If largest is not root
    if (current != index) {
        swap(&heapArr[index], &heapArr[current]);
        // Recursively heapify the affected sub-tree
        heapify(heapArr, arrSize, current);
    }

}

/**
 * Add element to heap array with realloc
 * @param heapArr
 * @param value
 */
void addToHeapArray(int heapArr[], int currSize, int value) {
    currSize++; // increment size
    realloc(heapArr, sizeof(int) * currSize);
    heapArr[currSize - 1] = value; // add to last index
}

/**
 * This function swaps values pointed by first number and second number
 * @param pFirst
 * @param pSecond
 */
void swap(int *pFirst, int *pSecond) {
    int temp = *pFirst;
    *pFirst = *pSecond;
    *pSecond = temp;
}