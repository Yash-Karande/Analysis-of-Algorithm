#include <stdio.h>

void insertionSort(int arr[], int size);

int main() {
    int size;

    // Get array size from user
    printf("\nEnter number of elements: ");
    scanf("%d", &size);

    int arr[size];  // Declare array of given size

    // Get array elements from user
    printf("\nEnter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array before sorting
    printf("\nBefore Sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Call insertion sort function
    insertionSort(arr, size);

    // Display array after sorting
    printf("\n\nAfter Sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insertionSort(int arr[], int size) {
    for (int curr = 1; curr < size; curr++) {
        int prev = curr - 1;
        int key = arr[curr];

        while (prev >= 0 && arr[prev] > key) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = key;
    }
}
