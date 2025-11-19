// Bubble Sort Algorithm

#include <stdio.h>

int main(){
    int arr[10], n, i, j, temp;

    /* Read number of elements and validate (max 10) */
    printf("enter number of elements (max 10): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Invalid number of elements. Must be between 1 and 10.\n");
        return 1;
    }

    /* Read the elements with input validation */
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    /* Bubble sort */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    /* Print sorted array */
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}