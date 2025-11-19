#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

    /* Dynamically allocate memory for n integers */
    int *arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Read elements with validation */
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Aborting.\n");
            free(arr);
            return 1;
        }
    }

    /* Display array */
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    printf("Memory freed successfully\n");
    return 0;
}