// Array Operations - Find Min, Max, and Average

#include <stdio.h>

int main(){
    int arr[10];
    int i, n, min, max;
    int sum = 0;
    float avg;

    // Read number of elements and validate
    printf("Enter number of elements (max 10): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Invalid number of elements. Must be between 1 and 10.\n");
        return 1;
    }

    // Read the elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Initialize min and max with the first element
    min = max = arr[0];
    sum = arr[0];

    // Start loop from 1 because we've already used arr[0]
    for (i = 1; i < n; i++){
        sum += arr[i];

        // Update min and max
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Compute average
    avg = (float)sum / n;

    // Print results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);

    return 0;
}