#include <stdio.h>


void selectionSort(int arr[], int arrSize);

void printArr(int arr[], int arrSize);

void swap(int *first, int *second);

int main() {
    int unSortedArr[] = {1, 20, 5, 9, 55, 61, 38, 75};
    int sortedArr[] = {1, 2, 5, 9, 55, 61, 66, 75};
    int arrSize = sizeof(unSortedArr) / sizeof(unSortedArr[0]);
    printf("For unsorted array:");
    selectionSort(unSortedArr, arrSize);
    printArr(unSortedArr, arrSize);
    arrSize = sizeof(sortedArr) / sizeof(sortedArr[0]);
    printf("For sorted array:");
    selectionSort(sortedArr, arrSize);
    printArr(sortedArr, arrSize);

    return 0;
}

void selectionSort(int arr[], int arrSize) {
    int i, j, min_idx;
    int iterationAmount = 0;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < arrSize - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < arrSize; j++) {
            iterationAmount++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    printf("\nIteration amount is: %d\n",iterationAmount);
}

void printArr(int arr[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}