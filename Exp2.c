#include <stdio.h>

void selectionSort(int arr[], int size);

int main() {
    int size;

    // Get number of elements
    printf("\nEnter number of elements: \n");
    scanf("%d", &size);

    int arr[size]; // Declare array of given size

    // Get array elements
    printf("\nEnter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array before sorting
    printf("\nBefore Sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Perform selection sort
    selectionSort(arr, size);

    // Display array after sorting
    printf("\n\nAfter Sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        int min_Val = arr[i];

        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min_Val) {
                min_idx = j;
                min_Val = arr[j];
            }
        }

        // Swap the found minimum element with the first element
        arr[min_idx] = arr[i];
        arr[i] = min_Val;
    }
}
