#include <stdio.h>
#include <stdbool.h>

// Function to print a subset
void printSubset(int subset[], int size) {
    printf("Subset: { ");
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

// Recursive utility function to find subsets that sum to targetSum
void sumOfSubsetsUtil(int weights[], int targetSum, int n, int subset[], int subsetSize, int sum, int index) {
    // If current subset sum equals targetSum, print it
    if (sum == targetSum) {
        printSubset(subset, subsetSize);
        return;
    }

    // Explore further elements
    for (int i = index; i < n; i++) {
        if (sum + weights[i] <= targetSum) {
            subset[subsetSize] = weights[i];
            sumOfSubsetsUtil(weights, targetSum, n, subset, subsetSize + 1, sum + weights[i], i + 1);
        }
    }
}

// Function to initialize and start recursion
void sumOfSubsets(int weights[], int targetSum, int n) {
    int subset[n];
    sumOfSubsetsUtil(weights, targetSum, n, subset, 0, 0, 0);
}

// Main function
int main() {
    int n, targetSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int weights[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    printf("\nSubsets with sum %d are:\n", targetSum);
    sumOfSubsets(weights, targetSum, n);

    return 0;
}
